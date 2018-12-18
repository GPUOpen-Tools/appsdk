## Copyright (c) 2018 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

include("Global-OpenCL-NoLib.cmake")

set(OPENCL_LIB "OpenCL.lib")

set(ADDITIONAL_LIBS ${ADDITIONAL_LIBS}
                    ${OPENCL_LIB})