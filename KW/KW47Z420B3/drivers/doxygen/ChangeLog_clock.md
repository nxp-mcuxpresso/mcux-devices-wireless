# CLOCK

## [2.1.4]

- Improvements:
  - Extend PORT_CLOCKS and GPIO_CLOCKS definitions to include kCLOCK_NOGATE.
  - Fix assertion issue when calling GPIO_PinInit API with GPIOD as first parameter.

## [2.1.3]

- Bug Fixes:
  - Fixed violations of the CERT INT31-C.

## [2.1.2]

- Improvements:
  - Added comments for ERR052742: FRO6M clock is not stable.

## [2.1.1]

- New Features:
  - Provide the new API CLOCK_IsFIRCAutoTrimLocked to check whether FIRC auto trim locked to target frequency range.

## [2.1.0]

- Improvements
  - Provide the FSL_SDK_FORCE_CLK_DRIVER_NS_ACCESS macro to force use the none secure address even the trustzone secure mode is enabled.

## [2.0.0]

- Fixed the MISRA issues.

## [1.1.0]

- Some minor fixes.

## [1.0.0]

- Initial version.
