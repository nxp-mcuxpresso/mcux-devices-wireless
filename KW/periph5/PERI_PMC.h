/*
** ###################################################################
**     Processors:          MKW21Z256VHT4
**                          MKW21Z512VHT4
**                          MKW31Z256VHT4
**                          MKW31Z512CAT4
**                          MKW31Z512VHT4
**                          MKW41Z256VHT4
**                          MKW41Z512CAT4
**                          MKW41Z512VHT4
**
**     Version:             rev. 1.0, 2015-09-23
**     Build:               b240710
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PMC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2015-09-23)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file PMC.h
 * @version 1.0
 * @date 2015-09-23
 * @brief CMSIS Peripheral Access Layer for PMC
 *
 * CMSIS Peripheral Access Layer for PMC
 */

#if !defined(PMC_H_)
#define PMC_H_                                   /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MKW21Z256VHT4) || defined(CPU_MKW21Z512VHT4))
#include "MKW21Z4_COMMON.h"
#elif (defined(CPU_MKW31Z256VHT4) || defined(CPU_MKW31Z512CAT4) || defined(CPU_MKW31Z512VHT4))
#include "MKW31Z4_COMMON.h"
#elif (defined(CPU_MKW41Z256VHT4) || defined(CPU_MKW41Z512CAT4) || defined(CPU_MKW41Z512VHT4))
#include "MKW41Z4_COMMON.h"
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
   -- PMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Peripheral_Access_Layer PMC Peripheral Access Layer
 * @{
 */

/** PMC - Register Layout Typedef */
typedef struct {
  __IO uint8_t LVDSC1;                             /**< Low Voltage Detect Status And Control 1 register, offset: 0x0 */
  __IO uint8_t LVDSC2;                             /**< Low Voltage Detect Status And Control 2 register, offset: 0x1 */
  __IO uint8_t REGSC;                              /**< Regulator Status And Control register, offset: 0x2 */
} PMC_Type;

/* ----------------------------------------------------------------------------
   -- PMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Register_Masks PMC Register Masks
 * @{
 */

/*! @name LVDSC1 - Low Voltage Detect Status And Control 1 register */
/*! @{ */

#define PMC_LVDSC1_LVDV_MASK                     (0x3U)
#define PMC_LVDSC1_LVDV_SHIFT                    (0U)
/*! LVDV - Low-Voltage Detect Voltage Select
 *  0b00..Low trip point selected (V LVD = V LVDL )
 *  0b01..High trip point selected (V LVD = V LVDH )
 *  0b10..Reserved
 *  0b11..Reserved
 */
#define PMC_LVDSC1_LVDV(x)                       (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC1_LVDV_SHIFT)) & PMC_LVDSC1_LVDV_MASK)

#define PMC_LVDSC1_LVDRE_MASK                    (0x10U)
#define PMC_LVDSC1_LVDRE_SHIFT                   (4U)
/*! LVDRE - Low-Voltage Detect Reset Enable
 *  0b0..LVDF does not generate hardware resets
 *  0b1..Force an MCU reset when LVDF = 1
 */
#define PMC_LVDSC1_LVDRE(x)                      (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC1_LVDRE_SHIFT)) & PMC_LVDSC1_LVDRE_MASK)

#define PMC_LVDSC1_LVDIE_MASK                    (0x20U)
#define PMC_LVDSC1_LVDIE_SHIFT                   (5U)
/*! LVDIE - Low-Voltage Detect Interrupt Enable
 *  0b0..Hardware interrupt disabled (use polling)
 *  0b1..Request a hardware interrupt when LVDF = 1
 */
#define PMC_LVDSC1_LVDIE(x)                      (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC1_LVDIE_SHIFT)) & PMC_LVDSC1_LVDIE_MASK)

#define PMC_LVDSC1_LVDACK_MASK                   (0x40U)
#define PMC_LVDSC1_LVDACK_SHIFT                  (6U)
/*! LVDACK - Low-Voltage Detect Acknowledge */
#define PMC_LVDSC1_LVDACK(x)                     (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC1_LVDACK_SHIFT)) & PMC_LVDSC1_LVDACK_MASK)

#define PMC_LVDSC1_LVDF_MASK                     (0x80U)
#define PMC_LVDSC1_LVDF_SHIFT                    (7U)
/*! LVDF - Low-Voltage Detect Flag
 *  0b0..Low-voltage event not detected
 *  0b1..Low-voltage event detected
 */
#define PMC_LVDSC1_LVDF(x)                       (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC1_LVDF_SHIFT)) & PMC_LVDSC1_LVDF_MASK)
/*! @} */

/*! @name LVDSC2 - Low Voltage Detect Status And Control 2 register */
/*! @{ */

#define PMC_LVDSC2_LVWV_MASK                     (0x3U)
#define PMC_LVDSC2_LVWV_SHIFT                    (0U)
/*! LVWV - Low-Voltage Warning Voltage Select
 *  0b00..Low trip point selected (VLVW = VLVW1)
 *  0b01..Mid 1 trip point selected (VLVW = VLVW2)
 *  0b10..Mid 2 trip point selected (VLVW = VLVW3)
 *  0b11..High trip point selected (VLVW = VLVW4)
 */
#define PMC_LVDSC2_LVWV(x)                       (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC2_LVWV_SHIFT)) & PMC_LVDSC2_LVWV_MASK)

#define PMC_LVDSC2_LVWIE_MASK                    (0x20U)
#define PMC_LVDSC2_LVWIE_SHIFT                   (5U)
/*! LVWIE - Low-Voltage Warning Interrupt Enable
 *  0b0..Hardware interrupt disabled (use polling)
 *  0b1..Request a hardware interrupt when LVWF = 1
 */
#define PMC_LVDSC2_LVWIE(x)                      (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC2_LVWIE_SHIFT)) & PMC_LVDSC2_LVWIE_MASK)

#define PMC_LVDSC2_LVWACK_MASK                   (0x40U)
#define PMC_LVDSC2_LVWACK_SHIFT                  (6U)
/*! LVWACK - Low-Voltage Warning Acknowledge */
#define PMC_LVDSC2_LVWACK(x)                     (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC2_LVWACK_SHIFT)) & PMC_LVDSC2_LVWACK_MASK)

#define PMC_LVDSC2_LVWF_MASK                     (0x80U)
#define PMC_LVDSC2_LVWF_SHIFT                    (7U)
/*! LVWF - Low-Voltage Warning Flag
 *  0b0..Low-voltage warning event not detected
 *  0b1..Low-voltage warning event detected
 */
#define PMC_LVDSC2_LVWF(x)                       (((uint8_t)(((uint8_t)(x)) << PMC_LVDSC2_LVWF_SHIFT)) & PMC_LVDSC2_LVWF_MASK)
/*! @} */

/*! @name REGSC - Regulator Status And Control register */
/*! @{ */

#define PMC_REGSC_BGBE_MASK                      (0x1U)
#define PMC_REGSC_BGBE_SHIFT                     (0U)
/*! BGBE - Bandgap Buffer Enable
 *  0b0..Bandgap buffer not enabled
 *  0b1..Bandgap buffer enabled
 */
#define PMC_REGSC_BGBE(x)                        (((uint8_t)(((uint8_t)(x)) << PMC_REGSC_BGBE_SHIFT)) & PMC_REGSC_BGBE_MASK)

#define PMC_REGSC_REGONS_MASK                    (0x4U)
#define PMC_REGSC_REGONS_SHIFT                   (2U)
/*! REGONS - Regulator In Run Regulation Status
 *  0b0..Regulator is in stop regulation or in transition to/from it
 *  0b1..Regulator is in run regulation
 */
#define PMC_REGSC_REGONS(x)                      (((uint8_t)(((uint8_t)(x)) << PMC_REGSC_REGONS_SHIFT)) & PMC_REGSC_REGONS_MASK)

#define PMC_REGSC_ACKISO_MASK                    (0x8U)
#define PMC_REGSC_ACKISO_SHIFT                   (3U)
/*! ACKISO - Acknowledge Isolation
 *  0b0..Peripherals and I/O pads are in normal run state.
 *  0b1..Certain peripherals and I/O pads are in an isolated and latched state.
 */
#define PMC_REGSC_ACKISO(x)                      (((uint8_t)(((uint8_t)(x)) << PMC_REGSC_ACKISO_SHIFT)) & PMC_REGSC_ACKISO_MASK)

#define PMC_REGSC_VLPO_MASK                      (0x40U)
#define PMC_REGSC_VLPO_SHIFT                     (6U)
/*! VLPO - VLPx Option
 *  0b0..Operating frequencies and MCG clocking modes are restricted during VLPx modes as listed in the Power Management chapter.
 *  0b1..If BGEN is also set, operating frequencies and MCG clocking modes are unrestricted during VLPx modes.
 *       Note that flash access frequency is still restricted however.
 */
#define PMC_REGSC_VLPO(x)                        (((uint8_t)(((uint8_t)(x)) << PMC_REGSC_VLPO_SHIFT)) & PMC_REGSC_VLPO_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PMC_Register_Masks */


/*!
 * @}
 */ /* end of group PMC_Peripheral_Access_Layer */


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


#endif  /* PMC_H_ */
