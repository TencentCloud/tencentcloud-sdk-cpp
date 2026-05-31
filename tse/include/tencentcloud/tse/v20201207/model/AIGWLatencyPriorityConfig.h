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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLATENCYPRIORITYCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLATENCYPRIORITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AIGWLatencyPriorityRouteRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 延迟优先路由配置
                */
                class AIGWLatencyPriorityConfig : public AbstractModel
                {
                public:
                    AIGWLatencyPriorityConfig();
                    ~AIGWLatencyPriorityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由规则列表</p>
                     * @return Rules <p>路由规则列表</p>
                     * 
                     */
                    std::vector<AIGWLatencyPriorityRouteRule> GetRules() const;

                    /**
                     * 设置<p>路由规则列表</p>
                     * @param _rules <p>路由规则列表</p>
                     * 
                     */
                    void SetRules(const std::vector<AIGWLatencyPriorityRouteRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>延迟指标</p><p>枚举值：</p><ul><li>LLMLatency： LLM 延迟</li><li>NetworkLatency： 网络延迟</li></ul>
                     * @return LatencyMetric <p>延迟指标</p><p>枚举值：</p><ul><li>LLMLatency： LLM 延迟</li><li>NetworkLatency： 网络延迟</li></ul>
                     * 
                     */
                    std::string GetLatencyMetric() const;

                    /**
                     * 设置<p>延迟指标</p><p>枚举值：</p><ul><li>LLMLatency： LLM 延迟</li><li>NetworkLatency： 网络延迟</li></ul>
                     * @param _latencyMetric <p>延迟指标</p><p>枚举值：</p><ul><li>LLMLatency： LLM 延迟</li><li>NetworkLatency： 网络延迟</li></ul>
                     * 
                     */
                    void SetLatencyMetric(const std::string& _latencyMetric);

                    /**
                     * 判断参数 LatencyMetric 是否已赋值
                     * @return LatencyMetric 是否已赋值
                     * 
                     */
                    bool LatencyMetricHasBeenSet() const;

                    /**
                     * 获取<p>路由策略</p><p>枚举值：</p><ul><li>FastMode： 快速模式</li><li>BalanceMode： 均衡模式</li></ul>
                     * @return RouteMode <p>路由策略</p><p>枚举值：</p><ul><li>FastMode： 快速模式</li><li>BalanceMode： 均衡模式</li></ul>
                     * 
                     */
                    std::string GetRouteMode() const;

                    /**
                     * 设置<p>路由策略</p><p>枚举值：</p><ul><li>FastMode： 快速模式</li><li>BalanceMode： 均衡模式</li></ul>
                     * @param _routeMode <p>路由策略</p><p>枚举值：</p><ul><li>FastMode： 快速模式</li><li>BalanceMode： 均衡模式</li></ul>
                     * 
                     */
                    void SetRouteMode(const std::string& _routeMode);

                    /**
                     * 判断参数 RouteMode 是否已赋值
                     * @return RouteMode 是否已赋值
                     * 
                     */
                    bool RouteModeHasBeenSet() const;

                private:

                    /**
                     * <p>路由规则列表</p>
                     */
                    std::vector<AIGWLatencyPriorityRouteRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>延迟指标</p><p>枚举值：</p><ul><li>LLMLatency： LLM 延迟</li><li>NetworkLatency： 网络延迟</li></ul>
                     */
                    std::string m_latencyMetric;
                    bool m_latencyMetricHasBeenSet;

                    /**
                     * <p>路由策略</p><p>枚举值：</p><ul><li>FastMode： 快速模式</li><li>BalanceMode： 均衡模式</li></ul>
                     */
                    std::string m_routeMode;
                    bool m_routeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLATENCYPRIORITYCONFIG_H_
