## Copyright (c) 2018 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

## Define ATI Stream SDK Dir
set(APP_SDK_DIR ${COMMON_DIR}/Lib/AMD/APPSDK/3-0)

## Include directory
set(ADDITIONAL_INCLUDE_DIRECTORIES ${ADDITIONAL_INCLUDE_DIRECTORIES}
                                   ${APP_SDK_DIR}/include)

## Add linker directory
set(ADDITIONAL_LINK_DIRECTORIES ${ADDITIONAL_LINK_DIRECTORIES}
                                ${APP_SDK_DIR}/lib/${AMDTPlatformExt})
