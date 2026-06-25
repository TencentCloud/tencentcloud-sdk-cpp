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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHFALLBACK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHFALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/FallBackItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 路由设置
                */
                class RouterSettingWithFallBack : public AbstractModel
                {
                public:
                    RouterSettingWithFallBack();
                    ~RouterSettingWithFallBack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回退策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FallBack <p>回退策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FallBackItem GetFallBack() const;

                    /**
                     * 设置<p>回退策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fallBack <p>回退策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFallBack(const FallBackItem& _fallBack);

                    /**
                     * 判断参数 FallBack 是否已赋值
                     * @return FallBack 是否已赋值
                     * 
                     */
                    bool FallBackHasBeenSet() const;

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
                     * 获取<p>模型间路由策略。</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossModelGroupRoutingStrategy <p>模型间路由策略。</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrossModelGroupRoutingStrategy() const;

                    /**
                     * 设置<p>模型间路由策略。</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossModelGroupRoutingStrategy <p>模型间路由策略。</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossModelGroupRoutingStrategy(const std::string& _crossModelGroupRoutingStrategy);

                    /**
                     * 判断参数 CrossModelGroupRoutingStrategy 是否已赋值
                     * @return CrossModelGroupRoutingStrategy 是否已赋值
                     * 
                     */
                    bool CrossModelGroupRoutingStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>回退策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FallBackItem m_fallBack;
                    bool m_fallBackHasBeenSet;

                    /**
                     * <p>模型内路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                    /**
                     * <p>模型间路由策略。</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crossModelGroupRoutingStrategy;
                    bool m_crossModelGroupRoutingStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHFALLBACK_H_
