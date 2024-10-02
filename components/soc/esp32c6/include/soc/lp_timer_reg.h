/**
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LP_TIMER_TAR0_LOW_REG register
 *  need_des
 */
#define LP_TIMER_TAR0_LOW_REG (DR_REG_LP_TIMER_BASE + 0x0)
/** LP_TIMER_MAIN_TIMER_TAR_LOW0 : R/W; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_LOW0    0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_TAR_LOW0_M  (LP_TIMER_MAIN_TIMER_TAR_LOW0_V << LP_TIMER_MAIN_TIMER_TAR_LOW0_S)
#define LP_TIMER_MAIN_TIMER_TAR_LOW0_V  0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_TAR_LOW0_S  0

/** LP_TIMER_TAR0_HIGH_REG register
 *  need_des
 */
#define LP_TIMER_TAR0_HIGH_REG (DR_REG_LP_TIMER_BASE + 0x4)
/** LP_TIMER_MAIN_TIMER_TAR_HIGH0 : R/W; bitpos: [15:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_HIGH0    0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_TAR_HIGH0_M  (LP_TIMER_MAIN_TIMER_TAR_HIGH0_V << LP_TIMER_MAIN_TIMER_TAR_HIGH0_S)
#define LP_TIMER_MAIN_TIMER_TAR_HIGH0_V  0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_TAR_HIGH0_S  0
/** LP_TIMER_MAIN_TIMER_TAR_EN0 : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_EN0    (BIT(31))
#define LP_TIMER_MAIN_TIMER_TAR_EN0_M  (LP_TIMER_MAIN_TIMER_TAR_EN0_V << LP_TIMER_MAIN_TIMER_TAR_EN0_S)
#define LP_TIMER_MAIN_TIMER_TAR_EN0_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_TAR_EN0_S  31

/** LP_TIMER_TAR1_LOW_REG register
 *  need_des
 */
#define LP_TIMER_TAR1_LOW_REG (DR_REG_LP_TIMER_BASE + 0x8)
/** LP_TIMER_MAIN_TIMER_TAR_LOW1 : R/W; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_LOW1    0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_TAR_LOW1_M  (LP_TIMER_MAIN_TIMER_TAR_LOW1_V << LP_TIMER_MAIN_TIMER_TAR_LOW1_S)
#define LP_TIMER_MAIN_TIMER_TAR_LOW1_V  0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_TAR_LOW1_S  0

/** LP_TIMER_TAR1_HIGH_REG register
 *  need_des
 */
#define LP_TIMER_TAR1_HIGH_REG (DR_REG_LP_TIMER_BASE + 0xc)
/** LP_TIMER_MAIN_TIMER_TAR_HIGH1 : R/W; bitpos: [15:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_HIGH1    0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_TAR_HIGH1_M  (LP_TIMER_MAIN_TIMER_TAR_HIGH1_V << LP_TIMER_MAIN_TIMER_TAR_HIGH1_S)
#define LP_TIMER_MAIN_TIMER_TAR_HIGH1_V  0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_TAR_HIGH1_S  0
/** LP_TIMER_MAIN_TIMER_TAR_EN1 : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_TAR_EN1    (BIT(31))
#define LP_TIMER_MAIN_TIMER_TAR_EN1_M  (LP_TIMER_MAIN_TIMER_TAR_EN1_V << LP_TIMER_MAIN_TIMER_TAR_EN1_S)
#define LP_TIMER_MAIN_TIMER_TAR_EN1_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_TAR_EN1_S  31

/** LP_TIMER_UPDATE_REG register
 *  need_des
 */
#define LP_TIMER_UPDATE_REG (DR_REG_LP_TIMER_BASE + 0x10)
/** LP_TIMER_MAIN_TIMER_UPDATE : WT; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_UPDATE    (BIT(28))
#define LP_TIMER_MAIN_TIMER_UPDATE_M  (LP_TIMER_MAIN_TIMER_UPDATE_V << LP_TIMER_MAIN_TIMER_UPDATE_S)
#define LP_TIMER_MAIN_TIMER_UPDATE_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_UPDATE_S  28
/** LP_TIMER_MAIN_TIMER_XTAL_OFF : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_XTAL_OFF    (BIT(29))
#define LP_TIMER_MAIN_TIMER_XTAL_OFF_M  (LP_TIMER_MAIN_TIMER_XTAL_OFF_V << LP_TIMER_MAIN_TIMER_XTAL_OFF_S)
#define LP_TIMER_MAIN_TIMER_XTAL_OFF_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_XTAL_OFF_S  29
/** LP_TIMER_MAIN_TIMER_SYS_STALL : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_SYS_STALL    (BIT(30))
#define LP_TIMER_MAIN_TIMER_SYS_STALL_M  (LP_TIMER_MAIN_TIMER_SYS_STALL_V << LP_TIMER_MAIN_TIMER_SYS_STALL_S)
#define LP_TIMER_MAIN_TIMER_SYS_STALL_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_SYS_STALL_S  30
/** LP_TIMER_MAIN_TIMER_SYS_RST : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_SYS_RST    (BIT(31))
#define LP_TIMER_MAIN_TIMER_SYS_RST_M  (LP_TIMER_MAIN_TIMER_SYS_RST_V << LP_TIMER_MAIN_TIMER_SYS_RST_S)
#define LP_TIMER_MAIN_TIMER_SYS_RST_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_SYS_RST_S  31

/** LP_TIMER_MAIN_BUF0_LOW_REG register
 *  need_des
 */
#define LP_TIMER_MAIN_BUF0_LOW_REG (DR_REG_LP_TIMER_BASE + 0x14)
/** LP_TIMER_MAIN_TIMER_BUF0_LOW : RO; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_BUF0_LOW    0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_BUF0_LOW_M  (LP_TIMER_MAIN_TIMER_BUF0_LOW_V << LP_TIMER_MAIN_TIMER_BUF0_LOW_S)
#define LP_TIMER_MAIN_TIMER_BUF0_LOW_V  0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_BUF0_LOW_S  0

/** LP_TIMER_MAIN_BUF0_HIGH_REG register
 *  need_des
 */
#define LP_TIMER_MAIN_BUF0_HIGH_REG (DR_REG_LP_TIMER_BASE + 0x18)
/** LP_TIMER_MAIN_TIMER_BUF0_HIGH : RO; bitpos: [15:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_BUF0_HIGH    0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_BUF0_HIGH_M  (LP_TIMER_MAIN_TIMER_BUF0_HIGH_V << LP_TIMER_MAIN_TIMER_BUF0_HIGH_S)
#define LP_TIMER_MAIN_TIMER_BUF0_HIGH_V  0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_BUF0_HIGH_S  0

/** LP_TIMER_MAIN_BUF1_LOW_REG register
 *  need_des
 */
#define LP_TIMER_MAIN_BUF1_LOW_REG (DR_REG_LP_TIMER_BASE + 0x1c)
/** LP_TIMER_MAIN_TIMER_BUF1_LOW : RO; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_BUF1_LOW    0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_BUF1_LOW_M  (LP_TIMER_MAIN_TIMER_BUF1_LOW_V << LP_TIMER_MAIN_TIMER_BUF1_LOW_S)
#define LP_TIMER_MAIN_TIMER_BUF1_LOW_V  0xFFFFFFFFU
#define LP_TIMER_MAIN_TIMER_BUF1_LOW_S  0

/** LP_TIMER_MAIN_BUF1_HIGH_REG register
 *  need_des
 */
#define LP_TIMER_MAIN_BUF1_HIGH_REG (DR_REG_LP_TIMER_BASE + 0x20)
/** LP_TIMER_MAIN_TIMER_BUF1_HIGH : RO; bitpos: [15:0]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_BUF1_HIGH    0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_BUF1_HIGH_M  (LP_TIMER_MAIN_TIMER_BUF1_HIGH_V << LP_TIMER_MAIN_TIMER_BUF1_HIGH_S)
#define LP_TIMER_MAIN_TIMER_BUF1_HIGH_V  0x0000FFFFU
#define LP_TIMER_MAIN_TIMER_BUF1_HIGH_S  0

/** LP_TIMER_MAIN_OVERFLOW_REG register
 *  need_des
 */
#define LP_TIMER_MAIN_OVERFLOW_REG (DR_REG_LP_TIMER_BASE + 0x24)
/** LP_TIMER_MAIN_TIMER_ALARM_LOAD : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_ALARM_LOAD    (BIT(31))
#define LP_TIMER_MAIN_TIMER_ALARM_LOAD_M  (LP_TIMER_MAIN_TIMER_ALARM_LOAD_V << LP_TIMER_MAIN_TIMER_ALARM_LOAD_S)
#define LP_TIMER_MAIN_TIMER_ALARM_LOAD_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_ALARM_LOAD_S  31

/** LP_TIMER_INT_RAW_REG register
 *  need_des
 */
#define LP_TIMER_INT_RAW_REG (DR_REG_LP_TIMER_BASE + 0x28)
/** LP_TIMER_OVERFLOW_RAW : R/WTC/SS; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_OVERFLOW_RAW    (BIT(30))
#define LP_TIMER_OVERFLOW_RAW_M  (LP_TIMER_OVERFLOW_RAW_V << LP_TIMER_OVERFLOW_RAW_S)
#define LP_TIMER_OVERFLOW_RAW_V  0x00000001U
#define LP_TIMER_OVERFLOW_RAW_S  30
/** LP_TIMER_SOC_WAKEUP_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_SOC_WAKEUP_INT_RAW    (BIT(31))
#define LP_TIMER_SOC_WAKEUP_INT_RAW_M  (LP_TIMER_SOC_WAKEUP_INT_RAW_V << LP_TIMER_SOC_WAKEUP_INT_RAW_S)
#define LP_TIMER_SOC_WAKEUP_INT_RAW_V  0x00000001U
#define LP_TIMER_SOC_WAKEUP_INT_RAW_S  31

/** LP_TIMER_INT_ST_REG register
 *  need_des
 */
#define LP_TIMER_INT_ST_REG (DR_REG_LP_TIMER_BASE + 0x2c)
/** LP_TIMER_OVERFLOW_ST : RO; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_OVERFLOW_ST    (BIT(30))
#define LP_TIMER_OVERFLOW_ST_M  (LP_TIMER_OVERFLOW_ST_V << LP_TIMER_OVERFLOW_ST_S)
#define LP_TIMER_OVERFLOW_ST_V  0x00000001U
#define LP_TIMER_OVERFLOW_ST_S  30
/** LP_TIMER_SOC_WAKEUP_INT_ST : RO; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_SOC_WAKEUP_INT_ST    (BIT(31))
#define LP_TIMER_SOC_WAKEUP_INT_ST_M  (LP_TIMER_SOC_WAKEUP_INT_ST_V << LP_TIMER_SOC_WAKEUP_INT_ST_S)
#define LP_TIMER_SOC_WAKEUP_INT_ST_V  0x00000001U
#define LP_TIMER_SOC_WAKEUP_INT_ST_S  31

/** LP_TIMER_INT_ENA_REG register
 *  need_des
 */
#define LP_TIMER_INT_ENA_REG (DR_REG_LP_TIMER_BASE + 0x30)
/** LP_TIMER_OVERFLOW_ENA : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_OVERFLOW_ENA    (BIT(30))
#define LP_TIMER_OVERFLOW_ENA_M  (LP_TIMER_OVERFLOW_ENA_V << LP_TIMER_OVERFLOW_ENA_S)
#define LP_TIMER_OVERFLOW_ENA_V  0x00000001U
#define LP_TIMER_OVERFLOW_ENA_S  30
/** LP_TIMER_SOC_WAKEUP_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_SOC_WAKEUP_INT_ENA    (BIT(31))
#define LP_TIMER_SOC_WAKEUP_INT_ENA_M  (LP_TIMER_SOC_WAKEUP_INT_ENA_V << LP_TIMER_SOC_WAKEUP_INT_ENA_S)
#define LP_TIMER_SOC_WAKEUP_INT_ENA_V  0x00000001U
#define LP_TIMER_SOC_WAKEUP_INT_ENA_S  31

/** LP_TIMER_INT_CLR_REG register
 *  need_des
 */
#define LP_TIMER_INT_CLR_REG (DR_REG_LP_TIMER_BASE + 0x34)
/** LP_TIMER_OVERFLOW_CLR : WT; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_OVERFLOW_CLR    (BIT(30))
#define LP_TIMER_OVERFLOW_CLR_M  (LP_TIMER_OVERFLOW_CLR_V << LP_TIMER_OVERFLOW_CLR_S)
#define LP_TIMER_OVERFLOW_CLR_V  0x00000001U
#define LP_TIMER_OVERFLOW_CLR_S  30
/** LP_TIMER_SOC_WAKEUP_INT_CLR : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_SOC_WAKEUP_INT_CLR    (BIT(31))
#define LP_TIMER_SOC_WAKEUP_INT_CLR_M  (LP_TIMER_SOC_WAKEUP_INT_CLR_V << LP_TIMER_SOC_WAKEUP_INT_CLR_S)
#define LP_TIMER_SOC_WAKEUP_INT_CLR_V  0x00000001U
#define LP_TIMER_SOC_WAKEUP_INT_CLR_S  31

/** LP_TIMER_LP_INT_RAW_REG register
 *  need_des
 */
#define LP_TIMER_LP_INT_RAW_REG (DR_REG_LP_TIMER_BASE + 0x38)
/** LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW : R/WTC/SS; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW    (BIT(30))
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW_M  (LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW_V << LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW_S)
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_RAW_S  30
/** LP_TIMER_MAIN_TIMER_LP_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_LP_INT_RAW    (BIT(31))
#define LP_TIMER_MAIN_TIMER_LP_INT_RAW_M  (LP_TIMER_MAIN_TIMER_LP_INT_RAW_V << LP_TIMER_MAIN_TIMER_LP_INT_RAW_S)
#define LP_TIMER_MAIN_TIMER_LP_INT_RAW_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_LP_INT_RAW_S  31

/** LP_TIMER_LP_INT_ST_REG register
 *  need_des
 */
#define LP_TIMER_LP_INT_ST_REG (DR_REG_LP_TIMER_BASE + 0x3c)
/** LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST : RO; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST    (BIT(30))
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST_M  (LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST_V << LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST_S)
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ST_S  30
/** LP_TIMER_MAIN_TIMER_LP_INT_ST : RO; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_LP_INT_ST    (BIT(31))
#define LP_TIMER_MAIN_TIMER_LP_INT_ST_M  (LP_TIMER_MAIN_TIMER_LP_INT_ST_V << LP_TIMER_MAIN_TIMER_LP_INT_ST_S)
#define LP_TIMER_MAIN_TIMER_LP_INT_ST_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_LP_INT_ST_S  31

/** LP_TIMER_LP_INT_ENA_REG register
 *  need_des
 */
#define LP_TIMER_LP_INT_ENA_REG (DR_REG_LP_TIMER_BASE + 0x40)
/** LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA    (BIT(30))
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA_M  (LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA_V << LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA_S)
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_ENA_S  30
/** LP_TIMER_MAIN_TIMER_LP_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_LP_INT_ENA    (BIT(31))
#define LP_TIMER_MAIN_TIMER_LP_INT_ENA_M  (LP_TIMER_MAIN_TIMER_LP_INT_ENA_V << LP_TIMER_MAIN_TIMER_LP_INT_ENA_S)
#define LP_TIMER_MAIN_TIMER_LP_INT_ENA_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_LP_INT_ENA_S  31

/** LP_TIMER_LP_INT_CLR_REG register
 *  need_des
 */
#define LP_TIMER_LP_INT_CLR_REG (DR_REG_LP_TIMER_BASE + 0x44)
/** LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR : WT; bitpos: [30]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR    (BIT(30))
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR_M  (LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR_V << LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR_S)
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_OVERFLOW_LP_INT_CLR_S  30
/** LP_TIMER_MAIN_TIMER_LP_INT_CLR : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_MAIN_TIMER_LP_INT_CLR    (BIT(31))
#define LP_TIMER_MAIN_TIMER_LP_INT_CLR_M  (LP_TIMER_MAIN_TIMER_LP_INT_CLR_V << LP_TIMER_MAIN_TIMER_LP_INT_CLR_S)
#define LP_TIMER_MAIN_TIMER_LP_INT_CLR_V  0x00000001U
#define LP_TIMER_MAIN_TIMER_LP_INT_CLR_S  31

/** LP_TIMER_DATE_REG register
 *  need_des
 */
#define LP_TIMER_DATE_REG (DR_REG_LP_TIMER_BASE + 0x3fc)
/** LP_TIMER_DATE : R/W; bitpos: [30:0]; default: 34672976;
 *  need_des
 */
#define LP_TIMER_DATE    0x7FFFFFFFU
#define LP_TIMER_DATE_M  (LP_TIMER_DATE_V << LP_TIMER_DATE_S)
#define LP_TIMER_DATE_V  0x7FFFFFFFU
#define LP_TIMER_DATE_S  0
/** LP_TIMER_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LP_TIMER_CLK_EN    (BIT(31))
#define LP_TIMER_CLK_EN_M  (LP_TIMER_CLK_EN_V << LP_TIMER_CLK_EN_S)
#define LP_TIMER_CLK_EN_V  0x00000001U
#define LP_TIMER_CLK_EN_S  31

#ifdef __cplusplus
}
#endif
