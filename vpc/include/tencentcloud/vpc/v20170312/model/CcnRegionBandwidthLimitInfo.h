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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMITINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMITINFO_H_

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
                * 云联网（CCN）地域出带宽上限。
                */
                class CcnRegionBandwidthLimitInfo : public AbstractModel
                {
                public:
                    CcnRegionBandwidthLimitInfo();
                    ~CcnRegionBandwidthLimitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源地域，例如：ap-shanghai
                     * @return SourceRegion 源地域，例如：ap-shanghai
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置源地域，例如：ap-shanghai
                     * @param _sourceRegion 源地域，例如：ap-shanghai
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取目的地域， 例如：ap-shanghai
                     * @return DestinationRegion 目的地域， 例如：ap-shanghai
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置目的地域， 例如：ap-shanghai
                     * @param _destinationRegion 目的地域， 例如：ap-shanghai
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                    /**
                     * 获取出带宽上限，单位：Mbps。
                     * @return BandwidthLimit 出带宽上限，单位：Mbps。
                     * 
                     */
                    uint64_t GetBandwidthLimit() const;

                    /**
                     * 设置出带宽上限，单位：Mbps。
                     * @param _bandwidthLimit 出带宽上限，单位：Mbps。
                     * 
                     */
                    void SetBandwidthLimit(const uint64_t& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                private:

                    /**
                     * 源地域，例如：ap-shanghai
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * 目的地域， 例如：ap-shanghai
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * 出带宽上限，单位：Mbps。
                     */
                    uint64_t m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNREGIONBANDWIDTHLIMITINFO_H_
