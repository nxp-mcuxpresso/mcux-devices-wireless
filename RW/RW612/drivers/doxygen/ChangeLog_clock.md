# CLOCK

## [2.3.2]

- Fixed MSG issues. No function change.


## [2.3.1]

- Updated code according to new header file. No function change.

## [2.3.0]

- Added CLOCK_GetFreq() API
- Removed DTRNG flag wait in clock API to avoid unconditional delay.
  DTRNG will be reloaded in crypto init function.

## [2.2.0]

- Added els_gdet clock source enumeration
- Fixed kMAIN_CLK_to_DMIC_CLK value

## [2.1.4]

- Added noinline attribute to CLOCK_Delay() to work around compiler
  optimization issue

## [2.1.3]

- Added delay for DTRNG busy flag before disabling T3 256M

## [2.1.2]

- Renamed kCLOCK_Css/kCLOCK_CssApb to kCLOCK_Els/kCLOCK_ElsApb

## [2.1.1]

- Added ANA_GRP XTL power control in USB PHY API

## [2.1.0]

- Added USIM_CLOCKS macro
- Added CLOCK_DisableUsbhsPhyClock API

## [2.0.1]

- Moved g_clkinFreq and g_mclkinFreq inside extern "C"

## [2.0.0]

- initial version.
