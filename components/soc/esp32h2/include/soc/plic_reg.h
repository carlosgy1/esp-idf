/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define DR_REG_PLIC_MX_BASE       ( 0x20001000 )
#define DR_REG_PLIC_UX_BASE       ( 0x20001400 )
#define PLIC_MXINT_CONF_REG       ( 0x200013FC )
#define PLIC_UXINT_CONF_REG       ( 0x200017FC )

#define PLIC_MXINT_PRI_REG(n) (PLIC_MXINT0_PRI_REG + (n)*4)
#define PLIC_UXINT_PRI_REG(n) (PLIC_UXINT0_PRI_REG + (n)*4)

/*PLIC MX*/
#define PLIC_MXINT_ENABLE_REG          (DR_REG_PLIC_MX_BASE + 0x0)
/* PLIC_CPU_MXINT_ENABLE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_MXINT_ENABLE    0xFFFFFFFF
#define PLIC_CPU_MXINT_ENABLE_M  ((PLIC_CPU_MXINT_ENABLE_V)<<(PLIC_CPU_MXINT_ENABLE_S))
#define PLIC_CPU_MXINT_ENABLE_V  0xFFFFFFFF
#define PLIC_CPU_MXINT_ENABLE_S  0

#define PLIC_MXINT_TYPE_REG          (DR_REG_PLIC_MX_BASE + 0x4)
/* PLIC_CPU_MXINT_TYPE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_MXINT_TYPE    0xFFFFFFFF
#define PLIC_CPU_MXINT_TYPE_M  ((PLIC_CPU_MXINT_TYPE_V)<<(PLIC_CPU_MXINT_TYPE_S))
#define PLIC_CPU_MXINT_TYPE_V  0xFFFFFFFF
#define PLIC_CPU_MXINT_TYPE_S  0

#define PLIC_MXINT_CLEAR_REG          (DR_REG_PLIC_MX_BASE + 0x8)
/* PLIC_CPU_MXINT_CLEAR : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_MXINT_CLEAR    0xFFFFFFFF
#define PLIC_CPU_MXINT_CLEAR_M  ((PLIC_CPU_MXINT_CLEAR_V)<<(PLIC_CPU_MXINT_CLEAR_S))
#define PLIC_CPU_MXINT_CLEAR_V  0xFFFFFFFF
#define PLIC_CPU_MXINT_CLEAR_S  0

#define PLIC_EMIP_STATUS_REG          (DR_REG_PLIC_MX_BASE + 0xC)
/* PLIC_CPU_EIP_STATUS : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_EIP_STATUS    0xFFFFFFFF
#define PLIC_CPU_EIP_STATUS_M  ((PLIC_CPU_EIP_STATUS_V)<<(PLIC_CPU_EIP_STATUS_S))
#define PLIC_CPU_EIP_STATUS_V  0xFFFFFFFF
#define PLIC_CPU_EIP_STATUS_S  0

#define PLIC_MXINT0_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x10)
/* PLIC_CPU_MXINT0_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT0_PRI    0x0000000F
#define PLIC_CPU_MXINT0_PRI_M  ((PLIC_CPU_MXINT0_PRI_V)<<(PLIC_CPU_MXINT0_PRI_S))
#define PLIC_CPU_MXINT0_PRI_V  0xF
#define PLIC_CPU_MXINT0_PRI_S  0

#define PLIC_MXINT1_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x14)
/* PLIC_CPU_MXINT1_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT1_PRI    0x0000000F
#define PLIC_CPU_MXINT1_PRI_M  ((PLIC_CPU_MXINT1_PRI_V)<<(PLIC_CPU_MXINT1_PRI_S))
#define PLIC_CPU_MXINT1_PRI_V  0xF
#define PLIC_CPU_MXINT1_PRI_S  0

#define PLIC_MXINT2_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x18)
/* PLIC_CPU_MXINT2_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT2_PRI    0x0000000F
#define PLIC_CPU_MXINT2_PRI_M  ((PLIC_CPU_MXINT2_PRI_V)<<(PLIC_CPU_MXINT2_PRI_S))
#define PLIC_CPU_MXINT2_PRI_V  0xF
#define PLIC_CPU_MXINT2_PRI_S  0

#define PLIC_MXINT3_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x1C)
/* PLIC_CPU_MXINT3_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT3_PRI    0x0000000F
#define PLIC_CPU_MXINT3_PRI_M  ((PLIC_CPU_MXINT3_PRI_V)<<(PLIC_CPU_MXINT3_PRI_S))
#define PLIC_CPU_MXINT3_PRI_V  0xF
#define PLIC_CPU_MXINT3_PRI_S  0

#define PLIC_MXINT4_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x20)
/* PLIC_CPU_MXINT4_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT4_PRI    0x0000000F
#define PLIC_CPU_MXINT4_PRI_M  ((PLIC_CPU_MXINT4_PRI_V)<<(PLIC_CPU_MXINT4_PRI_S))
#define PLIC_CPU_MXINT4_PRI_V  0xF
#define PLIC_CPU_MXINT4_PRI_S  0

#define PLIC_MXINT5_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x24)
/* PLIC_CPU_MXINT5_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT5_PRI    0x0000000F
#define PLIC_CPU_MXINT5_PRI_M  ((PLIC_CPU_MXINT5_PRI_V)<<(PLIC_CPU_MXINT5_PRI_S))
#define PLIC_CPU_MXINT5_PRI_V  0xF
#define PLIC_CPU_MXINT5_PRI_S  0

#define PLIC_MXINT6_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x28)
/* PLIC_CPU_MXINT6_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT6_PRI    0x0000000F
#define PLIC_CPU_MXINT6_PRI_M  ((PLIC_CPU_MXINT6_PRI_V)<<(PLIC_CPU_MXINT6_PRI_S))
#define PLIC_CPU_MXINT6_PRI_V  0xF
#define PLIC_CPU_MXINT6_PRI_S  0

#define PLIC_MXINT7_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x2C)
/* PLIC_CPU_MXINT7_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT7_PRI    0x0000000F
#define PLIC_CPU_MXINT7_PRI_M  ((PLIC_CPU_MXINT7_PRI_V)<<(PLIC_CPU_MXINT7_PRI_S))
#define PLIC_CPU_MXINT7_PRI_V  0xF
#define PLIC_CPU_MXINT7_PRI_S  0

#define PLIC_MXINT8_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x30)
/* PLIC_CPU_MXINT8_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT8_PRI    0x0000000F
#define PLIC_CPU_MXINT8_PRI_M  ((PLIC_CPU_MXINT8_PRI_V)<<(PLIC_CPU_MXINT8_PRI_S))
#define PLIC_CPU_MXINT8_PRI_V  0xF
#define PLIC_CPU_MXINT8_PRI_S  0

#define PLIC_MXINT9_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x34)
/* PLIC_CPU_MXINT9_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT9_PRI    0x0000000F
#define PLIC_CPU_MXINT9_PRI_M  ((PLIC_CPU_MXINT9_PRI_V)<<(PLIC_CPU_MXINT9_PRI_S))
#define PLIC_CPU_MXINT9_PRI_V  0xF
#define PLIC_CPU_MXINT9_PRI_S  0

#define PLIC_MXINT10_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x38)
/* PLIC_CPU_MXINT10_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT10_PRI    0x0000000F
#define PLIC_CPU_MXINT10_PRI_M  ((PLIC_CPU_MXINT10_PRI_V)<<(PLIC_CPU_MXINT10_PRI_S))
#define PLIC_CPU_MXINT10_PRI_V  0xF
#define PLIC_CPU_MXINT10_PRI_S  0

#define PLIC_MXINT11_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x3C)
/* PLIC_CPU_MXINT11_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT11_PRI    0x0000000F
#define PLIC_CPU_MXINT11_PRI_M  ((PLIC_CPU_MXINT11_PRI_V)<<(PLIC_CPU_MXINT11_PRI_S))
#define PLIC_CPU_MXINT11_PRI_V  0xF
#define PLIC_CPU_MXINT11_PRI_S  0

#define PLIC_MXINT12_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x40)
/* PLIC_CPU_MXINT12_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT12_PRI    0x0000000F
#define PLIC_CPU_MXINT12_PRI_M  ((PLIC_CPU_MXINT12_PRI_V)<<(PLIC_CPU_MXINT12_PRI_S))
#define PLIC_CPU_MXINT12_PRI_V  0xF
#define PLIC_CPU_MXINT12_PRI_S  0

#define PLIC_MXINT13_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x44)
/* PLIC_CPU_MXINT13_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT13_PRI    0x0000000F
#define PLIC_CPU_MXINT13_PRI_M  ((PLIC_CPU_MXINT13_PRI_V)<<(PLIC_CPU_MXINT13_PRI_S))
#define PLIC_CPU_MXINT13_PRI_V  0xF
#define PLIC_CPU_MXINT13_PRI_S  0

#define PLIC_MXINT14_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x48)
/* PLIC_CPU_MXINT14_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT14_PRI    0x0000000F
#define PLIC_CPU_MXINT14_PRI_M  ((PLIC_CPU_MXINT14_PRI_V)<<(PLIC_CPU_MXINT14_PRI_S))
#define PLIC_CPU_MXINT14_PRI_V  0xF
#define PLIC_CPU_MXINT14_PRI_S  0

#define PLIC_MXINT15_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x4C)
/* PLIC_CPU_MXINT15_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT15_PRI    0x0000000F
#define PLIC_CPU_MXINT15_PRI_M  ((PLIC_CPU_MXINT15_PRI_V)<<(PLIC_CPU_MXINT15_PRI_S))
#define PLIC_CPU_MXINT15_PRI_V  0xF
#define PLIC_CPU_MXINT15_PRI_S  0

#define PLIC_MXINT16_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x50)
/* PLIC_CPU_MXINT16_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT16_PRI    0x0000000F
#define PLIC_CPU_MXINT16_PRI_M  ((PLIC_CPU_MXINT16_PRI_V)<<(PLIC_CPU_MXINT16_PRI_S))
#define PLIC_CPU_MXINT16_PRI_V  0xF
#define PLIC_CPU_MXINT16_PRI_S  0

#define PLIC_MXINT17_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x54)
/* PLIC_CPU_MXINT17_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT17_PRI    0x0000000F
#define PLIC_CPU_MXINT17_PRI_M  ((PLIC_CPU_MXINT17_PRI_V)<<(PLIC_CPU_MXINT17_PRI_S))
#define PLIC_CPU_MXINT17_PRI_V  0xF
#define PLIC_CPU_MXINT17_PRI_S  0

#define PLIC_MXINT18_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x58)
/* PLIC_CPU_MXINT18_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT18_PRI    0x0000000F
#define PLIC_CPU_MXINT18_PRI_M  ((PLIC_CPU_MXINT18_PRI_V)<<(PLIC_CPU_MXINT18_PRI_S))
#define PLIC_CPU_MXINT18_PRI_V  0xF
#define PLIC_CPU_MXINT18_PRI_S  0

#define PLIC_MXINT19_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x5C)
/* PLIC_CPU_MXINT19_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT19_PRI    0x0000000F
#define PLIC_CPU_MXINT19_PRI_M  ((PLIC_CPU_MXINT19_PRI_V)<<(PLIC_CPU_MXINT19_PRI_S))
#define PLIC_CPU_MXINT19_PRI_V  0xF
#define PLIC_CPU_MXINT19_PRI_S  0

#define PLIC_MXINT20_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x60)
/* PLIC_CPU_MXINT20_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT20_PRI    0x0000000F
#define PLIC_CPU_MXINT20_PRI_M  ((PLIC_CPU_MXINT20_PRI_V)<<(PLIC_CPU_MXINT20_PRI_S))
#define PLIC_CPU_MXINT20_PRI_V  0xF
#define PLIC_CPU_MXINT20_PRI_S  0

#define PLIC_MXINT21_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x64)
/* PLIC_CPU_MXINT21_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT21_PRI    0x0000000F
#define PLIC_CPU_MXINT21_PRI_M  ((PLIC_CPU_MXINT21_PRI_V)<<(PLIC_CPU_MXINT21_PRI_S))
#define PLIC_CPU_MXINT21_PRI_V  0xF
#define PLIC_CPU_MXINT21_PRI_S  0

#define PLIC_MXINT22_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x68)
/* PLIC_CPU_MXINT22_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT22_PRI    0x0000000F
#define PLIC_CPU_MXINT22_PRI_M  ((PLIC_CPU_MXINT22_PRI_V)<<(PLIC_CPU_MXINT22_PRI_S))
#define PLIC_CPU_MXINT22_PRI_V  0xF
#define PLIC_CPU_MXINT22_PRI_S  0

#define PLIC_MXINT23_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x6C)
/* PLIC_CPU_MXINT23_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT23_PRI    0x0000000F
#define PLIC_CPU_MXINT23_PRI_M  ((PLIC_CPU_MXINT23_PRI_V)<<(PLIC_CPU_MXINT23_PRI_S))
#define PLIC_CPU_MXINT23_PRI_V  0xF
#define PLIC_CPU_MXINT23_PRI_S  0

#define PLIC_MXINT24_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x70)
/* PLIC_CPU_MXINT24_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT24_PRI    0x0000000F
#define PLIC_CPU_MXINT24_PRI_M  ((PLIC_CPU_MXINT24_PRI_V)<<(PLIC_CPU_MXINT24_PRI_S))
#define PLIC_CPU_MXINT24_PRI_V  0xF
#define PLIC_CPU_MXINT24_PRI_S  0

#define PLIC_MXINT25_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x74)
/* PLIC_CPU_MXINT25_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT25_PRI    0x0000000F
#define PLIC_CPU_MXINT25_PRI_M  ((PLIC_CPU_MXINT25_PRI_V)<<(PLIC_CPU_MXINT25_PRI_S))
#define PLIC_CPU_MXINT25_PRI_V  0xF
#define PLIC_CPU_MXINT25_PRI_S  0

#define PLIC_MXINT26_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x78)
/* PLIC_CPU_MXINT26_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT26_PRI    0x0000000F
#define PLIC_CPU_MXINT26_PRI_M  ((PLIC_CPU_MXINT26_PRI_V)<<(PLIC_CPU_MXINT26_PRI_S))
#define PLIC_CPU_MXINT26_PRI_V  0xF
#define PLIC_CPU_MXINT26_PRI_S  0

#define PLIC_MXINT27_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x7C)
/* PLIC_CPU_MXINT27_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT27_PRI    0x0000000F
#define PLIC_CPU_MXINT27_PRI_M  ((PLIC_CPU_MXINT27_PRI_V)<<(PLIC_CPU_MXINT27_PRI_S))
#define PLIC_CPU_MXINT27_PRI_V  0xF
#define PLIC_CPU_MXINT27_PRI_S  0

#define PLIC_MXINT28_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x80)
/* PLIC_CPU_MXINT28_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT28_PRI    0x0000000F
#define PLIC_CPU_MXINT28_PRI_M  ((PLIC_CPU_MXINT28_PRI_V)<<(PLIC_CPU_MXINT28_PRI_S))
#define PLIC_CPU_MXINT28_PRI_V  0xF
#define PLIC_CPU_MXINT28_PRI_S  0

#define PLIC_MXINT29_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x84)
/* PLIC_CPU_MXINT29_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT29_PRI    0x0000000F
#define PLIC_CPU_MXINT29_PRI_M  ((PLIC_CPU_MXINT29_PRI_V)<<(PLIC_CPU_MXINT29_PRI_S))
#define PLIC_CPU_MXINT29_PRI_V  0xF
#define PLIC_CPU_MXINT29_PRI_S  0

#define PLIC_MXINT30_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x88)
/* PLIC_CPU_MXINT30_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT30_PRI    0x0000000F
#define PLIC_CPU_MXINT30_PRI_M  ((PLIC_CPU_MXINT30_PRI_V)<<(PLIC_CPU_MXINT30_PRI_S))
#define PLIC_CPU_MXINT30_PRI_V  0xF
#define PLIC_CPU_MXINT30_PRI_S  0

#define PLIC_MXINT31_PRI_REG          (DR_REG_PLIC_MX_BASE + 0x8C)
/* PLIC_CPU_MXINT31_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT31_PRI    0x0000000F
#define PLIC_CPU_MXINT31_PRI_M  ((PLIC_CPU_MXINT31_PRI_V)<<(PLIC_CPU_MXINT31_PRI_S))
#define PLIC_CPU_MXINT31_PRI_V  0xF
#define PLIC_CPU_MXINT31_PRI_S  0

#define PLIC_MXINT_THRESH_REG          (DR_REG_PLIC_MX_BASE + 0x90)
/* PLIC_CPU_MXINT_THRESH : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: .*/
#define PLIC_CPU_MXINT_THRESH    0x000000FF
#define PLIC_CPU_MXINT_THRESH_M  ((PLIC_CPU_MXINT_THRESH_V)<<(PLIC_CPU_MXINT_THRESH_S))
#define PLIC_CPU_MXINT_THRESH_V  0xFF
#define PLIC_CPU_MXINT_THRESH_S  0

#define PLIC_MXINT_CLAIM_REG         (DR_REG_PLIC_MX_BASE + 0x94)
/* PLIC_LP_INTR_FLAG : R/W ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: hp_mb_int is generated after writing 32'h20200721 to core0_lp_intr_flag.*/
#define PLIC_CPU_MXINT_CLAIM    0xFFFFFFFF
#define PLIC_CPU_MXINT_CLAIM_M  ((PLIC_CPU_MXINT_CLAIM_V)<<(PLIC_CPU_MXINT_CLAIM_S))
#define PLIC_CPU_MXINT_CLAIM_V  0xFFFFFFFF
#define PLIC_CPU_MXINT_CLAIM_S  0

/*PLIC UX*/
#define PLIC_UXINT_ENABLE_REG          (DR_REG_PLIC_UX_BASE + 0x0)
/* PLIC_CPU_UXINT_ENABLE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_UXINT_ENABLE    0xFFFFFFFF
#define PLIC_CPU_UXINT_ENABLE_M  ((PLIC_CPU_UXINT_ENABLE_V)<<(PLIC_CPU_UXINT_ENABLE_S))
#define PLIC_CPU_UXINT_ENABLE_V  0xFFFFFFFF
#define PLIC_CPU_UXINT_ENABLE_S  0

#define PLIC_UXINT_TYPE_REG          (DR_REG_PLIC_UX_BASE + 0x4)
/* PLIC_CPU_UXINT_TYPE : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_UXINT_TYPE    0xFFFFFFFF
#define PLIC_CPU_UXINT_TYPE_M  ((PLIC_CPU_UXINT_TYPE_V)<<(PLIC_CPU_UXINT_TYPE_S))
#define PLIC_CPU_UXINT_TYPE_V  0xFFFFFFFF
#define PLIC_CPU_UXINT_TYPE_S  0

#define PLIC_UXINT_CLEAR_REG          (DR_REG_PLIC_UX_BASE + 0x8)
/* PLIC_CPU_UXINT_CLEAR : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_UXINT_CLEAR    0xFFFFFFFF
#define PLIC_CPU_UXINT_CLEAR_M  ((PLIC_CPU_UXINT_CLEAR_V)<<(PLIC_CPU_UXINT_CLEAR_S))
#define PLIC_CPU_UXINT_CLEAR_V  0xFFFFFFFF
#define PLIC_CPU_UXINT_CLEAR_S  0

#define PLIC_EUIP_STATUS_REG          (DR_REG_PLIC_UX_BASE + 0xC)
/* PLIC_CPU_EIP_STATUS : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define PLIC_CPU_EIP_STATUS    0xFFFFFFFF
#define PLIC_CPU_EIP_STATUS_M  ((PLIC_CPU_EIP_STATUS_V)<<(PLIC_CPU_EIP_STATUS_S))
#define PLIC_CPU_EIP_STATUS_V  0xFFFFFFFF
#define PLIC_CPU_EIP_STATUS_S  0

#define PLIC_UXINT0_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x10)
/* PLIC_CPU_UXINT0_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT0_PRI    0x0000000F
#define PLIC_CPU_UXINT0_PRI_M  ((PLIC_CPU_UXINT0_PRI_V)<<(PLIC_CPU_UXINT0_PRI_S))
#define PLIC_CPU_UXINT0_PRI_V  0xF
#define PLIC_CPU_UXINT0_PRI_S  0

#define PLIC_UXINT1_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x14)
/* PLIC_CPU_UXINT1_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT1_PRI    0x0000000F
#define PLIC_CPU_UXINT1_PRI_M  ((PLIC_CPU_UXINT1_PRI_V)<<(PLIC_CPU_UXINT1_PRI_S))
#define PLIC_CPU_UXINT1_PRI_V  0xF
#define PLIC_CPU_UXINT1_PRI_S  0

#define PLIC_UXINT2_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x18)
/* PLIC_CPU_UXINT2_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT2_PRI    0x0000000F
#define PLIC_CPU_UXINT2_PRI_M  ((PLIC_CPU_UXINT2_PRI_V)<<(PLIC_CPU_UXINT2_PRI_S))
#define PLIC_CPU_UXINT2_PRI_V  0xF
#define PLIC_CPU_UXINT2_PRI_S  0

#define PLIC_UXINT3_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x1C)
/* PLIC_CPU_UXINT3_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT3_PRI    0x0000000F
#define PLIC_CPU_UXINT3_PRI_M  ((PLIC_CPU_UXINT3_PRI_V)<<(PLIC_CPU_UXINT3_PRI_S))
#define PLIC_CPU_UXINT3_PRI_V  0xF
#define PLIC_CPU_UXINT3_PRI_S  0

#define PLIC_UXINT4_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x20)
/* PLIC_CPU_UXINT4_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT4_PRI    0x0000000F
#define PLIC_CPU_UXINT4_PRI_M  ((PLIC_CPU_UXINT4_PRI_V)<<(PLIC_CPU_UXINT4_PRI_S))
#define PLIC_CPU_UXINT4_PRI_V  0xF
#define PLIC_CPU_UXINT4_PRI_S  0

#define PLIC_UXINT5_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x24)
/* PLIC_CPU_UXINT5_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT5_PRI    0x0000000F
#define PLIC_CPU_UXINT5_PRI_M  ((PLIC_CPU_UXINT5_PRI_V)<<(PLIC_CPU_UXINT5_PRI_S))
#define PLIC_CPU_UXINT5_PRI_V  0xF
#define PLIC_CPU_UXINT5_PRI_S  0

#define PLIC_UXINT6_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x28)
/* PLIC_CPU_UXINT6_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT6_PRI    0x0000000F
#define PLIC_CPU_UXINT6_PRI_M  ((PLIC_CPU_UXINT6_PRI_V)<<(PLIC_CPU_UXINT6_PRI_S))
#define PLIC_CPU_UXINT6_PRI_V  0xF
#define PLIC_CPU_UXINT6_PRI_S  0

#define PLIC_UXINT7_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x2C)
/* PLIC_CPU_UXINT7_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT7_PRI    0x0000000F
#define PLIC_CPU_UXINT7_PRI_M  ((PLIC_CPU_UXINT7_PRI_V)<<(PLIC_CPU_UXINT7_PRI_S))
#define PLIC_CPU_UXINT7_PRI_V  0xF
#define PLIC_CPU_UXINT7_PRI_S  0

#define PLIC_UXINT8_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x30)
/* PLIC_CPU_UXINT8_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT8_PRI    0x0000000F
#define PLIC_CPU_UXINT8_PRI_M  ((PLIC_CPU_UXINT8_PRI_V)<<(PLIC_CPU_UXINT8_PRI_S))
#define PLIC_CPU_UXINT8_PRI_V  0xF
#define PLIC_CPU_UXINT8_PRI_S  0

#define PLIC_UXINT9_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x34)
/* PLIC_CPU_UXINT9_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT9_PRI    0x0000000F
#define PLIC_CPU_UXINT9_PRI_M  ((PLIC_CPU_UXINT9_PRI_V)<<(PLIC_CPU_UXINT9_PRI_S))
#define PLIC_CPU_UXINT9_PRI_V  0xF
#define PLIC_CPU_UXINT9_PRI_S  0

#define PLIC_UXINT10_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x38)
/* PLIC_CPU_UXINT10_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT10_PRI    0x0000000F
#define PLIC_CPU_UXINT10_PRI_M  ((PLIC_CPU_UXINT10_PRI_V)<<(PLIC_CPU_UXINT10_PRI_S))
#define PLIC_CPU_UXINT10_PRI_V  0xF
#define PLIC_CPU_UXINT10_PRI_S  0

#define PLIC_UXINT11_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x3C)
/* PLIC_CPU_UXINT11_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT11_PRI    0x0000000F
#define PLIC_CPU_UXINT11_PRI_M  ((PLIC_CPU_UXINT11_PRI_V)<<(PLIC_CPU_UXINT11_PRI_S))
#define PLIC_CPU_UXINT11_PRI_V  0xF
#define PLIC_CPU_UXINT11_PRI_S  0

#define PLIC_UXINT12_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x40)
/* PLIC_CPU_UXINT12_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT12_PRI    0x0000000F
#define PLIC_CPU_UXINT12_PRI_M  ((PLIC_CPU_UXINT12_PRI_V)<<(PLIC_CPU_UXINT12_PRI_S))
#define PLIC_CPU_UXINT12_PRI_V  0xF
#define PLIC_CPU_UXINT12_PRI_S  0

#define PLIC_UXINT13_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x44)
/* PLIC_CPU_UXINT13_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT13_PRI    0x0000000F
#define PLIC_CPU_UXINT13_PRI_M  ((PLIC_CPU_UXINT13_PRI_V)<<(PLIC_CPU_UXINT13_PRI_S))
#define PLIC_CPU_UXINT13_PRI_V  0xF
#define PLIC_CPU_UXINT13_PRI_S  0

#define PLIC_UXINT14_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x48)
/* PLIC_CPU_UXINT14_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT14_PRI    0x0000000F
#define PLIC_CPU_UXINT14_PRI_M  ((PLIC_CPU_UXINT14_PRI_V)<<(PLIC_CPU_UXINT14_PRI_S))
#define PLIC_CPU_UXINT14_PRI_V  0xF
#define PLIC_CPU_UXINT14_PRI_S  0

#define PLIC_UXINT15_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x4C)
/* PLIC_CPU_UXINT15_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT15_PRI    0x0000000F
#define PLIC_CPU_UXINT15_PRI_M  ((PLIC_CPU_UXINT15_PRI_V)<<(PLIC_CPU_UXINT15_PRI_S))
#define PLIC_CPU_UXINT15_PRI_V  0xF
#define PLIC_CPU_UXINT15_PRI_S  0

#define PLIC_UXINT16_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x50)
/* PLIC_CPU_UXINT16_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT16_PRI    0x0000000F
#define PLIC_CPU_UXINT16_PRI_M  ((PLIC_CPU_UXINT16_PRI_V)<<(PLIC_CPU_UXINT16_PRI_S))
#define PLIC_CPU_UXINT16_PRI_V  0xF
#define PLIC_CPU_UXINT16_PRI_S  0

#define PLIC_UXINT17_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x54)
/* PLIC_CPU_UXINT17_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT17_PRI    0x0000000F
#define PLIC_CPU_UXINT17_PRI_M  ((PLIC_CPU_UXINT17_PRI_V)<<(PLIC_CPU_UXINT17_PRI_S))
#define PLIC_CPU_UXINT17_PRI_V  0xF
#define PLIC_CPU_UXINT17_PRI_S  0

#define PLIC_UXINT18_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x58)
/* PLIC_CPU_UXINT18_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT18_PRI    0x0000000F
#define PLIC_CPU_UXINT18_PRI_M  ((PLIC_CPU_UXINT18_PRI_V)<<(PLIC_CPU_UXINT18_PRI_S))
#define PLIC_CPU_UXINT18_PRI_V  0xF
#define PLIC_CPU_UXINT18_PRI_S  0

#define PLIC_UXINT19_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x5C)
/* PLIC_CPU_UXINT19_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT19_PRI    0x0000000F
#define PLIC_CPU_UXINT19_PRI_M  ((PLIC_CPU_UXINT19_PRI_V)<<(PLIC_CPU_UXINT19_PRI_S))
#define PLIC_CPU_UXINT19_PRI_V  0xF
#define PLIC_CPU_UXINT19_PRI_S  0

#define PLIC_UXINT20_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x60)
/* PLIC_CPU_UXINT20_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT20_PRI    0x0000000F
#define PLIC_CPU_UXINT20_PRI_M  ((PLIC_CPU_UXINT20_PRI_V)<<(PLIC_CPU_UXINT20_PRI_S))
#define PLIC_CPU_UXINT20_PRI_V  0xF
#define PLIC_CPU_UXINT20_PRI_S  0

#define PLIC_UXINT21_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x64)
/* PLIC_CPU_UXINT21_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT21_PRI    0x0000000F
#define PLIC_CPU_UXINT21_PRI_M  ((PLIC_CPU_UXINT21_PRI_V)<<(PLIC_CPU_UXINT21_PRI_S))
#define PLIC_CPU_UXINT21_PRI_V  0xF
#define PLIC_CPU_UXINT21_PRI_S  0

#define PLIC_UXINT22_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x68)
/* PLIC_CPU_UXINT22_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT22_PRI    0x0000000F
#define PLIC_CPU_UXINT22_PRI_M  ((PLIC_CPU_UXINT22_PRI_V)<<(PLIC_CPU_UXINT22_PRI_S))
#define PLIC_CPU_UXINT22_PRI_V  0xF
#define PLIC_CPU_UXINT22_PRI_S  0

#define PLIC_UXINT23_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x6C)
/* PLIC_CPU_UXINT23_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT23_PRI    0x0000000F
#define PLIC_CPU_UXINT23_PRI_M  ((PLIC_CPU_UXINT23_PRI_V)<<(PLIC_CPU_UXINT23_PRI_S))
#define PLIC_CPU_UXINT23_PRI_V  0xF
#define PLIC_CPU_UXINT23_PRI_S  0

#define PLIC_UXINT24_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x70)
/* PLIC_CPU_UXINT24_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT24_PRI    0x0000000F
#define PLIC_CPU_UXINT24_PRI_M  ((PLIC_CPU_UXINT24_PRI_V)<<(PLIC_CPU_UXINT24_PRI_S))
#define PLIC_CPU_UXINT24_PRI_V  0xF
#define PLIC_CPU_UXINT24_PRI_S  0

#define PLIC_UXINT25_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x74)
/* PLIC_CPU_UXINT25_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT25_PRI    0x0000000F
#define PLIC_CPU_UXINT25_PRI_M  ((PLIC_CPU_UXINT25_PRI_V)<<(PLIC_CPU_UXINT25_PRI_S))
#define PLIC_CPU_UXINT25_PRI_V  0xF
#define PLIC_CPU_UXINT25_PRI_S  0

#define PLIC_UXINT26_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x78)
/* PLIC_CPU_UXINT26_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT26_PRI    0x0000000F
#define PLIC_CPU_UXINT26_PRI_M  ((PLIC_CPU_UXINT26_PRI_V)<<(PLIC_CPU_UXINT26_PRI_S))
#define PLIC_CPU_UXINT26_PRI_V  0xF
#define PLIC_CPU_UXINT26_PRI_S  0

#define PLIC_UXINT27_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x7C)
/* PLIC_CPU_UXINT27_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT27_PRI    0x0000000F
#define PLIC_CPU_UXINT27_PRI_M  ((PLIC_CPU_UXINT27_PRI_V)<<(PLIC_CPU_UXINT27_PRI_S))
#define PLIC_CPU_UXINT27_PRI_V  0xF
#define PLIC_CPU_UXINT27_PRI_S  0

#define PLIC_UXINT28_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x80)
/* PLIC_CPU_UXINT28_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT28_PRI    0x0000000F
#define PLIC_CPU_UXINT28_PRI_M  ((PLIC_CPU_UXINT28_PRI_V)<<(PLIC_CPU_UXINT28_PRI_S))
#define PLIC_CPU_UXINT28_PRI_V  0xF
#define PLIC_CPU_UXINT28_PRI_S  0

#define PLIC_UXINT29_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x84)
/* PLIC_CPU_UXINT29_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT29_PRI    0x0000000F
#define PLIC_CPU_UXINT29_PRI_M  ((PLIC_CPU_UXINT29_PRI_V)<<(PLIC_CPU_UXINT29_PRI_S))
#define PLIC_CPU_UXINT29_PRI_V  0xF
#define PLIC_CPU_UXINT29_PRI_S  0

#define PLIC_UXINT30_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x88)
/* PLIC_CPU_UXINT30_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT30_PRI    0x0000000F
#define PLIC_CPU_UXINT30_PRI_M  ((PLIC_CPU_UXINT30_PRI_V)<<(PLIC_CPU_UXINT30_PRI_S))
#define PLIC_CPU_UXINT30_PRI_V  0xF
#define PLIC_CPU_UXINT30_PRI_S  0

#define PLIC_UXINT31_PRI_REG          (DR_REG_PLIC_UX_BASE + 0x8C)
/* PLIC_CPU_UXINT31_PRI : R/W ;bitpos:[3:0] ;default: 4'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT31_PRI    0x0000000F
#define PLIC_CPU_UXINT31_PRI_M  ((PLIC_CPU_UXINT31_PRI_V)<<(PLIC_CPU_UXINT31_PRI_S))
#define PLIC_CPU_UXINT31_PRI_V  0xF
#define PLIC_CPU_UXINT31_PRI_S  0

#define PLIC_UXINT_THRESH_REG          (DR_REG_PLIC_UX_BASE + 0x90)
/* PLIC_CPU_UXINT_THRESH : R/W ;bitpos:[7:0] ;default: 8'd0 ; */
/*description: .*/
#define PLIC_CPU_UXINT_THRESH    0x000000FF
#define PLIC_CPU_UXINT_THRESH_M  ((PLIC_CPU_UXINT_THRESH_V)<<(PLIC_CPU_UXINT_THRESH_S))
#define PLIC_CPU_UXINT_THRESH_V  0xFF
#define PLIC_CPU_UXINT_THRESH_S  0

#define PLIC_UXINT_CLAIM_REG         (DR_REG_PLIC_UX_BASE + 0x94)
/* PLIC_CPU_UXINT_CLAIM : R/W ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: .*/
#define PLIC_CPU_UXINT_CLAIM    0xFFFFFFFF
#define PLIC_CPU_UXINT_CLAIM_M  ((PLIC_CPU_UXINT_CLAIM_V)<<(PLIC_CPU_UXINT_CLAIM_S))
#define PLIC_CPU_UXINT_CLAIM_V  0xFFFFFFFF
#define PLIC_CPU_UXINT_CLAIM_S  0

#ifdef __cplusplus
}
#endif
