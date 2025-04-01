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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfigMetric.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerBehavior.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 弹性伸缩策略
                */
                class CloudNativeAPIGatewayStrategyAutoScalerConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyAutoScalerConfig();
                    ~CloudNativeAPIGatewayStrategyAutoScalerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大副本数
                     * @return MaxReplicas 最大副本数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大副本数
                     * @param _maxReplicas 最大副本数
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric> GetMetrics() const;

                    /**
                     * 设置指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetrics(const std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取是否开启指标伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启指标伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启指标伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否开启指标伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * @deprecated
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * @deprecated
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * @deprecated
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * @deprecated
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取指标配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoScalerId 指标配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetAutoScalerId() const;

                    /**
                     * 设置指标配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoScalerId 指标配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetAutoScalerId(const std::string& _autoScalerId);

                    /**
                     * 判断参数 AutoScalerId 是否已赋值
                     * @return AutoScalerId 是否已赋值
                     * @deprecated
                     */
                    bool AutoScalerIdHasBeenSet() const;

                    /**
                     * 获取指标伸缩行为配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Behavior 指标伸缩行为配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AutoScalerBehavior GetBehavior() const;

                    /**
                     * 设置指标伸缩行为配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _behavior 指标伸缩行为配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBehavior(const AutoScalerBehavior& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                private:

                    /**
                     * 最大副本数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 是否开启指标伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 指标配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoScalerId;
                    bool m_autoScalerIdHasBeenSet;

                    /**
                     * 指标伸缩行为配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AutoScalerBehavior m_behavior;
                    bool m_behaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIG_H_
