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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SCALINGPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TargetConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 动态扩缩容配置
                */
                class ScalingPolicy : public AbstractModel
                {
                public:
                    ScalingPolicy();
                    ~ScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingAdjustment 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScalingAdjustment() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingAdjustment 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingAdjustment(const std::string& _scalingAdjustment);

                    /**
                     * 判断参数 ScalingAdjustment 是否已赋值
                     * @return ScalingAdjustment 是否已赋值
                     * 
                     */
                    bool ScalingAdjustmentHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingAdjustmentType 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScalingAdjustmentType() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingAdjustmentType 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingAdjustmentType(const std::string& _scalingAdjustmentType);

                    /**
                     * 判断参数 ScalingAdjustmentType 是否已赋值
                     * @return ScalingAdjustmentType 是否已赋值
                     * 
                     */
                    bool ScalingAdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComparisonOperator 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComparisonOperator() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comparisonOperator 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComparisonOperator(const std::string& _comparisonOperator);

                    /**
                     * 判断参数 ComparisonOperator 是否已赋值
                     * @return ComparisonOperator 是否已赋值
                     * 
                     */
                    bool ComparisonOperatorHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvaluationPeriods 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvaluationPeriods() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _evaluationPeriods 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvaluationPeriods(const std::string& _evaluationPeriods);

                    /**
                     * 判断参数 EvaluationPeriods 是否已赋值
                     * @return EvaluationPeriods 是否已赋值
                     * 
                     */
                    bool EvaluationPeriodsHasBeenSet() const;

                    /**
                     * 获取保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyType 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取基于规则的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConfiguration 基于规则的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetConfiguration GetTargetConfiguration() const;

                    /**
                     * 设置基于规则的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetConfiguration 基于规则的配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetConfiguration(const TargetConfiguration& _targetConfiguration);

                    /**
                     * 判断参数 TargetConfiguration 是否已赋值
                     * @return TargetConfiguration 是否已赋值
                     * 
                     */
                    bool TargetConfigurationHasBeenSet() const;

                private:

                    /**
                     * 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scalingAdjustment;
                    bool m_scalingAdjustmentHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scalingAdjustmentType;
                    bool m_scalingAdjustmentTypeHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comparisonOperator;
                    bool m_comparisonOperatorHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_evaluationPeriods;
                    bool m_evaluationPeriodsHasBeenSet;

                    /**
                     * 保留参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 基于规则的配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetConfiguration m_targetConfiguration;
                    bool m_targetConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SCALINGPOLICY_H_
