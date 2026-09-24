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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DECISIONSCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DECISIONSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RoutingStrategyArgs.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DecisionsConfig配置。
                */
                class DecisionsConfig : public AbstractModel
                {
                public:
                    DecisionsConfig();
                    ~DecisionsConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutingStrategy <p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoutingStrategy() const;

                    /**
                     * 设置<p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routingStrategy <p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutingStrategy(const std::string& _routingStrategy);

                    /**
                     * 判断参数 RoutingStrategy 是否已赋值
                     * @return RoutingStrategy 是否已赋值
                     * 
                     */
                    bool RoutingStrategyHasBeenSet() const;

                    /**
                     * 获取<p>路由参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutingStrategyArgs <p>路由参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RoutingStrategyArgs GetRoutingStrategyArgs() const;

                    /**
                     * 设置<p>路由参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routingStrategyArgs <p>路由参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutingStrategyArgs(const RoutingStrategyArgs& _routingStrategyArgs);

                    /**
                     * 判断参数 RoutingStrategyArgs 是否已赋值
                     * @return RoutingStrategyArgs 是否已赋值
                     * 
                     */
                    bool RoutingStrategyArgsHasBeenSet() const;

                    /**
                     * 获取<p>CMR实例级别模型组内请求重试次数</p><p>取值范围：[0, 5]</p><p>默认值：2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRetries <p>CMR实例级别模型组内请求重试次数</p><p>取值范围：[0, 5]</p><p>默认值：2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNumRetries() const;

                    /**
                     * 设置<p>CMR实例级别模型组内请求重试次数</p><p>取值范围：[0, 5]</p><p>默认值：2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRetries <p>CMR实例级别模型组内请求重试次数</p><p>取值范围：[0, 5]</p><p>默认值：2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumRetries(const uint64_t& _numRetries);

                    /**
                     * 判断参数 NumRetries 是否已赋值
                     * @return NumRetries 是否已赋值
                     * 
                     */
                    bool NumRetriesHasBeenSet() const;

                private:

                    /**
                     * <p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                    /**
                     * <p>路由参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RoutingStrategyArgs m_routingStrategyArgs;
                    bool m_routingStrategyArgsHasBeenSet;

                    /**
                     * <p>CMR实例级别模型组内请求重试次数</p><p>取值范围：[0, 5]</p><p>默认值：2</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_numRetries;
                    bool m_numRetriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DECISIONSCONFIG_H_
