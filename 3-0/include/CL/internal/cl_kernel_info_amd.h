/* ============================================================

Copyright �2012 Advanced Micro Devices, Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

============================================================ */

#ifndef __CL_KERNEL_INFO_AMD_H
#define __CL_KERNEL_INFO_AMD_H

#include "CL/cl_platform.h"

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

typedef cl_uint cl_kernel_info_amd;

/* cl_kernel_info */
enum KernelInfoAMD
{
    CL_KERNELINFO_NONE = 0x0,
    CL_KERNELINFO_SCRATCH_REGS,
    CL_KERNELINFO_WAVEFRONT_PER_SIMD,
    CL_KERNELINFO_WAVEFRONT_SIZE,
    CL_KERNELINFO_AVAILABLE_GPRS,
    CL_KERNELINFO_USED_GPRS,
    CL_KERNELINFO_AVAILABLE_LDS_SIZE,
    CL_KERNELINFO_USED_LDS_SIZE,
    CL_KERNELINFO_AVAILABLE_STACK_SIZE,
    CL_KERNELINFO_USED_STACK_SIZE,
    CL_KERNELINFO_AVAILABLE_SGPRS,
    CL_KERNELINFO_USED_SGPRS,
    CL_KERNELINFO_AVAILABLE_VGPRS,
    CL_KERNELINFO_USED_VGPRS,
    CL_KERNELINFO_LAST
};

/*! \brief Retrieves the kernel information.
 *
 *  \param kernel specifies the kernel object being queried.
 *
 *  \param device identifies a specific device in the list of devices associated
 *  with \a kernel. The list of devices is the list of devices in the OpenCL
 *  context that is associated with \a kernel. If the list of devices associated
 *  with kernel is a single device, \a device can be a NULL value.
 *
 *  \param param_name specifies the information to query.
 *
 *  \param param_value is a pointer to memory where the appropriate result
 *  being queried is returned. If \a param_value is NULL, it is ignored.
 *
 *  \param param_value_size is used to specify the size in bytes of memory
 *  pointed to by \a param_value. This size must be >= size of return type.
 *
 *  \param param_value_size_ret returns the actual size in bytes of data copied
 *  to \a param_value. If \a param_value_size_ret is NULL, it is ignored.
 *
 *  \return One of the following values:
 *  - CL_SUCCESS if the function is executed successfully
 *  - CL_INVALID_VALUE if \a param_name is not valid, or if size in bytes
 *    specified by \a param_value_size is < size of return type and
 *    \a param_value is not NULL
 *  - CL_INVALID_KERNEL if \a kernel is a not a valid program object
 */
extern CL_API_ENTRY cl_int CL_API_CALL
clGetKernelInfoAMD(
    cl_kernel           /* kernel */,
    cl_device_id        /* device */,
    cl_kernel_info_amd  /* param_name */,
    size_t              /* param_value_size */,
    void*               /* param_value */,
    size_t*             /* param_value_size_ret */
   ) CL_API_SUFFIX__VERSION_1_0;

#ifdef __cplusplus
} /*extern "C"*/
#endif /*__cplusplus*/

#endif  /*__CL_KERNEL_INFO_AMD_H*/
