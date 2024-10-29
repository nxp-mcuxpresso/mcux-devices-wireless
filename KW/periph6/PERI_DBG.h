/*
** ###################################################################
**     Processors:          KW47B42Z83AFTA_cm33_core0
**                          KW47B42Z83AFTA_cm33_core1
**                          KW47B42Z96AFTA_cm33_core0
**                          KW47B42Z96AFTA_cm33_core1
**                          KW47B42Z97AFTA_cm33_core0
**                          KW47B42Z97AFTA_cm33_core1
**                          KW47B42ZB2AFTA_cm33_core0
**                          KW47B42ZB2AFTA_cm33_core1
**                          KW47B42ZB3AFTA_cm33_core0
**                          KW47B42ZB3AFTA_cm33_core1
**                          KW47B42ZB6AFTA_cm33_core0
**                          KW47B42ZB6AFTA_cm33_core1
**                          KW47B42ZB7AFTA_cm33_core0
**                          KW47B42ZB7AFTA_cm33_core1
**                          KW47Z42082AFTA
**                          KW47Z42092AFTA
**                          KW47Z420B2AFTA
**                          KW47Z420B3AFTA
**
**     Version:             rev. 1.0, 2023-05-20
**     Build:               b240821
**
**     Abstract:
**         CMSIS Peripheral Access Layer for DBG
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-05-20)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file DBG.h
 * @version 1.0
 * @date 2023-05-20
 * @brief CMSIS Peripheral Access Layer for DBG
 *
 * CMSIS Peripheral Access Layer for DBG
 */

#if !defined(DBG_H_)
#define DBG_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_KW47B42Z83AFTA_cm33_core0))
#include "KW47B42Z83_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42Z83AFTA_cm33_core1))
#include "KW47B42Z83_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42Z96AFTA_cm33_core0))
#include "KW47B42Z96_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42Z96AFTA_cm33_core1))
#include "KW47B42Z96_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42Z97AFTA_cm33_core0))
#include "KW47B42Z97_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42Z97AFTA_cm33_core1))
#include "KW47B42Z97_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42ZB2AFTA_cm33_core0))
#include "KW47B42ZB2_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42ZB2AFTA_cm33_core1))
#include "KW47B42ZB2_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42ZB3AFTA_cm33_core0))
#include "KW47B42ZB3_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42ZB3AFTA_cm33_core1))
#include "KW47B42ZB3_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42ZB6AFTA_cm33_core0))
#include "KW47B42ZB6_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42ZB6AFTA_cm33_core1))
#include "KW47B42ZB6_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47B42ZB7AFTA_cm33_core0))
#include "KW47B42ZB7_cm33_core0_COMMON.h"
#elif (defined(CPU_KW47B42ZB7AFTA_cm33_core1))
#include "KW47B42ZB7_cm33_core1_COMMON.h"
#elif (defined(CPU_KW47Z42082AFTA))
#include "KW47Z42082_COMMON.h"
#elif (defined(CPU_KW47Z42092AFTA))
#include "KW47Z42092_COMMON.h"
#elif (defined(CPU_KW47Z420B2AFTA))
#include "KW47Z420B2_COMMON.h"
#elif (defined(CPU_KW47Z420B3AFTA))
#include "KW47Z420B3_COMMON.h"
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
   -- DBG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DBG_Peripheral_Access_Layer DBG Peripheral Access Layer
 * @{
 */

/** DBG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CSW;                               /**< Command and Status Word, offset: 0x0 */
  __IO uint32_t REQUEST;                           /**< Request Value, offset: 0x4 */
  __IO uint32_t RETURN;                            /**< Return Value, offset: 0x8 */
       uint8_t RESERVED_0[240];
  __I  uint32_t ID;                                /**< Identification, offset: 0xFC */
} DBG_Type;

/* ----------------------------------------------------------------------------
   -- DBG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DBG_Register_Masks DBG Register Masks
 * @{
 */

/*! @name CSW - Command and Status Word */
/*! @{ */

#define DBG_CSW_RESYNCH_REQ_MASK                 (0x1U)
#define DBG_CSW_RESYNCH_REQ_SHIFT                (0U)
/*! RESYNCH_REQ - Resynchronization Request
 *  0b0..No request
 *  0b1..Request for resynchronization
 */
#define DBG_CSW_RESYNCH_REQ(x)                   (((uint32_t)(((uint32_t)(x)) << DBG_CSW_RESYNCH_REQ_SHIFT)) & DBG_CSW_RESYNCH_REQ_MASK)

#define DBG_CSW_REQ_PENDING_MASK                 (0x2U)
#define DBG_CSW_REQ_PENDING_SHIFT                (1U)
/*! REQ_PENDING - Request Pending
 *  0b0..No request pending
 *  0b1..Request for resynchronization pending
 */
#define DBG_CSW_REQ_PENDING(x)                   (((uint32_t)(((uint32_t)(x)) << DBG_CSW_REQ_PENDING_SHIFT)) & DBG_CSW_REQ_PENDING_MASK)

#define DBG_CSW_DBG_OR_ERR_MASK                  (0x4U)
#define DBG_CSW_DBG_OR_ERR_SHIFT                 (2U)
/*! DBG_OR_ERR - DBGMB Overrun Error
 *  0b0..No overrun
 *  0b1..Overrun occurred
 */
#define DBG_CSW_DBG_OR_ERR(x)                    (((uint32_t)(((uint32_t)(x)) << DBG_CSW_DBG_OR_ERR_SHIFT)) & DBG_CSW_DBG_OR_ERR_MASK)

#define DBG_CSW_AHB_OR_ERR_MASK                  (0x8U)
#define DBG_CSW_AHB_OR_ERR_SHIFT                 (3U)
/*! AHB_OR_ERR - AHB Overrun Error
 *  0b0..No overrun
 *  0b1..Overrun occurred
 */
#define DBG_CSW_AHB_OR_ERR(x)                    (((uint32_t)(((uint32_t)(x)) << DBG_CSW_AHB_OR_ERR_SHIFT)) & DBG_CSW_AHB_OR_ERR_MASK)

#define DBG_CSW_SOFT_RESET_MASK                  (0x10U)
#define DBG_CSW_SOFT_RESET_SHIFT                 (4U)
/*! SOFT_RESET - Soft Reset
 *  0b0..No effect
 *  0b1..Reset
 */
#define DBG_CSW_SOFT_RESET(x)                    (((uint32_t)(((uint32_t)(x)) << DBG_CSW_SOFT_RESET_SHIFT)) & DBG_CSW_SOFT_RESET_MASK)

#define DBG_CSW_CHIP_RESET_REQ_MASK              (0x20U)
#define DBG_CSW_CHIP_RESET_REQ_SHIFT             (5U)
/*! CHIP_RESET_REQ - Chip Reset Request
 *  0b0..No effect
 *  0b1..Reset
 */
#define DBG_CSW_CHIP_RESET_REQ(x)                (((uint32_t)(((uint32_t)(x)) << DBG_CSW_CHIP_RESET_REQ_SHIFT)) & DBG_CSW_CHIP_RESET_REQ_MASK)
/*! @} */

/*! @name REQUEST - Request Value */
/*! @{ */

#define DBG_REQUEST_REQUEST_MASK                 (0xFFFFFFFFU)
#define DBG_REQUEST_REQUEST_SHIFT                (0U)
/*! REQUEST - Request Value */
#define DBG_REQUEST_REQUEST(x)                   (((uint32_t)(((uint32_t)(x)) << DBG_REQUEST_REQUEST_SHIFT)) & DBG_REQUEST_REQUEST_MASK)
/*! @} */

/*! @name RETURN - Return Value */
/*! @{ */

#define DBG_RETURN_RET_MASK                      (0xFFFFFFFFU)
#define DBG_RETURN_RET_SHIFT                     (0U)
/*! RET - Return Value */
#define DBG_RETURN_RET(x)                        (((uint32_t)(((uint32_t)(x)) << DBG_RETURN_RET_SHIFT)) & DBG_RETURN_RET_MASK)
/*! @} */

/*! @name ID - Identification */
/*! @{ */

#define DBG_ID_ID_MASK                           (0xFFFFFFFFU)
#define DBG_ID_ID_SHIFT                          (0U)
/*! ID - Identification Value */
#define DBG_ID_ID(x)                             (((uint32_t)(((uint32_t)(x)) << DBG_ID_ID_SHIFT)) & DBG_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DBG_Register_Masks */


/*!
 * @}
 */ /* end of group DBG_Peripheral_Access_Layer */


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


#endif  /* DBG_H_ */

