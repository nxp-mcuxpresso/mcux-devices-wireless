/*
** ###################################################################
**     Processors:          KW45B41Z52AFPA
**                          KW45B41Z52AFTA
**                          KW45B41Z53AFPA
**                          KW45B41Z53AFTA
**                          KW45B41Z82AFPA
**                          KW45B41Z82AFTA
**                          KW45B41Z83AFPA
**                          KW45B41Z83AFPA_NBU
**                          KW45B41Z83AFTA
**                          KW45B41Z83AFTA_NBU
**                          KW45Z41052AFPA
**                          KW45Z41052AFTA
**                          KW45Z41053AFPA
**                          KW45Z41053AFTA
**                          KW45Z41082AFPA
**                          KW45Z41082AFTA
**                          KW45Z41083AFPA
**                          KW45Z41083AFTA
**
**     Version:             rev. 1.0, 2020-05-12
**     Build:               b240715
**
**     Abstract:
**         CMSIS Peripheral Access Layer for BRIC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2020-05-12)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file BRIC.h
 * @version 1.0
 * @date 2020-05-12
 * @brief CMSIS Peripheral Access Layer for BRIC
 *
 * CMSIS Peripheral Access Layer for BRIC
 */

#if !defined(BRIC_H_)
#define BRIC_H_                                  /**< Symbol preventing repeated inclusion */

#if (defined(CPU_KW45B41Z52AFPA) || defined(CPU_KW45B41Z52AFTA))
#include "KW45B41Z52_COMMON.h"
#elif (defined(CPU_KW45B41Z53AFPA) || defined(CPU_KW45B41Z53AFTA))
#include "KW45B41Z53_COMMON.h"
#elif (defined(CPU_KW45B41Z82AFPA) || defined(CPU_KW45B41Z82AFTA))
#include "KW45B41Z82_COMMON.h"
#elif (defined(CPU_KW45B41Z83AFPA) || defined(CPU_KW45B41Z83AFTA))
#include "KW45B41Z83_COMMON.h"
#elif (defined(CPU_KW45B41Z83AFPA_NBU) || defined(CPU_KW45B41Z83AFTA_NBU))
#include "KW45B41Z83_NBU_COMMON.h"
#elif (defined(CPU_KW45Z41052AFPA) || defined(CPU_KW45Z41052AFTA))
#include "KW45Z41052_COMMON.h"
#elif (defined(CPU_KW45Z41053AFPA) || defined(CPU_KW45Z41053AFTA))
#include "KW45Z41053_COMMON.h"
#elif (defined(CPU_KW45Z41082AFPA) || defined(CPU_KW45Z41082AFTA))
#include "KW45Z41082_COMMON.h"
#elif (defined(CPU_KW45Z41083AFPA) || defined(CPU_KW45Z41083AFTA))
#include "KW45Z41083_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- BRIC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BRIC_Peripheral_Access_Layer BRIC Peripheral Access Layer
 * @{
 */

/** BRIC - Size of Registers Arrays */
#define BRIC_KEYX_I_COUNT                         4u
#define BRIC_KEYY_I_COUNT                         4u

/** BRIC - Register Layout Typedef */
typedef struct {
  __O  uint32_t KEY0[BRIC_KEYX_I_COUNT];           /**< KEY0 Registers (PKB), array offset: 0x0, array step: 0x4 */
  __O  uint32_t KEY1[BRIC_KEYY_I_COUNT];           /**< KEY1 Registers (PKB), array offset: 0x10, array step: 0x4 */
  __IO uint32_t BRIC_CONFIG;                       /**< BRIC CONFIG register, offset: 0x20 */
} BRIC_Type;

/* ----------------------------------------------------------------------------
   -- BRIC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BRIC_Register_Masks BRIC Register Masks
 * @{
 */

/*! @name KEY0 - KEY0 Registers (PKB) */
/*! @{ */

#define BRIC_KEY0_KEY0_x_MASK                    (0xFFFFFFFFU)
#define BRIC_KEY0_KEY0_x_SHIFT                   (0U)
/*! KEY0_x - KEY0 written through PKB interface */
#define BRIC_KEY0_KEY0_x(x)                      (((uint32_t)(((uint32_t)(x)) << BRIC_KEY0_KEY0_x_SHIFT)) & BRIC_KEY0_KEY0_x_MASK)
/*! @} */

/* The count of BRIC_KEY0 */
#define BRIC_KEY0_COUNT                          (4U)

/*! @name KEY1 - KEY1 Registers (PKB) */
/*! @{ */

#define BRIC_KEY1_KEY1_x_MASK                    (0xFFFFFFFFU)
#define BRIC_KEY1_KEY1_x_SHIFT                   (0U)
/*! KEY1_x - KEY1 written through PKB interface */
#define BRIC_KEY1_KEY1_x(x)                      (((uint32_t)(((uint32_t)(x)) << BRIC_KEY1_KEY1_x_SHIFT)) & BRIC_KEY1_KEY1_x_MASK)
/*! @} */

/* The count of BRIC_KEY1 */
#define BRIC_KEY1_COUNT                          (4U)

/*! @name BRIC_CONFIG - BRIC CONFIG register */
/*! @{ */

#define BRIC_BRIC_CONFIG_KEY_INDEX_MASK          (0xFFU)
#define BRIC_BRIC_CONFIG_KEY_INDEX_SHIFT         (0U)
/*! KEY_INDEX - KEY INDEX */
#define BRIC_BRIC_CONFIG_KEY_INDEX(x)            (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_KEY_INDEX_SHIFT)) & BRIC_BRIC_CONFIG_KEY_INDEX_MASK)

#define BRIC_BRIC_CONFIG_IPS_XFR_ERR_EN_MASK     (0x100U)
#define BRIC_BRIC_CONFIG_IPS_XFR_ERR_EN_SHIFT    (8U)
#define BRIC_BRIC_CONFIG_IPS_XFR_ERR_EN(x)       (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_IPS_XFR_ERR_EN_SHIFT)) & BRIC_BRIC_CONFIG_IPS_XFR_ERR_EN_MASK)

#define BRIC_BRIC_CONFIG_IPS_XFR_WAIT_EN_MASK    (0x200U)
#define BRIC_BRIC_CONFIG_IPS_XFR_WAIT_EN_SHIFT   (9U)
#define BRIC_BRIC_CONFIG_IPS_XFR_WAIT_EN(x)      (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_IPS_XFR_WAIT_EN_SHIFT)) & BRIC_BRIC_CONFIG_IPS_XFR_WAIT_EN_MASK)

#define BRIC_BRIC_CONFIG_HI_MODE_MASK            (0x400U)
#define BRIC_BRIC_CONFIG_HI_MODE_SHIFT           (10U)
#define BRIC_BRIC_CONFIG_HI_MODE(x)              (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_HI_MODE_SHIFT)) & BRIC_BRIC_CONFIG_HI_MODE_MASK)

#define BRIC_BRIC_CONFIG_HI_READY_MASK           (0x800U)
#define BRIC_BRIC_CONFIG_HI_READY_SHIFT          (11U)
#define BRIC_BRIC_CONFIG_HI_READY(x)             (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_HI_READY_SHIFT)) & BRIC_BRIC_CONFIG_HI_READY_MASK)

#define BRIC_BRIC_CONFIG_DIS_PKB_ERR_RESP_MASK   (0x1000U)
#define BRIC_BRIC_CONFIG_DIS_PKB_ERR_RESP_SHIFT  (12U)
#define BRIC_BRIC_CONFIG_DIS_PKB_ERR_RESP(x)     (((uint32_t)(((uint32_t)(x)) << BRIC_BRIC_CONFIG_DIS_PKB_ERR_RESP_SHIFT)) & BRIC_BRIC_CONFIG_DIS_PKB_ERR_RESP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group BRIC_Register_Masks */


/*!
 * @}
 */ /* end of group BRIC_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* BRIC_H_ */
