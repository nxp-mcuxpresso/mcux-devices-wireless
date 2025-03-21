# OCOTP

## [2.2.2]

- Fixed component id.

## [2.2.1]

- Removed reset on OTP init and deinit to keep OTP configuration on boot.

## [2.2.0]

- Added OCOTP_ReadPackage() API
- Exposed OCOTP_ReadSocOtp() API

## [2.1.0]

- Added OCOTP_ReadSVC() API.
- Avoid access OTP register before busy wait in OCOTP_OtpFuseRead()

## [2.0.1]

- Fixed an misra issue 10.1

## [2.0.0]

- initial version.
