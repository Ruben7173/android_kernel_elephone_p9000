/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int MT6351_PMIC_REG_gs_early_suspend_deep_idle__mode_data[] = {
/* Address     Mask        Golden Setting Value */
	0x0016, 0x0080, 0x0000,/* STRUP_CON11 */
	0x0204, 0x0270, 0x0070,/* TOP_CON */
	0x023A, 0xFFFF, 0xFEFC,/* TOP_CKPDN_CON0 */
	0x0240, 0x1FFF, 0x00AC,/* TOP_CKPDN_CON1 */
	0x0246, 0xFEFC, 0x7470,/* TOP_CKPDN_CON2 */
	0x024C, 0x0FFF, 0x0DE4,/* TOP_CKPDN_CON3 */
	0x0252, 0x006F, 0x0000,/* TOP_CKPDN_CON4 */
	0x0258, 0x7FDF, 0x3FC0,/* TOP_CKPDN_CON5 */
	0x025E, 0xF400, 0x0000,/* TOP_CKSEL_CON0 */
	0x0282, 0x0CFF, 0x00F7,/* TOP_CKHWEN_CON0 */
	0x0288, 0x0037, 0x0037,/* TOP_CKHWEN_CON1 */
	0x028E, 0x002F, 0x002F,/* TOP_CKHWEN_CON2 */
	0x029A, 0x0F3F, 0x0100,/* TOP_CLKSQ */
	0x02A0, 0x0002, 0x0002,/* TOP_CLKSQ_RTC */
	0x02EA, 0x8000, 0x0000,/* FQMTR_CON0 */
	0x0600, 0x0001, 0x0000,/* BUCK_VCORE_CON0 */
	0x0602, 0x0038, 0x0000,/* BUCK_VCORE_CON1 */
	0x0604, 0x0001, 0x0001,/* BUCK_VCORE_CON2 */
	0x0612, 0x0100, 0x0100,/* BUCK_VCORE_CON9 */
	0x0614, 0x0001, 0x0000,/* BUCK_VGPU_CON0 */
	0x0618, 0x0001, 0x0000,/* BUCK_VGPU_CON2 */
	0x0626, 0x0100, 0x0000,/* BUCK_VGPU_CON9 */
	0x0628, 0x0001, 0x0000,/* BUCK_VMODEM_CON0 */
	0x062C, 0x0001, 0x0000,/* BUCK_VMODEM_CON2 */
	0x063A, 0x0100, 0x0000,/* BUCK_VMODEM_CON9 */
	0x063C, 0x0001, 0x0000,/* BUCK_VMD1_CON0 */
	0x0640, 0x0001, 0x0000,/* BUCK_VMD1_CON2 */
	0x064E, 0x0100, 0x0000,/* BUCK_VMD1_CON9 */
	0x0650, 0x0001, 0x0000,/* BUCK_VSRAM_MD_CON0 */
	0x0654, 0x0001, 0x0000,/* BUCK_VSRAM_MD_CON2 */
	0x0662, 0x0100, 0x0000,/* BUCK_VSRAM_MD_CON9 */
	0x0664, 0x0001, 0x0000,/* BUCK_VS1_CON0 */
	0x0666, 0x0038, 0x0000,/* BUCK_VS1_CON1 */
	0x0668, 0x0001, 0x0001,/* BUCK_VS1_CON2 */
	0x0676, 0x0100, 0x0100,/* BUCK_VS1_CON9 */
	0x0678, 0x0001, 0x0000,/* BUCK_VS2_CON0 */
	0x067A, 0x0038, 0x0000,/* BUCK_VS2_CON1 */
	0x067C, 0x0001, 0x0001,/* BUCK_VS2_CON2 */
	0x068A, 0x0100, 0x0100,/* BUCK_VS2_CON9 */
	0x068C, 0x0001, 0x0000,/* BUCK_VPA_CON0 */
	0x0690, 0x0001, 0x0001,/* BUCK_VPA_CON2 */
	0x069E, 0x0100, 0x0000,/* BUCK_VPA_CON9 */
	0x0836, 0x000F, 0x0000,/* ISINK_EN_CTRL */
	0x0848, 0x000F, 0x0000,/* ISINK_EN_CTRL_SMPL */
	0x0852, 0x0010, 0x0000,/* CHRIND_EN_CTRL */
	0x0A00, 0x00EE, 0x0006,/* LDO_VA18_CON0 */
	0x0A04, 0x380C, 0x0008,/* LDO_VTCXO24_CON0 */
	0x0A08, 0x380C, 0x0808,/* LDO_VTCXO28_CON0 */
	0x0A0C, 0x000E, 0x0000,/* LDO_VCN28_CON0 */
	0x0A12, 0x000A, 0x0000,/* LDO_VCAMA_CON0 */
	0x0A16, 0x00EE, 0x0006,/* LDO_VUSB33_CON0 */
	0x0A1C, 0x000E, 0x0000,/* LDO_VSIM1_CON0 */
	0x0A22, 0x000E, 0x0000,/* LDO_VSIM2_CON0 */
	0x0A28, 0x000E, 0x0000,/* LDO_VEMC_CON0 */
	0x0A2E, 0x000E, 0x0000,/* LDO_VMCH_CON0 */
	0x0A34, 0x00EE, 0x0006,/* LDO_VIO28_CON0 */
	0x0A3A, 0x000E, 0x0000,/* LDO_VIBR_CON0 */
	0x0A40, 0x0006, 0x0000,/* LDO_VCAMD_CON0 */
	0x0A46, 0x380C, 0x0808,/* LDO_VRF18_CON0 */
	0x0A4C, 0x00EE, 0x0006,/* LDO_VIO18_CON0 */
	0x0A52, 0x000E, 0x0000,/* LDO_VCN18_CON0 */
	0x0A58, 0x0006, 0x0000,/* LDO_VCAMIO_CON0 */
	0x0A5E, 0x000E, 0x0000,/* LDO_VSRAM_PROC_CON0 */
	0x0A64, 0x000E, 0x0000,/* LDO_VXO22_CON0 */
	0x0A68, 0x380C, 0x0808,/* LDO_VRF12_CON0 */
	0x0A6E, 0x00EE, 0x0006,/* LDO_VA10_CON0 */
	0x0A74, 0x00EE, 0x0006,/* LDO_VDRAM_CON0 */
	0x0A7A, 0x00EE, 0x0024,/* LDO_VMIPI_CON0 */
	0x0A80, 0x000E, 0x0000,/* LDO_VGP3_CON0 */
	0x0A86, 0x000E, 0x0000,/* LDO_VBIF28_CON0 */
	0x0A8C, 0x0006, 0x0000,/* LDO_VEFUSE_CON0 */
	0x0A92, 0x0004, 0x0000,/* LDO_VCN33_CON0 */
	0x0A98, 0x000A, 0x0000,/* LDO_VCN33_CON3 */
	0x0A9A, 0x000A, 0x0000,/* LDO_VCN33_CON4 */
	0x0A9C, 0x00EC, 0x0004,/* LDO_VLDO28_CON0 */
	0x0AA2, 0x0002, 0x0002,/* LDO_VLDO28_CON3 */
	0x0AA4, 0x0002, 0x0002,/* LDO_VLDO28_CON4 */
	0x0AAA, 0x000E, 0x0000,/* LDO_VMC_CON0 */
	0x0CA4, 0x0001, 0x0000,/* FGADC_CON0 */
	0x0CC8, 0xFFFF, 0x0024,/* FGADC_CON18 */
	0x0D04, 0x1000, 0x1000,/* AUDDEC_ANA_CON9 */
	0x0F48, 0x0001, 0x0000/* ACCDET_CON1 */
};

const unsigned int *MT6351_PMIC_REG_gs_early_suspend_deep_idle__mode =
	MT6351_PMIC_REG_gs_early_suspend_deep_idle__mode_data;

unsigned int MT6351_PMIC_REG_gs_early_suspend_deep_idle__mode_len = 246;

const unsigned int MT6351_PMIC_REG_gs_flightmode_suspend_mode_data[] = {
/* Address     Mask        Golden Setting Value */
	0x0016, 0x0080, 0x0000,/* STRUP_CON11 */
	0x0204, 0x0270, 0x0070,/* TOP_CON */
	0x023A, 0xFFFF, 0xFCCC,/* TOP_CKPDN_CON0 */
	0x0240, 0x1FFF, 0x00AC,/* TOP_CKPDN_CON1 */
	0x0246, 0xFEFC, 0x7070,/* TOP_CKPDN_CON2 */
	0x024C, 0x0FFF, 0x0DE0,/* TOP_CKPDN_CON3 */
	0x0252, 0x006F, 0x0000,/* TOP_CKPDN_CON4 */
	0x0258, 0x7FDF, 0x39C0,/* TOP_CKPDN_CON5 */
	0x025E, 0xF400, 0x0000,/* TOP_CKSEL_CON0 */
	0x0282, 0x0CFF, 0x30E7,/* TOP_CKHWEN_CON0 */
	0x0288, 0x0037, 0x0037,/* TOP_CKHWEN_CON1 */
	0x028E, 0x002F, 0x002F,/* TOP_CKHWEN_CON2 */
	0x029A, 0x0F3F, 0x0000,/* TOP_CLKSQ */
	0x02A0, 0x0002, 0x0002,/* TOP_CLKSQ_RTC */
	0x02EA, 0x8000, 0x0000,/* FQMTR_CON0 */
	0x0600, 0x0001, 0x0000,/* BUCK_VCORE_CON0 */
	0x0602, 0x0038, 0x0000,/* BUCK_VCORE_CON1 */
	0x0604, 0x0001, 0x0001,/* BUCK_VCORE_CON2 */
	0x0612, 0x0100, 0x0100,/* BUCK_VCORE_CON9 */
	0x0614, 0x0001, 0x0000,/* BUCK_VGPU_CON0 */
	0x0618, 0x0001, 0x0000,/* BUCK_VGPU_CON2 */
	0x0626, 0x0100, 0x0000,/* BUCK_VGPU_CON9 */
	0x0628, 0x0001, 0x0000,/* BUCK_VMODEM_CON0 */
	0x062C, 0x0001, 0x3021,/* BUCK_VMODEM_CON2 */
	0x063A, 0x0100, 0x0113,/* BUCK_VMODEM_CON9 */
	0x063C, 0x0001, 0x0000,/* BUCK_VMD1_CON0 */
	0x0640, 0x0001, 0x3021,/* BUCK_VMD1_CON2 */
	0x064E, 0x0100, 0x0113,/* BUCK_VMD1_CON9 */
	0x0650, 0x0001, 0x0000,/* BUCK_VSRAM_MD_CON0 */
	0x0654, 0x0001, 0x3021,/* BUCK_VSRAM_MD_CON2 */
	0x0662, 0x0100, 0x0113,/* BUCK_VSRAM_MD_CON9 */
	0x0664, 0x0001, 0x0000,/* BUCK_VS1_CON0 */
	0x0666, 0x0038, 0x0000,/* BUCK_VS1_CON1 */
	0x0668, 0x0001, 0x0001,/* BUCK_VS1_CON2 */
	0x0676, 0x0100, 0x0100,/* BUCK_VS1_CON9 */
	0x0678, 0x0001, 0x0000,/* BUCK_VS2_CON0 */
	0x067A, 0x0038, 0x0000,/* BUCK_VS2_CON1 */
	0x067C, 0x0001, 0x0001,/* BUCK_VS2_CON2 */
	0x068A, 0x0100, 0x0100,/* BUCK_VS2_CON9 */
	0x068C, 0x0001, 0x0000,/* BUCK_VPA_CON0 */
	0x0690, 0x0001, 0x0000,/* BUCK_VPA_CON2 */
	0x069E, 0x0100, 0x0000,/* BUCK_VPA_CON9 */
	0x06B2, 0x0100, 0x0000,/* BUCK_VSRAM_PROC_CON9 */
	0x0836, 0x000F, 0x0000,/* ISINK_EN_CTRL */
	0x0848, 0x000F, 0x0000,/* ISINK_EN_CTRL_SMPL */
	0x0852, 0x0010, 0x0000,/* CHRIND_EN_CTRL */
	0x0A00, 0x00EE, 0x0006,/* LDO_VA18_CON0 */
	0x0A04, 0x380C, 0x0008,/* LDO_VTCXO24_CON0 */
	0x0A08, 0x380C, 0x0808,/* LDO_VTCXO28_CON0 */
	0x0A0C, 0x000E, 0x0000,/* LDO_VCN28_CON0 */
	0x0A12, 0x000A, 0x0000,/* LDO_VCAMA_CON0 */
	0x0A16, 0x00EE, 0x0006,/* LDO_VUSB33_CON0 */
	0x0A1C, 0x000E, 0xDB63,/* LDO_VSIM1_CON0 */
	0x0A22, 0x000E, 0x0000,/* LDO_VSIM2_CON0 */
	0x0A28, 0x000E, 0x0000,/* LDO_VEMC_CON0 */
	0x0A2E, 0x000E, 0x0000,/* LDO_VMCH_CON0 */
	0x0A34, 0x00EE, 0x0006,/* LDO_VIO28_CON0 */
	0x0A3A, 0x000E, 0x0000,/* LDO_VIBR_CON0 */
	0x0A40, 0x0006, 0x0000,/* LDO_VCAMD_CON0 */
	0x0A46, 0x380C, 0x0808,/* LDO_VRF18_CON0 */
	0x0A4C, 0x00EE, 0x0006,/* LDO_VIO18_CON0 */
	0x0A52, 0x000E, 0x0000,/* LDO_VCN18_CON0 */
	0x0A58, 0x0006, 0x0000,/* LDO_VCAMIO_CON0 */
	0x0A5E, 0x000E, 0xDA62,/* LDO_VSRAM_PROC_CON0 */
	0x0A64, 0x000E, 0x1A62,/* LDO_VXO22_CON0 */
	0x0A68, 0x380C, 0x0808,/* LDO_VRF12_CON0 */
	0x0A6E, 0x00EE, 0x0006,/* LDO_VA10_CON0 */
	0x0A74, 0x00EE, 0x0006,/* LDO_VDRAM_CON0 */
	0x0A7A, 0x000A, 0x0A68,/* LDO_VMIPI_CON0 */
	0x0A80, 0x000E, 0x0000,/* LDO_VGP3_CON0 */
	0x0A86, 0x000E, 0xDA6C,/* LDO_VBIF28_CON0 */
	0x0A8C, 0x0006, 0x0000,/* LDO_VEFUSE_CON0 */
	0x0A92, 0x0004, 0x0000,/* LDO_VCN33_CON0 */
	0x0A98, 0x000A, 0x0000,/* LDO_VCN33_CON3 */
	0x0A9A, 0x000A, 0x0000,/* LDO_VCN33_CON4 */
	0x0A9C, 0x00EC, 0x0004,/* LDO_VLDO28_CON0 */
	0x0AA2, 0x0002, 0x1800,/* LDO_VLDO28_CON3 */
	0x0AA4, 0x0002, 0x1800,/* LDO_VLDO28_CON4 */
	0x0AAA, 0x000E, 0x0000,/* LDO_VMC_CON0 */
	0x0CA4, 0x0001, 0x0029,/* FGADC_CON0 */
	0x0CC8, 0xFFFF, 0x001F,/* FGADC_CON18 */
	0x0D04, 0x1000, 0x1000,/* AUDDEC_ANA_CON9 */
	0x0F48, 0x0001, 0x0000/* ACCDET_CON1 */
};

const unsigned int *MT6351_PMIC_REG_gs_flightmode_suspend_mode =
	MT6351_PMIC_REG_gs_flightmode_suspend_mode_data;

unsigned int MT6351_PMIC_REG_gs_flightmode_suspend_mode_len = 249;
