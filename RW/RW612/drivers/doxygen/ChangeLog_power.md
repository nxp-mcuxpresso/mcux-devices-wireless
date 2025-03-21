# POWER

## [2.5.1]

- Added new SVC trim equation for new samples

## [2.5.0]

- Added Power_InitLoadGdetCfg() API
- Added bool return value for POWER_EnableGDetVSensors()

## [2.4.0]

- Added POWER_TrimSvc() API
- Added pack parameter to POWER_InitVoltage() API
- Moved POWER_DelayUs() to execute in SRAM
- Added barriar around WFI
- Tweaked SVC table
- Fixed POWER_GetResetCause() to get correct cause

## [2.3.0]

- Added POWER_SetPowerSwitchCallback() API
- Added POWER_InitVoltage() API
- Remove PMIP_BUCK_LVL configuration from POWER_InitPowerConfig().
- Fixed a potential compiling issue in Power_Delay()

## [2.2.0]

- Added POWER_DisableGDetVSensors() API
- Added POWER_EnableGDetVSensors() API
- Added GDET/VSensor setting around PM2 PM3

## [2.1.1]

- Renamed kPOWER_Pm2MemPuCss to kPOWER_Pm2MemPuEls
- Supported PM3 wakeup on A1 device

## [2.1.0]

- Added PM3 wakeup support for A1 device.
- Added POWER_ConfigCauInSleep() API. Remove pm3CauPd field from power_sleep_config_t structure.
- Added power_init_config_t parameter in POWER_InitPowerConfig() API.

## [2.0.1]

- Improved power performance
- Added return value for POWER_EnterPowerMode()

## [2.0.0]

- initial version.
