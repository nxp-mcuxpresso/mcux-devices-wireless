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
**         CMSIS Peripheral Access Layer for SIM
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
 * @file SIM.h
 * @version 1.0
 * @date 2015-09-23
 * @brief CMSIS Peripheral Access Layer for SIM
 *
 * CMSIS Peripheral Access Layer for SIM
 */

#if !defined(SIM_H_)
#define SIM_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- SIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Peripheral_Access_Layer SIM Peripheral Access Layer
 * @{
 */

/** SIM - Register Layout Typedef */
typedef struct {
  __IO uint32_t SOPT1;                             /**< System Options Register 1, offset: 0x0 */
       uint8_t RESERVED_0[4096];
  __IO uint32_t SOPT2;                             /**< System Options Register 2, offset: 0x1004 */
       uint8_t RESERVED_1[4];
  __IO uint32_t SOPT4;                             /**< System Options Register 4, offset: 0x100C */
  __IO uint32_t SOPT5;                             /**< System Options Register 5, offset: 0x1010 */
       uint8_t RESERVED_2[4];
  __IO uint32_t SOPT7;                             /**< System Options Register 7, offset: 0x1018 */
       uint8_t RESERVED_3[8];
  __I  uint32_t SDID;                              /**< System Device Identification Register, offset: 0x1024 */
       uint8_t RESERVED_4[12];
  __IO uint32_t SCGC4;                             /**< System Clock Gating Control Register 4, offset: 0x1034 */
  __IO uint32_t SCGC5;                             /**< System Clock Gating Control Register 5, offset: 0x1038 */
  __IO uint32_t SCGC6;                             /**< System Clock Gating Control Register 6, offset: 0x103C */
  __IO uint32_t SCGC7;                             /**< System Clock Gating Control Register 7, offset: 0x1040 */
  __IO uint32_t CLKDIV1;                           /**< System Clock Divider Register 1, offset: 0x1044 */
       uint8_t RESERVED_5[4];
  __IO uint32_t FCFG1;                             /**< Flash Configuration Register 1, offset: 0x104C */
  __I  uint32_t FCFG2;                             /**< Flash Configuration Register 2, offset: 0x1050 */
       uint8_t RESERVED_6[4];
  __I  uint32_t UIDMH;                             /**< Unique Identification Register Mid-High, offset: 0x1058 */
  __I  uint32_t UIDML;                             /**< Unique Identification Register Mid Low, offset: 0x105C */
  __I  uint32_t UIDL;                              /**< Unique Identification Register Low, offset: 0x1060 */
       uint8_t RESERVED_7[156];
  __IO uint32_t COPC;                              /**< COP Control Register, offset: 0x1100 */
  __O  uint32_t SRVCOP;                            /**< Service COP, offset: 0x1104 */
} SIM_Type;

/* ----------------------------------------------------------------------------
   -- SIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Register_Masks SIM Register Masks
 * @{
 */

/*! @name SOPT1 - System Options Register 1 */
/*! @{ */

#define SIM_SOPT1_OSC32KOUT_MASK                 (0x30000U)
#define SIM_SOPT1_OSC32KOUT_SHIFT                (16U)
/*! OSC32KOUT - 32K oscillator clock output
 *  0b00..ERCLK32K is not output.
 *  0b01..ERCLK32K is output on PTB3.
 *  0b10..Reserved.
 *  0b11..Reserved.
 */
#define SIM_SOPT1_OSC32KOUT(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_SOPT1_OSC32KOUT_SHIFT)) & SIM_SOPT1_OSC32KOUT_MASK)

#define SIM_SOPT1_OSC32KSEL_MASK                 (0xC0000U)
#define SIM_SOPT1_OSC32KSEL_SHIFT                (18U)
/*! OSC32KSEL - 32K Oscillator Clock Select
 *  0b00..32kHz oscillator (OSC32KCLK)
 *  0b01..Reserved
 *  0b10..RTC_CLKIN
 *  0b11..LPO 1kHz
 */
#define SIM_SOPT1_OSC32KSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_SOPT1_OSC32KSEL_SHIFT)) & SIM_SOPT1_OSC32KSEL_MASK)
/*! @} */

/*! @name SOPT2 - System Options Register 2 */
/*! @{ */

#define SIM_SOPT2_CLKOUTSEL_MASK                 (0xE0U)
#define SIM_SOPT2_CLKOUTSEL_SHIFT                (5U)
/*! CLKOUTSEL - CLKOUT select
 *  0b000..OSCERCLK DIV2
 *  0b001..OSCERCLK DIV4
 *  0b010..Bus clock
 *  0b011..LPO clock 1 kHz
 *  0b100..MCGIRCLK
 *  0b101..OSCERCLK DIV8
 *  0b110..OSCERCLK
 *  0b111..Reserved
 */
#define SIM_SOPT2_CLKOUTSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_SOPT2_CLKOUTSEL_SHIFT)) & SIM_SOPT2_CLKOUTSEL_MASK)

#define SIM_SOPT2_TPMSRC_MASK                    (0x3000000U)
#define SIM_SOPT2_TPMSRC_SHIFT                   (24U)
/*! TPMSRC - TPM Clock Source Select
 *  0b00..Clock disabled
 *  0b01..MCGFLLCLK clock
 *  0b10..OSCERCLK clock
 *  0b11..MCGIRCLK clock
 */
#define SIM_SOPT2_TPMSRC(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_SOPT2_TPMSRC_SHIFT)) & SIM_SOPT2_TPMSRC_MASK)

#define SIM_SOPT2_LPUART0SRC_MASK                (0xC000000U)
#define SIM_SOPT2_LPUART0SRC_SHIFT               (26U)
/*! LPUART0SRC - LPUART0 Clock Source Select
 *  0b00..Clock disabled
 *  0b01..MCGFLLCLK clock
 *  0b10..OSCERCLK clock
 *  0b11..MCGIRCLK clock
 */
#define SIM_SOPT2_LPUART0SRC(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT2_LPUART0SRC_SHIFT)) & SIM_SOPT2_LPUART0SRC_MASK)
/*! @} */

/*! @name SOPT4 - System Options Register 4 */
/*! @{ */

#define SIM_SOPT4_TPM1CH0SRC_MASK                (0x40000U)
#define SIM_SOPT4_TPM1CH0SRC_SHIFT               (18U)
/*! TPM1CH0SRC - TPM1 Channel 0 Input Capture Source Select
 *  0b0..TPM1_CH0 signal
 *  0b1..CMP0 output
 */
#define SIM_SOPT4_TPM1CH0SRC(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT4_TPM1CH0SRC_SHIFT)) & SIM_SOPT4_TPM1CH0SRC_MASK)

#define SIM_SOPT4_TPM2CH0SRC_MASK                (0x100000U)
#define SIM_SOPT4_TPM2CH0SRC_SHIFT               (20U)
/*! TPM2CH0SRC - TPM2 Channel 0 Input Capture Source Select
 *  0b0..TPM2_CH0 signal
 *  0b1..CMP0 output
 */
#define SIM_SOPT4_TPM2CH0SRC(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT4_TPM2CH0SRC_SHIFT)) & SIM_SOPT4_TPM2CH0SRC_MASK)

#define SIM_SOPT4_TPM0CLKSEL_MASK                (0x1000000U)
#define SIM_SOPT4_TPM0CLKSEL_SHIFT               (24U)
/*! TPM0CLKSEL - TPM0 External Clock Pin Select
 *  0b0..TPM0 external clock driven by TPM_CLKIN0 pin.
 *  0b1..TPM0 external clock driven by TPM_CLKIN1 pin.
 */
#define SIM_SOPT4_TPM0CLKSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT4_TPM0CLKSEL_SHIFT)) & SIM_SOPT4_TPM0CLKSEL_MASK)

#define SIM_SOPT4_TPM1CLKSEL_MASK                (0x2000000U)
#define SIM_SOPT4_TPM1CLKSEL_SHIFT               (25U)
/*! TPM1CLKSEL - TPM1 External Clock Pin Select
 *  0b0..TPM1 external clock driven by TPM_CLKIN0 pin.
 *  0b1..TPM1 external clock driven by TPM_CLKIN1 pin.
 */
#define SIM_SOPT4_TPM1CLKSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT4_TPM1CLKSEL_SHIFT)) & SIM_SOPT4_TPM1CLKSEL_MASK)

#define SIM_SOPT4_TPM2CLKSEL_MASK                (0x4000000U)
#define SIM_SOPT4_TPM2CLKSEL_SHIFT               (26U)
/*! TPM2CLKSEL - TPM2 External Clock Pin Select
 *  0b0..TPM2 external clock driven by TPM_CLKIN0 pin.
 *  0b1..TPM2 external clock driven by TPM_CLKIN1 pin.
 */
#define SIM_SOPT4_TPM2CLKSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT4_TPM2CLKSEL_SHIFT)) & SIM_SOPT4_TPM2CLKSEL_MASK)
/*! @} */

/*! @name SOPT5 - System Options Register 5 */
/*! @{ */

#define SIM_SOPT5_LPUART0TXSRC_MASK              (0x3U)
#define SIM_SOPT5_LPUART0TXSRC_SHIFT             (0U)
/*! LPUART0TXSRC - LPUART0 Transmit Data Source Select
 *  0b00..LPUART0_TX pin
 *  0b01..LPUART0_TX pin modulated with TPM1 channel 0 output
 *  0b10..LPUART0_TX pin modulated with TPM2 channel 0 output
 *  0b11..Reserved
 */
#define SIM_SOPT5_LPUART0TXSRC(x)                (((uint32_t)(((uint32_t)(x)) << SIM_SOPT5_LPUART0TXSRC_SHIFT)) & SIM_SOPT5_LPUART0TXSRC_MASK)

#define SIM_SOPT5_LPUART0RXSRC_MASK              (0x4U)
#define SIM_SOPT5_LPUART0RXSRC_SHIFT             (2U)
/*! LPUART0RXSRC - LPUART0 Receive Data Source Select
 *  0b0..LPUART_RX pin
 *  0b1..CMP0 output
 */
#define SIM_SOPT5_LPUART0RXSRC(x)                (((uint32_t)(((uint32_t)(x)) << SIM_SOPT5_LPUART0RXSRC_SHIFT)) & SIM_SOPT5_LPUART0RXSRC_MASK)

#define SIM_SOPT5_LPUART0ODE_MASK                (0x10000U)
#define SIM_SOPT5_LPUART0ODE_SHIFT               (16U)
/*! LPUART0ODE - LPUART0 Open Drain Enable
 *  0b0..Open drain is disabled on LPUART0.
 *  0b1..Open drain is enabled on LPUART0.
 */
#define SIM_SOPT5_LPUART0ODE(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT5_LPUART0ODE_SHIFT)) & SIM_SOPT5_LPUART0ODE_MASK)
/*! @} */

/*! @name SOPT7 - System Options Register 7 */
/*! @{ */

#define SIM_SOPT7_ADC0TRGSEL_MASK                (0xFU)
#define SIM_SOPT7_ADC0TRGSEL_SHIFT               (0U)
/*! ADC0TRGSEL - ADC0 Trigger Select
 *  0b0000..External trigger pin input (EXTRG_IN)
 *  0b0001..CMP0 output
 *  0b0010..Reserved
 *  0b0011..Reserved
 *  0b0100..PIT trigger 0
 *  0b0101..PIT trigger 1
 *  0b0110..Reserved
 *  0b0111..Reserved
 *  0b1000..TPM0 overflow
 *  0b1001..TPM1 overflow
 *  0b1010..TPM2 overflow
 *  0b1011..Reserved
 *  0b1100..RTC alarm
 *  0b1101..RTC seconds
 *  0b1110..LPTMR0 trigger
 *  0b1111..Radio TSM
 */
#define SIM_SOPT7_ADC0TRGSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SIM_SOPT7_ADC0TRGSEL_SHIFT)) & SIM_SOPT7_ADC0TRGSEL_MASK)

#define SIM_SOPT7_ADC0PRETRGSEL_MASK             (0x10U)
#define SIM_SOPT7_ADC0PRETRGSEL_SHIFT            (4U)
/*! ADC0PRETRGSEL - ADC0 Pretrigger Select
 *  0b0..Pre-trigger ADHDWTSA is selected, thus ADC0 will use ADC0_SC1A configuration for the next ADC conversion
 *       and store the result in ADC0_RA register.
 *  0b1..Pre-trigger ADHDWTSB is selected, thus ADC0 will use ADC0_SC1B configuration for the next ADC conversion
 *       and store the result in ADC0_RB register.
 */
#define SIM_SOPT7_ADC0PRETRGSEL(x)               (((uint32_t)(((uint32_t)(x)) << SIM_SOPT7_ADC0PRETRGSEL_SHIFT)) & SIM_SOPT7_ADC0PRETRGSEL_MASK)

#define SIM_SOPT7_ADC0ALTTRGEN_MASK              (0x80U)
#define SIM_SOPT7_ADC0ALTTRGEN_SHIFT             (7U)
/*! ADC0ALTTRGEN - ADC0 Alternate Trigger Enable
 *  0b0..ADC ADHWT trigger comes from TPM1 channel 0 and channel1. Prior to the assertion of TPM1 channel 0, a
 *       pre-trigger pulse will be sent to ADHWTSA to initiate an ADC acquisition using ADCx_SC1A configuration and
 *       store ADC conversion in ADCx_RA Register. Prior to the assertion of TPM1 channel 1 a pre-trigger pulse will
 *       be sent to ADHWTSB to initiate an ADC acquisition using ADCx_SC1Bconfiguration and store ADC conversion in
 *       ADCx_RB Register.
 *  0b1..ADC ADHWT trigger comes from a peripheral event selected by ADC0TRGSEL bits.ADC0PRETRGSEL bit will select
 *       the optional ADHWTSA or ADHWTSB select lines for choosing the ADCx_SC1x config and ADCx_Rx result
 *       regsiter to store the ADC conversion.
 */
#define SIM_SOPT7_ADC0ALTTRGEN(x)                (((uint32_t)(((uint32_t)(x)) << SIM_SOPT7_ADC0ALTTRGEN_SHIFT)) & SIM_SOPT7_ADC0ALTTRGEN_MASK)
/*! @} */

/*! @name SDID - System Device Identification Register */
/*! @{ */

#define SIM_SDID_PINID_MASK                      (0xFU)
#define SIM_SDID_PINID_SHIFT                     (0U)
/*! PINID - Pin count Identification
 *  0b0000..Reserved
 *  0b0001..Reserved
 *  0b0010..Reserved
 *  0b0011..Reserved
 *  0b0100..48-pin
 *  0b0101..Reserved
 *  0b0110..Reserved
 *  0b0111..Reserved
 *  0b1000..Reserved
 *  0b1001..Reserved
 *  0b1010..Reserved
 *  0b1011..Reserved
 *  0b1100..Reserved
 *  0b1101..Reserved
 *  0b1110..Reserved
 *  0b1111..Reserved
 */
#define SIM_SDID_PINID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_PINID_SHIFT)) & SIM_SDID_PINID_MASK)

#define SIM_SDID_DIEID_MASK                      (0xF80U)
#define SIM_SDID_DIEID_SHIFT                     (7U)
/*! DIEID - Device Die Number */
#define SIM_SDID_DIEID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_DIEID_SHIFT)) & SIM_SDID_DIEID_MASK)

#define SIM_SDID_REVID_MASK                      (0xF000U)
#define SIM_SDID_REVID_SHIFT                     (12U)
/*! REVID - Device Revision Number */
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_REVID_SHIFT)) & SIM_SDID_REVID_MASK)

#define SIM_SDID_SRAMSIZE_MASK                   (0xF0000U)
#define SIM_SDID_SRAMSIZE_SHIFT                  (16U)
/*! SRAMSIZE - System SRAM Size
 *  0b1001..128 KB
 *  0b0111..64 KB
 */
#define SIM_SDID_SRAMSIZE(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SDID_SRAMSIZE_SHIFT)) & SIM_SDID_SRAMSIZE_MASK)

#define SIM_SDID_SERIESID_MASK                   (0xF00000U)
#define SIM_SDID_SERIESID_SHIFT                  (20U)
/*! SERIESID - Kinetis Series ID
 *  0b0101..KW family
 */
#define SIM_SDID_SERIESID(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SDID_SERIESID_SHIFT)) & SIM_SDID_SERIESID_MASK)

#define SIM_SDID_SUBFAMID_MASK                   (0x3000000U)
#define SIM_SDID_SUBFAMID_SHIFT                  (24U)
/*! SUBFAMID - Kinetis Sub-Family ID.
 *  0b00..KWx0 Subfamily
 *  0b01..KWx1 Subfamily
 *  0b10..KWx2 Subfamily
 *  0b11..KWx3 Subfamily
 */
#define SIM_SDID_SUBFAMID(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SDID_SUBFAMID_SHIFT)) & SIM_SDID_SUBFAMID_MASK)

#define SIM_SDID_FAMID_MASK                      (0xF0000000U)
#define SIM_SDID_FAMID_SHIFT                     (28U)
/*! FAMID - Kinetis family ID
 *  0b0010..KW2x Family (802.15.4)
 *  0b0011..KW3x Family (BTLE)
 *  0b0100..KW4x Family (802.15.4, BTLE, GFSK , ANT)
 */
#define SIM_SDID_FAMID(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SDID_FAMID_SHIFT)) & SIM_SDID_FAMID_MASK)
/*! @} */

/*! @name SCGC4 - System Clock Gating Control Register 4 */
/*! @{ */

#define SIM_SCGC4_CMT_MASK                       (0x4U)
#define SIM_SCGC4_CMT_SHIFT                      (2U)
/*! CMT - CMT Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC4_CMT(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC4_CMT_SHIFT)) & SIM_SCGC4_CMT_MASK)

#define SIM_SCGC4_I2C0_MASK                      (0x40U)
#define SIM_SCGC4_I2C0_SHIFT                     (6U)
/*! I2C0 - I2C0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC4_I2C0(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC4_I2C0_SHIFT)) & SIM_SCGC4_I2C0_MASK)

#define SIM_SCGC4_I2C1_MASK                      (0x80U)
#define SIM_SCGC4_I2C1_SHIFT                     (7U)
/*! I2C1 - I2C1 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC4_I2C1(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC4_I2C1_SHIFT)) & SIM_SCGC4_I2C1_MASK)

#define SIM_SCGC4_CMP_MASK                       (0x80000U)
#define SIM_SCGC4_CMP_SHIFT                      (19U)
/*! CMP - Comparator Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC4_CMP(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC4_CMP_SHIFT)) & SIM_SCGC4_CMP_MASK)

#define SIM_SCGC4_VREF_MASK                      (0x100000U)
#define SIM_SCGC4_VREF_SHIFT                     (20U)
/*! VREF - VREF Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC4_VREF(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC4_VREF_SHIFT)) & SIM_SCGC4_VREF_MASK)
/*! @} */

/*! @name SCGC5 - System Clock Gating Control Register 5 */
/*! @{ */

#define SIM_SCGC5_LPTMR_MASK                     (0x1U)
#define SIM_SCGC5_LPTMR_SHIFT                    (0U)
/*! LPTMR - Low Power Timer Access Control
 *  0b0..Access disabled
 *  0b1..Access enabled
 */
#define SIM_SCGC5_LPTMR(x)                       (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_LPTMR_SHIFT)) & SIM_SCGC5_LPTMR_MASK)

#define SIM_SCGC5_TSI_MASK                       (0x20U)
#define SIM_SCGC5_TSI_SHIFT                      (5U)
/*! TSI - TSI Access Control
 *  0b0..Access disabled
 *  0b1..Access enabled
 */
#define SIM_SCGC5_TSI(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_TSI_SHIFT)) & SIM_SCGC5_TSI_MASK)

#define SIM_SCGC5_PORTA_MASK                     (0x200U)
#define SIM_SCGC5_PORTA_SHIFT                    (9U)
/*! PORTA - Port A Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_PORTA(x)                       (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_PORTA_SHIFT)) & SIM_SCGC5_PORTA_MASK)

#define SIM_SCGC5_PORTB_MASK                     (0x400U)
#define SIM_SCGC5_PORTB_SHIFT                    (10U)
/*! PORTB - Port B Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_PORTB(x)                       (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_PORTB_SHIFT)) & SIM_SCGC5_PORTB_MASK)

#define SIM_SCGC5_PORTC_MASK                     (0x800U)
#define SIM_SCGC5_PORTC_SHIFT                    (11U)
/*! PORTC - Port C Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_PORTC(x)                       (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_PORTC_SHIFT)) & SIM_SCGC5_PORTC_MASK)

#define SIM_SCGC5_LPUART0_MASK                   (0x100000U)
#define SIM_SCGC5_LPUART0_SHIFT                  (20U)
/*! LPUART0 - LPUART0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_LPUART0(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_LPUART0_SHIFT)) & SIM_SCGC5_LPUART0_MASK)

#define SIM_SCGC5_LTC_MASK                       (0x1000000U)
#define SIM_SCGC5_LTC_SHIFT                      (24U)
/*! LTC - LTC Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_LTC(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_LTC_SHIFT)) & SIM_SCGC5_LTC_MASK)

#define SIM_SCGC5_RSIM_MASK                      (0x2000000U)
#define SIM_SCGC5_RSIM_SHIFT                     (25U)
/*! RSIM - RSIM Clock Gate Control */
#define SIM_SCGC5_RSIM(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_RSIM_SHIFT)) & SIM_SCGC5_RSIM_MASK)

#define SIM_SCGC5_DCDC_MASK                      (0x4000000U)
#define SIM_SCGC5_DCDC_SHIFT                     (26U)
/*! DCDC - DCDC Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_DCDC(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_DCDC_SHIFT)) & SIM_SCGC5_DCDC_MASK)

#define SIM_SCGC5_BTLL_MASK                      (0x8000000U)
#define SIM_SCGC5_BTLL_SHIFT                     (27U)
/*! BTLL - BTLL System Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_BTLL(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_BTLL_SHIFT)) & SIM_SCGC5_BTLL_MASK)

#define SIM_SCGC5_PHYDIG_MASK                    (0x10000000U)
#define SIM_SCGC5_PHYDIG_SHIFT                   (28U)
/*! PHYDIG - PHY Digital Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_PHYDIG(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_PHYDIG_SHIFT)) & SIM_SCGC5_PHYDIG_MASK)

#define SIM_SCGC5_ZigBee_MASK                    (0x20000000U)
#define SIM_SCGC5_ZigBee_SHIFT                   (29U)
/*! ZigBee - 802.15.4 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC5_ZigBee(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_ZigBee_SHIFT)) & SIM_SCGC5_ZigBee_MASK)

#define SIM_SCGC5_ANT_MASK                       (0x40000000U)
#define SIM_SCGC5_ANT_SHIFT                      (30U)
/*! ANT - ANT Clock Gate Control
 *  0b0..ANT CGC bit disabled.
 *  0b1..ANT CGC bit can be enabled.
 */
#define SIM_SCGC5_ANT(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_ANT_SHIFT)) & SIM_SCGC5_ANT_MASK)

#define SIM_SCGC5_GEN_FSK_MASK                   (0x80000000U)
#define SIM_SCGC5_GEN_FSK_SHIFT                  (31U)
/*! GEN_FSK - Generic FSK enabled
 *  0b0..GFSK CGC bit disabled.
 *  0b1..GFSK CGC bit enabled.
 */
#define SIM_SCGC5_GEN_FSK(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SCGC5_GEN_FSK_SHIFT)) & SIM_SCGC5_GEN_FSK_MASK)
/*! @} */

/*! @name SCGC6 - System Clock Gating Control Register 6 */
/*! @{ */

#define SIM_SCGC6_FTF_MASK                       (0x1U)
#define SIM_SCGC6_FTF_SHIFT                      (0U)
/*! FTF - Flash Memory Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_FTF(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_FTF_SHIFT)) & SIM_SCGC6_FTF_MASK)

#define SIM_SCGC6_DMAMUX_MASK                    (0x2U)
#define SIM_SCGC6_DMAMUX_SHIFT                   (1U)
/*! DMAMUX - DMA Mux Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_DMAMUX(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_DMAMUX_SHIFT)) & SIM_SCGC6_DMAMUX_MASK)

#define SIM_SCGC6_TRNG_MASK                      (0x200U)
#define SIM_SCGC6_TRNG_SHIFT                     (9U)
/*! TRNG - TRNG Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_TRNG(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_TRNG_SHIFT)) & SIM_SCGC6_TRNG_MASK)

#define SIM_SCGC6_SPI0_MASK                      (0x1000U)
#define SIM_SCGC6_SPI0_SHIFT                     (12U)
/*! SPI0 - SPI0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_SPI0(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_SPI0_SHIFT)) & SIM_SCGC6_SPI0_MASK)

#define SIM_SCGC6_SPI1_MASK                      (0x2000U)
#define SIM_SCGC6_SPI1_SHIFT                     (13U)
/*! SPI1 - SPI1 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_SPI1(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_SPI1_SHIFT)) & SIM_SCGC6_SPI1_MASK)

#define SIM_SCGC6_PIT_MASK                       (0x800000U)
#define SIM_SCGC6_PIT_SHIFT                      (23U)
/*! PIT - PIT Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_PIT(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_PIT_SHIFT)) & SIM_SCGC6_PIT_MASK)

#define SIM_SCGC6_TPM0_MASK                      (0x1000000U)
#define SIM_SCGC6_TPM0_SHIFT                     (24U)
/*! TPM0 - TPM0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_TPM0(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_TPM0_SHIFT)) & SIM_SCGC6_TPM0_MASK)

#define SIM_SCGC6_TPM1_MASK                      (0x2000000U)
#define SIM_SCGC6_TPM1_SHIFT                     (25U)
/*! TPM1 - TPM1 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_TPM1(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_TPM1_SHIFT)) & SIM_SCGC6_TPM1_MASK)

#define SIM_SCGC6_TPM2_MASK                      (0x4000000U)
#define SIM_SCGC6_TPM2_SHIFT                     (26U)
/*! TPM2 - TPM2 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_TPM2(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_TPM2_SHIFT)) & SIM_SCGC6_TPM2_MASK)

#define SIM_SCGC6_ADC0_MASK                      (0x8000000U)
#define SIM_SCGC6_ADC0_SHIFT                     (27U)
/*! ADC0 - ADC0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_ADC0(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_ADC0_SHIFT)) & SIM_SCGC6_ADC0_MASK)

#define SIM_SCGC6_RTC_MASK                       (0x20000000U)
#define SIM_SCGC6_RTC_SHIFT                      (29U)
/*! RTC - RTC Access Control
 *  0b0..Access and interrupts disabled
 *  0b1..Access and interrupts enabled
 */
#define SIM_SCGC6_RTC(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_RTC_SHIFT)) & SIM_SCGC6_RTC_MASK)

#define SIM_SCGC6_DAC0_MASK                      (0x80000000U)
#define SIM_SCGC6_DAC0_SHIFT                     (31U)
/*! DAC0 - DAC0 Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC6_DAC0(x)                        (((uint32_t)(((uint32_t)(x)) << SIM_SCGC6_DAC0_SHIFT)) & SIM_SCGC6_DAC0_MASK)
/*! @} */

/*! @name SCGC7 - System Clock Gating Control Register 7 */
/*! @{ */

#define SIM_SCGC7_DMA_MASK                       (0x100U)
#define SIM_SCGC7_DMA_SHIFT                      (8U)
/*! DMA - DMA Clock Gate Control
 *  0b0..Clock disabled
 *  0b1..Clock enabled
 */
#define SIM_SCGC7_DMA(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_SCGC7_DMA_SHIFT)) & SIM_SCGC7_DMA_MASK)
/*! @} */

/*! @name CLKDIV1 - System Clock Divider Register 1 */
/*! @{ */

#define SIM_CLKDIV1_OUTDIV4_MASK                 (0x70000U)
#define SIM_CLKDIV1_OUTDIV4_SHIFT                (16U)
/*! OUTDIV4 - Clock 4 Output Divider value
 *  0b000..Divide-by-1.
 *  0b001..Divide-by-2.
 *  0b010..Divide-by-3.
 *  0b011..Divide-by-4.
 *  0b100..Divide-by-5.
 *  0b101..Divide-by-6.
 *  0b110..Divide-by-7.
 *  0b111..Divide-by-8.
 */
#define SIM_CLKDIV1_OUTDIV4(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_CLKDIV1_OUTDIV4_SHIFT)) & SIM_CLKDIV1_OUTDIV4_MASK)

#define SIM_CLKDIV1_OUTDIV1_MASK                 (0xF0000000U)
#define SIM_CLKDIV1_OUTDIV1_SHIFT                (28U)
/*! OUTDIV1 - Clock 1 Output Divider value
 *  0b0000..Divide-by-1.
 *  0b0001..Divide-by-2.
 *  0b0010..Divide-by-3.
 *  0b0011..Divide-by-4.
 *  0b0100..Divide-by-5.
 *  0b0101..Divide-by-6.
 *  0b0110..Divide-by-7.
 *  0b0111..Divide-by-8.
 *  0b1000..Divide-by-9.
 *  0b1001..Divide-by-10.
 *  0b1010..Divide-by-11.
 *  0b1011..Divide-by-12.
 *  0b1100..Divide-by-13.
 *  0b1101..Divide-by-14.
 *  0b1110..Divide-by-15.
 *  0b1111..Divide-by-16.
 */
#define SIM_CLKDIV1_OUTDIV1(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_CLKDIV1_OUTDIV1_SHIFT)) & SIM_CLKDIV1_OUTDIV1_MASK)
/*! @} */

/*! @name FCFG1 - Flash Configuration Register 1 */
/*! @{ */

#define SIM_FCFG1_FLASHDIS_MASK                  (0x1U)
#define SIM_FCFG1_FLASHDIS_SHIFT                 (0U)
/*! FLASHDIS - Flash Disable
 *  0b0..Flash is enabled.
 *  0b1..Flash is disabled.
 */
#define SIM_FCFG1_FLASHDIS(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLASHDIS_SHIFT)) & SIM_FCFG1_FLASHDIS_MASK)

#define SIM_FCFG1_FLASHDOZE_MASK                 (0x2U)
#define SIM_FCFG1_FLASHDOZE_SHIFT                (1U)
/*! FLASHDOZE - Flash Doze
 *  0b0..Flash remains enabled during Doze mode.
 *  0b1..Flash is disabled for the duration of Doze mode.
 */
#define SIM_FCFG1_FLASHDOZE(x)                   (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_FLASHDOZE_SHIFT)) & SIM_FCFG1_FLASHDOZE_MASK)

#define SIM_FCFG1_PFSIZE_MASK                    (0xF000000U)
#define SIM_FCFG1_PFSIZE_SHIFT                   (24U)
/*! PFSIZE - Program Flash Size
 *  0b1001..256 KB of program flash memory
 *  0b1011..512 KB of program flash memory
 *  0b1111..512 KB of program flash memory
 */
#define SIM_FCFG1_PFSIZE(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_FCFG1_PFSIZE_SHIFT)) & SIM_FCFG1_PFSIZE_MASK)
/*! @} */

/*! @name FCFG2 - Flash Configuration Register 2 */
/*! @{ */

#define SIM_FCFG2_MAXADDR1_MASK                  (0x7F0000U)
#define SIM_FCFG2_MAXADDR1_SHIFT                 (16U)
#define SIM_FCFG2_MAXADDR1(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_FCFG2_MAXADDR1_SHIFT)) & SIM_FCFG2_MAXADDR1_MASK)

#define SIM_FCFG2_MAXADDR0_MASK                  (0x7F000000U)
#define SIM_FCFG2_MAXADDR0_SHIFT                 (24U)
/*! MAXADDR0 - Max Address lock */
#define SIM_FCFG2_MAXADDR0(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_FCFG2_MAXADDR0_SHIFT)) & SIM_FCFG2_MAXADDR0_MASK)
/*! @} */

/*! @name UIDMH - Unique Identification Register Mid-High */
/*! @{ */

#define SIM_UIDMH_UID_MASK                       (0xFFFFU)
#define SIM_UIDMH_UID_SHIFT                      (0U)
/*! UID - Unique Identification */
#define SIM_UIDMH_UID(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_UIDMH_UID_SHIFT)) & SIM_UIDMH_UID_MASK)
/*! @} */

/*! @name UIDML - Unique Identification Register Mid Low */
/*! @{ */

#define SIM_UIDML_UID_MASK                       (0xFFFFFFFFU)
#define SIM_UIDML_UID_SHIFT                      (0U)
/*! UID - Unique Identification */
#define SIM_UIDML_UID(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_UIDML_UID_SHIFT)) & SIM_UIDML_UID_MASK)
/*! @} */

/*! @name UIDL - Unique Identification Register Low */
/*! @{ */

#define SIM_UIDL_UID_MASK                        (0xFFFFFFFFU)
#define SIM_UIDL_UID_SHIFT                       (0U)
/*! UID - Unique Identification */
#define SIM_UIDL_UID(x)                          (((uint32_t)(((uint32_t)(x)) << SIM_UIDL_UID_SHIFT)) & SIM_UIDL_UID_MASK)
/*! @} */

/*! @name COPC - COP Control Register */
/*! @{ */

#define SIM_COPC_COPW_MASK                       (0x1U)
#define SIM_COPC_COPW_SHIFT                      (0U)
/*! COPW - COP Windowed Mode
 *  0b0..Normal mode
 *  0b1..Windowed mode
 */
#define SIM_COPC_COPW(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPW_SHIFT)) & SIM_COPC_COPW_MASK)

#define SIM_COPC_COPCLKS_MASK                    (0x2U)
#define SIM_COPC_COPCLKS_SHIFT                   (1U)
/*! COPCLKS - COP Clock Select
 *  0b0..COP configured for short timeout
 *  0b1..COP configured for long timeout
 */
#define SIM_COPC_COPCLKS(x)                      (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPCLKS_SHIFT)) & SIM_COPC_COPCLKS_MASK)

#define SIM_COPC_COPT_MASK                       (0xCU)
#define SIM_COPC_COPT_SHIFT                      (2U)
/*! COPT - COP Watchdog Timeout
 *  0b00..COP disabled
 *  0b01..COP timeout after 25 cycles for short timeout or 213 cycles for long timeout
 *  0b10..COP timeout after 28 cycles for short timeout or 216 cycles for long timeout
 *  0b11..COP timeout after 210 cycles for short timeout or 218 cycles for long timeout
 */
#define SIM_COPC_COPT(x)                         (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPT_SHIFT)) & SIM_COPC_COPT_MASK)

#define SIM_COPC_COPSTPEN_MASK                   (0x10U)
#define SIM_COPC_COPSTPEN_SHIFT                  (4U)
/*! COPSTPEN - COP Stop Enable
 *  0b0..COP is disabled and the counter is reset in Stop modes
 *  0b1..COP is enabled in Stop modes
 */
#define SIM_COPC_COPSTPEN(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPSTPEN_SHIFT)) & SIM_COPC_COPSTPEN_MASK)

#define SIM_COPC_COPDBGEN_MASK                   (0x20U)
#define SIM_COPC_COPDBGEN_SHIFT                  (5U)
/*! COPDBGEN - COP Debug Enable
 *  0b0..COP is disabled and the counter is reset in Debug mode
 *  0b1..COP is enabled in Debug mode
 */
#define SIM_COPC_COPDBGEN(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPDBGEN_SHIFT)) & SIM_COPC_COPDBGEN_MASK)

#define SIM_COPC_COPCLKSEL_MASK                  (0xC0U)
#define SIM_COPC_COPCLKSEL_SHIFT                 (6U)
/*! COPCLKSEL - COP Clock Select
 *  0b00..LPO clock (1 kHz)
 *  0b01..MCGIRCLK
 *  0b10..OSCERCLK
 *  0b11..Bus clock
 */
#define SIM_COPC_COPCLKSEL(x)                    (((uint32_t)(((uint32_t)(x)) << SIM_COPC_COPCLKSEL_SHIFT)) & SIM_COPC_COPCLKSEL_MASK)
/*! @} */

/*! @name SRVCOP - Service COP */
/*! @{ */

#define SIM_SRVCOP_SRVCOP_MASK                   (0xFFU)
#define SIM_SRVCOP_SRVCOP_SHIFT                  (0U)
/*! SRVCOP - Service COP Register */
#define SIM_SRVCOP_SRVCOP(x)                     (((uint32_t)(((uint32_t)(x)) << SIM_SRVCOP_SRVCOP_SHIFT)) & SIM_SRVCOP_SRVCOP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SIM_Register_Masks */


/*!
 * @}
 */ /* end of group SIM_Peripheral_Access_Layer */


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


#endif  /* SIM_H_ */
