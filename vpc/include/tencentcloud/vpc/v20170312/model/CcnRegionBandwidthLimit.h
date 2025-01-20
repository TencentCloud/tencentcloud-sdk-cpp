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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网（CCN）地域出带宽上限
                */
                class CcnRegionBandwidthLimit : public AbstractModel
                {
                public:
                    CcnRegionBandwidthLimit();
                    ~CcnRegionBandwidthLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域，例如：ap-guangzhou
                     * @return Region 地域，例如：ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域，例如：ap-guangzhou
                     * @param _region 地域，例如：ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取出带宽上限，单位：Mbps
                     * @return BandwidthLimit 出带宽上限，单位：Mbps
                     * 
                     */
                    uint64_t GetBandwidthLimit() const;

                    /**
                     * 设置出带宽上限，单位：Mbps
                     * @param _bandwidthLimit 出带宽上限，单位：Mbps
                     * 
                     */
                    void SetBandwidthLimit(const uint64_t& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取是否黑石地域，默认`false`。
                     * @return IsBm 是否黑石地域，默认`false`。
                     * 
                     */
                    bool GetIsBm() const;

                    /**
                     * 设置是否黑石地域，默认`false`。
                     * @param _isBm 是否黑石地域，默认`false`。
                     * 
                     */
                    void SetIsBm(const bool& _isBm);

                    /**
                     * 判断参数 IsBm 是否已赋值
                     * @return IsBm 是否已赋值
                     * 
                     */
                    bool IsBmHasBeenSet() const;

                    /**
                     * 获取目的地域，例如：ap-shanghai
                     * @return DstRegion 目的地域，例如：ap-shanghai
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目的地域，例如：ap-shanghai
                     * @param _dstRegion 目的地域，例如：ap-shanghai
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取目的地域是否为黑石地域，默认`false`。
                     * @return DstIsBm 目的地域是否为黑石地域，默认`false`。
                     * 
                     */
                    bool GetDstIsBm() const;

                    /**
                     * 设置目的地域是否为黑石地域，默认`false`。
                     * @param _dstIsBm 目的地域是否为黑石地域，默认`false`。
                     * 
                     */
                    void SetDstIsBm(const bool& _dstIsBm);

                    /**
                     * 判断参数 DstIsBm 是否已赋值
                     * @return DstIsBm 是否已赋值
                     * 
                     */
                    bool DstIsBmHasBeenSet() const;

                private:

                    /**
                     * 地域，例如：ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 出带宽上限，单位：Mbps
                     */
                    uint64_t m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * 是否黑石地域，默认`false`。
                     */
                    bool m_isBm;
                    bool m_isBmHasBeenSet;

                    /**
                     * 目的地域，例如：ap-shanghai
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 目的地域是否为黑石地域，默认`false`。
                     */
                    bool m_dstIsBm;
                    bool m_dstIsBmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMIT_H_
