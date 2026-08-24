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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOADBALANCECONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOADBALANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 负载均衡配置，仅服务来源（ServiceSource，SourceId 非空）场景生效。
                */
                class AIGWLoadBalanceConfig : public AbstractModel
                {
                public:
                    AIGWLoadBalanceConfig();
                    ~AIGWLoadBalanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>负载均衡类型</p><p>枚举值：</p><ul><li>RoundRobin： 轮询</li><li>WeightedRoundRobin： 加权轮询</li><li>LeastConnections： 最少连接</li><li>Random： 随机</li></ul><p>默认值：RoundRobin</p>
                     * @return Algorithm <p>负载均衡类型</p><p>枚举值：</p><ul><li>RoundRobin： 轮询</li><li>WeightedRoundRobin： 加权轮询</li><li>LeastConnections： 最少连接</li><li>Random： 随机</li></ul><p>默认值：RoundRobin</p>
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置<p>负载均衡类型</p><p>枚举值：</p><ul><li>RoundRobin： 轮询</li><li>WeightedRoundRobin： 加权轮询</li><li>LeastConnections： 最少连接</li><li>Random： 随机</li></ul><p>默认值：RoundRobin</p>
                     * @param _algorithm <p>负载均衡类型</p><p>枚举值：</p><ul><li>RoundRobin： 轮询</li><li>WeightedRoundRobin： 加权轮询</li><li>LeastConnections： 最少连接</li><li>Random： 随机</li></ul><p>默认值：RoundRobin</p>
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡类型</p><p>枚举值：</p><ul><li>RoundRobin： 轮询</li><li>WeightedRoundRobin： 加权轮询</li><li>LeastConnections： 最少连接</li><li>Random： 随机</li></ul><p>默认值：RoundRobin</p>
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLOADBALANCECONFIG_H_
