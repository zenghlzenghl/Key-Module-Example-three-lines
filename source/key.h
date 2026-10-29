#ifndef __KEY_H__
#define __KEY_H__

#include <stdint.h>

/* ===================== 配置参数 ===================== */
#define KEY_NUM                1       /* 按键数量: 1个 */
#define SCAN_TICK_DIV          10      /* 每 10ms 扫描一次（1ms 中断计数到 10） */
#define DEBOUNCE_CNT           2       /* 消抖：20ms */
#define LONG_PRESS_CNT         300     /* 长按：3000ms (3秒) */
#define REPEAT_START_CNT       300     /* 连续按启动：3000ms (3秒，长按后再等3秒) */
#define REPEAT_INTERVAL_CNT    15      /* 连续按间隔：150ms */

/* ===================== 按键硬件配置（支持多按键分布在不同GPIO）=====================
 * 配置格式: KEY_CFG(按键ID, 端口寄存器, 引脚号)
 * 示例:
 *   KEY_CFG(0, P1, 2)   - 按键0在P1.2
 *   KEY_CFG(1, P3, 4)   - 按键1在P3.4
 *   KEY_CFG(2, P2, 7)   - 按键2在P2.7
 *
 * 注意：按键必须为低电平有效（按下时为LOW）
 */
#define KEY_CFG(id, port, pin)  { (uint8_t __xdata *)&port, pin }

#define KEY0_CFG  KEY_CFG(0, P1, 2)   /* 当前配置：按键0在P1.2 */

/* 按键配置表（根据KEY_NUM自动生成） */
#if KEY_NUM >= 1
#define KEY_CONFIG_LIST { KEY0_CFG }
#endif

typedef struct {
    uint8_t __xdata *port;   /* 端口地址指针 */
    uint8_t         pin;     /* 引脚号 (0-7) */
} KeyConfig;

/* ===================== 功能开关 ===================== */
#define KEY_LONG_PRESS_ON_RELEASE  0   /* 长按触发方式: 1=释放时触发, 0=满时间立即触发 */
#define KEY_REPEAT_ENABLE          1   /* 连续按模式: 1=支持, 0=不支持 */

#define EVENT_BUF_SIZE         8      /* 事件环形缓冲大小 */

/* ===================== 事件类型 ===================== */
typedef enum
{
    KEY_EVENT_NONE = 0,
    KEY_EVENT_SHORT_PRESS,   /* 短按（释放时产生） */
    KEY_EVENT_LONG_PRESS,    /* 长按（到时立即产生，只一次） */
    KEY_EVENT_REPEAT         /* 连续按（长按后周期产生） */
} KeyEvent;

/* 按键事件消息：标识哪个按键产生了什么事件 */
typedef struct
{
    uint8_t   key_id;        /* 按键索引 0~KEY_NUM-1 */
    KeyEvent  event;         /* 事件类型 */
} KeyEventMsg;

/* ===================== 对外接口 ===================== */

/* 按键模块初始化：清零状态机与事件缓冲，配置GPIO */
void key_init(void);

/* 定时器中断中调用：每 1ms 累加节拍，到 10ms 扫描一次所有按键，
   有事件则写入环形缓冲。全程非阻塞。 */
void key_timer_tick(void);

/* 主循环中调用：从环形缓冲取出一个事件。
   返回 1 表示取到事件并填入 out；返回 0 表示缓冲空。 */
uint8_t key_event_get(KeyEventMsg *out);

#endif /* __KEY_H__ */