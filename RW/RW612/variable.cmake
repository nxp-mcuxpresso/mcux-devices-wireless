# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

#### chip related
include(${SdkRootDirPath}/devices/Wireless/variable.cmake)
include(${SdkRootDirPath}/devices/Wireless/RW/variable.cmake)
mcux_set_variable(device RW612)
mcux_set_variable(core_id_suffix_name "")
mcux_set_variable(soc_periph periph)

#### Source record