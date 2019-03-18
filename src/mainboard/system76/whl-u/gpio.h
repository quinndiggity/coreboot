/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 System76
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

#define PAD_CFG_NC(pad) PAD_NC(pad, NONE)

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
	/* PM_BATLOW# */
	_PAD_CFG_STRUCT(GPD0, 0x4000100, 0x0),
	/* AC_PRESENT */
	_PAD_CFG_STRUCT(GPD1, 0x44000700, 0x3c00),
	/* NC */
	PAD_CFG_NC(GPD2),
	/* PWR_BTN# */
	_PAD_CFG_STRUCT(GPD3, 0x44000700, 0x3000),
	/* SUSB#_PCH */
	_PAD_CFG_STRUCT(GPD4, 0x44000600, 0x0),
	/* SUSC#_PCH */
	_PAD_CFG_STRUCT(GPD5, 0x44000600, 0x0),
	/* SLP_A# */
	_PAD_CFG_STRUCT(GPD6, 0x44000600, 0x0),
	/* SUSWARN# */
	_PAD_CFG_STRUCT(GPD7, 0x4000100, 0x0),
	/* SUS_CLK */
	_PAD_CFG_STRUCT(GPD8, 0x44000700, 0x0),
	/* T69 */
	_PAD_CFG_STRUCT(GPD9, 0x4000100, 0x0),
	/* T21 */
	_PAD_CFG_STRUCT(GPD10, 0x44000600, 0x0),
	/* NC */
	PAD_CFG_NC(GPD11),
	/* SB_KBCRST# */
	_PAD_CFG_STRUCT(GPP_A0, 0x44000700, 0x0),
	/* LPC_AD0 */
	_PAD_CFG_STRUCT(GPP_A1, 0x44000700, 0x3c00),
	/* LPC_AD1 */
	_PAD_CFG_STRUCT(GPP_A2, 0x44000700, 0x3c00),
	/* LPC_AD2 */
	_PAD_CFG_STRUCT(GPP_A3, 0x44000700, 0x3c00),
	/* LPC_AD3 */
	_PAD_CFG_STRUCT(GPP_A4, 0x44000700, 0x3c00),
	/* LPC_FRAME# */
	_PAD_CFG_STRUCT(GPP_A5, 0x44000700, 0x0),
	/* SERIRQ with pull up */
	_PAD_CFG_STRUCT(GPP_A6, 0x44000700, 0x0),
	/* TPM_PIRQ# */
	_PAD_CFG_STRUCT(GPP_A7, 0x44000100, 0x0),
	/* PM_CLKRUN# with pull-up */
	_PAD_CFG_STRUCT(GPP_A8, 0x44000700, 0x0),
	/* PCLK_KBC */
	_PAD_CFG_STRUCT(GPP_A9, 0x44000700, 0x1000),
	/* NC */
	PAD_CFG_NC(GPP_A10),
	/* NC */
	PAD_CFG_NC(GPP_A11),
	/* PCH_GPP_A12 with pull-up */
	_PAD_CFG_STRUCT(GPP_A12, 0x44000100, 0x0),
	/* SUSWARN# with tie to SUS_PWR_ACK */
	_PAD_CFG_STRUCT(GPP_A13, 0x44000700, 0x0),
	/* SUS_STAT# T15 */
	_PAD_CFG_STRUCT(GPP_A14, 0x44000700, 0x0),
	/* SUS_PWR_ACK with tie to SUSWARN# */
	_PAD_CFG_STRUCT(GPP_A15, 0x44000700, 0x3000),
	/* NC */
	PAD_CFG_NC(GPP_A16),
	/* LIGHT_KB_DET# */
	_PAD_CFG_STRUCT(GPP_A17, 0x44000100, 0x0),
	/* T56 */
	_PAD_CFG_STRUCT(GPP_A18, 0x44000100, 0x0),
	/* SATA_PWR_EN */
	_PAD_CFG_STRUCT(GPP_A19, 0x44000100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_A20),
	/* NC */
	PAD_CFG_NC(GPP_A21),
	/* PS8338B_SW */
	_PAD_CFG_STRUCT(GPP_A22, 0x44000201, 0x0),
	/* PS8338B_PCH */
	_PAD_CFG_STRUCT(GPP_A23, 0x44000100, 0x0),
	/* CORE_VID0 with pull-up and pull-down */
	_PAD_CFG_STRUCT(GPP_B0, 0x44000700, 0x0),
	/* CORE_VID1 with pull-up and pull-down */
	_PAD_CFG_STRUCT(GPP_B1, 0x44000100, 0x0),
	/* CNVI_WAKE# */
	_PAD_CFG_STRUCT(GPP_B2, 0x44000100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_B3),
	/* NC */
	PAD_CFG_NC(GPP_B4),
	/* NC */
	PAD_CFG_NC(GPP_B5),
	/* NC */
	PAD_CFG_NC(GPP_B6),
	/* WLAN_CLKREQ# */
	_PAD_CFG_STRUCT(GPP_B7, 0x44000700, 0x0),
	/* LAN_CLKREQ# */
	_PAD_CFG_STRUCT(GPP_B8, 0x44000700, 0x0),
	/* TBT_CLKREQ# */
	_PAD_CFG_STRUCT(GPP_B9, 0x44000700, 0x0),
	/* SSD_CLKREQ# */
	_PAD_CFG_STRUCT(GPP_B10, 0x44000700, 0x0),
	/* EXT_PWR_GATE# */
	_PAD_CFG_STRUCT(GPP_B11, 0x44000700, 0x0),
	/* SLP_S0# with pull-down */
	_PAD_CFG_STRUCT(GPP_B12, 0x44000700, 0x0),
	/* PLT_RST# with pull-down */
	_PAD_CFG_STRUCT(GPP_B13, 0x44000700, 0x0),
	/* PCH_SPKR */
	_PAD_CFG_STRUCT(GPP_B14, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_B15),
	/* T16 */
	PAD_CFG_NC(GPP_B16),
	/* T35 */
	PAD_CFG_NC(GPP_B17),
	/* Pull-down - strap for disabling no reboot mode */
	PAD_CFG_NC(GPP_B18),
	/* NC */
	PAD_CFG_NC(GPP_B19),
	/* NC */
	PAD_CFG_NC(GPP_B20),
	/* NC */
	PAD_CFG_NC(GPP_B21),
	/* T14 */
	PAD_CFG_NC(GPP_B22),
	/* T57 */
	PAD_CFG_NC(GPP_B23),
	/* SMB_CLK_DDR */
	_PAD_CFG_STRUCT(GPP_C0, 0x44000700, 0x0),
	/* SMB_DAT_DDR */
	_PAD_CFG_STRUCT(GPP_C1, 0x44000700, 0x0),
	/* PCH_GPP_C2 with pull-up */
	_PAD_CFG_STRUCT(GPP_C2, 0x44000100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_C3),
	/* NC */
	PAD_CFG_NC(GPP_C4),
	/* WLAN_WAKEUP#, NC */
	_PAD_CFG_STRUCT(GPP_C5, 0x44000100, 0x0),
	/* T61, LAN_WAKEUP# */
	_PAD_CFG_STRUCT(GPP_C6, 0x44000100, 0x0),
	/* T64 */
	PAD_CFG_NC(GPP_C7),
	/* NC */
	PAD_CFG_NC(GPP_C8),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* TBCIO_PLUG_EVENT */
	_PAD_CFG_STRUCT(GPP_C9, 0x84800100, 0x3000),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* TBCIO_PLUG_EVENT */
	_PAD_CFG_STRUCT(GPP_C9, 0x82880100, 0x3000),
#else
	#error Unknown Mainboard
#endif
	/* TBT_FRC_PWR */
	_PAD_CFG_STRUCT(GPP_C10, 0x84000200, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_C11),
	/* GPP_C12_RTD3 */
	_PAD_CFG_STRUCT(GPP_C12, 0x84000201, 0x0),
	/* SSD_PW R_DN# */
	_PAD_CFG_STRUCT(GPP_C13, 0x84000201, 0x0),
	/* TBTA_HRESET */
	_PAD_CFG_STRUCT(GPP_C14, 0x84000200, 0x0),
	/* TBT_PERST_N */
	_PAD_CFG_STRUCT(GPP_C15, 0x84000201, 0x3000),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* I2C_SDA_TP */
	_PAD_CFG_STRUCT(GPP_C16, 0x44000700, 0x0),
	/* I2C_SCL_TP */
	_PAD_CFG_STRUCT(GPP_C17, 0x44000700, 0x0),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* T_SDA */
	_PAD_CFG_STRUCT(GPP_C16, 0x44000700, 0x0),
	/* T_SCL */
	_PAD_CFG_STRUCT(GPP_C17, 0x44000700, 0x0),
#else
	#error Unknown Mainboard
#endif
	/* NC */
	PAD_CFG_NC(GPP_C18),
	/* NC, SWI */
	_PAD_CFG_STRUCT(GPP_C19, 0x44000100, 0x0),
	/* UART2_RXD */
	_PAD_CFG_STRUCT(GPP_C20, 0x44000700, 0x0),
	/* UART2_TXD */
	_PAD_CFG_STRUCT(GPP_C21, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_C22),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* TP_ATTN# */
	_PAD_CFG_STRUCT(GPP_C23, 0x80100100, 0x0),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* NC */
	PAD_CFG_NC(GPP_C23),
#else
	#error Unknown Mainboard
#endif
	/* NC */
	PAD_CFG_NC(GPP_D0),
	/* NC */
	PAD_CFG_NC(GPP_D1),
	/* NC */
	PAD_CFG_NC(GPP_D2),
	/* NC */
	PAD_CFG_NC(GPP_D3),
	/* NC */
	PAD_CFG_NC(GPP_D4),
	/* NC */
	PAD_CFG_NC(GPP_D5),
	/* NC */
	PAD_CFG_NC(GPP_D6),
	/* NC */
	PAD_CFG_NC(GPP_D7),
	/* SB_BLON */
	_PAD_CFG_STRUCT(GPP_D8, 0x44000201, 0x0),
	/* SWI# */
	_PAD_CFG_STRUCT(GPP_D9, 0x40880100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_D10),
	/* RTD3_PCIE_WAKE# */
	_PAD_CFG_STRUCT(GPP_D11, 0x40880100, 0x3000),
	/* T33 */
	PAD_CFG_NC(GPP_D12),
	/* NC */
	PAD_CFG_NC(GPP_D13),
	/* NC */
	PAD_CFG_NC(GPP_D14),
	/* NC */
	PAD_CFG_NC(GPP_D15),
	/* NC, RTD3_3G_PW R_EN */
	_PAD_CFG_STRUCT(GPP_D16, 0x4000201, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_D17),
	/* NC */
	PAD_CFG_NC(GPP_D18),
	/* GPPC_DMIC_CLK */
	_PAD_CFG_STRUCT(GPP_D19, 0x44000500, 0x0),
	/* GPPC_DMIC_DATA */
	_PAD_CFG_STRUCT(GPP_D20, 0x44000500, 0x0),
	/* TPM_DET# */
	_PAD_CFG_STRUCT(GPP_D21, 0x44000100, 0x0),
	/* TPM_TCM_Detect */
	_PAD_CFG_STRUCT(GPP_D22, 0x44000100, 0x0),
	/* T32 */
	PAD_CFG_NC(GPP_D23),
	/* PCH_GPP_E0 with pull-up */
	_PAD_CFG_STRUCT(GPP_E0, 0x44000100, 0x0),
	/* SATA_ODD_PRSNT# */
	_PAD_CFG_STRUCT(GPP_E1, 0x44000100, 0x0),
	/* SATAGP2 */
	//TODO: Should this be function 2?
	_PAD_CFG_STRUCT(GPP_E2, 0x44000700, 0x3000),
	/* NC */
	PAD_CFG_NC(GPP_E3),
	/* T64 */
	PAD_CFG_NC(GPP_E4),
	/* T60 */
	PAD_CFG_NC(GPP_E5),
	/* DEVSLP2 */
	_PAD_CFG_STRUCT(GPP_E6, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_E7),
	/* PCH_SATAHDD_LED# */
	_PAD_CFG_STRUCT(GPP_E8, 0x44000700, 0x0),
	/* GP_BSSB_CLK with pull-up, T30 */
	_PAD_CFG_STRUCT(GPP_E9, 0x44000100, 0x0),
	/* GPP_E10 with pull-up, T31 */
	_PAD_CFG_STRUCT(GPP_E10, 0x44000100, 0x0),
	/* GPP_E11 with pull-up, T28 */
	_PAD_CFG_STRUCT(GPP_E11, 0x44000100, 0x0),
	/* USB_OC#78 with pull-up, T29 */
	_PAD_CFG_STRUCT(GPP_E12, 0x44000100, 0x0),
	/* MUX_HPD */
	_PAD_CFG_STRUCT(GPP_E13, 0x44000700, 0x0),
	/* HDMI_HPD */
	_PAD_CFG_STRUCT(GPP_E14, 0x44000700, 0x0),
	/* SMI# */
	_PAD_CFG_STRUCT(GPP_E15, 0x44000100, 0x0),
	/* SCI# */
	_PAD_CFG_STRUCT(GPP_E16, 0x80880100, 0x0),
	/* EDP_HPD */
	_PAD_CFG_STRUCT(GPP_E17, 0x44000700, 0x0),
	/* MDP_CTRLCLK */
	_PAD_CFG_STRUCT(GPP_E18, 0x44000700, 0x0),
	/* MDP_CTRLDATA */
	_PAD_CFG_STRUCT(GPP_E19, 0x44000600, 0x0),
	/* HDMI_CTRLCLK */
	_PAD_CFG_STRUCT(GPP_E20, 0x44000700, 0x0),
	/* HDMI_CTRLDATA */
	_PAD_CFG_STRUCT(GPP_E21, 0x44000600, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_E22),
	/* NC */
	PAD_CFG_NC(GPP_E23),
	/* CNVI_GNSS_PA_BLANKING */
	_PAD_CFG_STRUCT(GPP_F0, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_F1),
	/* NC */
	PAD_CFG_NC(GPP_F2),
	/* NC */
	PAD_CFG_NC(GPP_F3),
	/* CNVI_BRI_DT */
	_PAD_CFG_STRUCT(GPP_F4, 0x44000700, 0x0),
	/* CNVI_BRI_RSP */
	_PAD_CFG_STRUCT(GPP_F5, 0x44000700, 0x0),
	/* CNVI_RGI_DT */
	_PAD_CFG_STRUCT(GPP_F6, 0x44000700, 0x3000),
	/* CNVI_RGI_RSP */
	_PAD_CFG_STRUCT(GPP_F7, 0x44000700, 0x0),
	/* CNVI_MFUART2_RXD */
	_PAD_CFG_STRUCT(GPP_F8, 0x44000700, 0x3000),
	/* CNVI_MFUART2_TXD */
	_PAD_CFG_STRUCT(GPP_F9, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_F10),
	/* NC */
	PAD_CFG_NC(GPP_F11),
	/* NC */
	PAD_CFG_NC(GPP_F12),
	/* NC */
	PAD_CFG_NC(GPP_F13),
	/* NC */
	PAD_CFG_NC(GPP_F14),
	/* NC */
	PAD_CFG_NC(GPP_F15),
	/* NC */
	PAD_CFG_NC(GPP_F16),
	/* NC */
	PAD_CFG_NC(GPP_F17),
	/* NC */
	PAD_CFG_NC(GPP_F18),
	/* NC */
	PAD_CFG_NC(GPP_F19),
	/* NC */
	PAD_CFG_NC(GPP_F20),
	/* NC */
	PAD_CFG_NC(GPP_F21),
	/* NC */
	PAD_CFG_NC(GPP_F22),
	/* A4WP_PRESENT */
	_PAD_CFG_STRUCT(GPP_F23, 0x44000700, 0x0),
	/* NC, EDP_DET */
	PAD_CFG_NC(GPP_G0),
	/* NC */
	PAD_CFG_NC(GPP_G1),
	/* NC */
	PAD_CFG_NC(GPP_G2),
#if CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1325
	/* NC */
	_PAD_CFG_STRUCT(GPP_G3, 0x44000100, 0x0),
	/* NC */
	_PAD_CFG_STRUCT(GPP_G4, 0x44000100, 0x0),
#elif CONFIG_MAINBOARD_PCI_SUBSYSTEM_DEVICE_ID == 0x1323
	/* ASM1543_I_SEL0 */
	_PAD_CFG_STRUCT(GPP_G3, 0x44000200, 0x0),
	/* ASM1543_I_SEL1 */
	_PAD_CFG_STRUCT(GPP_G4, 0x44000200, 0x0),
#else
	#error Unknown Mainboard
#endif
	/* BOARD_ID */
	_PAD_CFG_STRUCT(GPP_G5, 0x44000100, 0x0),
	/* NC */
	_PAD_CFG_STRUCT(GPP_G6, 0x44000100, 0x0),
	/* TBT_Detect */
	_PAD_CFG_STRUCT(GPP_G7, 0x44000100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_H0),
	/* CNVI_RST# */
	_PAD_CFG_STRUCT(GPP_H1, 0x44000f00, 0x0),
	/* CNVI_CLKREQ */
	_PAD_CFG_STRUCT(GPP_H2, 0x44000f00, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_H3),
	/* T23 */
	PAD_CFG_NC(GPP_H4),
	/* T22 */
	PAD_CFG_NC(GPP_H5),
	/* NC */
	PAD_CFG_NC(GPP_H6),
	/* NC */
	PAD_CFG_NC(GPP_H7),
	/* NC */
	PAD_CFG_NC(GPP_H8),
	/* NC */
	PAD_CFG_NC(GPP_H9),
	/* NC */
	PAD_CFG_NC(GPP_H10),
	/* NC */
	PAD_CFG_NC(GPP_H11),
	/* NC */
	PAD_CFG_NC(GPP_H12),
	/* NC */
	PAD_CFG_NC(GPP_H13),
	/* G_INT1 */
	_PAD_CFG_STRUCT(GPP_H14, 0x44000100, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_H15),
	/* NC */
	PAD_CFG_NC(GPP_H16),
	/* NC */
	PAD_CFG_NC(GPP_H17),
	/* CPU_C10_GATE# */
	_PAD_CFG_STRUCT(GPP_H18, 0x44000700, 0x0),
	/* NC */
	PAD_CFG_NC(GPP_H19),
	/* NC */
	PAD_CFG_NC(GPP_H20),
	/* Pull-up and pull-down */
	_PAD_CFG_STRUCT(GPP_H21, 0x44000100, 0x0),
	/* TBT_RTD3_PWR_EN_R */
	_PAD_CFG_STRUCT(GPP_H22, 0x44000100, 0x0),
	/* NC, WIGIG_PEWAKE */
	_PAD_CFG_STRUCT(GPP_H23, 0x84000201, 0x0),
};

/* Early pad configuration in romstage. */
static const struct pad_config early_gpio_table[] = {
	/* UART2_RXD */
	_PAD_CFG_STRUCT(GPP_C20, 0x44000700, 0x0),
	/* UART2_TXD */
	_PAD_CFG_STRUCT(GPP_C21, 0x44000700, 0x0),
};

#endif

#endif
