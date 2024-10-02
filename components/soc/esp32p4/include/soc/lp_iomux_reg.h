/**
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LP_IOMUX_CLK_EN_REG register
 *  Reserved
 */
#define LP_IOMUX_CLK_EN_REG (DR_REG_LP_IOMUX_BASE + 0x0)
/** LP_IOMUX_REG_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  Reserved
 */
#define LP_IOMUX_REG_CLK_EN    (BIT(0))
#define LP_IOMUX_REG_CLK_EN_M  (LP_IOMUX_REG_CLK_EN_V << LP_IOMUX_REG_CLK_EN_S)
#define LP_IOMUX_REG_CLK_EN_V  0x00000001U
#define LP_IOMUX_REG_CLK_EN_S  0

/** LP_IOMUX_VER_DATE_REG register
 *  Reserved
 */
#define LP_IOMUX_VER_DATE_REG (DR_REG_LP_IOMUX_BASE + 0x4)
/** LP_IOMUX_REG_VER_DATE : R/W; bitpos: [27:0]; default: 2294547;
 *  Reserved
 */
#define LP_IOMUX_REG_VER_DATE    0x0FFFFFFFU
#define LP_IOMUX_REG_VER_DATE_M  (LP_IOMUX_REG_VER_DATE_V << LP_IOMUX_REG_VER_DATE_S)
#define LP_IOMUX_REG_VER_DATE_V  0x0FFFFFFFU
#define LP_IOMUX_REG_VER_DATE_S  0

/** LP_IOMUX_PAD0_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD0_REG (DR_REG_LP_IOMUX_BASE + 0x8)
/** LP_IOMUX_REG_PAD0_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD0_DRV    0x00000003U
#define LP_IOMUX_REG_PAD0_DRV_M  (LP_IOMUX_REG_PAD0_DRV_V << LP_IOMUX_REG_PAD0_DRV_S)
#define LP_IOMUX_REG_PAD0_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD0_DRV_S  0
/** LP_IOMUX_REG_PAD0_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD0_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD0_RDE_M  (LP_IOMUX_REG_PAD0_RDE_V << LP_IOMUX_REG_PAD0_RDE_S)
#define LP_IOMUX_REG_PAD0_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD0_RDE_S  2
/** LP_IOMUX_REG_PAD0_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD0_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD0_RUE_M  (LP_IOMUX_REG_PAD0_RUE_V << LP_IOMUX_REG_PAD0_RUE_S)
#define LP_IOMUX_REG_PAD0_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD0_RUE_S  3
/** LP_IOMUX_REG_PAD0_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD0_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD0_MUX_SEL_M  (LP_IOMUX_REG_PAD0_MUX_SEL_V << LP_IOMUX_REG_PAD0_MUX_SEL_S)
#define LP_IOMUX_REG_PAD0_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD0_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD0_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD0_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD0_FUN_SEL_M  (LP_IOMUX_REG_PAD0_FUN_SEL_V << LP_IOMUX_REG_PAD0_FUN_SEL_S)
#define LP_IOMUX_REG_PAD0_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD0_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD0_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD0_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD0_SLP_SEL_M  (LP_IOMUX_REG_PAD0_SLP_SEL_V << LP_IOMUX_REG_PAD0_SLP_SEL_S)
#define LP_IOMUX_REG_PAD0_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD0_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD0_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD0_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD0_SLP_IE_M  (LP_IOMUX_REG_PAD0_SLP_IE_V << LP_IOMUX_REG_PAD0_SLP_IE_S)
#define LP_IOMUX_REG_PAD0_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD0_SLP_IE_S  8
/** LP_IOMUX_REG_PAD0_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD0_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD0_SLP_OE_M  (LP_IOMUX_REG_PAD0_SLP_OE_V << LP_IOMUX_REG_PAD0_SLP_OE_S)
#define LP_IOMUX_REG_PAD0_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD0_SLP_OE_S  9
/** LP_IOMUX_REG_PAD0_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD0_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD0_FUN_IE_M  (LP_IOMUX_REG_PAD0_FUN_IE_V << LP_IOMUX_REG_PAD0_FUN_IE_S)
#define LP_IOMUX_REG_PAD0_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD0_FUN_IE_S  10
/** LP_IOMUX_REG_PAD0_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD0_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD0_FILTER_EN_M  (LP_IOMUX_REG_PAD0_FILTER_EN_V << LP_IOMUX_REG_PAD0_FILTER_EN_S)
#define LP_IOMUX_REG_PAD0_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD0_FILTER_EN_S  11

/** LP_IOMUX_PAD1_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD1_REG (DR_REG_LP_IOMUX_BASE + 0xc)
/** LP_IOMUX_REG_PAD1_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD1_DRV    0x00000003U
#define LP_IOMUX_REG_PAD1_DRV_M  (LP_IOMUX_REG_PAD1_DRV_V << LP_IOMUX_REG_PAD1_DRV_S)
#define LP_IOMUX_REG_PAD1_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD1_DRV_S  0
/** LP_IOMUX_REG_PAD1_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD1_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD1_RDE_M  (LP_IOMUX_REG_PAD1_RDE_V << LP_IOMUX_REG_PAD1_RDE_S)
#define LP_IOMUX_REG_PAD1_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD1_RDE_S  2
/** LP_IOMUX_REG_PAD1_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD1_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD1_RUE_M  (LP_IOMUX_REG_PAD1_RUE_V << LP_IOMUX_REG_PAD1_RUE_S)
#define LP_IOMUX_REG_PAD1_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD1_RUE_S  3
/** LP_IOMUX_REG_PAD1_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD1_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD1_MUX_SEL_M  (LP_IOMUX_REG_PAD1_MUX_SEL_V << LP_IOMUX_REG_PAD1_MUX_SEL_S)
#define LP_IOMUX_REG_PAD1_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD1_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD1_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD1_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD1_FUN_SEL_M  (LP_IOMUX_REG_PAD1_FUN_SEL_V << LP_IOMUX_REG_PAD1_FUN_SEL_S)
#define LP_IOMUX_REG_PAD1_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD1_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD1_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD1_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD1_SLP_SEL_M  (LP_IOMUX_REG_PAD1_SLP_SEL_V << LP_IOMUX_REG_PAD1_SLP_SEL_S)
#define LP_IOMUX_REG_PAD1_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD1_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD1_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD1_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD1_SLP_IE_M  (LP_IOMUX_REG_PAD1_SLP_IE_V << LP_IOMUX_REG_PAD1_SLP_IE_S)
#define LP_IOMUX_REG_PAD1_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD1_SLP_IE_S  8
/** LP_IOMUX_REG_PAD1_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD1_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD1_SLP_OE_M  (LP_IOMUX_REG_PAD1_SLP_OE_V << LP_IOMUX_REG_PAD1_SLP_OE_S)
#define LP_IOMUX_REG_PAD1_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD1_SLP_OE_S  9
/** LP_IOMUX_REG_PAD1_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD1_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD1_FUN_IE_M  (LP_IOMUX_REG_PAD1_FUN_IE_V << LP_IOMUX_REG_PAD1_FUN_IE_S)
#define LP_IOMUX_REG_PAD1_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD1_FUN_IE_S  10
/** LP_IOMUX_REG_PAD1_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD1_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD1_FILTER_EN_M  (LP_IOMUX_REG_PAD1_FILTER_EN_V << LP_IOMUX_REG_PAD1_FILTER_EN_S)
#define LP_IOMUX_REG_PAD1_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD1_FILTER_EN_S  11

/** LP_IOMUX_PAD2_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD2_REG (DR_REG_LP_IOMUX_BASE + 0x10)
/** LP_IOMUX_REG_PAD2_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD2_DRV    0x00000003U
#define LP_IOMUX_REG_PAD2_DRV_M  (LP_IOMUX_REG_PAD2_DRV_V << LP_IOMUX_REG_PAD2_DRV_S)
#define LP_IOMUX_REG_PAD2_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD2_DRV_S  0
/** LP_IOMUX_REG_PAD2_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD2_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD2_RDE_M  (LP_IOMUX_REG_PAD2_RDE_V << LP_IOMUX_REG_PAD2_RDE_S)
#define LP_IOMUX_REG_PAD2_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD2_RDE_S  2
/** LP_IOMUX_REG_PAD2_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD2_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD2_RUE_M  (LP_IOMUX_REG_PAD2_RUE_V << LP_IOMUX_REG_PAD2_RUE_S)
#define LP_IOMUX_REG_PAD2_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD2_RUE_S  3
/** LP_IOMUX_REG_PAD2_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD2_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD2_MUX_SEL_M  (LP_IOMUX_REG_PAD2_MUX_SEL_V << LP_IOMUX_REG_PAD2_MUX_SEL_S)
#define LP_IOMUX_REG_PAD2_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD2_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD2_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD2_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD2_FUN_SEL_M  (LP_IOMUX_REG_PAD2_FUN_SEL_V << LP_IOMUX_REG_PAD2_FUN_SEL_S)
#define LP_IOMUX_REG_PAD2_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD2_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD2_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD2_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD2_SLP_SEL_M  (LP_IOMUX_REG_PAD2_SLP_SEL_V << LP_IOMUX_REG_PAD2_SLP_SEL_S)
#define LP_IOMUX_REG_PAD2_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD2_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD2_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD2_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD2_SLP_IE_M  (LP_IOMUX_REG_PAD2_SLP_IE_V << LP_IOMUX_REG_PAD2_SLP_IE_S)
#define LP_IOMUX_REG_PAD2_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD2_SLP_IE_S  8
/** LP_IOMUX_REG_PAD2_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD2_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD2_SLP_OE_M  (LP_IOMUX_REG_PAD2_SLP_OE_V << LP_IOMUX_REG_PAD2_SLP_OE_S)
#define LP_IOMUX_REG_PAD2_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD2_SLP_OE_S  9
/** LP_IOMUX_REG_PAD2_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD2_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD2_FUN_IE_M  (LP_IOMUX_REG_PAD2_FUN_IE_V << LP_IOMUX_REG_PAD2_FUN_IE_S)
#define LP_IOMUX_REG_PAD2_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD2_FUN_IE_S  10
/** LP_IOMUX_REG_PAD2_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD2_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD2_FILTER_EN_M  (LP_IOMUX_REG_PAD2_FILTER_EN_V << LP_IOMUX_REG_PAD2_FILTER_EN_S)
#define LP_IOMUX_REG_PAD2_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD2_FILTER_EN_S  11

/** LP_IOMUX_PAD3_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD3_REG (DR_REG_LP_IOMUX_BASE + 0x14)
/** LP_IOMUX_REG_PAD3_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD3_DRV    0x00000003U
#define LP_IOMUX_REG_PAD3_DRV_M  (LP_IOMUX_REG_PAD3_DRV_V << LP_IOMUX_REG_PAD3_DRV_S)
#define LP_IOMUX_REG_PAD3_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD3_DRV_S  0
/** LP_IOMUX_REG_PAD3_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD3_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD3_RDE_M  (LP_IOMUX_REG_PAD3_RDE_V << LP_IOMUX_REG_PAD3_RDE_S)
#define LP_IOMUX_REG_PAD3_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD3_RDE_S  2
/** LP_IOMUX_REG_PAD3_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD3_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD3_RUE_M  (LP_IOMUX_REG_PAD3_RUE_V << LP_IOMUX_REG_PAD3_RUE_S)
#define LP_IOMUX_REG_PAD3_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD3_RUE_S  3
/** LP_IOMUX_REG_PAD3_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD3_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD3_MUX_SEL_M  (LP_IOMUX_REG_PAD3_MUX_SEL_V << LP_IOMUX_REG_PAD3_MUX_SEL_S)
#define LP_IOMUX_REG_PAD3_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD3_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD3_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD3_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD3_FUN_SEL_M  (LP_IOMUX_REG_PAD3_FUN_SEL_V << LP_IOMUX_REG_PAD3_FUN_SEL_S)
#define LP_IOMUX_REG_PAD3_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD3_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD3_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD3_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD3_SLP_SEL_M  (LP_IOMUX_REG_PAD3_SLP_SEL_V << LP_IOMUX_REG_PAD3_SLP_SEL_S)
#define LP_IOMUX_REG_PAD3_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD3_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD3_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD3_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD3_SLP_IE_M  (LP_IOMUX_REG_PAD3_SLP_IE_V << LP_IOMUX_REG_PAD3_SLP_IE_S)
#define LP_IOMUX_REG_PAD3_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD3_SLP_IE_S  8
/** LP_IOMUX_REG_PAD3_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD3_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD3_SLP_OE_M  (LP_IOMUX_REG_PAD3_SLP_OE_V << LP_IOMUX_REG_PAD3_SLP_OE_S)
#define LP_IOMUX_REG_PAD3_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD3_SLP_OE_S  9
/** LP_IOMUX_REG_PAD3_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD3_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD3_FUN_IE_M  (LP_IOMUX_REG_PAD3_FUN_IE_V << LP_IOMUX_REG_PAD3_FUN_IE_S)
#define LP_IOMUX_REG_PAD3_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD3_FUN_IE_S  10
/** LP_IOMUX_REG_PAD3_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD3_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD3_FILTER_EN_M  (LP_IOMUX_REG_PAD3_FILTER_EN_V << LP_IOMUX_REG_PAD3_FILTER_EN_S)
#define LP_IOMUX_REG_PAD3_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD3_FILTER_EN_S  11

/** LP_IOMUX_PAD4_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD4_REG (DR_REG_LP_IOMUX_BASE + 0x18)
/** LP_IOMUX_REG_PAD4_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD4_DRV    0x00000003U
#define LP_IOMUX_REG_PAD4_DRV_M  (LP_IOMUX_REG_PAD4_DRV_V << LP_IOMUX_REG_PAD4_DRV_S)
#define LP_IOMUX_REG_PAD4_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD4_DRV_S  0
/** LP_IOMUX_REG_PAD4_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD4_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD4_RDE_M  (LP_IOMUX_REG_PAD4_RDE_V << LP_IOMUX_REG_PAD4_RDE_S)
#define LP_IOMUX_REG_PAD4_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD4_RDE_S  2
/** LP_IOMUX_REG_PAD4_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD4_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD4_RUE_M  (LP_IOMUX_REG_PAD4_RUE_V << LP_IOMUX_REG_PAD4_RUE_S)
#define LP_IOMUX_REG_PAD4_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD4_RUE_S  3
/** LP_IOMUX_REG_PAD4_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD4_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD4_MUX_SEL_M  (LP_IOMUX_REG_PAD4_MUX_SEL_V << LP_IOMUX_REG_PAD4_MUX_SEL_S)
#define LP_IOMUX_REG_PAD4_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD4_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD4_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD4_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD4_FUN_SEL_M  (LP_IOMUX_REG_PAD4_FUN_SEL_V << LP_IOMUX_REG_PAD4_FUN_SEL_S)
#define LP_IOMUX_REG_PAD4_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD4_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD4_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD4_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD4_SLP_SEL_M  (LP_IOMUX_REG_PAD4_SLP_SEL_V << LP_IOMUX_REG_PAD4_SLP_SEL_S)
#define LP_IOMUX_REG_PAD4_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD4_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD4_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD4_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD4_SLP_IE_M  (LP_IOMUX_REG_PAD4_SLP_IE_V << LP_IOMUX_REG_PAD4_SLP_IE_S)
#define LP_IOMUX_REG_PAD4_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD4_SLP_IE_S  8
/** LP_IOMUX_REG_PAD4_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD4_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD4_SLP_OE_M  (LP_IOMUX_REG_PAD4_SLP_OE_V << LP_IOMUX_REG_PAD4_SLP_OE_S)
#define LP_IOMUX_REG_PAD4_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD4_SLP_OE_S  9
/** LP_IOMUX_REG_PAD4_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD4_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD4_FUN_IE_M  (LP_IOMUX_REG_PAD4_FUN_IE_V << LP_IOMUX_REG_PAD4_FUN_IE_S)
#define LP_IOMUX_REG_PAD4_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD4_FUN_IE_S  10
/** LP_IOMUX_REG_PAD4_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD4_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD4_FILTER_EN_M  (LP_IOMUX_REG_PAD4_FILTER_EN_V << LP_IOMUX_REG_PAD4_FILTER_EN_S)
#define LP_IOMUX_REG_PAD4_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD4_FILTER_EN_S  11

/** LP_IOMUX_PAD5_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD5_REG (DR_REG_LP_IOMUX_BASE + 0x1c)
/** LP_IOMUX_REG_PAD5_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD5_DRV    0x00000003U
#define LP_IOMUX_REG_PAD5_DRV_M  (LP_IOMUX_REG_PAD5_DRV_V << LP_IOMUX_REG_PAD5_DRV_S)
#define LP_IOMUX_REG_PAD5_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD5_DRV_S  0
/** LP_IOMUX_REG_PAD5_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD5_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD5_RDE_M  (LP_IOMUX_REG_PAD5_RDE_V << LP_IOMUX_REG_PAD5_RDE_S)
#define LP_IOMUX_REG_PAD5_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD5_RDE_S  2
/** LP_IOMUX_REG_PAD5_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD5_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD5_RUE_M  (LP_IOMUX_REG_PAD5_RUE_V << LP_IOMUX_REG_PAD5_RUE_S)
#define LP_IOMUX_REG_PAD5_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD5_RUE_S  3
/** LP_IOMUX_REG_PAD5_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD5_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD5_MUX_SEL_M  (LP_IOMUX_REG_PAD5_MUX_SEL_V << LP_IOMUX_REG_PAD5_MUX_SEL_S)
#define LP_IOMUX_REG_PAD5_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD5_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD5_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD5_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD5_FUN_SEL_M  (LP_IOMUX_REG_PAD5_FUN_SEL_V << LP_IOMUX_REG_PAD5_FUN_SEL_S)
#define LP_IOMUX_REG_PAD5_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD5_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD5_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD5_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD5_SLP_SEL_M  (LP_IOMUX_REG_PAD5_SLP_SEL_V << LP_IOMUX_REG_PAD5_SLP_SEL_S)
#define LP_IOMUX_REG_PAD5_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD5_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD5_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD5_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD5_SLP_IE_M  (LP_IOMUX_REG_PAD5_SLP_IE_V << LP_IOMUX_REG_PAD5_SLP_IE_S)
#define LP_IOMUX_REG_PAD5_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD5_SLP_IE_S  8
/** LP_IOMUX_REG_PAD5_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD5_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD5_SLP_OE_M  (LP_IOMUX_REG_PAD5_SLP_OE_V << LP_IOMUX_REG_PAD5_SLP_OE_S)
#define LP_IOMUX_REG_PAD5_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD5_SLP_OE_S  9
/** LP_IOMUX_REG_PAD5_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD5_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD5_FUN_IE_M  (LP_IOMUX_REG_PAD5_FUN_IE_V << LP_IOMUX_REG_PAD5_FUN_IE_S)
#define LP_IOMUX_REG_PAD5_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD5_FUN_IE_S  10
/** LP_IOMUX_REG_PAD5_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD5_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD5_FILTER_EN_M  (LP_IOMUX_REG_PAD5_FILTER_EN_V << LP_IOMUX_REG_PAD5_FILTER_EN_S)
#define LP_IOMUX_REG_PAD5_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD5_FILTER_EN_S  11

/** LP_IOMUX_PAD6_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD6_REG (DR_REG_LP_IOMUX_BASE + 0x20)
/** LP_IOMUX_REG_PAD6_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD6_DRV    0x00000003U
#define LP_IOMUX_REG_PAD6_DRV_M  (LP_IOMUX_REG_PAD6_DRV_V << LP_IOMUX_REG_PAD6_DRV_S)
#define LP_IOMUX_REG_PAD6_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD6_DRV_S  0
/** LP_IOMUX_REG_PAD6_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD6_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD6_RDE_M  (LP_IOMUX_REG_PAD6_RDE_V << LP_IOMUX_REG_PAD6_RDE_S)
#define LP_IOMUX_REG_PAD6_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD6_RDE_S  2
/** LP_IOMUX_REG_PAD6_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD6_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD6_RUE_M  (LP_IOMUX_REG_PAD6_RUE_V << LP_IOMUX_REG_PAD6_RUE_S)
#define LP_IOMUX_REG_PAD6_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD6_RUE_S  3
/** LP_IOMUX_REG_PAD6_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD6_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD6_MUX_SEL_M  (LP_IOMUX_REG_PAD6_MUX_SEL_V << LP_IOMUX_REG_PAD6_MUX_SEL_S)
#define LP_IOMUX_REG_PAD6_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD6_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD6_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD6_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD6_FUN_SEL_M  (LP_IOMUX_REG_PAD6_FUN_SEL_V << LP_IOMUX_REG_PAD6_FUN_SEL_S)
#define LP_IOMUX_REG_PAD6_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD6_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD6_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD6_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD6_SLP_SEL_M  (LP_IOMUX_REG_PAD6_SLP_SEL_V << LP_IOMUX_REG_PAD6_SLP_SEL_S)
#define LP_IOMUX_REG_PAD6_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD6_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD6_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD6_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD6_SLP_IE_M  (LP_IOMUX_REG_PAD6_SLP_IE_V << LP_IOMUX_REG_PAD6_SLP_IE_S)
#define LP_IOMUX_REG_PAD6_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD6_SLP_IE_S  8
/** LP_IOMUX_REG_PAD6_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD6_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD6_SLP_OE_M  (LP_IOMUX_REG_PAD6_SLP_OE_V << LP_IOMUX_REG_PAD6_SLP_OE_S)
#define LP_IOMUX_REG_PAD6_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD6_SLP_OE_S  9
/** LP_IOMUX_REG_PAD6_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD6_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD6_FUN_IE_M  (LP_IOMUX_REG_PAD6_FUN_IE_V << LP_IOMUX_REG_PAD6_FUN_IE_S)
#define LP_IOMUX_REG_PAD6_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD6_FUN_IE_S  10
/** LP_IOMUX_REG_PAD6_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD6_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD6_FILTER_EN_M  (LP_IOMUX_REG_PAD6_FILTER_EN_V << LP_IOMUX_REG_PAD6_FILTER_EN_S)
#define LP_IOMUX_REG_PAD6_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD6_FILTER_EN_S  11

/** LP_IOMUX_PAD7_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD7_REG (DR_REG_LP_IOMUX_BASE + 0x24)
/** LP_IOMUX_REG_PAD7_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD7_DRV    0x00000003U
#define LP_IOMUX_REG_PAD7_DRV_M  (LP_IOMUX_REG_PAD7_DRV_V << LP_IOMUX_REG_PAD7_DRV_S)
#define LP_IOMUX_REG_PAD7_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD7_DRV_S  0
/** LP_IOMUX_REG_PAD7_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD7_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD7_RDE_M  (LP_IOMUX_REG_PAD7_RDE_V << LP_IOMUX_REG_PAD7_RDE_S)
#define LP_IOMUX_REG_PAD7_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD7_RDE_S  2
/** LP_IOMUX_REG_PAD7_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD7_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD7_RUE_M  (LP_IOMUX_REG_PAD7_RUE_V << LP_IOMUX_REG_PAD7_RUE_S)
#define LP_IOMUX_REG_PAD7_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD7_RUE_S  3
/** LP_IOMUX_REG_PAD7_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD7_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD7_MUX_SEL_M  (LP_IOMUX_REG_PAD7_MUX_SEL_V << LP_IOMUX_REG_PAD7_MUX_SEL_S)
#define LP_IOMUX_REG_PAD7_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD7_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD7_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD7_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD7_FUN_SEL_M  (LP_IOMUX_REG_PAD7_FUN_SEL_V << LP_IOMUX_REG_PAD7_FUN_SEL_S)
#define LP_IOMUX_REG_PAD7_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD7_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD7_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD7_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD7_SLP_SEL_M  (LP_IOMUX_REG_PAD7_SLP_SEL_V << LP_IOMUX_REG_PAD7_SLP_SEL_S)
#define LP_IOMUX_REG_PAD7_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD7_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD7_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD7_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD7_SLP_IE_M  (LP_IOMUX_REG_PAD7_SLP_IE_V << LP_IOMUX_REG_PAD7_SLP_IE_S)
#define LP_IOMUX_REG_PAD7_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD7_SLP_IE_S  8
/** LP_IOMUX_REG_PAD7_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD7_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD7_SLP_OE_M  (LP_IOMUX_REG_PAD7_SLP_OE_V << LP_IOMUX_REG_PAD7_SLP_OE_S)
#define LP_IOMUX_REG_PAD7_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD7_SLP_OE_S  9
/** LP_IOMUX_REG_PAD7_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD7_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD7_FUN_IE_M  (LP_IOMUX_REG_PAD7_FUN_IE_V << LP_IOMUX_REG_PAD7_FUN_IE_S)
#define LP_IOMUX_REG_PAD7_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD7_FUN_IE_S  10
/** LP_IOMUX_REG_PAD7_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD7_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD7_FILTER_EN_M  (LP_IOMUX_REG_PAD7_FILTER_EN_V << LP_IOMUX_REG_PAD7_FILTER_EN_S)
#define LP_IOMUX_REG_PAD7_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD7_FILTER_EN_S  11

/** LP_IOMUX_PAD8_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD8_REG (DR_REG_LP_IOMUX_BASE + 0x28)
/** LP_IOMUX_REG_PAD8_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD8_DRV    0x00000003U
#define LP_IOMUX_REG_PAD8_DRV_M  (LP_IOMUX_REG_PAD8_DRV_V << LP_IOMUX_REG_PAD8_DRV_S)
#define LP_IOMUX_REG_PAD8_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD8_DRV_S  0
/** LP_IOMUX_REG_PAD8_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD8_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD8_RDE_M  (LP_IOMUX_REG_PAD8_RDE_V << LP_IOMUX_REG_PAD8_RDE_S)
#define LP_IOMUX_REG_PAD8_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD8_RDE_S  2
/** LP_IOMUX_REG_PAD8_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD8_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD8_RUE_M  (LP_IOMUX_REG_PAD8_RUE_V << LP_IOMUX_REG_PAD8_RUE_S)
#define LP_IOMUX_REG_PAD8_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD8_RUE_S  3
/** LP_IOMUX_REG_PAD8_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD8_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD8_MUX_SEL_M  (LP_IOMUX_REG_PAD8_MUX_SEL_V << LP_IOMUX_REG_PAD8_MUX_SEL_S)
#define LP_IOMUX_REG_PAD8_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD8_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD8_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD8_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD8_FUN_SEL_M  (LP_IOMUX_REG_PAD8_FUN_SEL_V << LP_IOMUX_REG_PAD8_FUN_SEL_S)
#define LP_IOMUX_REG_PAD8_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD8_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD8_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD8_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD8_SLP_SEL_M  (LP_IOMUX_REG_PAD8_SLP_SEL_V << LP_IOMUX_REG_PAD8_SLP_SEL_S)
#define LP_IOMUX_REG_PAD8_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD8_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD8_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD8_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD8_SLP_IE_M  (LP_IOMUX_REG_PAD8_SLP_IE_V << LP_IOMUX_REG_PAD8_SLP_IE_S)
#define LP_IOMUX_REG_PAD8_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD8_SLP_IE_S  8
/** LP_IOMUX_REG_PAD8_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD8_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD8_SLP_OE_M  (LP_IOMUX_REG_PAD8_SLP_OE_V << LP_IOMUX_REG_PAD8_SLP_OE_S)
#define LP_IOMUX_REG_PAD8_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD8_SLP_OE_S  9
/** LP_IOMUX_REG_PAD8_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD8_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD8_FUN_IE_M  (LP_IOMUX_REG_PAD8_FUN_IE_V << LP_IOMUX_REG_PAD8_FUN_IE_S)
#define LP_IOMUX_REG_PAD8_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD8_FUN_IE_S  10
/** LP_IOMUX_REG_PAD8_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD8_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD8_FILTER_EN_M  (LP_IOMUX_REG_PAD8_FILTER_EN_V << LP_IOMUX_REG_PAD8_FILTER_EN_S)
#define LP_IOMUX_REG_PAD8_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD8_FILTER_EN_S  11

/** LP_IOMUX_PAD9_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD9_REG (DR_REG_LP_IOMUX_BASE + 0x2c)
/** LP_IOMUX_REG_PAD9_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD9_DRV    0x00000003U
#define LP_IOMUX_REG_PAD9_DRV_M  (LP_IOMUX_REG_PAD9_DRV_V << LP_IOMUX_REG_PAD9_DRV_S)
#define LP_IOMUX_REG_PAD9_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD9_DRV_S  0
/** LP_IOMUX_REG_PAD9_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD9_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD9_RDE_M  (LP_IOMUX_REG_PAD9_RDE_V << LP_IOMUX_REG_PAD9_RDE_S)
#define LP_IOMUX_REG_PAD9_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD9_RDE_S  2
/** LP_IOMUX_REG_PAD9_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD9_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD9_RUE_M  (LP_IOMUX_REG_PAD9_RUE_V << LP_IOMUX_REG_PAD9_RUE_S)
#define LP_IOMUX_REG_PAD9_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD9_RUE_S  3
/** LP_IOMUX_REG_PAD9_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD9_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD9_MUX_SEL_M  (LP_IOMUX_REG_PAD9_MUX_SEL_V << LP_IOMUX_REG_PAD9_MUX_SEL_S)
#define LP_IOMUX_REG_PAD9_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD9_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD9_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD9_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD9_FUN_SEL_M  (LP_IOMUX_REG_PAD9_FUN_SEL_V << LP_IOMUX_REG_PAD9_FUN_SEL_S)
#define LP_IOMUX_REG_PAD9_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD9_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD9_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD9_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD9_SLP_SEL_M  (LP_IOMUX_REG_PAD9_SLP_SEL_V << LP_IOMUX_REG_PAD9_SLP_SEL_S)
#define LP_IOMUX_REG_PAD9_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD9_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD9_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD9_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD9_SLP_IE_M  (LP_IOMUX_REG_PAD9_SLP_IE_V << LP_IOMUX_REG_PAD9_SLP_IE_S)
#define LP_IOMUX_REG_PAD9_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD9_SLP_IE_S  8
/** LP_IOMUX_REG_PAD9_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD9_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD9_SLP_OE_M  (LP_IOMUX_REG_PAD9_SLP_OE_V << LP_IOMUX_REG_PAD9_SLP_OE_S)
#define LP_IOMUX_REG_PAD9_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD9_SLP_OE_S  9
/** LP_IOMUX_REG_PAD9_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD9_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD9_FUN_IE_M  (LP_IOMUX_REG_PAD9_FUN_IE_V << LP_IOMUX_REG_PAD9_FUN_IE_S)
#define LP_IOMUX_REG_PAD9_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD9_FUN_IE_S  10
/** LP_IOMUX_REG_PAD9_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD9_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD9_FILTER_EN_M  (LP_IOMUX_REG_PAD9_FILTER_EN_V << LP_IOMUX_REG_PAD9_FILTER_EN_S)
#define LP_IOMUX_REG_PAD9_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD9_FILTER_EN_S  11

/** LP_IOMUX_PAD10_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD10_REG (DR_REG_LP_IOMUX_BASE + 0x30)
/** LP_IOMUX_REG_PAD10_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD10_DRV    0x00000003U
#define LP_IOMUX_REG_PAD10_DRV_M  (LP_IOMUX_REG_PAD10_DRV_V << LP_IOMUX_REG_PAD10_DRV_S)
#define LP_IOMUX_REG_PAD10_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD10_DRV_S  0
/** LP_IOMUX_REG_PAD10_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD10_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD10_RDE_M  (LP_IOMUX_REG_PAD10_RDE_V << LP_IOMUX_REG_PAD10_RDE_S)
#define LP_IOMUX_REG_PAD10_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD10_RDE_S  2
/** LP_IOMUX_REG_PAD10_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD10_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD10_RUE_M  (LP_IOMUX_REG_PAD10_RUE_V << LP_IOMUX_REG_PAD10_RUE_S)
#define LP_IOMUX_REG_PAD10_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD10_RUE_S  3
/** LP_IOMUX_REG_PAD10_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD10_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD10_MUX_SEL_M  (LP_IOMUX_REG_PAD10_MUX_SEL_V << LP_IOMUX_REG_PAD10_MUX_SEL_S)
#define LP_IOMUX_REG_PAD10_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD10_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD10_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD10_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD10_FUN_SEL_M  (LP_IOMUX_REG_PAD10_FUN_SEL_V << LP_IOMUX_REG_PAD10_FUN_SEL_S)
#define LP_IOMUX_REG_PAD10_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD10_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD10_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD10_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD10_SLP_SEL_M  (LP_IOMUX_REG_PAD10_SLP_SEL_V << LP_IOMUX_REG_PAD10_SLP_SEL_S)
#define LP_IOMUX_REG_PAD10_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD10_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD10_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD10_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD10_SLP_IE_M  (LP_IOMUX_REG_PAD10_SLP_IE_V << LP_IOMUX_REG_PAD10_SLP_IE_S)
#define LP_IOMUX_REG_PAD10_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD10_SLP_IE_S  8
/** LP_IOMUX_REG_PAD10_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD10_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD10_SLP_OE_M  (LP_IOMUX_REG_PAD10_SLP_OE_V << LP_IOMUX_REG_PAD10_SLP_OE_S)
#define LP_IOMUX_REG_PAD10_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD10_SLP_OE_S  9
/** LP_IOMUX_REG_PAD10_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD10_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD10_FUN_IE_M  (LP_IOMUX_REG_PAD10_FUN_IE_V << LP_IOMUX_REG_PAD10_FUN_IE_S)
#define LP_IOMUX_REG_PAD10_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD10_FUN_IE_S  10
/** LP_IOMUX_REG_PAD10_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD10_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD10_FILTER_EN_M  (LP_IOMUX_REG_PAD10_FILTER_EN_V << LP_IOMUX_REG_PAD10_FILTER_EN_S)
#define LP_IOMUX_REG_PAD10_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD10_FILTER_EN_S  11

/** LP_IOMUX_PAD11_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD11_REG (DR_REG_LP_IOMUX_BASE + 0x34)
/** LP_IOMUX_REG_PAD11_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD11_DRV    0x00000003U
#define LP_IOMUX_REG_PAD11_DRV_M  (LP_IOMUX_REG_PAD11_DRV_V << LP_IOMUX_REG_PAD11_DRV_S)
#define LP_IOMUX_REG_PAD11_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD11_DRV_S  0
/** LP_IOMUX_REG_PAD11_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD11_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD11_RDE_M  (LP_IOMUX_REG_PAD11_RDE_V << LP_IOMUX_REG_PAD11_RDE_S)
#define LP_IOMUX_REG_PAD11_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD11_RDE_S  2
/** LP_IOMUX_REG_PAD11_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD11_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD11_RUE_M  (LP_IOMUX_REG_PAD11_RUE_V << LP_IOMUX_REG_PAD11_RUE_S)
#define LP_IOMUX_REG_PAD11_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD11_RUE_S  3
/** LP_IOMUX_REG_PAD11_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD11_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD11_MUX_SEL_M  (LP_IOMUX_REG_PAD11_MUX_SEL_V << LP_IOMUX_REG_PAD11_MUX_SEL_S)
#define LP_IOMUX_REG_PAD11_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD11_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD11_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD11_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD11_FUN_SEL_M  (LP_IOMUX_REG_PAD11_FUN_SEL_V << LP_IOMUX_REG_PAD11_FUN_SEL_S)
#define LP_IOMUX_REG_PAD11_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD11_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD11_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD11_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD11_SLP_SEL_M  (LP_IOMUX_REG_PAD11_SLP_SEL_V << LP_IOMUX_REG_PAD11_SLP_SEL_S)
#define LP_IOMUX_REG_PAD11_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD11_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD11_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD11_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD11_SLP_IE_M  (LP_IOMUX_REG_PAD11_SLP_IE_V << LP_IOMUX_REG_PAD11_SLP_IE_S)
#define LP_IOMUX_REG_PAD11_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD11_SLP_IE_S  8
/** LP_IOMUX_REG_PAD11_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD11_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD11_SLP_OE_M  (LP_IOMUX_REG_PAD11_SLP_OE_V << LP_IOMUX_REG_PAD11_SLP_OE_S)
#define LP_IOMUX_REG_PAD11_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD11_SLP_OE_S  9
/** LP_IOMUX_REG_PAD11_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD11_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD11_FUN_IE_M  (LP_IOMUX_REG_PAD11_FUN_IE_V << LP_IOMUX_REG_PAD11_FUN_IE_S)
#define LP_IOMUX_REG_PAD11_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD11_FUN_IE_S  10
/** LP_IOMUX_REG_PAD11_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD11_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD11_FILTER_EN_M  (LP_IOMUX_REG_PAD11_FILTER_EN_V << LP_IOMUX_REG_PAD11_FILTER_EN_S)
#define LP_IOMUX_REG_PAD11_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD11_FILTER_EN_S  11

/** LP_IOMUX_PAD120_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD120_REG (DR_REG_LP_IOMUX_BASE + 0x38)
/** LP_IOMUX_REG_PAD12_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD12_DRV    0x00000003U
#define LP_IOMUX_REG_PAD12_DRV_M  (LP_IOMUX_REG_PAD12_DRV_V << LP_IOMUX_REG_PAD12_DRV_S)
#define LP_IOMUX_REG_PAD12_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD12_DRV_S  0
/** LP_IOMUX_REG_PAD12_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD12_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD12_RDE_M  (LP_IOMUX_REG_PAD12_RDE_V << LP_IOMUX_REG_PAD12_RDE_S)
#define LP_IOMUX_REG_PAD12_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD12_RDE_S  2
/** LP_IOMUX_REG_PAD12_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD12_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD12_RUE_M  (LP_IOMUX_REG_PAD12_RUE_V << LP_IOMUX_REG_PAD12_RUE_S)
#define LP_IOMUX_REG_PAD12_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD12_RUE_S  3
/** LP_IOMUX_REG_PAD12_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD12_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD12_MUX_SEL_M  (LP_IOMUX_REG_PAD12_MUX_SEL_V << LP_IOMUX_REG_PAD12_MUX_SEL_S)
#define LP_IOMUX_REG_PAD12_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD12_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD12_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD12_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD12_FUN_SEL_M  (LP_IOMUX_REG_PAD12_FUN_SEL_V << LP_IOMUX_REG_PAD12_FUN_SEL_S)
#define LP_IOMUX_REG_PAD12_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD12_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD12_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD12_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD12_SLP_SEL_M  (LP_IOMUX_REG_PAD12_SLP_SEL_V << LP_IOMUX_REG_PAD12_SLP_SEL_S)
#define LP_IOMUX_REG_PAD12_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD12_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD12_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD12_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD12_SLP_IE_M  (LP_IOMUX_REG_PAD12_SLP_IE_V << LP_IOMUX_REG_PAD12_SLP_IE_S)
#define LP_IOMUX_REG_PAD12_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD12_SLP_IE_S  8
/** LP_IOMUX_REG_PAD12_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD12_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD12_SLP_OE_M  (LP_IOMUX_REG_PAD12_SLP_OE_V << LP_IOMUX_REG_PAD12_SLP_OE_S)
#define LP_IOMUX_REG_PAD12_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD12_SLP_OE_S  9
/** LP_IOMUX_REG_PAD12_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD12_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD12_FUN_IE_M  (LP_IOMUX_REG_PAD12_FUN_IE_V << LP_IOMUX_REG_PAD12_FUN_IE_S)
#define LP_IOMUX_REG_PAD12_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD12_FUN_IE_S  10
/** LP_IOMUX_REG_PAD12_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD12_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD12_FILTER_EN_M  (LP_IOMUX_REG_PAD12_FILTER_EN_V << LP_IOMUX_REG_PAD12_FILTER_EN_S)
#define LP_IOMUX_REG_PAD12_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD12_FILTER_EN_S  11

/** LP_IOMUX_PAD13_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD13_REG (DR_REG_LP_IOMUX_BASE + 0x3c)
/** LP_IOMUX_REG_PAD13_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD13_DRV    0x00000003U
#define LP_IOMUX_REG_PAD13_DRV_M  (LP_IOMUX_REG_PAD13_DRV_V << LP_IOMUX_REG_PAD13_DRV_S)
#define LP_IOMUX_REG_PAD13_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD13_DRV_S  0
/** LP_IOMUX_REG_PAD13_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD13_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD13_RDE_M  (LP_IOMUX_REG_PAD13_RDE_V << LP_IOMUX_REG_PAD13_RDE_S)
#define LP_IOMUX_REG_PAD13_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD13_RDE_S  2
/** LP_IOMUX_REG_PAD13_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD13_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD13_RUE_M  (LP_IOMUX_REG_PAD13_RUE_V << LP_IOMUX_REG_PAD13_RUE_S)
#define LP_IOMUX_REG_PAD13_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD13_RUE_S  3
/** LP_IOMUX_REG_PAD13_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD13_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD13_MUX_SEL_M  (LP_IOMUX_REG_PAD13_MUX_SEL_V << LP_IOMUX_REG_PAD13_MUX_SEL_S)
#define LP_IOMUX_REG_PAD13_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD13_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD13_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD13_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD13_FUN_SEL_M  (LP_IOMUX_REG_PAD13_FUN_SEL_V << LP_IOMUX_REG_PAD13_FUN_SEL_S)
#define LP_IOMUX_REG_PAD13_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD13_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD13_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD13_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD13_SLP_SEL_M  (LP_IOMUX_REG_PAD13_SLP_SEL_V << LP_IOMUX_REG_PAD13_SLP_SEL_S)
#define LP_IOMUX_REG_PAD13_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD13_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD13_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD13_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD13_SLP_IE_M  (LP_IOMUX_REG_PAD13_SLP_IE_V << LP_IOMUX_REG_PAD13_SLP_IE_S)
#define LP_IOMUX_REG_PAD13_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD13_SLP_IE_S  8
/** LP_IOMUX_REG_PAD13_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD13_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD13_SLP_OE_M  (LP_IOMUX_REG_PAD13_SLP_OE_V << LP_IOMUX_REG_PAD13_SLP_OE_S)
#define LP_IOMUX_REG_PAD13_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD13_SLP_OE_S  9
/** LP_IOMUX_REG_PAD13_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD13_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD13_FUN_IE_M  (LP_IOMUX_REG_PAD13_FUN_IE_V << LP_IOMUX_REG_PAD13_FUN_IE_S)
#define LP_IOMUX_REG_PAD13_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD13_FUN_IE_S  10
/** LP_IOMUX_REG_PAD13_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD13_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD13_FILTER_EN_M  (LP_IOMUX_REG_PAD13_FILTER_EN_V << LP_IOMUX_REG_PAD13_FILTER_EN_S)
#define LP_IOMUX_REG_PAD13_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD13_FILTER_EN_S  11

/** LP_IOMUX_PAD14_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD14_REG (DR_REG_LP_IOMUX_BASE + 0x40)
/** LP_IOMUX_REG_PAD14_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD14_DRV    0x00000003U
#define LP_IOMUX_REG_PAD14_DRV_M  (LP_IOMUX_REG_PAD14_DRV_V << LP_IOMUX_REG_PAD14_DRV_S)
#define LP_IOMUX_REG_PAD14_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD14_DRV_S  0
/** LP_IOMUX_REG_PAD14_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD14_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD14_RDE_M  (LP_IOMUX_REG_PAD14_RDE_V << LP_IOMUX_REG_PAD14_RDE_S)
#define LP_IOMUX_REG_PAD14_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD14_RDE_S  2
/** LP_IOMUX_REG_PAD14_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD14_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD14_RUE_M  (LP_IOMUX_REG_PAD14_RUE_V << LP_IOMUX_REG_PAD14_RUE_S)
#define LP_IOMUX_REG_PAD14_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD14_RUE_S  3
/** LP_IOMUX_REG_PAD14_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD14_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD14_MUX_SEL_M  (LP_IOMUX_REG_PAD14_MUX_SEL_V << LP_IOMUX_REG_PAD14_MUX_SEL_S)
#define LP_IOMUX_REG_PAD14_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD14_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD14_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD14_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD14_FUN_SEL_M  (LP_IOMUX_REG_PAD14_FUN_SEL_V << LP_IOMUX_REG_PAD14_FUN_SEL_S)
#define LP_IOMUX_REG_PAD14_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD14_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD14_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD14_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD14_SLP_SEL_M  (LP_IOMUX_REG_PAD14_SLP_SEL_V << LP_IOMUX_REG_PAD14_SLP_SEL_S)
#define LP_IOMUX_REG_PAD14_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD14_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD14_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD14_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD14_SLP_IE_M  (LP_IOMUX_REG_PAD14_SLP_IE_V << LP_IOMUX_REG_PAD14_SLP_IE_S)
#define LP_IOMUX_REG_PAD14_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD14_SLP_IE_S  8
/** LP_IOMUX_REG_PAD14_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD14_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD14_SLP_OE_M  (LP_IOMUX_REG_PAD14_SLP_OE_V << LP_IOMUX_REG_PAD14_SLP_OE_S)
#define LP_IOMUX_REG_PAD14_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD14_SLP_OE_S  9
/** LP_IOMUX_REG_PAD14_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD14_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD14_FUN_IE_M  (LP_IOMUX_REG_PAD14_FUN_IE_V << LP_IOMUX_REG_PAD14_FUN_IE_S)
#define LP_IOMUX_REG_PAD14_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD14_FUN_IE_S  10
/** LP_IOMUX_REG_PAD14_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD14_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD14_FILTER_EN_M  (LP_IOMUX_REG_PAD14_FILTER_EN_V << LP_IOMUX_REG_PAD14_FILTER_EN_S)
#define LP_IOMUX_REG_PAD14_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD14_FILTER_EN_S  11

/** LP_IOMUX_PAD15_REG register
 *  Reserved
 */
#define LP_IOMUX_PAD15_REG (DR_REG_LP_IOMUX_BASE + 0x44)
/** LP_IOMUX_REG_PAD15_DRV : R/W; bitpos: [1:0]; default: 2;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD15_DRV    0x00000003U
#define LP_IOMUX_REG_PAD15_DRV_M  (LP_IOMUX_REG_PAD15_DRV_V << LP_IOMUX_REG_PAD15_DRV_S)
#define LP_IOMUX_REG_PAD15_DRV_V  0x00000003U
#define LP_IOMUX_REG_PAD15_DRV_S  0
/** LP_IOMUX_REG_PAD15_RDE : R/W; bitpos: [2]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD15_RDE    (BIT(2))
#define LP_IOMUX_REG_PAD15_RDE_M  (LP_IOMUX_REG_PAD15_RDE_V << LP_IOMUX_REG_PAD15_RDE_S)
#define LP_IOMUX_REG_PAD15_RDE_V  0x00000001U
#define LP_IOMUX_REG_PAD15_RDE_S  2
/** LP_IOMUX_REG_PAD15_RUE : R/W; bitpos: [3]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_PAD15_RUE    (BIT(3))
#define LP_IOMUX_REG_PAD15_RUE_M  (LP_IOMUX_REG_PAD15_RUE_V << LP_IOMUX_REG_PAD15_RUE_S)
#define LP_IOMUX_REG_PAD15_RUE_V  0x00000001U
#define LP_IOMUX_REG_PAD15_RUE_S  3
/** LP_IOMUX_REG_PAD15_MUX_SEL : R/W; bitpos: [4]; default: 0;
 *  1:use LP GPIO,0: use digital GPIO
 */
#define LP_IOMUX_REG_PAD15_MUX_SEL    (BIT(4))
#define LP_IOMUX_REG_PAD15_MUX_SEL_M  (LP_IOMUX_REG_PAD15_MUX_SEL_V << LP_IOMUX_REG_PAD15_MUX_SEL_S)
#define LP_IOMUX_REG_PAD15_MUX_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD15_MUX_SEL_S  4
/** LP_IOMUX_REG_PAD15_FUN_SEL : R/W; bitpos: [6:5]; default: 0;
 *  function sel
 */
#define LP_IOMUX_REG_PAD15_FUN_SEL    0x00000003U
#define LP_IOMUX_REG_PAD15_FUN_SEL_M  (LP_IOMUX_REG_PAD15_FUN_SEL_V << LP_IOMUX_REG_PAD15_FUN_SEL_S)
#define LP_IOMUX_REG_PAD15_FUN_SEL_V  0x00000003U
#define LP_IOMUX_REG_PAD15_FUN_SEL_S  5
/** LP_IOMUX_REG_PAD15_SLP_SEL : R/W; bitpos: [7]; default: 0;
 *  1: enable sleep mode during sleep,0: no sleep mode
 */
#define LP_IOMUX_REG_PAD15_SLP_SEL    (BIT(7))
#define LP_IOMUX_REG_PAD15_SLP_SEL_M  (LP_IOMUX_REG_PAD15_SLP_SEL_V << LP_IOMUX_REG_PAD15_SLP_SEL_S)
#define LP_IOMUX_REG_PAD15_SLP_SEL_V  0x00000001U
#define LP_IOMUX_REG_PAD15_SLP_SEL_S  7
/** LP_IOMUX_REG_PAD15_SLP_IE : R/W; bitpos: [8]; default: 0;
 *  input enable in sleep mode
 */
#define LP_IOMUX_REG_PAD15_SLP_IE    (BIT(8))
#define LP_IOMUX_REG_PAD15_SLP_IE_M  (LP_IOMUX_REG_PAD15_SLP_IE_V << LP_IOMUX_REG_PAD15_SLP_IE_S)
#define LP_IOMUX_REG_PAD15_SLP_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD15_SLP_IE_S  8
/** LP_IOMUX_REG_PAD15_SLP_OE : R/W; bitpos: [9]; default: 0;
 *  output enable in sleep mode
 */
#define LP_IOMUX_REG_PAD15_SLP_OE    (BIT(9))
#define LP_IOMUX_REG_PAD15_SLP_OE_M  (LP_IOMUX_REG_PAD15_SLP_OE_V << LP_IOMUX_REG_PAD15_SLP_OE_S)
#define LP_IOMUX_REG_PAD15_SLP_OE_V  0x00000001U
#define LP_IOMUX_REG_PAD15_SLP_OE_S  9
/** LP_IOMUX_REG_PAD15_FUN_IE : R/W; bitpos: [10]; default: 0;
 *  input enable in work mode
 */
#define LP_IOMUX_REG_PAD15_FUN_IE    (BIT(10))
#define LP_IOMUX_REG_PAD15_FUN_IE_M  (LP_IOMUX_REG_PAD15_FUN_IE_V << LP_IOMUX_REG_PAD15_FUN_IE_S)
#define LP_IOMUX_REG_PAD15_FUN_IE_V  0x00000001U
#define LP_IOMUX_REG_PAD15_FUN_IE_S  10
/** LP_IOMUX_REG_PAD15_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IOMUX_REG_PAD15_FILTER_EN    (BIT(11))
#define LP_IOMUX_REG_PAD15_FILTER_EN_M  (LP_IOMUX_REG_PAD15_FILTER_EN_V << LP_IOMUX_REG_PAD15_FILTER_EN_S)
#define LP_IOMUX_REG_PAD15_FILTER_EN_V  0x00000001U
#define LP_IOMUX_REG_PAD15_FILTER_EN_S  11

/** LP_IOMUX_EXT_WAKEUP0_SEL_REG register
 *  Reserved
 */
#define LP_IOMUX_EXT_WAKEUP0_SEL_REG (DR_REG_LP_IOMUX_BASE + 0x48)
/** LP_IOMUX_REG_XTL_EXT_CTR_SEL : R/W; bitpos: [4:0]; default: 0;
 *  select LP GPIO 0 ~ 15 to control XTAL
 */
#define LP_IOMUX_REG_XTL_EXT_CTR_SEL    0x0000001FU
#define LP_IOMUX_REG_XTL_EXT_CTR_SEL_M  (LP_IOMUX_REG_XTL_EXT_CTR_SEL_V << LP_IOMUX_REG_XTL_EXT_CTR_SEL_S)
#define LP_IOMUX_REG_XTL_EXT_CTR_SEL_V  0x0000001FU
#define LP_IOMUX_REG_XTL_EXT_CTR_SEL_S  0
/** LP_IOMUX_REG_EXT_WAKEUP0_SEL : R/W; bitpos: [9:5]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_EXT_WAKEUP0_SEL    0x0000001FU
#define LP_IOMUX_REG_EXT_WAKEUP0_SEL_M  (LP_IOMUX_REG_EXT_WAKEUP0_SEL_V << LP_IOMUX_REG_EXT_WAKEUP0_SEL_S)
#define LP_IOMUX_REG_EXT_WAKEUP0_SEL_V  0x0000001FU
#define LP_IOMUX_REG_EXT_WAKEUP0_SEL_S  5

/** LP_IOMUX_LP_PAD_HOLD_REG register
 *  Reserved
 */
#define LP_IOMUX_LP_PAD_HOLD_REG (DR_REG_LP_IOMUX_BASE + 0x4c)
/** LP_IOMUX_REG_LP_GPIO_HOLD : R/W; bitpos: [15:0]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_LP_GPIO_HOLD    0x0000FFFFU
#define LP_IOMUX_REG_LP_GPIO_HOLD_M  (LP_IOMUX_REG_LP_GPIO_HOLD_V << LP_IOMUX_REG_LP_GPIO_HOLD_S)
#define LP_IOMUX_REG_LP_GPIO_HOLD_V  0x0000FFFFU
#define LP_IOMUX_REG_LP_GPIO_HOLD_S  0

/** LP_IOMUX_LP_PAD_HYS_REG register
 *  Reserved
 */
#define LP_IOMUX_LP_PAD_HYS_REG (DR_REG_LP_IOMUX_BASE + 0x50)
/** LP_IOMUX_REG_LP_GPIO_HYS : R/W; bitpos: [15:0]; default: 0;
 *  Reserved
 */
#define LP_IOMUX_REG_LP_GPIO_HYS    0x0000FFFFU
#define LP_IOMUX_REG_LP_GPIO_HYS_M  (LP_IOMUX_REG_LP_GPIO_HYS_V << LP_IOMUX_REG_LP_GPIO_HYS_S)
#define LP_IOMUX_REG_LP_GPIO_HYS_V  0x0000FFFFU
#define LP_IOMUX_REG_LP_GPIO_HYS_S  0

#ifdef __cplusplus
}
#endif
