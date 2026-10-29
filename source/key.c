#include "key.h"
#include <ch554.h>
#include <usbcdc.h>

/* ===================== 按键硬件配置表 =====================
 * 支持多按键分布在不同GPIO端口
 * 示例：按键0在P1.2，按键1在P3.4
 */
static const __code KeyConfig key_config[KEY_NUM] = KEY_CONFIG_LIST;

/* ===================== 经典三行按键算法变量 ===================== */
static uint8_t key_cont = 0;     /* 持续状态：当前按下的键（位图） */
static uint8_t key_trg = 0;      /* 触发状态：新按下的键（边沿，位图） */

/* ===================== 长按/连续按计时器（每个按键独立）===================== */
static uint16_t key_press_timer[KEY_NUM];    /* 每个按键按下持续时间计数 */
static uint8_t  key_long_triggered[KEY_NUM]; /* 每个按键长按是否已触发 */
static uint16_t key_repeat_timer[KEY_NUM];   /* 每个按键连续按间隔计时 */
static uint8_t  key_repeat_started[KEY_NUM]; /* 每个按键连续按模式是否已启动 */

/* ===================== 消抖状态（每个按键独立）===================== */
static uint8_t debounce_cnt[KEY_NUM];
static uint8_t pressed_stable[KEY_NUM];
static uint8_t last_pressed_stable[KEY_NUM];

/* ===================== 环形事件缓冲（ISR 写入，主循环读取）=================== */
static volatile __xdata KeyEventMsg g_evt_buf[EVENT_BUF_SIZE];
static volatile uint8_t g_evt_wr = 0;   /* 写指针 */
static volatile uint8_t g_evt_rd = 0;   /* 读指针 */

static void evt_push(uint8_t id, KeyEvent ev)
{
    uint8_t next = (g_evt_wr + 1) % EVENT_BUF_SIZE;
    if (next != g_evt_rd)   /* 缓冲未满才写入 */
    {
        g_evt_buf[g_evt_wr].key_id = id;
        g_evt_buf[g_evt_wr].event  = ev;
        g_evt_wr = next;
    }
}

static uint8_t evt_pop(KeyEventMsg *out)
{
    if (g_evt_rd == g_evt_wr) return 0;   /* 空 */
    *out = g_evt_buf[g_evt_rd];
    g_evt_rd = (g_evt_rd + 1) % EVENT_BUF_SIZE;
    return 1;
}

/* ===================== 读取所有按键GPIO状态（通用多端口版本）=====================
 * 遍历所有按键配置，逐个读取对应端口的引脚状态
 * 返回值：位图，bit0=按键0, bit1=按键1, ... （按下为1）
 *
 * 核心优势：
 * - 支持按键分布在不同的GPIO端口（P1, P2, P3等）
 * - 只需修改KEY_CFG宏即可添加/修改按键配置
 * - 自动生成位图供三行算法使用
 */
static uint8_t read_all_keys(void)
{
    uint8_t ReadData = 0;
    uint8_t i;

    for (i = 0; i < KEY_NUM; i++)
    {
        /* 读取指定端口的指定引脚（低电平有效） */
        if (!(*(key_config[i].port) & (1 << key_config[i].pin)))
        {
            /* 引脚为LOW（被拉低），表示按键按下 */
            ReadData |= (1 << i);
        }
        /* 引脚为HIGH（上拉），表示按键未按下，bit保持0 */
    }

    return ReadData;
}

/* ===================== 经典三行按键扫描算法 =====================
 * 核心算法（完全保留经典形式）：
 *   ReadData = read_all_keys();              // 第一行：读取所有按键并组合成位图（按下为1）
 *   trg = ReadData & (ReadData ^ cont);      // 第二行：计算触发（新按下的键）
 *   cont = ReadData;                         // 第三行：更新持续状态
 *
 * 结合消抖、长按、短按、连续按功能
 * 支持多按键独立处理
 */
static void key_scan_classic(void)
{
    uint8_t ReadData;
    uint8_t i;

    /* ====== 第一行：读取所有按键状态（通用多端口版本）====== */
    ReadData = read_all_keys();

    /* ====== 第二行：计算触发（新按下的键，边沿检测）====== */
    key_trg = ReadData & (ReadData ^ key_cont);

    /* ====== 第三行：更新持续状态 ====== */
    key_cont = ReadData;

    /* ====== 逐个按键处理消抖和事件 ====== */
    for (i = 0; i < KEY_NUM; i++)
    {
        uint8_t key_mask = (1 << i);
        uint8_t key_pressed = (ReadData & key_mask) ? 1 : 0;

        /* ====== 消抖处理（每个按键独立）====== */
        if (key_pressed)
        {
            if (++debounce_cnt[i] >= DEBOUNCE_CNT)
            {
                debounce_cnt[i] = DEBOUNCE_CNT;
                pressed_stable[i] = 1;
            }
        }
        else
        {
            if (debounce_cnt[i] > 0)
            {
                --debounce_cnt[i];
                if (debounce_cnt[i] == 0)
                {
                    pressed_stable[i] = 0;
                }
            }
        }

        /* ====== 检测按下沿和释放沿（稳定后的边沿）====== */
        uint8_t press_edge = (pressed_stable[i] && !last_pressed_stable[i]);
        uint8_t release_edge = (!pressed_stable[i] && last_pressed_stable[i]);
        last_pressed_stable[i] = pressed_stable[i];

        /* ====== 按下边沿处理 ====== */
        if (press_edge)
        {
            key_press_timer[i] = 0;
            key_long_triggered[i] = 0;
            key_repeat_timer[i] = 0;
            key_repeat_started[i] = 0;
        }

        /* ====== 按键持续按下时的处理 ====== */
        if (pressed_stable[i])
        {
            ++key_press_timer[i];

            /* ====== 长按检测 ====== */
            if (!key_long_triggered[i] && key_press_timer[i] >= LONG_PRESS_CNT)
            {
                key_long_triggered[i] = 1;

#if KEY_LONG_PRESS_ON_RELEASE
                /* 释放时才触发长按，现在只做标记 */
#else
                /* 立即触发长按事件 */
                evt_push(i, KEY_EVENT_LONG_PRESS);

#if KEY_REPEAT_ENABLE
                /* 进入连续按模式，开始连续按计时 */
                key_repeat_started[i] = 1;
                key_repeat_timer[i] = 0;
#else
                /* 不支持连续按，等待释放 */
#endif
#endif
            }

            /* ====== 连续按检测（仅在支持且已触发长按时）====== */
#if KEY_REPEAT_ENABLE
            if (key_long_triggered[i])
            {
#if KEY_LONG_PRESS_ON_RELEASE
                /* 释放触发模式下，需要额外等待REPEAT_START_CNT才开始连续按 */
                if (!key_repeat_started[i])
                {
                    ++key_repeat_timer[i];
                    if (key_repeat_timer[i] >= REPEAT_START_CNT)
                    {
                        key_repeat_started[i] = 1;
                        key_repeat_timer[i] = 0;
                        evt_push(i, KEY_EVENT_REPEAT);  /* 第一个连续按事件 */
                    }
                }
                else
                {
                    /* 已进入连续按模式，按REPEAT_INTERVAL_CNT周期产生事件 */
                    ++key_repeat_timer[i];
                    if (key_repeat_timer[i] >= REPEAT_INTERVAL_CNT)
                    {
                        key_repeat_timer[i] = 0;
                        evt_push(i, KEY_EVENT_REPEAT);
                    }
                }
#else
                /* 立即触发模式下，已经在上面设置key_repeat_started=1 */
                if (key_repeat_started[i])
                {
                    ++key_repeat_timer[i];
                    if (key_repeat_timer[i] >= REPEAT_INTERVAL_CNT)
                    {
                        key_repeat_timer[i] = 0;
                        evt_push(i, KEY_EVENT_REPEAT);
                    }
                }
#endif
            }
#endif
        }

        /* ====== 释放边沿处理 ====== */
        if (release_edge)
        {
            if (!key_long_triggered[i])
            {
                /* 未达到长按时间，触发短按事件 */
                evt_push(i, KEY_EVENT_SHORT_PRESS);
            }
#if KEY_LONG_PRESS_ON_RELEASE
            else
            {
                /* 达到长按时间且为释放触发模式，此时触发长按事件 */
                evt_push(i, KEY_EVENT_LONG_PRESS);
            }
#endif

            /* 重置该按键的所有状态 */
            key_press_timer[i] = 0;
            key_long_triggered[i] = 0;
            key_repeat_timer[i] = 0;
            key_repeat_started[i] = 0;
        }
    }
}

/* ===================== GPIO初始化（根据配置表自动初始化）=================== */
static void gpio_init(void)
{
    uint8_t i;
    for (i = 0; i < KEY_NUM; i++)
    {
        uint8_t pin = key_config[i].pin;
        uint8_t __xdata *port_ptr = key_config[i].port;
        uint8_t __xdata *mod_oc_ptr;
        uint8_t __xdata *dir_pu_ptr;

        /* 根据端口基地址计算MOD_OC和DIR_PU寄存器地址
         * CH554寄存器布局：
         * Px:   基地址 + 0x00
         * Px_MOD_OC: 基地址 + 0x01 (P1/P2/P3相同偏移)
         * Px_DIR_PU: 基地址 + 0x02 (P1/P3有此寄存器)
         */
        mod_oc_ptr = port_ptr + 1;
        dir_pu_ptr = port_ptr + 2;

        /* CH554 GPIO初始化：准双向口模式（带内部上拉）*/
        *mod_oc_ptr &= ~(1 << pin);      /* 推挽模式 */
        *dir_pu_ptr |= (1 << pin);       /* 使能内部上拉 */
    }
}

/* ===================== 对外接口实现 ==================== */

void key_init(void)
{
    uint8_t i;

    /* 初始化GPIO（根据配置表自动配置）*/
    gpio_init();

    /* 初始化三行算法变量 */
    key_cont = 0;
    key_trg = 0;

    /* 初始化所有按键的状态 */
    for (i = 0; i < KEY_NUM; i++)
    {
        key_press_timer[i] = 0;
        key_long_triggered[i] = 0;
        key_repeat_timer[i] = 0;
        key_repeat_started[i] = 0;
        debounce_cnt[i] = 0;
        pressed_stable[i] = 0;
        last_pressed_stable[i] = 0;
    }

    /* 初始化事件缓冲 */
    g_evt_wr = 0;
    g_evt_rd = 0;
}

void key_timer_tick(void)
{
    static volatile uint16_t ms_tick = 0;

    if (++ms_tick >= SCAN_TICK_DIV)
    {
        ms_tick = 0;
        key_scan_classic();  /* 调用经典三行算法扫描 */
    }
}

uint8_t key_event_get(KeyEventMsg *out)
{
    return evt_pop(out);
}