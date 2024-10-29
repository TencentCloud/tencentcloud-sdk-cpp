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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组里的源站健康状态。
                */
                class OriginHealthStatus : public AbstractModel
                {
                public:
                    OriginHealthStatus();
                    ~OriginHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站。
                     * @return Origin 源站。
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置源站。
                     * @param _origin 源站。
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取源站健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li>Undetected：未探测到数据。</li>

                     * @return Healthy 源站健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li>Undetected：未探测到数据。</li>

                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置源站健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li>Undetected：未探测到数据。</li>

                     * @param _healthy 源站健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li>Undetected：未探测到数据。</li>

                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                private:

                    /**
                     * 源站。
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 源站健康状态，取值有：
<li>Healthy：健康；</li>
<li>Unhealthy：不健康；</li>
<li>Undetected：未探测到数据。</li>

                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINHEALTHSTATUS_H_
