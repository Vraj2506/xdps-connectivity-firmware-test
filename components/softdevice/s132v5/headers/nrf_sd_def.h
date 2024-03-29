/* Copyright (c) 2015 - 2018 Nordic Semiconductor ASA. All Rights Reserved.
 *
 * The information contained herein is confidential property of Nordic Semiconductor ASA.
 * The use, copying, transfer or disclosure of such information is prohibited except by
 * express written agreement with Nordic Semiconductor ASA.
 *
 */

#ifndef NRF_SD_DEF_H__
#define NRF_SD_DEF_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SD_PPI_CHANNELS_USED            0xFFFE0000uL /**< PPI channels utilized by SotfDevice (not available to the application). */
#define SD_PPI_GROUPS_USED              0x0000000CuL /**< PPI groups utilized by SoftDevice (not available to the application). */
#define SD_TIMERS_USED                  0x00000001uL /**< Timers used by SoftDevice. */
#define SD_SWI_USED                     0x0000003CuL /**< Software interrupts used by SoftDevice */


#ifdef __cplusplus
}
#endif

#endif /* NRF_SD_DEF_H__ */
