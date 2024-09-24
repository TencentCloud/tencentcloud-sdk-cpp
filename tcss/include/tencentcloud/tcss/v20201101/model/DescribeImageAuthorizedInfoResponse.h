/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageScanInquireInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageAuthorizedInfo返回参数结构体
                */
                class DescribeImageAuthorizedInfoResponse : public AbstractModel
                {
                public:
                    DescribeImageAuthorizedInfoResponse();
                    ~DescribeImageAuthorizedInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总共有效的镜像授权数
                     * @return TotalAuthorizedCnt 总共有效的镜像授权数
                     * 
                     */
                    uint64_t GetTotalAuthorizedCnt() const;

                    /**
                     * 判断参数 TotalAuthorizedCnt 是否已赋值
                     * @return TotalAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool TotalAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取已使用镜像授权数
                     * @return UsedAuthorizedCnt 已使用镜像授权数
                     * 
                     */
                    uint64_t GetUsedAuthorizedCnt() const;

                    /**
                     * 判断参数 UsedAuthorizedCnt 是否已赋值
                     * @return UsedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool UsedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取已开启扫描镜像数
                     * @return ScannedImageCnt 已开启扫描镜像数
                     * 
                     */
                    uint64_t GetScannedImageCnt() const;

                    /**
                     * 判断参数 ScannedImageCnt 是否已赋值
                     * @return ScannedImageCnt 是否已赋值
                     * 
                     */
                    bool ScannedImageCntHasBeenSet() const;

                    /**
                     * 获取未开启扫描镜像数
                     * @return NotScannedImageCnt 未开启扫描镜像数
                     * 
                     */
                    uint64_t GetNotScannedImageCnt() const;

                    /**
                     * 判断参数 NotScannedImageCnt 是否已赋值
                     * @return NotScannedImageCnt 是否已赋值
                     * 
                     */
                    bool NotScannedImageCntHasBeenSet() const;

                    /**
                     * 获取本地未开启扫描镜像数
                     * @return NotScannedLocalImageCnt 本地未开启扫描镜像数
                     * 
                     */
                    uint64_t GetNotScannedLocalImageCnt() const;

                    /**
                     * 判断参数 NotScannedLocalImageCnt 是否已赋值
                     * @return NotScannedLocalImageCnt 是否已赋值
                     * 
                     */
                    bool NotScannedLocalImageCntHasBeenSet() const;

                    /**
                     * 获取试用镜像授权数
                     * @return TrialAuthorizedCnt 试用镜像授权数
                     * 
                     */
                    uint64_t GetTrialAuthorizedCnt() const;

                    /**
                     * 判断参数 TrialAuthorizedCnt 是否已赋值
                     * @return TrialAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool TrialAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取已使用试用镜像授权数
                     * @return UsedTrialAuthorizedCnt 已使用试用镜像授权数
                     * 
                     */
                    uint64_t GetUsedTrialAuthorizedCnt() const;

                    /**
                     * 判断参数 UsedTrialAuthorizedCnt 是否已赋值
                     * @return UsedTrialAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool UsedTrialAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取已购镜像授权数
                     * @return PurchasedAuthorizedCnt 已购镜像授权数
                     * 
                     */
                    uint64_t GetPurchasedAuthorizedCnt() const;

                    /**
                     * 判断参数 PurchasedAuthorizedCnt 是否已赋值
                     * @return PurchasedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool PurchasedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取已使用已购镜像授权数
                     * @return UsedPurchasedAuthorizedCnt 已使用已购镜像授权数
                     * 
                     */
                    uint64_t GetUsedPurchasedAuthorizedCnt() const;

                    /**
                     * 判断参数 UsedPurchasedAuthorizedCnt 是否已赋值
                     * @return UsedPurchasedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool UsedPurchasedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取是否可免费领取镜像授权数
                     * @return CanApplyFreeImageAuthorize 是否可免费领取镜像授权数
                     * 
                     */
                    bool GetCanApplyFreeImageAuthorize() const;

                    /**
                     * 判断参数 CanApplyFreeImageAuthorize 是否已赋值
                     * @return CanApplyFreeImageAuthorize 是否已赋值
                     * 
                     */
                    bool CanApplyFreeImageAuthorizeHasBeenSet() const;

                    /**
                     * 获取镜像扫描计费信息
                     * @return ImageScanInquireInfo 镜像扫描计费信息
                     * 
                     */
                    ImageScanInquireInfo GetImageScanInquireInfo() const;

                    /**
                     * 判断参数 ImageScanInquireInfo 是否已赋值
                     * @return ImageScanInquireInfo 是否已赋值
                     * 
                     */
                    bool ImageScanInquireInfoHasBeenSet() const;

                    /**
                     * 获取重复镜像数(本地镜像和仓库镜像)
                     * @return RepeatImageIdCnt 重复镜像数(本地镜像和仓库镜像)
                     * 
                     */
                    uint64_t GetRepeatImageIdCnt() const;

                    /**
                     * 判断参数 RepeatImageIdCnt 是否已赋值
                     * @return RepeatImageIdCnt 是否已赋值
                     * 
                     */
                    bool RepeatImageIdCntHasBeenSet() const;

                private:

                    /**
                     * 总共有效的镜像授权数
                     */
                    uint64_t m_totalAuthorizedCnt;
                    bool m_totalAuthorizedCntHasBeenSet;

                    /**
                     * 已使用镜像授权数
                     */
                    uint64_t m_usedAuthorizedCnt;
                    bool m_usedAuthorizedCntHasBeenSet;

                    /**
                     * 已开启扫描镜像数
                     */
                    uint64_t m_scannedImageCnt;
                    bool m_scannedImageCntHasBeenSet;

                    /**
                     * 未开启扫描镜像数
                     */
                    uint64_t m_notScannedImageCnt;
                    bool m_notScannedImageCntHasBeenSet;

                    /**
                     * 本地未开启扫描镜像数
                     */
                    uint64_t m_notScannedLocalImageCnt;
                    bool m_notScannedLocalImageCntHasBeenSet;

                    /**
                     * 试用镜像授权数
                     */
                    uint64_t m_trialAuthorizedCnt;
                    bool m_trialAuthorizedCntHasBeenSet;

                    /**
                     * 已使用试用镜像授权数
                     */
                    uint64_t m_usedTrialAuthorizedCnt;
                    bool m_usedTrialAuthorizedCntHasBeenSet;

                    /**
                     * 已购镜像授权数
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * 已使用已购镜像授权数
                     */
                    uint64_t m_usedPurchasedAuthorizedCnt;
                    bool m_usedPurchasedAuthorizedCntHasBeenSet;

                    /**
                     * 是否可免费领取镜像授权数
                     */
                    bool m_canApplyFreeImageAuthorize;
                    bool m_canApplyFreeImageAuthorizeHasBeenSet;

                    /**
                     * 镜像扫描计费信息
                     */
                    ImageScanInquireInfo m_imageScanInquireInfo;
                    bool m_imageScanInquireInfoHasBeenSet;

                    /**
                     * 重复镜像数(本地镜像和仓库镜像)
                     */
                    uint64_t m_repeatImageIdCnt;
                    bool m_repeatImageIdCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTHORIZEDINFORESPONSE_H_
