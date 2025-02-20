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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHRANGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHRANGE_H_

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
                * 带宽上下限。
                */
                class BandwidthRange : public AbstractModel
                {
                public:
                    BandwidthRange();
                    ~BandwidthRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID。
                     * @return ResourceId 资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID。
                     * @param _resourceId 资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取带宽下限，单位：Mbps。
                     * @return BandwidthLowerLimit 带宽下限，单位：Mbps。
                     * 
                     */
                    uint64_t GetBandwidthLowerLimit() const;

                    /**
                     * 设置带宽下限，单位：Mbps。
                     * @param _bandwidthLowerLimit 带宽下限，单位：Mbps。
                     * 
                     */
                    void SetBandwidthLowerLimit(const uint64_t& _bandwidthLowerLimit);

                    /**
                     * 判断参数 BandwidthLowerLimit 是否已赋值
                     * @return BandwidthLowerLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLowerLimitHasBeenSet() const;

                    /**
                     * 获取带宽上限，单位：Mbps。
                     * @return BandwidthUpperLimit 带宽上限，单位：Mbps。
                     * 
                     */
                    uint64_t GetBandwidthUpperLimit() const;

                    /**
                     * 设置带宽上限，单位：Mbps。
                     * @param _bandwidthUpperLimit 带宽上限，单位：Mbps。
                     * 
                     */
                    void SetBandwidthUpperLimit(const uint64_t& _bandwidthUpperLimit);

                    /**
                     * 判断参数 BandwidthUpperLimit 是否已赋值
                     * @return BandwidthUpperLimit 是否已赋值
                     * 
                     */
                    bool BandwidthUpperLimitHasBeenSet() const;

                private:

                    /**
                     * 资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 带宽下限，单位：Mbps。
                     */
                    uint64_t m_bandwidthLowerLimit;
                    bool m_bandwidthLowerLimitHasBeenSet;

                    /**
                     * 带宽上限，单位：Mbps。
                     */
                    uint64_t m_bandwidthUpperLimit;
                    bool m_bandwidthUpperLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHRANGE_H_
