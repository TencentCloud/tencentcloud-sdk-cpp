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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 各个健康检查区域下源站的健康状态。
                */
                class CheckRegionHealthStatus : public AbstractModel
                {
                public:
                    CheckRegionHealthStatus();
                    ~CheckRegionHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检查区域，ISO-3166-1 两位字母代码。
                     * @return Region 健康检查区域，ISO-3166-1 两位字母代码。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置健康检查区域，ISO-3166-1 两位字母代码。
                     * @param _region 健康检查区域，ISO-3166-1 两位字母代码。
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
                     * 获取单健康检查区域下探测源站的健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li> Undetected：未探测到数据。</li>说明：单健康检查区域下所有源站为健康，则状态为健康，否则为不健康。
                     * @return Healthy 单健康检查区域下探测源站的健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li> Undetected：未探测到数据。</li>说明：单健康检查区域下所有源站为健康，则状态为健康，否则为不健康。
                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置单健康检查区域下探测源站的健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li> Undetected：未探测到数据。</li>说明：单健康检查区域下所有源站为健康，则状态为健康，否则为不健康。
                     * @param _healthy 单健康检查区域下探测源站的健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li> Undetected：未探测到数据。</li>说明：单健康检查区域下所有源站为健康，则状态为健康，否则为不健康。
                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取源站健康状态。
                     * @return OriginHealthStatus 源站健康状态。
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置源站健康状态。
                     * @param _originHealthStatus 源站健康状态。
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                private:

                    /**
                     * 健康检查区域，ISO-3166-1 两位字母代码。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 单健康检查区域下探测源站的健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li> Undetected：未探测到数据。</li>说明：单健康检查区域下所有源站为健康，则状态为健康，否则为不健康。
                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 源站健康状态。
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKREGIONHEALTHSTATUS_H_
