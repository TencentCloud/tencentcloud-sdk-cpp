/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 终端节点配置
                */
                class EndpointConfigurations : public AbstractModel
                {
                public:
                    EndpointConfigurations();
                    ~EndpointConfigurations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>域名类型。可选值&#39;Domain&#39;, &#39;PublicIp&#39;。</p>
                     * @return EndpointType <p>域名类型。可选值&#39;Domain&#39;, &#39;PublicIp&#39;。</p>
                     * 
                     */
                    std::string GetEndpointType() const;

                    /**
                     * 设置<p>域名类型。可选值&#39;Domain&#39;, &#39;PublicIp&#39;。</p>
                     * @param _endpointType <p>域名类型。可选值&#39;Domain&#39;, &#39;PublicIp&#39;。</p>
                     * 
                     */
                    void SetEndpointType(const std::string& _endpointType);

                    /**
                     * 判断参数 EndpointType 是否已赋值
                     * @return EndpointType 是否已赋值
                     * 
                     */
                    bool EndpointTypeHasBeenSet() const;

                    /**
                     * 获取<p>域名。</p>
                     * @return EndpointService <p>域名。</p>
                     * 
                     */
                    std::string GetEndpointService() const;

                    /**
                     * 设置<p>域名。</p>
                     * @param _endpointService <p>域名。</p>
                     * 
                     */
                    void SetEndpointService(const std::string& _endpointService);

                    /**
                     * 判断参数 EndpointService 是否已赋值
                     * @return EndpointService 是否已赋值
                     * 
                     */
                    bool EndpointServiceHasBeenSet() const;

                    /**
                     * 获取<p>权重。</p>
                     * @return Weight <p>权重。</p>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>权重。</p>
                     * @param _weight <p>权重。</p>
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>健康检查状态；HEALTH：健康；UNHEALTH：不健康。</p>
                     * @return HealthCheckStatus <p>健康检查状态；HEALTH：健康；UNHEALTH：不健康。</p>
                     * 
                     */
                    std::string GetHealthCheckStatus() const;

                    /**
                     * 设置<p>健康检查状态；HEALTH：健康；UNHEALTH：不健康。</p>
                     * @param _healthCheckStatus <p>健康检查状态；HEALTH：健康；UNHEALTH：不健康。</p>
                     * 
                     */
                    void SetHealthCheckStatus(const std::string& _healthCheckStatus);

                    /**
                     * 判断参数 HealthCheckStatus 是否已赋值
                     * @return HealthCheckStatus 是否已赋值
                     * 
                     */
                    bool HealthCheckStatusHasBeenSet() const;

                private:

                    /**
                     * <p>域名类型。可选值&#39;Domain&#39;, &#39;PublicIp&#39;。</p>
                     */
                    std::string m_endpointType;
                    bool m_endpointTypeHasBeenSet;

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_endpointService;
                    bool m_endpointServiceHasBeenSet;

                    /**
                     * <p>权重。</p>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>健康检查状态；HEALTH：健康；UNHEALTH：不健康。</p>
                     */
                    std::string m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ENDPOINTCONFIGURATIONS_H_
