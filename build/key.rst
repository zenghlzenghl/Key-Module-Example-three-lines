                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module key
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _UIF_BUS_RST
                                     12 	.globl _UIF_DETECT
                                     13 	.globl _UIF_TRANSFER
                                     14 	.globl _UIF_SUSPEND
                                     15 	.globl _UIF_HST_SOF
                                     16 	.globl _UIF_FIFO_OV
                                     17 	.globl _U_SIE_FREE
                                     18 	.globl _U_TOG_OK
                                     19 	.globl _U_IS_NAK
                                     20 	.globl _ADC_CHAN0
                                     21 	.globl _ADC_CHAN1
                                     22 	.globl _CMP_CHAN
                                     23 	.globl _ADC_START
                                     24 	.globl _ADC_IF
                                     25 	.globl _CMP_IF
                                     26 	.globl _CMPO
                                     27 	.globl _U1RI
                                     28 	.globl _U1TI
                                     29 	.globl _U1RB8
                                     30 	.globl _U1TB8
                                     31 	.globl _U1REN
                                     32 	.globl _U1SMOD
                                     33 	.globl _U1SM0
                                     34 	.globl _S0_R_FIFO
                                     35 	.globl _S0_T_FIFO
                                     36 	.globl _S0_FREE
                                     37 	.globl _S0_IF_BYTE
                                     38 	.globl _S0_IF_FIRST
                                     39 	.globl _S0_IF_OV
                                     40 	.globl _S0_FST_ACT
                                     41 	.globl _CP_RL2
                                     42 	.globl _C_T2
                                     43 	.globl _TR2
                                     44 	.globl _EXEN2
                                     45 	.globl _TCLK
                                     46 	.globl _RCLK
                                     47 	.globl _EXF2
                                     48 	.globl _CAP1F
                                     49 	.globl _TF2
                                     50 	.globl _RI
                                     51 	.globl _TI
                                     52 	.globl _RB8
                                     53 	.globl _TB8
                                     54 	.globl _REN
                                     55 	.globl _SM2
                                     56 	.globl _SM1
                                     57 	.globl _SM0
                                     58 	.globl _IT0
                                     59 	.globl _IE0
                                     60 	.globl _IT1
                                     61 	.globl _IE1
                                     62 	.globl _TR0
                                     63 	.globl _TF0
                                     64 	.globl _TR1
                                     65 	.globl _TF1
                                     66 	.globl _RXD
                                     67 	.globl _PWM1_
                                     68 	.globl _TXD
                                     69 	.globl _PWM2_
                                     70 	.globl _AIN3
                                     71 	.globl _VBUS1
                                     72 	.globl _INT0
                                     73 	.globl _TXD1_
                                     74 	.globl _INT1
                                     75 	.globl _T0
                                     76 	.globl _RXD1_
                                     77 	.globl _PWM2
                                     78 	.globl _T1
                                     79 	.globl _UDP
                                     80 	.globl _UDM
                                     81 	.globl _TIN0
                                     82 	.globl _CAP1
                                     83 	.globl _T2
                                     84 	.globl _AIN0
                                     85 	.globl _VBUS2
                                     86 	.globl _TIN1
                                     87 	.globl _CAP2
                                     88 	.globl _T2EX
                                     89 	.globl _RXD_
                                     90 	.globl _TXD_
                                     91 	.globl _AIN1
                                     92 	.globl _UCC1
                                     93 	.globl _TIN2
                                     94 	.globl _SCS
                                     95 	.globl _CAP1_
                                     96 	.globl _T2_
                                     97 	.globl _AIN2
                                     98 	.globl _UCC2
                                     99 	.globl _TIN3
                                    100 	.globl _PWM1
                                    101 	.globl _MOSI
                                    102 	.globl _TIN4
                                    103 	.globl _RXD1
                                    104 	.globl _MISO
                                    105 	.globl _TIN5
                                    106 	.globl _TXD1
                                    107 	.globl _SCK
                                    108 	.globl _IE_SPI0
                                    109 	.globl _IE_TKEY
                                    110 	.globl _IE_USB
                                    111 	.globl _IE_ADC
                                    112 	.globl _IE_UART1
                                    113 	.globl _IE_PWMX
                                    114 	.globl _IE_GPIO
                                    115 	.globl _IE_WDOG
                                    116 	.globl _PX0
                                    117 	.globl _PT0
                                    118 	.globl _PX1
                                    119 	.globl _PT1
                                    120 	.globl _PS
                                    121 	.globl _PT2
                                    122 	.globl _PL_FLAG
                                    123 	.globl _PH_FLAG
                                    124 	.globl _EX0
                                    125 	.globl _ET0
                                    126 	.globl _EX1
                                    127 	.globl _ET1
                                    128 	.globl _ES
                                    129 	.globl _ET2
                                    130 	.globl _E_DIS
                                    131 	.globl _EA
                                    132 	.globl _P
                                    133 	.globl _F1
                                    134 	.globl _OV
                                    135 	.globl _RS0
                                    136 	.globl _RS1
                                    137 	.globl _F0
                                    138 	.globl _AC
                                    139 	.globl _CY
                                    140 	.globl _UEP1_DMA_H
                                    141 	.globl _UEP1_DMA_L
                                    142 	.globl _UEP1_DMA
                                    143 	.globl _UEP0_DMA_H
                                    144 	.globl _UEP0_DMA_L
                                    145 	.globl _UEP0_DMA
                                    146 	.globl _UEP2_3_MOD
                                    147 	.globl _UEP4_1_MOD
                                    148 	.globl _UEP3_DMA_H
                                    149 	.globl _UEP3_DMA_L
                                    150 	.globl _UEP3_DMA
                                    151 	.globl _UEP2_DMA_H
                                    152 	.globl _UEP2_DMA_L
                                    153 	.globl _UEP2_DMA
                                    154 	.globl _USB_DEV_AD
                                    155 	.globl _USB_CTRL
                                    156 	.globl _USB_INT_EN
                                    157 	.globl _UEP4_T_LEN
                                    158 	.globl _UEP4_CTRL
                                    159 	.globl _UEP0_T_LEN
                                    160 	.globl _UEP0_CTRL
                                    161 	.globl _USB_RX_LEN
                                    162 	.globl _USB_MIS_ST
                                    163 	.globl _USB_INT_ST
                                    164 	.globl _USB_INT_FG
                                    165 	.globl _UEP3_T_LEN
                                    166 	.globl _UEP3_CTRL
                                    167 	.globl _UEP2_T_LEN
                                    168 	.globl _UEP2_CTRL
                                    169 	.globl _UEP1_T_LEN
                                    170 	.globl _UEP1_CTRL
                                    171 	.globl _UDEV_CTRL
                                    172 	.globl _USB_C_CTRL
                                    173 	.globl _TKEY_DATH
                                    174 	.globl _TKEY_DATL
                                    175 	.globl _TKEY_DAT
                                    176 	.globl _TKEY_CTRL
                                    177 	.globl _ADC_DATA
                                    178 	.globl _ADC_CFG
                                    179 	.globl _ADC_CTRL
                                    180 	.globl _SBAUD1
                                    181 	.globl _SBUF1
                                    182 	.globl _SCON1
                                    183 	.globl _SPI0_SETUP
                                    184 	.globl _SPI0_CK_SE
                                    185 	.globl _SPI0_CTRL
                                    186 	.globl _SPI0_DATA
                                    187 	.globl _SPI0_STAT
                                    188 	.globl _PWM_CK_SE
                                    189 	.globl _PWM_CTRL
                                    190 	.globl _PWM_DATA1
                                    191 	.globl _PWM_DATA2
                                    192 	.globl _T2CAP1H
                                    193 	.globl _T2CAP1L
                                    194 	.globl _T2CAP1
                                    195 	.globl _TH2
                                    196 	.globl _TL2
                                    197 	.globl _T2COUNT
                                    198 	.globl _RCAP2H
                                    199 	.globl _RCAP2L
                                    200 	.globl _RCAP2
                                    201 	.globl _T2MOD
                                    202 	.globl _T2CON
                                    203 	.globl _SBUF
                                    204 	.globl _SCON
                                    205 	.globl _TH1
                                    206 	.globl _TH0
                                    207 	.globl _TL1
                                    208 	.globl _TL0
                                    209 	.globl _TMOD
                                    210 	.globl _TCON
                                    211 	.globl _XBUS_AUX
                                    212 	.globl _PIN_FUNC
                                    213 	.globl _P3_DIR_PU
                                    214 	.globl _P3_MOD_OC
                                    215 	.globl _P3
                                    216 	.globl _P2
                                    217 	.globl _P1_DIR_PU
                                    218 	.globl _P1_MOD_OC
                                    219 	.globl _P1
                                    220 	.globl _ROM_CTRL
                                    221 	.globl _ROM_DATA_H
                                    222 	.globl _ROM_DATA_L
                                    223 	.globl _ROM_DATA
                                    224 	.globl _ROM_ADDR_H
                                    225 	.globl _ROM_ADDR_L
                                    226 	.globl _ROM_ADDR
                                    227 	.globl _GPIO_IE
                                    228 	.globl _IP_EX
                                    229 	.globl _IE_EX
                                    230 	.globl _IP
                                    231 	.globl _IE
                                    232 	.globl _WDOG_COUNT
                                    233 	.globl _RESET_KEEP
                                    234 	.globl _WAKE_CTRL
                                    235 	.globl _CLOCK_CFG
                                    236 	.globl _PCON
                                    237 	.globl _GLOBAL_CFG
                                    238 	.globl _SAFE_MOD
                                    239 	.globl _DPH
                                    240 	.globl _DPL
                                    241 	.globl _SP
                                    242 	.globl _B
                                    243 	.globl _ACC
                                    244 	.globl _PSW
                                    245 	.globl _key_init
                                    246 	.globl _key_timer_tick
                                    247 	.globl _key_event_get
                                    248 ;--------------------------------------------------------
                                    249 ; special function registers
                                    250 ;--------------------------------------------------------
                                    251 	.area RSEG    (ABS,DATA)
      000000                        252 	.org 0x0000
                           0000D0   253 _PSW	=	0x00d0
                           0000E0   254 _ACC	=	0x00e0
                           0000F0   255 _B	=	0x00f0
                           000081   256 _SP	=	0x0081
                           000082   257 _DPL	=	0x0082
                           000083   258 _DPH	=	0x0083
                           0000A1   259 _SAFE_MOD	=	0x00a1
                           0000B1   260 _GLOBAL_CFG	=	0x00b1
                           000087   261 _PCON	=	0x0087
                           0000B9   262 _CLOCK_CFG	=	0x00b9
                           0000A9   263 _WAKE_CTRL	=	0x00a9
                           0000FE   264 _RESET_KEEP	=	0x00fe
                           0000FF   265 _WDOG_COUNT	=	0x00ff
                           0000A8   266 _IE	=	0x00a8
                           0000B8   267 _IP	=	0x00b8
                           0000E8   268 _IE_EX	=	0x00e8
                           0000E9   269 _IP_EX	=	0x00e9
                           0000C7   270 _GPIO_IE	=	0x00c7
                           008584   271 _ROM_ADDR	=	0x8584
                           000084   272 _ROM_ADDR_L	=	0x0084
                           000085   273 _ROM_ADDR_H	=	0x0085
                           008F8E   274 _ROM_DATA	=	0x8f8e
                           00008E   275 _ROM_DATA_L	=	0x008e
                           00008F   276 _ROM_DATA_H	=	0x008f
                           000086   277 _ROM_CTRL	=	0x0086
                           000090   278 _P1	=	0x0090
                           000092   279 _P1_MOD_OC	=	0x0092
                           000093   280 _P1_DIR_PU	=	0x0093
                           0000A0   281 _P2	=	0x00a0
                           0000B0   282 _P3	=	0x00b0
                           000096   283 _P3_MOD_OC	=	0x0096
                           000097   284 _P3_DIR_PU	=	0x0097
                           0000C6   285 _PIN_FUNC	=	0x00c6
                           0000A2   286 _XBUS_AUX	=	0x00a2
                           000088   287 _TCON	=	0x0088
                           000089   288 _TMOD	=	0x0089
                           00008A   289 _TL0	=	0x008a
                           00008B   290 _TL1	=	0x008b
                           00008C   291 _TH0	=	0x008c
                           00008D   292 _TH1	=	0x008d
                           000098   293 _SCON	=	0x0098
                           000099   294 _SBUF	=	0x0099
                           0000C8   295 _T2CON	=	0x00c8
                           0000C9   296 _T2MOD	=	0x00c9
                           00CBCA   297 _RCAP2	=	0xcbca
                           0000CA   298 _RCAP2L	=	0x00ca
                           0000CB   299 _RCAP2H	=	0x00cb
                           00CDCC   300 _T2COUNT	=	0xcdcc
                           0000CC   301 _TL2	=	0x00cc
                           0000CD   302 _TH2	=	0x00cd
                           00CFCE   303 _T2CAP1	=	0xcfce
                           0000CE   304 _T2CAP1L	=	0x00ce
                           0000CF   305 _T2CAP1H	=	0x00cf
                           00009B   306 _PWM_DATA2	=	0x009b
                           00009C   307 _PWM_DATA1	=	0x009c
                           00009D   308 _PWM_CTRL	=	0x009d
                           00009E   309 _PWM_CK_SE	=	0x009e
                           0000F8   310 _SPI0_STAT	=	0x00f8
                           0000F9   311 _SPI0_DATA	=	0x00f9
                           0000FA   312 _SPI0_CTRL	=	0x00fa
                           0000FB   313 _SPI0_CK_SE	=	0x00fb
                           0000FC   314 _SPI0_SETUP	=	0x00fc
                           0000C0   315 _SCON1	=	0x00c0
                           0000C1   316 _SBUF1	=	0x00c1
                           0000C2   317 _SBAUD1	=	0x00c2
                           000080   318 _ADC_CTRL	=	0x0080
                           00009A   319 _ADC_CFG	=	0x009a
                           00009F   320 _ADC_DATA	=	0x009f
                           0000C3   321 _TKEY_CTRL	=	0x00c3
                           00C5C4   322 _TKEY_DAT	=	0xc5c4
                           0000C4   323 _TKEY_DATL	=	0x00c4
                           0000C5   324 _TKEY_DATH	=	0x00c5
                           000091   325 _USB_C_CTRL	=	0x0091
                           0000D1   326 _UDEV_CTRL	=	0x00d1
                           0000D2   327 _UEP1_CTRL	=	0x00d2
                           0000D3   328 _UEP1_T_LEN	=	0x00d3
                           0000D4   329 _UEP2_CTRL	=	0x00d4
                           0000D5   330 _UEP2_T_LEN	=	0x00d5
                           0000D6   331 _UEP3_CTRL	=	0x00d6
                           0000D7   332 _UEP3_T_LEN	=	0x00d7
                           0000D8   333 _USB_INT_FG	=	0x00d8
                           0000D9   334 _USB_INT_ST	=	0x00d9
                           0000DA   335 _USB_MIS_ST	=	0x00da
                           0000DB   336 _USB_RX_LEN	=	0x00db
                           0000DC   337 _UEP0_CTRL	=	0x00dc
                           0000DD   338 _UEP0_T_LEN	=	0x00dd
                           0000DE   339 _UEP4_CTRL	=	0x00de
                           0000DF   340 _UEP4_T_LEN	=	0x00df
                           0000E1   341 _USB_INT_EN	=	0x00e1
                           0000E2   342 _USB_CTRL	=	0x00e2
                           0000E3   343 _USB_DEV_AD	=	0x00e3
                           00E5E4   344 _UEP2_DMA	=	0xe5e4
                           0000E4   345 _UEP2_DMA_L	=	0x00e4
                           0000E5   346 _UEP2_DMA_H	=	0x00e5
                           00E7E6   347 _UEP3_DMA	=	0xe7e6
                           0000E6   348 _UEP3_DMA_L	=	0x00e6
                           0000E7   349 _UEP3_DMA_H	=	0x00e7
                           0000EA   350 _UEP4_1_MOD	=	0x00ea
                           0000EB   351 _UEP2_3_MOD	=	0x00eb
                           00EDEC   352 _UEP0_DMA	=	0xedec
                           0000EC   353 _UEP0_DMA_L	=	0x00ec
                           0000ED   354 _UEP0_DMA_H	=	0x00ed
                           00EFEE   355 _UEP1_DMA	=	0xefee
                           0000EE   356 _UEP1_DMA_L	=	0x00ee
                           0000EF   357 _UEP1_DMA_H	=	0x00ef
                                    358 ;--------------------------------------------------------
                                    359 ; special function bits
                                    360 ;--------------------------------------------------------
                                    361 	.area RSEG    (ABS,DATA)
      000000                        362 	.org 0x0000
                           0000D7   363 _CY	=	0x00d7
                           0000D6   364 _AC	=	0x00d6
                           0000D5   365 _F0	=	0x00d5
                           0000D4   366 _RS1	=	0x00d4
                           0000D3   367 _RS0	=	0x00d3
                           0000D2   368 _OV	=	0x00d2
                           0000D1   369 _F1	=	0x00d1
                           0000D0   370 _P	=	0x00d0
                           0000AF   371 _EA	=	0x00af
                           0000AE   372 _E_DIS	=	0x00ae
                           0000AD   373 _ET2	=	0x00ad
                           0000AC   374 _ES	=	0x00ac
                           0000AB   375 _ET1	=	0x00ab
                           0000AA   376 _EX1	=	0x00aa
                           0000A9   377 _ET0	=	0x00a9
                           0000A8   378 _EX0	=	0x00a8
                           0000BF   379 _PH_FLAG	=	0x00bf
                           0000BE   380 _PL_FLAG	=	0x00be
                           0000BD   381 _PT2	=	0x00bd
                           0000BC   382 _PS	=	0x00bc
                           0000BB   383 _PT1	=	0x00bb
                           0000BA   384 _PX1	=	0x00ba
                           0000B9   385 _PT0	=	0x00b9
                           0000B8   386 _PX0	=	0x00b8
                           0000EF   387 _IE_WDOG	=	0x00ef
                           0000EE   388 _IE_GPIO	=	0x00ee
                           0000ED   389 _IE_PWMX	=	0x00ed
                           0000EC   390 _IE_UART1	=	0x00ec
                           0000EB   391 _IE_ADC	=	0x00eb
                           0000EA   392 _IE_USB	=	0x00ea
                           0000E9   393 _IE_TKEY	=	0x00e9
                           0000E8   394 _IE_SPI0	=	0x00e8
                           000097   395 _SCK	=	0x0097
                           000097   396 _TXD1	=	0x0097
                           000097   397 _TIN5	=	0x0097
                           000096   398 _MISO	=	0x0096
                           000096   399 _RXD1	=	0x0096
                           000096   400 _TIN4	=	0x0096
                           000095   401 _MOSI	=	0x0095
                           000095   402 _PWM1	=	0x0095
                           000095   403 _TIN3	=	0x0095
                           000095   404 _UCC2	=	0x0095
                           000095   405 _AIN2	=	0x0095
                           000094   406 _T2_	=	0x0094
                           000094   407 _CAP1_	=	0x0094
                           000094   408 _SCS	=	0x0094
                           000094   409 _TIN2	=	0x0094
                           000094   410 _UCC1	=	0x0094
                           000094   411 _AIN1	=	0x0094
                           000093   412 _TXD_	=	0x0093
                           000092   413 _RXD_	=	0x0092
                           000091   414 _T2EX	=	0x0091
                           000091   415 _CAP2	=	0x0091
                           000091   416 _TIN1	=	0x0091
                           000091   417 _VBUS2	=	0x0091
                           000091   418 _AIN0	=	0x0091
                           000090   419 _T2	=	0x0090
                           000090   420 _CAP1	=	0x0090
                           000090   421 _TIN0	=	0x0090
                           0000B7   422 _UDM	=	0x00b7
                           0000B6   423 _UDP	=	0x00b6
                           0000B5   424 _T1	=	0x00b5
                           0000B4   425 _PWM2	=	0x00b4
                           0000B4   426 _RXD1_	=	0x00b4
                           0000B4   427 _T0	=	0x00b4
                           0000B3   428 _INT1	=	0x00b3
                           0000B2   429 _TXD1_	=	0x00b2
                           0000B2   430 _INT0	=	0x00b2
                           0000B2   431 _VBUS1	=	0x00b2
                           0000B2   432 _AIN3	=	0x00b2
                           0000B1   433 _PWM2_	=	0x00b1
                           0000B1   434 _TXD	=	0x00b1
                           0000B0   435 _PWM1_	=	0x00b0
                           0000B0   436 _RXD	=	0x00b0
                           00008F   437 _TF1	=	0x008f
                           00008E   438 _TR1	=	0x008e
                           00008D   439 _TF0	=	0x008d
                           00008C   440 _TR0	=	0x008c
                           00008B   441 _IE1	=	0x008b
                           00008A   442 _IT1	=	0x008a
                           000089   443 _IE0	=	0x0089
                           000088   444 _IT0	=	0x0088
                           00009F   445 _SM0	=	0x009f
                           00009E   446 _SM1	=	0x009e
                           00009D   447 _SM2	=	0x009d
                           00009C   448 _REN	=	0x009c
                           00009B   449 _TB8	=	0x009b
                           00009A   450 _RB8	=	0x009a
                           000099   451 _TI	=	0x0099
                           000098   452 _RI	=	0x0098
                           0000CF   453 _TF2	=	0x00cf
                           0000CF   454 _CAP1F	=	0x00cf
                           0000CE   455 _EXF2	=	0x00ce
                           0000CD   456 _RCLK	=	0x00cd
                           0000CC   457 _TCLK	=	0x00cc
                           0000CB   458 _EXEN2	=	0x00cb
                           0000CA   459 _TR2	=	0x00ca
                           0000C9   460 _C_T2	=	0x00c9
                           0000C8   461 _CP_RL2	=	0x00c8
                           0000FF   462 _S0_FST_ACT	=	0x00ff
                           0000FE   463 _S0_IF_OV	=	0x00fe
                           0000FD   464 _S0_IF_FIRST	=	0x00fd
                           0000FC   465 _S0_IF_BYTE	=	0x00fc
                           0000FB   466 _S0_FREE	=	0x00fb
                           0000FA   467 _S0_T_FIFO	=	0x00fa
                           0000F8   468 _S0_R_FIFO	=	0x00f8
                           0000C7   469 _U1SM0	=	0x00c7
                           0000C5   470 _U1SMOD	=	0x00c5
                           0000C4   471 _U1REN	=	0x00c4
                           0000C3   472 _U1TB8	=	0x00c3
                           0000C2   473 _U1RB8	=	0x00c2
                           0000C1   474 _U1TI	=	0x00c1
                           0000C0   475 _U1RI	=	0x00c0
                           000087   476 _CMPO	=	0x0087
                           000086   477 _CMP_IF	=	0x0086
                           000085   478 _ADC_IF	=	0x0085
                           000084   479 _ADC_START	=	0x0084
                           000083   480 _CMP_CHAN	=	0x0083
                           000081   481 _ADC_CHAN1	=	0x0081
                           000080   482 _ADC_CHAN0	=	0x0080
                           0000DF   483 _U_IS_NAK	=	0x00df
                           0000DE   484 _U_TOG_OK	=	0x00de
                           0000DD   485 _U_SIE_FREE	=	0x00dd
                           0000DC   486 _UIF_FIFO_OV	=	0x00dc
                           0000DB   487 _UIF_HST_SOF	=	0x00db
                           0000DA   488 _UIF_SUSPEND	=	0x00da
                           0000D9   489 _UIF_TRANSFER	=	0x00d9
                           0000D8   490 _UIF_DETECT	=	0x00d8
                           0000D8   491 _UIF_BUS_RST	=	0x00d8
                                    492 ;--------------------------------------------------------
                                    493 ; overlayable register banks
                                    494 ;--------------------------------------------------------
                                    495 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        496 	.ds 8
                                    497 ;--------------------------------------------------------
                                    498 ; internal ram data
                                    499 ;--------------------------------------------------------
                                    500 	.area DSEG    (DATA)
      000022                        501 _key_cont:
      000022                        502 	.ds 1
      000023                        503 _key_trg:
      000023                        504 	.ds 1
      000024                        505 _key_press_timer:
      000024                        506 	.ds 2
      000026                        507 _key_long_triggered:
      000026                        508 	.ds 1
      000027                        509 _key_repeat_timer:
      000027                        510 	.ds 2
      000029                        511 _key_repeat_started:
      000029                        512 	.ds 1
      00002A                        513 _debounce_cnt:
      00002A                        514 	.ds 1
      00002B                        515 _pressed_stable:
      00002B                        516 	.ds 1
      00002C                        517 _last_pressed_stable:
      00002C                        518 	.ds 1
      00002D                        519 _g_evt_wr:
      00002D                        520 	.ds 1
      00002E                        521 _g_evt_rd:
      00002E                        522 	.ds 1
      00002F                        523 _evt_push_PARM_2:
      00002F                        524 	.ds 1
      000030                        525 _key_timer_tick_ms_tick_65536_49:
      000030                        526 	.ds 2
                                    527 ;--------------------------------------------------------
                                    528 ; overlayable items in internal ram
                                    529 ;--------------------------------------------------------
                                    530 	.area	OSEG    (OVR,DATA)
                                    531 	.area	OSEG    (OVR,DATA)
                                    532 ;--------------------------------------------------------
                                    533 ; indirectly addressable internal ram data
                                    534 ;--------------------------------------------------------
                                    535 	.area ISEG    (DATA)
                                    536 ;--------------------------------------------------------
                                    537 ; absolute internal ram data
                                    538 ;--------------------------------------------------------
                                    539 	.area IABS    (ABS,DATA)
                                    540 	.area IABS    (ABS,DATA)
                                    541 ;--------------------------------------------------------
                                    542 ; bit data
                                    543 ;--------------------------------------------------------
                                    544 	.area BSEG    (BIT)
      000001                        545 _key_scan_classic_sloc0_1_0:
      000001                        546 	.ds 1
                                    547 ;--------------------------------------------------------
                                    548 ; paged external ram data
                                    549 ;--------------------------------------------------------
                                    550 	.area PSEG    (PAG,XDATA)
                                    551 ;--------------------------------------------------------
                                    552 ; external ram data
                                    553 ;--------------------------------------------------------
                                    554 	.area XSEG    (XDATA)
      000110                        555 _g_evt_buf:
      000110                        556 	.ds 16
                                    557 ;--------------------------------------------------------
                                    558 ; absolute external ram data
                                    559 ;--------------------------------------------------------
                                    560 	.area XABS    (ABS,XDATA)
                                    561 ;--------------------------------------------------------
                                    562 ; external initialized ram data
                                    563 ;--------------------------------------------------------
                                    564 	.area XISEG   (XDATA)
                                    565 	.area HOME    (CODE)
                                    566 	.area GSINIT0 (CODE)
                                    567 	.area GSINIT1 (CODE)
                                    568 	.area GSINIT2 (CODE)
                                    569 	.area GSINIT3 (CODE)
                                    570 	.area GSINIT4 (CODE)
                                    571 	.area GSINIT5 (CODE)
                                    572 	.area GSINIT  (CODE)
                                    573 	.area GSFINAL (CODE)
                                    574 	.area CSEG    (CODE)
                                    575 ;--------------------------------------------------------
                                    576 ; global & static initialisations
                                    577 ;--------------------------------------------------------
                                    578 	.area HOME    (CODE)
                                    579 	.area GSINIT  (CODE)
                                    580 	.area GSFINAL (CODE)
                                    581 	.area GSINIT  (CODE)
                                    582 ;------------------------------------------------------------
                                    583 ;Allocation info for local variables in function 'key_timer_tick'
                                    584 ;------------------------------------------------------------
                                    585 ;ms_tick                   Allocated with name '_key_timer_tick_ms_tick_65536_49'
                                    586 ;------------------------------------------------------------
                                    587 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:293: static volatile uint16_t ms_tick = 0;
      0000D8 E4               [12]  588 	clr	a
      0000D9 F5 30            [12]  589 	mov	_key_timer_tick_ms_tick_65536_49,a
      0000DB F5 31            [12]  590 	mov	(_key_timer_tick_ms_tick_65536_49 + 1),a
                                    591 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:12: static uint8_t key_cont = 0;     /* 持续状态：当前按下的键（位图） */
      0000DD 75 22 00         [24]  592 	mov	_key_cont,#0x00
                                    593 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:13: static uint8_t key_trg = 0;      /* 触发状态：新按下的键（边沿，位图） */
      0000E0 75 23 00         [24]  594 	mov	_key_trg,#0x00
                                    595 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:28: static volatile uint8_t g_evt_wr = 0;   /* 写指针 */
      0000E3 75 2D 00         [24]  596 	mov	_g_evt_wr,#0x00
                                    597 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:29: static volatile uint8_t g_evt_rd = 0;   /* 读指针 */
      0000E6 75 2E 00         [24]  598 	mov	_g_evt_rd,#0x00
                                    599 ;--------------------------------------------------------
                                    600 ; Home
                                    601 ;--------------------------------------------------------
                                    602 	.area HOME    (CODE)
                                    603 	.area HOME    (CODE)
                                    604 ;--------------------------------------------------------
                                    605 ; code
                                    606 ;--------------------------------------------------------
                                    607 	.area CSEG    (CODE)
                                    608 ;------------------------------------------------------------
                                    609 ;Allocation info for local variables in function 'evt_push'
                                    610 ;------------------------------------------------------------
                                    611 ;ev                        Allocated with name '_evt_push_PARM_2'
                                    612 ;id                        Allocated to registers r7 
                                    613 ;next                      Allocated to registers r5 
                                    614 ;------------------------------------------------------------
                                    615 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:31: static void evt_push(uint8_t id, KeyEvent ev)
                                    616 ;	-----------------------------------------
                                    617 ;	 function evt_push
                                    618 ;	-----------------------------------------
      000B14                        619 _evt_push:
                           000007   620 	ar7 = 0x07
                           000006   621 	ar6 = 0x06
                           000005   622 	ar5 = 0x05
                           000004   623 	ar4 = 0x04
                           000003   624 	ar3 = 0x03
                           000002   625 	ar2 = 0x02
                           000001   626 	ar1 = 0x01
                           000000   627 	ar0 = 0x00
      000B14 AF 82            [24]  628 	mov	r7,dpl
                                    629 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:33: uint8_t next = (g_evt_wr + 1) % EVENT_BUF_SIZE;
      000B16 AD 2D            [24]  630 	mov	r5,_g_evt_wr
      000B18 7E 00            [12]  631 	mov	r6,#0x00
      000B1A 8D 82            [24]  632 	mov	dpl,r5
      000B1C 8E 83            [24]  633 	mov	dph,r6
      000B1E A3               [24]  634 	inc	dptr
      000B1F 75 32 08         [24]  635 	mov	__modsint_PARM_2,#0x08
                                    636 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      000B22 8E 33            [24]  637 	mov	(__modsint_PARM_2 + 1),r6
      000B24 C0 07            [24]  638 	push	ar7
      000B26 12 10 A9         [24]  639 	lcall	__modsint
      000B29 AD 82            [24]  640 	mov	r5,dpl
      000B2B D0 07            [24]  641 	pop	ar7
                                    642 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:34: if (next != g_evt_rd)   /* 缓冲未满才写入 */
      000B2D ED               [12]  643 	mov	a,r5
      000B2E B5 2E 01         [24]  644 	cjne	a,_g_evt_rd,00109$
      000B31 22               [24]  645 	ret
      000B32                        646 00109$:
                                    647 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:36: g_evt_buf[g_evt_wr].key_id = id;
      000B32 E5 2D            [12]  648 	mov	a,_g_evt_wr
      000B34 75 F0 02         [24]  649 	mov	b,#0x02
      000B37 A4               [48]  650 	mul	ab
      000B38 24 10            [12]  651 	add	a,#_g_evt_buf
      000B3A F5 82            [12]  652 	mov	dpl,a
      000B3C 74 01            [12]  653 	mov	a,#(_g_evt_buf >> 8)
      000B3E 35 F0            [12]  654 	addc	a,b
      000B40 F5 83            [12]  655 	mov	dph,a
      000B42 EF               [12]  656 	mov	a,r7
      000B43 F0               [24]  657 	movx	@dptr,a
                                    658 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:37: g_evt_buf[g_evt_wr].event  = ev;
      000B44 E5 2D            [12]  659 	mov	a,_g_evt_wr
      000B46 75 F0 02         [24]  660 	mov	b,#0x02
      000B49 A4               [48]  661 	mul	ab
      000B4A 24 10            [12]  662 	add	a,#_g_evt_buf
      000B4C FE               [12]  663 	mov	r6,a
      000B4D 74 01            [12]  664 	mov	a,#(_g_evt_buf >> 8)
      000B4F 35 F0            [12]  665 	addc	a,b
      000B51 FF               [12]  666 	mov	r7,a
      000B52 8E 82            [24]  667 	mov	dpl,r6
      000B54 8F 83            [24]  668 	mov	dph,r7
      000B56 A3               [24]  669 	inc	dptr
      000B57 E5 2F            [12]  670 	mov	a,_evt_push_PARM_2
      000B59 F0               [24]  671 	movx	@dptr,a
                                    672 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:38: g_evt_wr = next;
      000B5A 8D 2D            [24]  673 	mov	_g_evt_wr,r5
                                    674 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:40: }
      000B5C 22               [24]  675 	ret
                                    676 ;------------------------------------------------------------
                                    677 ;Allocation info for local variables in function 'evt_pop'
                                    678 ;------------------------------------------------------------
                                    679 ;out                       Allocated to registers r5 r6 r7 
                                    680 ;------------------------------------------------------------
                                    681 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:42: static uint8_t evt_pop(KeyEventMsg *out)
                                    682 ;	-----------------------------------------
                                    683 ;	 function evt_pop
                                    684 ;	-----------------------------------------
      000B5D                        685 _evt_pop:
      000B5D AD 82            [24]  686 	mov	r5,dpl
      000B5F AE 83            [24]  687 	mov	r6,dph
      000B61 AF F0            [24]  688 	mov	r7,b
                                    689 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:44: if (g_evt_rd == g_evt_wr) return 0;   /* 空 */
      000B63 E5 2D            [12]  690 	mov	a,_g_evt_wr
      000B65 B5 2E 04         [24]  691 	cjne	a,_g_evt_rd,00102$
      000B68 75 82 00         [24]  692 	mov	dpl,#0x00
      000B6B 22               [24]  693 	ret
      000B6C                        694 00102$:
                                    695 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:45: *out = g_evt_buf[g_evt_rd];
      000B6C E5 2E            [12]  696 	mov	a,_g_evt_rd
      000B6E 75 F0 02         [24]  697 	mov	b,#0x02
      000B71 A4               [48]  698 	mul	ab
      000B72 24 10            [12]  699 	add	a,#_g_evt_buf
      000B74 FB               [12]  700 	mov	r3,a
      000B75 74 01            [12]  701 	mov	a,#(_g_evt_buf >> 8)
      000B77 35 F0            [12]  702 	addc	a,b
      000B79 FC               [12]  703 	mov	r4,a
      000B7A 8B 32            [24]  704 	mov	___memcpy_PARM_2,r3
      000B7C 8C 33            [24]  705 	mov	(___memcpy_PARM_2 + 1),r4
      000B7E 75 34 00         [24]  706 	mov	(___memcpy_PARM_2 + 2),#0x00
      000B81 75 35 02         [24]  707 	mov	___memcpy_PARM_3,#0x02
      000B84 75 36 00         [24]  708 	mov	(___memcpy_PARM_3 + 1),#0x00
      000B87 8D 82            [24]  709 	mov	dpl,r5
      000B89 8E 83            [24]  710 	mov	dph,r6
      000B8B 8F F0            [24]  711 	mov	b,r7
      000B8D 12 0E F4         [24]  712 	lcall	___memcpy
                                    713 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:46: g_evt_rd = (g_evt_rd + 1) % EVENT_BUF_SIZE;
      000B90 AE 2E            [24]  714 	mov	r6,_g_evt_rd
      000B92 7F 00            [12]  715 	mov	r7,#0x00
      000B94 8E 82            [24]  716 	mov	dpl,r6
      000B96 8F 83            [24]  717 	mov	dph,r7
      000B98 A3               [24]  718 	inc	dptr
      000B99 75 32 08         [24]  719 	mov	__modsint_PARM_2,#0x08
                                    720 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      000B9C 8F 33            [24]  721 	mov	(__modsint_PARM_2 + 1),r7
      000B9E 12 10 A9         [24]  722 	lcall	__modsint
      000BA1 AE 82            [24]  723 	mov	r6,dpl
      000BA3 8E 2E            [24]  724 	mov	_g_evt_rd,r6
                                    725 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:47: return 1;
      000BA5 75 82 01         [24]  726 	mov	dpl,#0x01
                                    727 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:48: }
      000BA8 22               [24]  728 	ret
                                    729 ;------------------------------------------------------------
                                    730 ;Allocation info for local variables in function 'read_all_keys'
                                    731 ;------------------------------------------------------------
                                    732 ;ReadData                  Allocated to registers r7 
                                    733 ;i                         Allocated to registers r6 
                                    734 ;------------------------------------------------------------
                                    735 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:59: static uint8_t read_all_keys(void)
                                    736 ;	-----------------------------------------
                                    737 ;	 function read_all_keys
                                    738 ;	-----------------------------------------
      000BA9                        739 _read_all_keys:
                                    740 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:61: uint8_t ReadData = 0;
      000BA9 7F 00            [12]  741 	mov	r7,#0x00
                                    742 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:64: for (i = 0; i < KEY_NUM; i++)
      000BAB 7E 00            [12]  743 	mov	r6,#0x00
      000BAD                        744 00104$:
                                    745 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:67: if (!(*(key_config[i].port) & (1 << key_config[i].pin)))
      000BAD EE               [12]  746 	mov	a,r6
      000BAE 75 F0 03         [24]  747 	mov	b,#0x03
      000BB1 A4               [48]  748 	mul	ab
      000BB2 FC               [12]  749 	mov	r4,a
      000BB3 AD F0            [24]  750 	mov	r5,b
      000BB5 24 4E            [12]  751 	add	a,#_key_config
      000BB7 F5 82            [12]  752 	mov	dpl,a
      000BB9 ED               [12]  753 	mov	a,r5
      000BBA 34 12            [12]  754 	addc	a,#(_key_config >> 8)
      000BBC F5 83            [12]  755 	mov	dph,a
      000BBE E4               [12]  756 	clr	a
      000BBF 93               [24]  757 	movc	a,@a+dptr
      000BC0 FA               [12]  758 	mov	r2,a
      000BC1 A3               [24]  759 	inc	dptr
      000BC2 E4               [12]  760 	clr	a
      000BC3 93               [24]  761 	movc	a,@a+dptr
      000BC4 FB               [12]  762 	mov	r3,a
      000BC5 8A 82            [24]  763 	mov	dpl,r2
      000BC7 8B 83            [24]  764 	mov	dph,r3
      000BC9 E0               [24]  765 	movx	a,@dptr
      000BCA FA               [12]  766 	mov	r2,a
      000BCB EC               [12]  767 	mov	a,r4
      000BCC 24 4E            [12]  768 	add	a,#_key_config
      000BCE FC               [12]  769 	mov	r4,a
      000BCF ED               [12]  770 	mov	a,r5
      000BD0 34 12            [12]  771 	addc	a,#(_key_config >> 8)
      000BD2 FD               [12]  772 	mov	r5,a
      000BD3 8C 82            [24]  773 	mov	dpl,r4
      000BD5 8D 83            [24]  774 	mov	dph,r5
      000BD7 A3               [24]  775 	inc	dptr
      000BD8 A3               [24]  776 	inc	dptr
      000BD9 E4               [12]  777 	clr	a
      000BDA 93               [24]  778 	movc	a,@a+dptr
      000BDB FD               [12]  779 	mov	r5,a
      000BDC 8D F0            [24]  780 	mov	b,r5
      000BDE 05 F0            [12]  781 	inc	b
      000BE0 7D 01            [12]  782 	mov	r5,#0x01
      000BE2 7C 00            [12]  783 	mov	r4,#0x00
      000BE4 80 06            [24]  784 	sjmp	00122$
      000BE6                        785 00121$:
      000BE6 ED               [12]  786 	mov	a,r5
      000BE7 2D               [12]  787 	add	a,r5
      000BE8 FD               [12]  788 	mov	r5,a
      000BE9 EC               [12]  789 	mov	a,r4
      000BEA 33               [12]  790 	rlc	a
      000BEB FC               [12]  791 	mov	r4,a
      000BEC                        792 00122$:
      000BEC D5 F0 F7         [24]  793 	djnz	b,00121$
      000BEF 7B 00            [12]  794 	mov	r3,#0x00
      000BF1 EA               [12]  795 	mov	a,r2
      000BF2 52 05            [12]  796 	anl	ar5,a
      000BF4 EB               [12]  797 	mov	a,r3
      000BF5 52 04            [12]  798 	anl	ar4,a
      000BF7 ED               [12]  799 	mov	a,r5
      000BF8 4C               [12]  800 	orl	a,r4
      000BF9 70 12            [24]  801 	jnz	00105$
                                    802 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:70: ReadData |= (1 << i);
      000BFB 8E 05            [24]  803 	mov	ar5,r6
      000BFD 8D F0            [24]  804 	mov	b,r5
      000BFF 05 F0            [12]  805 	inc	b
      000C01 74 01            [12]  806 	mov	a,#0x01
      000C03 80 02            [24]  807 	sjmp	00126$
      000C05                        808 00124$:
      000C05 25 E0            [12]  809 	add	a,acc
      000C07                        810 00126$:
      000C07 D5 F0 FB         [24]  811 	djnz	b,00124$
      000C0A FD               [12]  812 	mov	r5,a
      000C0B 42 07            [12]  813 	orl	ar7,a
      000C0D                        814 00105$:
                                    815 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:64: for (i = 0; i < KEY_NUM; i++)
      000C0D 0E               [12]  816 	inc	r6
      000C0E BE 01 00         [24]  817 	cjne	r6,#0x01,00127$
      000C11                        818 00127$:
      000C11 40 9A            [24]  819 	jc	00104$
                                    820 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:75: return ReadData;
      000C13 8F 82            [24]  821 	mov	dpl,r7
                                    822 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:76: }
      000C15 22               [24]  823 	ret
                                    824 ;------------------------------------------------------------
                                    825 ;Allocation info for local variables in function 'key_scan_classic'
                                    826 ;------------------------------------------------------------
                                    827 ;ReadData                  Allocated to registers r7 
                                    828 ;i                         Allocated to registers r6 
                                    829 ;key_mask                  Allocated to registers r5 
                                    830 ;key_pressed               Allocated to registers r4 
                                    831 ;press_edge                Allocated to registers r5 
                                    832 ;release_edge              Allocated to registers r4 
                                    833 ;------------------------------------------------------------
                                    834 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:87: static void key_scan_classic(void)
                                    835 ;	-----------------------------------------
                                    836 ;	 function key_scan_classic
                                    837 ;	-----------------------------------------
      000C16                        838 _key_scan_classic:
                                    839 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:93: ReadData = read_all_keys();
      000C16 12 0B A9         [24]  840 	lcall	_read_all_keys
      000C19 AF 82            [24]  841 	mov	r7,dpl
                                    842 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:96: key_trg = ReadData & (ReadData ^ key_cont);
      000C1B E5 22            [12]  843 	mov	a,_key_cont
      000C1D 6F               [12]  844 	xrl	a,r7
      000C1E 5F               [12]  845 	anl	a,r7
      000C1F F5 23            [12]  846 	mov	_key_trg,a
                                    847 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:99: key_cont = ReadData;
      000C21 8F 22            [24]  848 	mov	_key_cont,r7
                                    849 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:102: for (i = 0; i < KEY_NUM; i++)
      000C23 7E 00            [12]  850 	mov	r6,#0x00
      000C25                        851 00128$:
                                    852 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:104: uint8_t key_mask = (1 << i);
      000C25 8E 05            [24]  853 	mov	ar5,r6
      000C27 8D F0            [24]  854 	mov	b,r5
      000C29 05 F0            [12]  855 	inc	b
      000C2B 74 01            [12]  856 	mov	a,#0x01
      000C2D 80 02            [24]  857 	sjmp	00211$
      000C2F                        858 00209$:
      000C2F 25 E0            [12]  859 	add	a,acc
      000C31                        860 00211$:
      000C31 D5 F0 FB         [24]  861 	djnz	b,00209$
                                    862 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:105: uint8_t key_pressed = (ReadData & key_mask) ? 1 : 0;
      000C34 5F               [12]  863 	anl	a,r7
      000C35 60 06            [24]  864 	jz	00132$
      000C37 7C 01            [12]  865 	mov	r4,#0x01
      000C39 7D 00            [12]  866 	mov	r5,#0x00
      000C3B 80 04            [24]  867 	sjmp	00133$
      000C3D                        868 00132$:
      000C3D 7C 00            [12]  869 	mov	r4,#0x00
      000C3F 7D 00            [12]  870 	mov	r5,#0x00
      000C41                        871 00133$:
                                    872 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:108: if (key_pressed)
      000C41 EC               [12]  873 	mov	a,r4
      000C42 60 18            [24]  874 	jz	00108$
                                    875 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:110: if (++debounce_cnt[i] >= DEBOUNCE_CNT)
      000C44 EE               [12]  876 	mov	a,r6
      000C45 24 2A            [12]  877 	add	a,#_debounce_cnt
      000C47 F9               [12]  878 	mov	r1,a
      000C48 87 05            [24]  879 	mov	ar5,@r1
      000C4A 0D               [12]  880 	inc	r5
      000C4B A7 05            [24]  881 	mov	@r1,ar5
      000C4D BD 02 00         [24]  882 	cjne	r5,#0x02,00214$
      000C50                        883 00214$:
      000C50 40 1E            [24]  884 	jc	00109$
                                    885 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:112: debounce_cnt[i] = DEBOUNCE_CNT;
      000C52 77 02            [12]  886 	mov	@r1,#0x02
                                    887 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:113: pressed_stable[i] = 1;
      000C54 EE               [12]  888 	mov	a,r6
      000C55 24 2B            [12]  889 	add	a,#_pressed_stable
      000C57 F8               [12]  890 	mov	r0,a
      000C58 76 01            [12]  891 	mov	@r0,#0x01
      000C5A 80 14            [24]  892 	sjmp	00109$
      000C5C                        893 00108$:
                                    894 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:118: if (debounce_cnt[i] > 0)
      000C5C EE               [12]  895 	mov	a,r6
      000C5D 24 2A            [12]  896 	add	a,#_debounce_cnt
      000C5F F9               [12]  897 	mov	r1,a
      000C60 E7               [12]  898 	mov	a,@r1
      000C61 FD               [12]  899 	mov	r5,a
      000C62 60 0C            [24]  900 	jz	00109$
                                    901 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:120: --debounce_cnt[i];
      000C64 1D               [12]  902 	dec	r5
      000C65 A7 05            [24]  903 	mov	@r1,ar5
                                    904 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:121: if (debounce_cnt[i] == 0)
      000C67 ED               [12]  905 	mov	a,r5
      000C68 70 06            [24]  906 	jnz	00109$
                                    907 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:123: pressed_stable[i] = 0;
      000C6A EE               [12]  908 	mov	a,r6
      000C6B 24 2B            [12]  909 	add	a,#_pressed_stable
      000C6D F8               [12]  910 	mov	r0,a
      000C6E 76 00            [12]  911 	mov	@r0,#0x00
      000C70                        912 00109$:
                                    913 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:129: uint8_t press_edge = (pressed_stable[i] && !last_pressed_stable[i]);
      000C70 EE               [12]  914 	mov	a,r6
      000C71 24 2B            [12]  915 	add	a,#_pressed_stable
      000C73 F9               [12]  916 	mov	r1,a
      000C74 E7               [12]  917 	mov	a,@r1
      000C75 60 07            [24]  918 	jz	00134$
      000C77 EE               [12]  919 	mov	a,r6
      000C78 24 2C            [12]  920 	add	a,#_last_pressed_stable
      000C7A F9               [12]  921 	mov	r1,a
      000C7B E7               [12]  922 	mov	a,@r1
      000C7C 60 04            [24]  923 	jz	00135$
      000C7E                        924 00134$:
                                    925 ;	assignBit
      000C7E C2 01            [12]  926 	clr	_key_scan_classic_sloc0_1_0
      000C80 80 02            [24]  927 	sjmp	00136$
      000C82                        928 00135$:
                                    929 ;	assignBit
      000C82 D2 01            [12]  930 	setb	_key_scan_classic_sloc0_1_0
      000C84                        931 00136$:
      000C84 A2 01            [12]  932 	mov	c,_key_scan_classic_sloc0_1_0
      000C86 E4               [12]  933 	clr	a
      000C87 33               [12]  934 	rlc	a
      000C88 FD               [12]  935 	mov	r5,a
                                    936 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:130: uint8_t release_edge = (!pressed_stable[i] && last_pressed_stable[i]);
      000C89 EE               [12]  937 	mov	a,r6
      000C8A 24 2B            [12]  938 	add	a,#_pressed_stable
      000C8C F9               [12]  939 	mov	r1,a
      000C8D E7               [12]  940 	mov	a,@r1
      000C8E 70 07            [24]  941 	jnz	00137$
      000C90 EE               [12]  942 	mov	a,r6
      000C91 24 2C            [12]  943 	add	a,#_last_pressed_stable
      000C93 F9               [12]  944 	mov	r1,a
      000C94 E7               [12]  945 	mov	a,@r1
      000C95 70 04            [24]  946 	jnz	00138$
      000C97                        947 00137$:
                                    948 ;	assignBit
      000C97 C2 01            [12]  949 	clr	_key_scan_classic_sloc0_1_0
      000C99 80 02            [24]  950 	sjmp	00139$
      000C9B                        951 00138$:
                                    952 ;	assignBit
      000C9B D2 01            [12]  953 	setb	_key_scan_classic_sloc0_1_0
      000C9D                        954 00139$:
      000C9D A2 01            [12]  955 	mov	c,_key_scan_classic_sloc0_1_0
      000C9F E4               [12]  956 	clr	a
      000CA0 33               [12]  957 	rlc	a
      000CA1 FC               [12]  958 	mov	r4,a
                                    959 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:131: last_pressed_stable[i] = pressed_stable[i];
      000CA2 EE               [12]  960 	mov	a,r6
      000CA3 24 2C            [12]  961 	add	a,#_last_pressed_stable
      000CA5 F9               [12]  962 	mov	r1,a
      000CA6 EE               [12]  963 	mov	a,r6
      000CA7 24 2B            [12]  964 	add	a,#_pressed_stable
      000CA9 F8               [12]  965 	mov	r0,a
      000CAA 86 03            [24]  966 	mov	ar3,@r0
      000CAC A7 03            [24]  967 	mov	@r1,ar3
                                    968 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:134: if (press_edge)
      000CAE ED               [12]  969 	mov	a,r5
      000CAF 60 20            [24]  970 	jz	00111$
                                    971 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:136: key_press_timer[i] = 0;
      000CB1 EE               [12]  972 	mov	a,r6
      000CB2 2E               [12]  973 	add	a,r6
      000CB3 FD               [12]  974 	mov	r5,a
      000CB4 24 24            [12]  975 	add	a,#_key_press_timer
      000CB6 F8               [12]  976 	mov	r0,a
      000CB7 76 00            [12]  977 	mov	@r0,#0x00
      000CB9 08               [12]  978 	inc	r0
      000CBA 76 00            [12]  979 	mov	@r0,#0x00
                                    980 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:137: key_long_triggered[i] = 0;
      000CBC EE               [12]  981 	mov	a,r6
      000CBD 24 26            [12]  982 	add	a,#_key_long_triggered
      000CBF F8               [12]  983 	mov	r0,a
      000CC0 76 00            [12]  984 	mov	@r0,#0x00
                                    985 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:138: key_repeat_timer[i] = 0;
      000CC2 ED               [12]  986 	mov	a,r5
      000CC3 24 27            [12]  987 	add	a,#_key_repeat_timer
      000CC5 F8               [12]  988 	mov	r0,a
      000CC6 76 00            [12]  989 	mov	@r0,#0x00
      000CC8 08               [12]  990 	inc	r0
      000CC9 76 00            [12]  991 	mov	@r0,#0x00
                                    992 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:139: key_repeat_started[i] = 0;
      000CCB EE               [12]  993 	mov	a,r6
      000CCC 24 29            [12]  994 	add	a,#_key_repeat_started
      000CCE F8               [12]  995 	mov	r0,a
      000CCF 76 00            [12]  996 	mov	@r0,#0x00
      000CD1                        997 00111$:
                                    998 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:143: if (pressed_stable[i])
      000CD1 EE               [12]  999 	mov	a,r6
      000CD2 24 2B            [12] 1000 	add	a,#_pressed_stable
      000CD4 F9               [12] 1001 	mov	r1,a
      000CD5 E7               [12] 1002 	mov	a,@r1
      000CD6 70 03            [24] 1003 	jnz	00223$
      000CD8 02 0D 77         [24] 1004 	ljmp	00122$
      000CDB                       1005 00223$:
                                   1006 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:145: ++key_press_timer[i];
      000CDB EE               [12] 1007 	mov	a,r6
      000CDC 2E               [12] 1008 	add	a,r6
      000CDD FD               [12] 1009 	mov	r5,a
      000CDE 24 24            [12] 1010 	add	a,#_key_press_timer
      000CE0 F9               [12] 1011 	mov	r1,a
      000CE1 87 02            [24] 1012 	mov	ar2,@r1
      000CE3 09               [12] 1013 	inc	r1
      000CE4 87 03            [24] 1014 	mov	ar3,@r1
      000CE6 19               [12] 1015 	dec	r1
      000CE7 0A               [12] 1016 	inc	r2
      000CE8 BA 00 01         [24] 1017 	cjne	r2,#0x00,00224$
      000CEB 0B               [12] 1018 	inc	r3
      000CEC                       1019 00224$:
      000CEC A7 02            [24] 1020 	mov	@r1,ar2
      000CEE 09               [12] 1021 	inc	r1
      000CEF A7 03            [24] 1022 	mov	@r1,ar3
      000CF1 19               [12] 1023 	dec	r1
                                   1024 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:148: if (!key_long_triggered[i] && key_press_timer[i] >= LONG_PRESS_CNT)
      000CF2 EE               [12] 1025 	mov	a,r6
      000CF3 24 26            [12] 1026 	add	a,#_key_long_triggered
      000CF5 F8               [12] 1027 	mov	r0,a
      000CF6 E6               [12] 1028 	mov	a,@r0
      000CF7 70 3C            [24] 1029 	jnz	00113$
      000CF9 87 02            [24] 1030 	mov	ar2,@r1
      000CFB 09               [12] 1031 	inc	r1
      000CFC 87 03            [24] 1032 	mov	ar3,@r1
      000CFE 19               [12] 1033 	dec	r1
      000CFF C3               [12] 1034 	clr	c
      000D00 EA               [12] 1035 	mov	a,r2
      000D01 94 2C            [12] 1036 	subb	a,#0x2c
      000D03 EB               [12] 1037 	mov	a,r3
      000D04 94 01            [12] 1038 	subb	a,#0x01
      000D06 40 2D            [24] 1039 	jc	00113$
                                   1040 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:150: key_long_triggered[i] = 1;
      000D08 76 01            [12] 1041 	mov	@r0,#0x01
                                   1042 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:156: evt_push(i, KEY_EVENT_LONG_PRESS);
      000D0A 75 2F 02         [24] 1043 	mov	_evt_push_PARM_2,#0x02
      000D0D 8E 82            [24] 1044 	mov	dpl,r6
      000D0F C0 07            [24] 1045 	push	ar7
      000D11 C0 06            [24] 1046 	push	ar6
      000D13 C0 05            [24] 1047 	push	ar5
      000D15 C0 04            [24] 1048 	push	ar4
      000D17 C0 00            [24] 1049 	push	ar0
      000D19 12 0B 14         [24] 1050 	lcall	_evt_push
      000D1C D0 00            [24] 1051 	pop	ar0
      000D1E D0 04            [24] 1052 	pop	ar4
      000D20 D0 05            [24] 1053 	pop	ar5
      000D22 D0 06            [24] 1054 	pop	ar6
      000D24 D0 07            [24] 1055 	pop	ar7
                                   1056 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:160: key_repeat_started[i] = 1;
      000D26 EE               [12] 1057 	mov	a,r6
      000D27 24 29            [12] 1058 	add	a,#_key_repeat_started
      000D29 F9               [12] 1059 	mov	r1,a
      000D2A 77 01            [12] 1060 	mov	@r1,#0x01
                                   1061 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:161: key_repeat_timer[i] = 0;
      000D2C ED               [12] 1062 	mov	a,r5
      000D2D 24 27            [12] 1063 	add	a,#_key_repeat_timer
      000D2F F9               [12] 1064 	mov	r1,a
      000D30 77 00            [12] 1065 	mov	@r1,#0x00
      000D32 09               [12] 1066 	inc	r1
      000D33 77 00            [12] 1067 	mov	@r1,#0x00
      000D35                       1068 00113$:
                                   1069 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:170: if (key_long_triggered[i])
      000D35 E6               [12] 1070 	mov	a,@r0
      000D36 60 3F            [24] 1071 	jz	00122$
                                   1072 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:196: if (key_repeat_started[i])
      000D38 EE               [12] 1073 	mov	a,r6
      000D39 24 29            [12] 1074 	add	a,#_key_repeat_started
      000D3B F9               [12] 1075 	mov	r1,a
      000D3C E7               [12] 1076 	mov	a,@r1
      000D3D 60 38            [24] 1077 	jz	00122$
                                   1078 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:198: ++key_repeat_timer[i];
      000D3F ED               [12] 1079 	mov	a,r5
      000D40 24 27            [12] 1080 	add	a,#_key_repeat_timer
      000D42 F9               [12] 1081 	mov	r1,a
      000D43 87 03            [24] 1082 	mov	ar3,@r1
      000D45 09               [12] 1083 	inc	r1
      000D46 87 05            [24] 1084 	mov	ar5,@r1
      000D48 19               [12] 1085 	dec	r1
      000D49 0B               [12] 1086 	inc	r3
      000D4A BB 00 01         [24] 1087 	cjne	r3,#0x00,00229$
      000D4D 0D               [12] 1088 	inc	r5
      000D4E                       1089 00229$:
      000D4E A7 03            [24] 1090 	mov	@r1,ar3
      000D50 09               [12] 1091 	inc	r1
      000D51 A7 05            [24] 1092 	mov	@r1,ar5
      000D53 19               [12] 1093 	dec	r1
                                   1094 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:199: if (key_repeat_timer[i] >= REPEAT_INTERVAL_CNT)
      000D54 C3               [12] 1095 	clr	c
      000D55 EB               [12] 1096 	mov	a,r3
      000D56 94 0F            [12] 1097 	subb	a,#0x0f
      000D58 ED               [12] 1098 	mov	a,r5
      000D59 94 00            [12] 1099 	subb	a,#0x00
      000D5B 40 1A            [24] 1100 	jc	00122$
                                   1101 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:201: key_repeat_timer[i] = 0;
      000D5D 77 00            [12] 1102 	mov	@r1,#0x00
      000D5F 09               [12] 1103 	inc	r1
      000D60 77 00            [12] 1104 	mov	@r1,#0x00
      000D62 19               [12] 1105 	dec	r1
                                   1106 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:202: evt_push(i, KEY_EVENT_REPEAT);
      000D63 75 2F 03         [24] 1107 	mov	_evt_push_PARM_2,#0x03
      000D66 8E 82            [24] 1108 	mov	dpl,r6
      000D68 C0 07            [24] 1109 	push	ar7
      000D6A C0 06            [24] 1110 	push	ar6
      000D6C C0 04            [24] 1111 	push	ar4
      000D6E 12 0B 14         [24] 1112 	lcall	_evt_push
      000D71 D0 04            [24] 1113 	pop	ar4
      000D73 D0 06            [24] 1114 	pop	ar6
      000D75 D0 07            [24] 1115 	pop	ar7
      000D77                       1116 00122$:
                                   1117 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:211: if (release_edge)
      000D77 EC               [12] 1118 	mov	a,r4
      000D78 60 36            [24] 1119 	jz	00129$
                                   1120 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:213: if (!key_long_triggered[i])
      000D7A EE               [12] 1121 	mov	a,r6
      000D7B 24 26            [12] 1122 	add	a,#_key_long_triggered
      000D7D F9               [12] 1123 	mov	r1,a
      000D7E E7               [12] 1124 	mov	a,@r1
      000D7F 70 14            [24] 1125 	jnz	00124$
                                   1126 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:216: evt_push(i, KEY_EVENT_SHORT_PRESS);
      000D81 75 2F 01         [24] 1127 	mov	_evt_push_PARM_2,#0x01
      000D84 8E 82            [24] 1128 	mov	dpl,r6
      000D86 C0 07            [24] 1129 	push	ar7
      000D88 C0 06            [24] 1130 	push	ar6
      000D8A C0 01            [24] 1131 	push	ar1
      000D8C 12 0B 14         [24] 1132 	lcall	_evt_push
      000D8F D0 01            [24] 1133 	pop	ar1
      000D91 D0 06            [24] 1134 	pop	ar6
      000D93 D0 07            [24] 1135 	pop	ar7
      000D95                       1136 00124$:
                                   1137 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:227: key_press_timer[i] = 0;
      000D95 EE               [12] 1138 	mov	a,r6
      000D96 2E               [12] 1139 	add	a,r6
      000D97 FD               [12] 1140 	mov	r5,a
      000D98 24 24            [12] 1141 	add	a,#_key_press_timer
      000D9A F8               [12] 1142 	mov	r0,a
      000D9B 76 00            [12] 1143 	mov	@r0,#0x00
      000D9D 08               [12] 1144 	inc	r0
                                   1145 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:228: key_long_triggered[i] = 0;
                                   1146 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:229: key_repeat_timer[i] = 0;
      000D9E E4               [12] 1147 	clr	a
      000D9F F6               [12] 1148 	mov	@r0,a
      000DA0 F7               [12] 1149 	mov	@r1,a
      000DA1 ED               [12] 1150 	mov	a,r5
      000DA2 24 27            [12] 1151 	add	a,#_key_repeat_timer
      000DA4 F8               [12] 1152 	mov	r0,a
      000DA5 76 00            [12] 1153 	mov	@r0,#0x00
      000DA7 08               [12] 1154 	inc	r0
      000DA8 76 00            [12] 1155 	mov	@r0,#0x00
                                   1156 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:230: key_repeat_started[i] = 0;
      000DAA EE               [12] 1157 	mov	a,r6
      000DAB 24 29            [12] 1158 	add	a,#_key_repeat_started
      000DAD F8               [12] 1159 	mov	r0,a
      000DAE 76 00            [12] 1160 	mov	@r0,#0x00
      000DB0                       1161 00129$:
                                   1162 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:102: for (i = 0; i < KEY_NUM; i++)
      000DB0 0E               [12] 1163 	inc	r6
      000DB1 BE 01 00         [24] 1164 	cjne	r6,#0x01,00233$
      000DB4                       1165 00233$:
      000DB4 50 03            [24] 1166 	jnc	00234$
      000DB6 02 0C 25         [24] 1167 	ljmp	00128$
      000DB9                       1168 00234$:
                                   1169 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:233: }
      000DB9 22               [24] 1170 	ret
                                   1171 ;------------------------------------------------------------
                                   1172 ;Allocation info for local variables in function 'gpio_init'
                                   1173 ;------------------------------------------------------------
                                   1174 ;i                         Allocated to registers r7 
                                   1175 ;pin                       Allocated to registers r4 
                                   1176 ;port_ptr                  Allocated to registers r5 r6 
                                   1177 ;mod_oc_ptr                Allocated to registers r2 r3 
                                   1178 ;dir_pu_ptr                Allocated to registers r5 r6 
                                   1179 ;------------------------------------------------------------
                                   1180 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:236: static void gpio_init(void)
                                   1181 ;	-----------------------------------------
                                   1182 ;	 function gpio_init
                                   1183 ;	-----------------------------------------
      000DBA                       1184 _gpio_init:
                                   1185 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:239: for (i = 0; i < KEY_NUM; i++)
      000DBA 7F 00            [12] 1186 	mov	r7,#0x00
      000DBC                       1187 00102$:
                                   1188 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:241: uint8_t pin = key_config[i].pin;
      000DBC EF               [12] 1189 	mov	a,r7
      000DBD 75 F0 03         [24] 1190 	mov	b,#0x03
      000DC0 A4               [48] 1191 	mul	ab
      000DC1 24 4E            [12] 1192 	add	a,#_key_config
      000DC3 FD               [12] 1193 	mov	r5,a
      000DC4 74 12            [12] 1194 	mov	a,#(_key_config >> 8)
      000DC6 35 F0            [12] 1195 	addc	a,b
      000DC8 FE               [12] 1196 	mov	r6,a
      000DC9 8D 82            [24] 1197 	mov	dpl,r5
      000DCB 8E 83            [24] 1198 	mov	dph,r6
      000DCD A3               [24] 1199 	inc	dptr
      000DCE A3               [24] 1200 	inc	dptr
      000DCF E4               [12] 1201 	clr	a
      000DD0 93               [24] 1202 	movc	a,@a+dptr
      000DD1 FC               [12] 1203 	mov	r4,a
                                   1204 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:242: uint8_t __xdata *port_ptr = key_config[i].port;
      000DD2 8D 82            [24] 1205 	mov	dpl,r5
      000DD4 8E 83            [24] 1206 	mov	dph,r6
      000DD6 E4               [12] 1207 	clr	a
      000DD7 93               [24] 1208 	movc	a,@a+dptr
      000DD8 FD               [12] 1209 	mov	r5,a
      000DD9 A3               [24] 1210 	inc	dptr
      000DDA E4               [12] 1211 	clr	a
      000DDB 93               [24] 1212 	movc	a,@a+dptr
      000DDC FE               [12] 1213 	mov	r6,a
                                   1214 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:252: mod_oc_ptr = port_ptr + 1;
      000DDD 74 01            [12] 1215 	mov	a,#0x01
      000DDF 2D               [12] 1216 	add	a,r5
      000DE0 FA               [12] 1217 	mov	r2,a
      000DE1 E4               [12] 1218 	clr	a
      000DE2 3E               [12] 1219 	addc	a,r6
      000DE3 FB               [12] 1220 	mov	r3,a
                                   1221 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:253: dir_pu_ptr = port_ptr + 2;
      000DE4 74 02            [12] 1222 	mov	a,#0x02
      000DE6 2D               [12] 1223 	add	a,r5
      000DE7 FD               [12] 1224 	mov	r5,a
      000DE8 E4               [12] 1225 	clr	a
      000DE9 3E               [12] 1226 	addc	a,r6
      000DEA FE               [12] 1227 	mov	r6,a
                                   1228 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:256: *mod_oc_ptr &= ~(1 << pin);      /* 推挽模式 */
      000DEB 8A 82            [24] 1229 	mov	dpl,r2
      000DED 8B 83            [24] 1230 	mov	dph,r3
      000DEF E0               [24] 1231 	movx	a,@dptr
      000DF0 F9               [12] 1232 	mov	r1,a
      000DF1 8C F0            [24] 1233 	mov	b,r4
      000DF3 05 F0            [12] 1234 	inc	b
      000DF5 74 01            [12] 1235 	mov	a,#0x01
      000DF7 80 02            [24] 1236 	sjmp	00113$
      000DF9                       1237 00111$:
      000DF9 25 E0            [12] 1238 	add	a,acc
      000DFB                       1239 00113$:
      000DFB D5 F0 FB         [24] 1240 	djnz	b,00111$
      000DFE FC               [12] 1241 	mov	r4,a
      000DFF F4               [12] 1242 	cpl	a
      000E00 52 01            [12] 1243 	anl	ar1,a
      000E02 8A 82            [24] 1244 	mov	dpl,r2
      000E04 8B 83            [24] 1245 	mov	dph,r3
      000E06 E9               [12] 1246 	mov	a,r1
      000E07 F0               [24] 1247 	movx	@dptr,a
                                   1248 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:257: *dir_pu_ptr |= (1 << pin);       /* 使能内部上拉 */
      000E08 8D 82            [24] 1249 	mov	dpl,r5
      000E0A 8E 83            [24] 1250 	mov	dph,r6
      000E0C E0               [24] 1251 	movx	a,@dptr
      000E0D 42 04            [12] 1252 	orl	ar4,a
      000E0F 8D 82            [24] 1253 	mov	dpl,r5
      000E11 8E 83            [24] 1254 	mov	dph,r6
      000E13 EC               [12] 1255 	mov	a,r4
      000E14 F0               [24] 1256 	movx	@dptr,a
                                   1257 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:239: for (i = 0; i < KEY_NUM; i++)
      000E15 0F               [12] 1258 	inc	r7
      000E16 BF 01 00         [24] 1259 	cjne	r7,#0x01,00114$
      000E19                       1260 00114$:
      000E19 40 A1            [24] 1261 	jc	00102$
                                   1262 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:259: }
      000E1B 22               [24] 1263 	ret
                                   1264 ;------------------------------------------------------------
                                   1265 ;Allocation info for local variables in function 'key_init'
                                   1266 ;------------------------------------------------------------
                                   1267 ;i                         Allocated to registers r7 
                                   1268 ;------------------------------------------------------------
                                   1269 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:263: void key_init(void)
                                   1270 ;	-----------------------------------------
                                   1271 ;	 function key_init
                                   1272 ;	-----------------------------------------
      000E1C                       1273 _key_init:
                                   1274 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:268: gpio_init();
      000E1C 12 0D BA         [24] 1275 	lcall	_gpio_init
                                   1276 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:271: key_cont = 0;
      000E1F 75 22 00         [24] 1277 	mov	_key_cont,#0x00
                                   1278 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:272: key_trg = 0;
      000E22 75 23 00         [24] 1279 	mov	_key_trg,#0x00
                                   1280 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:275: for (i = 0; i < KEY_NUM; i++)
      000E25 7F 00            [12] 1281 	mov	r7,#0x00
      000E27                       1282 00102$:
                                   1283 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:277: key_press_timer[i] = 0;
      000E27 EF               [12] 1284 	mov	a,r7
      000E28 2F               [12] 1285 	add	a,r7
      000E29 FE               [12] 1286 	mov	r6,a
      000E2A 24 24            [12] 1287 	add	a,#_key_press_timer
      000E2C F8               [12] 1288 	mov	r0,a
      000E2D 76 00            [12] 1289 	mov	@r0,#0x00
      000E2F 08               [12] 1290 	inc	r0
      000E30 76 00            [12] 1291 	mov	@r0,#0x00
                                   1292 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:278: key_long_triggered[i] = 0;
      000E32 EF               [12] 1293 	mov	a,r7
      000E33 24 26            [12] 1294 	add	a,#_key_long_triggered
      000E35 F8               [12] 1295 	mov	r0,a
      000E36 76 00            [12] 1296 	mov	@r0,#0x00
                                   1297 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:279: key_repeat_timer[i] = 0;
      000E38 EE               [12] 1298 	mov	a,r6
      000E39 24 27            [12] 1299 	add	a,#_key_repeat_timer
      000E3B F8               [12] 1300 	mov	r0,a
      000E3C 76 00            [12] 1301 	mov	@r0,#0x00
      000E3E 08               [12] 1302 	inc	r0
      000E3F 76 00            [12] 1303 	mov	@r0,#0x00
                                   1304 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:280: key_repeat_started[i] = 0;
      000E41 EF               [12] 1305 	mov	a,r7
      000E42 24 29            [12] 1306 	add	a,#_key_repeat_started
      000E44 F8               [12] 1307 	mov	r0,a
      000E45 76 00            [12] 1308 	mov	@r0,#0x00
                                   1309 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:281: debounce_cnt[i] = 0;
      000E47 EF               [12] 1310 	mov	a,r7
      000E48 24 2A            [12] 1311 	add	a,#_debounce_cnt
      000E4A F8               [12] 1312 	mov	r0,a
      000E4B 76 00            [12] 1313 	mov	@r0,#0x00
                                   1314 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:282: pressed_stable[i] = 0;
      000E4D EF               [12] 1315 	mov	a,r7
      000E4E 24 2B            [12] 1316 	add	a,#_pressed_stable
      000E50 F8               [12] 1317 	mov	r0,a
      000E51 76 00            [12] 1318 	mov	@r0,#0x00
                                   1319 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:283: last_pressed_stable[i] = 0;
      000E53 EF               [12] 1320 	mov	a,r7
      000E54 24 2C            [12] 1321 	add	a,#_last_pressed_stable
      000E56 F8               [12] 1322 	mov	r0,a
      000E57 76 00            [12] 1323 	mov	@r0,#0x00
                                   1324 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:275: for (i = 0; i < KEY_NUM; i++)
      000E59 0F               [12] 1325 	inc	r7
      000E5A BF 01 00         [24] 1326 	cjne	r7,#0x01,00115$
      000E5D                       1327 00115$:
      000E5D 40 C8            [24] 1328 	jc	00102$
                                   1329 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:287: g_evt_wr = 0;
      000E5F 75 2D 00         [24] 1330 	mov	_g_evt_wr,#0x00
                                   1331 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:288: g_evt_rd = 0;
      000E62 75 2E 00         [24] 1332 	mov	_g_evt_rd,#0x00
                                   1333 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:289: }
      000E65 22               [24] 1334 	ret
                                   1335 ;------------------------------------------------------------
                                   1336 ;Allocation info for local variables in function 'key_timer_tick'
                                   1337 ;------------------------------------------------------------
                                   1338 ;ms_tick                   Allocated with name '_key_timer_tick_ms_tick_65536_49'
                                   1339 ;------------------------------------------------------------
                                   1340 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:291: void key_timer_tick(void)
                                   1341 ;	-----------------------------------------
                                   1342 ;	 function key_timer_tick
                                   1343 ;	-----------------------------------------
      000E66                       1344 _key_timer_tick:
                                   1345 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:295: if (++ms_tick >= SCAN_TICK_DIV)
      000E66 74 01            [12] 1346 	mov	a,#0x01
      000E68 25 30            [12] 1347 	add	a,_key_timer_tick_ms_tick_65536_49
      000E6A FE               [12] 1348 	mov	r6,a
      000E6B E4               [12] 1349 	clr	a
      000E6C 35 31            [12] 1350 	addc	a,(_key_timer_tick_ms_tick_65536_49 + 1)
      000E6E FF               [12] 1351 	mov	r7,a
      000E6F 8E 30            [24] 1352 	mov	_key_timer_tick_ms_tick_65536_49,r6
      000E71 8F 31            [24] 1353 	mov	(_key_timer_tick_ms_tick_65536_49 + 1),r7
      000E73 C3               [12] 1354 	clr	c
      000E74 EE               [12] 1355 	mov	a,r6
      000E75 94 0A            [12] 1356 	subb	a,#0x0a
      000E77 EF               [12] 1357 	mov	a,r7
      000E78 94 00            [12] 1358 	subb	a,#0x00
      000E7A 40 08            [24] 1359 	jc	00103$
                                   1360 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:297: ms_tick = 0;
      000E7C E4               [12] 1361 	clr	a
      000E7D F5 30            [12] 1362 	mov	_key_timer_tick_ms_tick_65536_49,a
      000E7F F5 31            [12] 1363 	mov	(_key_timer_tick_ms_tick_65536_49 + 1),a
                                   1364 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:298: key_scan_classic();  /* 调用经典三行算法扫描 */
                                   1365 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:300: }
      000E81 02 0C 16         [24] 1366 	ljmp	_key_scan_classic
      000E84                       1367 00103$:
      000E84 22               [24] 1368 	ret
                                   1369 ;------------------------------------------------------------
                                   1370 ;Allocation info for local variables in function 'key_event_get'
                                   1371 ;------------------------------------------------------------
                                   1372 ;out                       Allocated to registers r5 r6 r7 
                                   1373 ;------------------------------------------------------------
                                   1374 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:302: uint8_t key_event_get(KeyEventMsg *out)
                                   1375 ;	-----------------------------------------
                                   1376 ;	 function key_event_get
                                   1377 ;	-----------------------------------------
      000E85                       1378 _key_event_get:
                                   1379 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:304: return evt_pop(out);
                                   1380 ;	d:/tools/WCH/ch554_sdcc-master/examples/usb_device_cdc/source/key.c:305: }
      000E85 02 0B 5D         [24] 1381 	ljmp	_evt_pop
                                   1382 	.area CSEG    (CODE)
                                   1383 	.area CONST   (CODE)
      00124E                       1384 _key_config:
      00124E 90 00                 1385 	.byte _P1, (_P1 >> 8)
      001250 02                    1386 	.db #0x02	; 2
                                   1387 	.area XINIT   (CODE)
                                   1388 	.area CABS    (ABS,CODE)
