/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _ASM_ARCH_MSM_RESTART_H_
#define _ASM_ARCH_MSM_RESTART_H_

#define RESTART_NORMAL 0x0
#define RESTART_DLOAD  0x1
/* neo.kang@lge.com 2011-06-01
 * add the error handler */
#if defined(CONFIG_LGE_ERROR_HANDLER)
#define SUB_THD_F_PWR 0x0190
#define SUB_THD_F_SD 0x0110
#define SUB_UNAB_THD 0x0120
#define SUB_RESET_SOC 0x0130
#define SUB_RESET_SOC_8K 0x0131
#define SUB_RESET_SOC_9K 0x0132
#define SUB_RESET_SOC_Q6 0x0133
#define SUB_UNKNOWN 0x0140
#endif

#ifdef CONFIG_MSM_NATIVE_RESTART
void msm_set_restart_mode(int mode);
#else
#define msm_set_restart_mode(mode)
#endif

extern int pmic_reset_irq;

#endif
