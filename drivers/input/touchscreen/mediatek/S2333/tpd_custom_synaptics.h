/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

#ifndef TOUCHPANEL_H__
#define TOUCHPANEL_H__
#include <pmic_drv.h>
#include <cust_i2c.h>

/* Pre-defined definition */
#define TPD_TYPE_CAPACITIVE

//#define TPD_POWER_SOURCE	PMIC_APP_CAP_TOUCH_VDD
#define TPD_POWER_SOURCE_2800	PMIC_APP_CAP_TOUCH_VDD
#define TPD_POWER_SOURCE_1800	PMIC_APP_CAP_TOUCH_VIO

#define TPD_I2C_BUS		I2C_CAP_TOUCH_CHANNEL
#define TPD_I2C_ADDR		0x20
#define TPD_WAKEUP_TRIAL	60
#define TPD_WAKEUP_DELAY	100

#define SYNA_GESTURE_WAKEUP    1

//#define TPD_HAVE_TREMBLE_ELIMINATION

/* Define the virtual button mapping */
//#define TPD_HAVE_BUTTON          //modify for TW button invilad by qinxinjun@yulong.com in 20150728
#define TPD_BUTTON_HEIGH        (80)
#define TPD_KEY_COUNT           3
#define TPD_KEYS                {KEY_APPSELECT, KEY_HOMEPAGE, KEY_BACK} //modify by jingyuantao to solve FastMMI test in 20150804
#define TPD_KEYS_DIM            {{80,850,160,TPD_BUTTON_HEIGH},{240,850,160,TPD_BUTTON_HEIGH},{400,850,160,TPD_BUTTON_HEIGH}}

/* Define the touch dimension */
#ifdef TPD_HAVE_BUTTON
#define TPD_TOUCH_HEIGH_RATIO	80
#define TPD_DISPLAY_HEIGH_RATIO	73
#endif

/* Define the 0D button mapping */
#ifdef TPD_HAVE_BUTTON
#define TPD_0D_BUTTON		{}
#else
#define TPD_0D_BUTTON		{KEY_APPSELECT, KEY_HOMEPAGE, KEY_BACK} //modify by jingyuantao to solve the problem of key in 20150805
#endif

#endif /* TOUCHPANEL_H__ */

