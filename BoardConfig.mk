#
# Copyright (C) 2021 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

include device/samsung/sm6150-common/BoardConfigCommon.mk

DEVICE_PATH := device/samsung/a70q

# Init
TARGET_INIT_VENDOR_LIB := //$(DEVICE_PATH):libinit_a70q
TARGET_RECOVERY_DEVICE_MODULES := libinit_a70q

# Kernel
BOARD_NAME               := SRPRL06C001
BOARD_HEADER_VERSION     := 1
BOARD_MKBOOTIMG_ARGS     := --header_version $(BOARD_HEADER_VERSION) --board $(BOARD_NAME)
BOARD_KERNEL_IMAGE_NAME  := Image.gz-dtb
TARGET_KERNEL_CONFIG     := a70q_defconfig

# Recovery
