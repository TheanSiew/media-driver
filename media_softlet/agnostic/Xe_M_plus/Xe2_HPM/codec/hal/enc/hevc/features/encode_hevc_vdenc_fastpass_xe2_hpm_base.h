/*
* Copyright (c) 2023, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     encode_hevc_vdenc_fastpass_xe2_hpm_base.h
//! \brief    Defines for Xe2_HPM+ hevc fast pass encode feature
//!
#ifndef __ENCODE_HEVC_VDENC_FASTPASS_XE2_HPM_BASE_H__
#define __ENCODE_HEVC_VDENC_FASTPASS_XE2_HPM_BASE_H__

#include "encode_vdenc_hevc_fastpass.h"

namespace encode
{
class HevcVdencFastPass_Xe2_Hpm_Base : public HevcVdencFastPass
{
public:
    HevcVdencFastPass_Xe2_Hpm_Base(
        MediaFeatureManager     *featureManager,
        EncodeAllocator         *allocator,
        CodechalHwInterfaceNext *hwInterface,
        void                    *constSettings);

    ~HevcVdencFastPass_Xe2_Hpm_Base() {}

    MOS_STATUS Update(void *params) override;

    MHW_SETPAR_DECL_HDR(VDENC_SRC_SURFACE_STATE);

protected:
    uint32_t m_aligned_Width  = 0;
    uint32_t m_aligned_Height = 0;

    MEDIA_CLASS_DEFINE_END(encode__HevcVdencFastPass_Xe2_Hpm_Base)
};

}  // namespace encode

#endif  // !__ENCODE_HEVC_VDENC_FASTPASS_XE2_HPM_BASE_H__