/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// =============================
// Auto generate by python(mako)
// =============================

#define GPIO_EVT_CH0_RISE_EDGE 1
#define GPIO_EVT_CH1_RISE_EDGE 2
#define GPIO_EVT_CH2_RISE_EDGE 3
#define GPIO_EVT_CH3_RISE_EDGE 4
#define GPIO_EVT_CH4_RISE_EDGE 5
#define GPIO_EVT_CH5_RISE_EDGE 6
#define GPIO_EVT_CH6_RISE_EDGE 7
#define GPIO_EVT_CH7_RISE_EDGE 8
#define GPIO_EVT_CH0_FALL_EDGE 9
#define GPIO_EVT_CH1_FALL_EDGE 10
#define GPIO_EVT_CH2_FALL_EDGE 11
#define GPIO_EVT_CH3_FALL_EDGE 12
#define GPIO_EVT_CH4_FALL_EDGE 13
#define GPIO_EVT_CH5_FALL_EDGE 14
#define GPIO_EVT_CH6_FALL_EDGE 15
#define GPIO_EVT_CH7_FALL_EDGE 16
#define GPIO_EVT_CH0_ANY_EDGE 17
#define GPIO_EVT_CH1_ANY_EDGE 18
#define GPIO_EVT_CH2_ANY_EDGE 19
#define GPIO_EVT_CH3_ANY_EDGE 20
#define GPIO_EVT_CH4_ANY_EDGE 21
#define GPIO_EVT_CH5_ANY_EDGE 22
#define GPIO_EVT_CH6_ANY_EDGE 23
#define GPIO_EVT_CH7_ANY_EDGE 24
#define GPIO_EVT_ZERO_DET_POS0 25
#define GPIO_EVT_ZERO_DET_NEG0 26
#define GPIO_EVT_ZERO_DET_POS1 27
#define GPIO_EVT_ZERO_DET_NEG1 28
#define LEDC_EVT_DUTY_CHNG_END_CH0 29
#define LEDC_EVT_DUTY_CHNG_END_CH1 30
#define LEDC_EVT_DUTY_CHNG_END_CH2 31
#define LEDC_EVT_DUTY_CHNG_END_CH3 32
#define LEDC_EVT_DUTY_CHNG_END_CH4 33
#define LEDC_EVT_DUTY_CHNG_END_CH5 34
#define LEDC_EVT_DUTY_CHNG_END_CH6 35
#define LEDC_EVT_DUTY_CHNG_END_CH7 36
#define LEDC_EVT_OVF_CNT_PLS_CH0 37
#define LEDC_EVT_OVF_CNT_PLS_CH1 38
#define LEDC_EVT_OVF_CNT_PLS_CH2 39
#define LEDC_EVT_OVF_CNT_PLS_CH3 40
#define LEDC_EVT_OVF_CNT_PLS_CH4 41
#define LEDC_EVT_OVF_CNT_PLS_CH5 42
#define LEDC_EVT_OVF_CNT_PLS_CH6 43
#define LEDC_EVT_OVF_CNT_PLS_CH7 44
#define LEDC_EVT_TIME_OVF_TIMER0 45
#define LEDC_EVT_TIME_OVF_TIMER1 46
#define LEDC_EVT_TIME_OVF_TIMER2 47
#define LEDC_EVT_TIME_OVF_TIMER3 48
#define LEDC_EVT_TIMER0_CMP 49
#define LEDC_EVT_TIMER1_CMP 50
#define LEDC_EVT_TIMER2_CMP 51
#define LEDC_EVT_TIMER3_CMP 52
#define TG0_EVT_CNT_CMP_TIMER0 53
#define TG0_EVT_CNT_CMP_TIMER1 54
#define TG1_EVT_CNT_CMP_TIMER0 55
#define TG1_EVT_CNT_CMP_TIMER1 56
#define SYSTIMER_EVT_CNT_CMP0 57
#define SYSTIMER_EVT_CNT_CMP1 58
#define SYSTIMER_EVT_CNT_CMP2 59
#define MCPWM0_EVT_TIMER0_STOP 60
#define MCPWM0_EVT_TIMER1_STOP 61
#define MCPWM0_EVT_TIMER2_STOP 62
#define MCPWM0_EVT_TIMER0_TEZ 63
#define MCPWM0_EVT_TIMER1_TEZ 64
#define MCPWM0_EVT_TIMER2_TEZ 65
#define MCPWM0_EVT_TIMER0_TEP 66
#define MCPWM0_EVT_TIMER1_TEP 67
#define MCPWM0_EVT_TIMER2_TEP 68
#define MCPWM0_EVT_OP0_TEA 69
#define MCPWM0_EVT_OP1_TEA 70
#define MCPWM0_EVT_OP2_TEA 71
#define MCPWM0_EVT_OP0_TEB 72
#define MCPWM0_EVT_OP1_TEB 73
#define MCPWM0_EVT_OP2_TEB 74
#define MCPWM0_EVT_F0 75
#define MCPWM0_EVT_F1 76
#define MCPWM0_EVT_F2 77
#define MCPWM0_EVT_F0_CLR 78
#define MCPWM0_EVT_F1_CLR 79
#define MCPWM0_EVT_F2_CLR 80
#define MCPWM0_EVT_TZ0_CBC 81
#define MCPWM0_EVT_TZ1_CBC 82
#define MCPWM0_EVT_TZ2_CBC 83
#define MCPWM0_EVT_TZ0_OST 84
#define MCPWM0_EVT_TZ1_OST 85
#define MCPWM0_EVT_TZ2_OST 86
#define MCPWM0_EVT_CAP0 87
#define MCPWM0_EVT_CAP1 88
#define MCPWM0_EVT_CAP2 89
#define MCPWM0_EVT_OP0_TEE1 90
#define MCPWM0_EVT_OP1_TEE1 91
#define MCPWM0_EVT_OP2_TEE1 92
#define MCPWM0_EVT_OP0_TEE2 93
#define MCPWM0_EVT_OP1_TEE2 94
#define MCPWM0_EVT_OP2_TEE2 95
#define MCPWM1_EVT_TIMER0_STOP 96
#define MCPWM1_EVT_TIMER1_STOP 97
#define MCPWM1_EVT_TIMER2_STOP 98
#define MCPWM1_EVT_TIMER0_TEZ 99
#define MCPWM1_EVT_TIMER1_TEZ 100
#define MCPWM1_EVT_TIMER2_TEZ 101
#define MCPWM1_EVT_TIMER0_TEP 102
#define MCPWM1_EVT_TIMER1_TEP 103
#define MCPWM1_EVT_TIMER2_TEP 104
#define MCPWM1_EVT_OP0_TEA 105
#define MCPWM1_EVT_OP1_TEA 106
#define MCPWM1_EVT_OP2_TEA 107
#define MCPWM1_EVT_OP0_TEB 108
#define MCPWM1_EVT_OP1_TEB 109
#define MCPWM1_EVT_OP2_TEB 110
#define MCPWM1_EVT_F0 111
#define MCPWM1_EVT_F1 112
#define MCPWM1_EVT_F2 113
#define MCPWM1_EVT_F0_CLR 114
#define MCPWM1_EVT_F1_CLR 115
#define MCPWM1_EVT_F2_CLR 116
#define MCPWM1_EVT_TZ0_CBC 117
#define MCPWM1_EVT_TZ1_CBC 118
#define MCPWM1_EVT_TZ2_CBC 119
#define MCPWM1_EVT_TZ0_OST 120
#define MCPWM1_EVT_TZ1_OST 121
#define MCPWM1_EVT_TZ2_OST 122
#define MCPWM1_EVT_CAP0 123
#define MCPWM1_EVT_CAP1 124
#define MCPWM1_EVT_CAP2 125
#define MCPWM1_EVT_OP0_TEE1 126
#define MCPWM1_EVT_OP1_TEE1 127
#define MCPWM1_EVT_OP2_TEE1 128
#define MCPWM1_EVT_OP0_TEE2 129
#define MCPWM1_EVT_OP1_TEE2 130
#define MCPWM1_EVT_OP2_TEE2 131
#define ADC_EVT_CONV_CMPLT0 132
#define ADC_EVT_EQ_ABOVE_THRESH0 133
#define ADC_EVT_EQ_ABOVE_THRESH1 134
#define ADC_EVT_EQ_BELOW_THRESH0 135
#define ADC_EVT_EQ_BELOW_THRESH1 136
#define ADC_EVT_RESULT_DONE0 137
#define ADC_EVT_STOPPED0 138
#define ADC_EVT_STARTED0 139
#define REGDMA_EVT_DONE0 140
#define REGDMA_EVT_DONE1 141
#define REGDMA_EVT_DONE2 142
#define REGDMA_EVT_DONE3 143
#define REGDMA_EVT_ERR0 144
#define REGDMA_EVT_ERR1 145
#define REGDMA_EVT_ERR2 146
#define REGDMA_EVT_ERR3 147
#define TMPSNSR_EVT_OVER_LIMIT 148
#define I2S0_EVT_RX_DONE 149
#define I2S0_EVT_TX_DONE 150
#define I2S0_EVT_X_WORDS_RECEIVED 151
#define I2S0_EVT_X_WORDS_SENT 152
#define I2S1_EVT_RX_DONE 153
#define I2S1_EVT_TX_DONE 154
#define I2S1_EVT_X_WORDS_RECEIVED 155
#define I2S1_EVT_X_WORDS_SENT 156
#define I2S2_EVT_RX_DONE 157
#define I2S2_EVT_TX_DONE 158
#define I2S2_EVT_X_WORDS_RECEIVED 159
#define I2S2_EVT_X_WORDS_SENT 160
#define ULP_EVT_ERR_INTR 161
#define ULP_EVT_HALT 162
#define ULP_EVT_START_INTR 163
#define RTC_EVT_TICK 164
#define RTC_EVT_OVF 165
#define RTC_EVT_CMP 166
#define PDMA_AHB_EVT_IN_DONE_CH0 167
#define PDMA_AHB_EVT_IN_DONE_CH1 168
#define PDMA_AHB_EVT_IN_DONE_CH2 169
#define PDMA_AHB_EVT_IN_SUC_EOF_CH0 170
#define PDMA_AHB_EVT_IN_SUC_EOF_CH1 171
#define PDMA_AHB_EVT_IN_SUC_EOF_CH2 172
#define PDMA_AHB_EVT_IN_FIFO_EMPTY_CH0 173
#define PDMA_AHB_EVT_IN_FIFO_EMPTY_CH1 174
#define PDMA_AHB_EVT_IN_FIFO_EMPTY_CH2 175
#define PDMA_AHB_EVT_IN_FIFO_FULL_CH0 176
#define PDMA_AHB_EVT_IN_FIFO_FULL_CH1 177
#define PDMA_AHB_EVT_IN_FIFO_FULL_CH2 178
#define PDMA_AHB_EVT_OUT_DONE_CH0 179
#define PDMA_AHB_EVT_OUT_DONE_CH1 180
#define PDMA_AHB_EVT_OUT_DONE_CH2 181
#define PDMA_AHB_EVT_OUT_EOF_CH0 182
#define PDMA_AHB_EVT_OUT_EOF_CH1 183
#define PDMA_AHB_EVT_OUT_EOF_CH2 184
#define PDMA_AHB_EVT_OUT_TOTAL_EOF_CH0 185
#define PDMA_AHB_EVT_OUT_TOTAL_EOF_CH1 186
#define PDMA_AHB_EVT_OUT_TOTAL_EOF_CH2 187
#define PDMA_AHB_EVT_OUT_FIFO_EMPTY_CH0 188
#define PDMA_AHB_EVT_OUT_FIFO_EMPTY_CH1 189
#define PDMA_AHB_EVT_OUT_FIFO_EMPTY_CH2 190
#define PDMA_AHB_EVT_OUT_FIFO_FULL_CH0 191
#define PDMA_AHB_EVT_OUT_FIFO_FULL_CH1 192
#define PDMA_AHB_EVT_OUT_FIFO_FULL_CH2 193
#define PDMA_AXI_EVT_IN_DONE_CH0 194
#define PDMA_AXI_EVT_IN_DONE_CH1 195
#define PDMA_AXI_EVT_IN_DONE_CH2 196
#define PDMA_AXI_EVT_IN_SUC_EOF_CH0 197
#define PDMA_AXI_EVT_IN_SUC_EOF_CH1 198
#define PDMA_AXI_EVT_IN_SUC_EOF_CH2 199
#define PDMA_AXI_EVT_IN_FIFO_EMPTY_CH0 200
#define PDMA_AXI_EVT_IN_FIFO_EMPTY_CH1 201
#define PDMA_AXI_EVT_IN_FIFO_EMPTY_CH2 202
#define PDMA_AXI_EVT_IN_FIFO_FULL_CH0 203
#define PDMA_AXI_EVT_IN_FIFO_FULL_CH1 204
#define PDMA_AXI_EVT_IN_FIFO_FULL_CH2 205
#define PDMA_AXI_EVT_OUT_DONE_CH0 206
#define PDMA_AXI_EVT_OUT_DONE_CH1 207
#define PDMA_AXI_EVT_OUT_DONE_CH2 208
#define PDMA_AXI_EVT_OUT_EOF_CH0 209
#define PDMA_AXI_EVT_OUT_EOF_CH1 210
#define PDMA_AXI_EVT_OUT_EOF_CH2 211
#define PDMA_AXI_EVT_OUT_TOTAL_EOF_CH0 212
#define PDMA_AXI_EVT_OUT_TOTAL_EOF_CH1 213
#define PDMA_AXI_EVT_OUT_TOTAL_EOF_CH2 214
#define PDMA_AXI_EVT_OUT_FIFO_EMPTY_CH0 215
#define PDMA_AXI_EVT_OUT_FIFO_EMPTY_CH1 216
#define PDMA_AXI_EVT_OUT_FIFO_EMPTY_CH2 217
#define PDMA_AXI_EVT_OUT_FIFO_FULL_CH0 218
#define PDMA_AXI_EVT_OUT_FIFO_FULL_CH1 219
#define PDMA_AXI_EVT_OUT_FIFO_FULL_CH2 220
#define PMU_EVT_SLEEP_WEEKUP 221
#define DMA2D_EVT_IN_DONE_CH0 222
#define DMA2D_EVT_IN_DONE_CH1 223
#define DMA2D_EVT_IN_SUC_EOF_CH0 224
#define DMA2D_EVT_IN_SUC_EOF_CH1 225
#define DMA2D_EVT_OUT_DONE_CH0 226
#define DMA2D_EVT_OUT_DONE_CH1 227
#define DMA2D_EVT_OUT_DONE_CH2 228
#define DMA2D_EVT_OUT_EOF_CH0 229
#define DMA2D_EVT_OUT_EOF_CH1 230
#define DMA2D_EVT_OUT_EOF_CH2 231
#define DMA2D_EVT_OUT_TOTAL_EOF_CH0 232
#define DMA2D_EVT_OUT_TOTAL_EOF_CH1 233
#define DMA2D_EVT_OUT_TOTAL_EOF_CH2 234

#define GPIO_TASK_CH0_SET 1
#define GPIO_TASK_CH1_SET 2
#define GPIO_TASK_CH2_SET 3
#define GPIO_TASK_CH3_SET 4
#define GPIO_TASK_CH4_SET 5
#define GPIO_TASK_CH5_SET 6
#define GPIO_TASK_CH6_SET 7
#define GPIO_TASK_CH7_SET 8
#define GPIO_TASK_CH0_CLEAR 9
#define GPIO_TASK_CH1_CLEAR 10
#define GPIO_TASK_CH2_CLEAR 11
#define GPIO_TASK_CH3_CLEAR 12
#define GPIO_TASK_CH4_CLEAR 13
#define GPIO_TASK_CH5_CLEAR 14
#define GPIO_TASK_CH6_CLEAR 15
#define GPIO_TASK_CH7_CLEAR 16
#define GPIO_TASK_CH0_TOGGLE 17
#define GPIO_TASK_CH1_TOGGLE 18
#define GPIO_TASK_CH2_TOGGLE 19
#define GPIO_TASK_CH3_TOGGLE 20
#define GPIO_TASK_CH4_TOGGLE 21
#define GPIO_TASK_CH5_TOGGLE 22
#define GPIO_TASK_CH6_TOGGLE 23
#define GPIO_TASK_CH7_TOGGLE 24
#define LEDC_TASK_TIMER0_RES_UPDATE 25
#define LEDC_TASK_TIMER1_RES_UPDATE 26
#define LEDC_TASK_TIMER2_RES_UPDATE 27
#define LEDC_TASK_TIMER3_RES_UPDATE 28
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH0 29
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH1 30
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH2 31
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH3 32
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH4 33
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH5 34
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH6 35
#define LEDC_TASK_DUTY_SCALE_UPDATE_CH7 36
#define LEDC_TASK_TIMER0_CAP 37
#define LEDC_TASK_TIMER1_CAP 38
#define LEDC_TASK_TIMER2_CAP 39
#define LEDC_TASK_TIMER3_CAP 40
#define LEDC_TASK_SIG_OUT_DIS_CH0 41
#define LEDC_TASK_SIG_OUT_DIS_CH1 42
#define LEDC_TASK_SIG_OUT_DIS_CH2 43
#define LEDC_TASK_SIG_OUT_DIS_CH3 44
#define LEDC_TASK_SIG_OUT_DIS_CH4 45
#define LEDC_TASK_SIG_OUT_DIS_CH5 46
#define LEDC_TASK_SIG_OUT_DIS_CH6 47
#define LEDC_TASK_SIG_OUT_DIS_CH7 48
#define LEDC_TASK_OVF_CNT_RST_CH0 49
#define LEDC_TASK_OVF_CNT_RST_CH1 50
#define LEDC_TASK_OVF_CNT_RST_CH2 51
#define LEDC_TASK_OVF_CNT_RST_CH3 52
#define LEDC_TASK_OVF_CNT_RST_CH4 53
#define LEDC_TASK_OVF_CNT_RST_CH5 54
#define LEDC_TASK_OVF_CNT_RST_CH6 55
#define LEDC_TASK_OVF_CNT_RST_CH7 56
#define LEDC_TASK_TIMER0_RST 57
#define LEDC_TASK_TIMER1_RST 58
#define LEDC_TASK_TIMER2_RST 59
#define LEDC_TASK_TIMER3_RST 60
#define LEDC_TASK_TIMER0_RESUME 61
#define LEDC_TASK_TIMER1_RESUME 62
#define LEDC_TASK_TIMER2_RESUME 63
#define LEDC_TASK_TIMER3_RESUME 64
#define LEDC_TASK_TIMER0_PAUSE 65
#define LEDC_TASK_TIMER1_PAUSE 66
#define LEDC_TASK_TIMER2_PAUSE 67
#define LEDC_TASK_TIMER3_PAUSE 68
#define LEDC_TASK_GAMMA_RESTART_CH0 69
#define LEDC_TASK_GAMMA_RESTART_CH1 70
#define LEDC_TASK_GAMMA_RESTART_CH2 71
#define LEDC_TASK_GAMMA_RESTART_CH3 72
#define LEDC_TASK_GAMMA_RESTART_CH4 73
#define LEDC_TASK_GAMMA_RESTART_CH5 74
#define LEDC_TASK_GAMMA_RESTART_CH6 75
#define LEDC_TASK_GAMMA_RESTART_CH7 76
#define LEDC_TASK_GAMMA_PAUSE_CH0 77
#define LEDC_TASK_GAMMA_PAUSE_CH1 78
#define LEDC_TASK_GAMMA_PAUSE_CH2 79
#define LEDC_TASK_GAMMA_PAUSE_CH3 80
#define LEDC_TASK_GAMMA_PAUSE_CH4 81
#define LEDC_TASK_GAMMA_PAUSE_CH5 82
#define LEDC_TASK_GAMMA_PAUSE_CH6 83
#define LEDC_TASK_GAMMA_PAUSE_CH7 84
#define LEDC_TASK_GAMMA_RESUME_CH0 85
#define LEDC_TASK_GAMMA_RESUME_CH1 86
#define LEDC_TASK_GAMMA_RESUME_CH2 87
#define LEDC_TASK_GAMMA_RESUME_CH3 88
#define LEDC_TASK_GAMMA_RESUME_CH4 89
#define LEDC_TASK_GAMMA_RESUME_CH5 90
#define LEDC_TASK_GAMMA_RESUME_CH6 91
#define LEDC_TASK_GAMMA_RESUME_CH7 92
#define TG0_TASK_CNT_START_TIMER0 93
#define TG0_TASK_ALARM_START_TIMER0 94
#define TG0_TASK_CNT_STOP_TIMER0 95
#define TG0_TASK_CNT_RELOAD_TIMER0 96
#define TG0_TASK_CNT_CAP_TIMER0 97
#define TG0_TASK_CNT_START_TIMER1 98
#define TG0_TASK_ALARM_START_TIMER1 99
#define TG0_TASK_CNT_STOP_TIMER1 100
#define TG0_TASK_CNT_RELOAD_TIMER1 101
#define TG0_TASK_CNT_CAP_TIMER1 102
#define TG1_TASK_CNT_START_TIMER0 103
#define TG1_TASK_ALARM_START_TIMER0 104
#define TG1_TASK_CNT_STOP_TIMER0 105
#define TG1_TASK_CNT_RELOAD_TIMER0 106
#define TG1_TASK_CNT_CAP_TIMER0 107
#define TG1_TASK_CNT_START_TIMER1 108
#define TG1_TASK_ALARM_START_TIMER1 109
#define TG1_TASK_CNT_STOP_TIMER1 110
#define TG1_TASK_CNT_RELOAD_TIMER1 111
#define TG1_TASK_CNT_CAP_TIMER1 112
#define MCPWM0_TASK_CMPR0_A_UP 113
#define MCPWM0_TASK_CMPR1_A_UP 114
#define MCPWM0_TASK_CMPR2_A_UP 115
#define MCPWM0_TASK_CMPR0_B_UP 116
#define MCPWM0_TASK_CMPR1_B_UP 117
#define MCPWM0_TASK_CMPR2_B_UP 118
#define MCPWM0_TASK_GEN_STOP 119
#define MCPWM0_TASK_TIMER0_SYN 120
#define MCPWM0_TASK_TIMER1_SYN 121
#define MCPWM0_TASK_TIMER2_SYN 122
#define MCPWM0_TASK_TIMER0_PERIOD_UP 123
#define MCPWM0_TASK_TIMER1_PERIOD_UP 124
#define MCPWM0_TASK_TIMER2_PERIOD_UP 125
#define MCPWM0_TASK_TZ0_OST 126
#define MCPWM0_TASK_TZ1_OST 127
#define MCPWM0_TASK_TZ2_OST 128
#define MCPWM0_TASK_CLR0_OST 129
#define MCPWM0_TASK_CLR1_OST 130
#define MCPWM0_TASK_CLR2_OST 131
#define MCPWM0_TASK_CAP0 132
#define MCPWM0_TASK_CAP1 133
#define MCPWM0_TASK_CAP2 134
#define MCPWM1_TASK_CMPR0_A_UP 135
#define MCPWM1_TASK_CMPR1_A_UP 136
#define MCPWM1_TASK_CMPR2_A_UP 137
#define MCPWM1_TASK_CMPR0_B_UP 138
#define MCPWM1_TASK_CMPR1_B_UP 139
#define MCPWM1_TASK_CMPR2_B_UP 140
#define MCPWM1_TASK_GEN_STOP 141
#define MCPWM1_TASK_TIMER0_SYN 142
#define MCPWM1_TASK_TIMER1_SYN 143
#define MCPWM1_TASK_TIMER2_SYN 144
#define MCPWM1_TASK_TIMER0_PERIOD_UP 145
#define MCPWM1_TASK_TIMER1_PERIOD_UP 146
#define MCPWM1_TASK_TIMER2_PERIOD_UP 147
#define MCPWM1_TASK_TZ0_OST 148
#define MCPWM1_TASK_TZ1_OST 149
#define MCPWM1_TASK_TZ2_OST 150
#define MCPWM1_TASK_CLR0_OST 151
#define MCPWM1_TASK_CLR1_OST 152
#define MCPWM1_TASK_CLR2_OST 153
#define MCPWM1_TASK_CAP0 154
#define MCPWM1_TASK_CAP1 155
#define MCPWM1_TASK_CAP2 156
#define ADC_TASK_SAMPLE0 157
#define ADC_TASK_SAMPLE1 158
#define ADC_TASK_START0 159
#define ADC_TASK_STOP0 160
#define REGDMA_TASK_START0 161
#define REGDMA_TASK_START1 162
#define REGDMA_TASK_START2 163
#define REGDMA_TASK_START3 164
#define TMPSNSR_TASK_START_SAMPLE 165
#define TMPSNSR_TASK_STOP_SAMPLE 166
#define I2S0_TASK_START_RX 167
#define I2S0_TASK_START_TX 168
#define I2S0_TASK_STOP_RX 169
#define I2S0_TASK_STOP_TX 170
#define I2S1_TASK_START_RX 171
#define I2S1_TASK_START_TX 172
#define I2S1_TASK_STOP_RX 173
#define I2S1_TASK_STOP_TX 174
#define I2S2_TASK_START_RX 175
#define I2S2_TASK_START_TX 176
#define I2S2_TASK_STOP_RX 177
#define I2S2_TASK_STOP_TX 178
#define ULP_TASK_WAKEUP_CPU 179
#define ULP_TASK_INT_CPU 180
#define RTC_TASK_START 181
#define RTC_TASK_STOP 182
#define RTC_TASK_CLR 183
#define RTC_TASK_TRIGGERFLW 184
#define PDMA_AHB_TASK_IN_START_CH0 185
#define PDMA_AHB_TASK_IN_START_CH1 186
#define PDMA_AHB_TASK_IN_START_CH2 187
#define PDMA_AHB_TASK_OUT_START_CH0 188
#define PDMA_AHB_TASK_OUT_START_CH1 189
#define PDMA_AHB_TASK_OUT_START_CH2 190
#define PDMA_AXI_TASK_IN_START_CH0 191
#define PDMA_AXI_TASK_IN_START_CH1 192
#define PDMA_AXI_TASK_IN_START_CH2 193
#define PDMA_AXI_TASK_OUT_START_CH0 194
#define PDMA_AXI_TASK_OUT_START_CH1 195
#define PDMA_AXI_TASK_OUT_START_CH2 196
#define PMU_TASK_SLEEP_REQ 197
#define DMA2D_TASK_IN_START_CH0 198
#define DMA2D_TASK_IN_START_CH1 199
#define DMA2D_TASK_IN_DSCR_READY_CH0 200
#define DMA2D_TASK_IN_DSCR_READY_CH1 201
#define DMA2D_TASK_OUT_START_CH0 202
#define DMA2D_TASK_OUT_START_CH1 203
#define DMA2D_TASK_OUT_START_CH2 204
#define DMA2D_TASK_OUT_DSCR_READY_CH0 205
#define DMA2D_TASK_OUT_DSCR_READY_CH1 206
#define DMA2D_TASK_OUT_DSCR_READY_CH2 207
