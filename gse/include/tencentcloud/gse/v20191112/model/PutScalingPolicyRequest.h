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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PUTSCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PUTSCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PutScalingPolicy请求参数结构体
                */
                class PutScalingPolicyRequest : public AbstractModel
                {
                public:
                    PutScalingPolicyRequest();
                    ~PutScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基于规则的扩缩容配置
                     * @return FleetId 基于规则的扩缩容配置
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置基于规则的扩缩容配置
                     * @param FleetId 基于规则的扩缩容配置
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取调整值
                     * @return ScalingAdjustment 调整值
                     */
                    int64_t GetScalingAdjustment() const;

                    /**
                     * 设置调整值
                     * @param ScalingAdjustment 调整值
                     */
                    void SetScalingAdjustment(const int64_t& _scalingAdjustment);

                    /**
                     * 判断参数 ScalingAdjustment 是否已赋值
                     * @return ScalingAdjustment 是否已赋值
                     */
                    bool ScalingAdjustmentHasBeenSet() const;

                    /**
                     * 获取调整类型
                     * @return ScalingAdjustmentType 调整类型
                     */
                    std::string GetScalingAdjustmentType() const;

                    /**
                     * 设置调整类型
                     * @param ScalingAdjustmentType 调整类型
                     */
                    void SetScalingAdjustmentType(const std::string& _scalingAdjustmentType);

                    /**
                     * 判断参数 ScalingAdjustmentType 是否已赋值
                     * @return ScalingAdjustmentType 是否已赋值
                     */
                    bool ScalingAdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取指标阈值
                     * @return Threshold 指标阈值
                     */
                    double GetThreshold() const;

                    /**
                     * 设置指标阈值
                     * @param Threshold 指标阈值
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取比较符
                     * @return ComparisonOperator 比较符
                     */
                    std::string GetComparisonOperator() const;

                    /**
                     * 设置比较符
                     * @param ComparisonOperator 比较符
                     */
                    void SetComparisonOperator(const std::string& _comparisonOperator);

                    /**
                     * 判断参数 ComparisonOperator 是否已赋值
                     * @return ComparisonOperator 是否已赋值
                     */
                    bool ComparisonOperatorHasBeenSet() const;

                    /**
                     * 获取时间长度（分钟）
                     * @return EvaluationPeriods 时间长度（分钟）
                     */
                    int64_t GetEvaluationPeriods() const;

                    /**
                     * 设置时间长度（分钟）
                     * @param EvaluationPeriods 时间长度（分钟）
                     */
                    void SetEvaluationPeriods(const int64_t& _evaluationPeriods);

                    /**
                     * 判断参数 EvaluationPeriods 是否已赋值
                     * @return EvaluationPeriods 是否已赋值
                     */
                    bool EvaluationPeriodsHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param MetricName 指标名称
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return PolicyType 策略类型
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型
                     * @param PolicyType 策略类型
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取扩缩容配置类型
                     * @return TargetConfiguration 扩缩容配置类型
                     */
                    TargetConfiguration GetTargetConfiguration() const;

                    /**
                     * 设置扩缩容配置类型
                     * @param TargetConfiguration 扩缩容配置类型
                     */
                    void SetTargetConfiguration(const TargetConfiguration& _targetConfiguration);

                    /**
                     * 判断参数 TargetConfiguration 是否已赋值
                     * @return TargetConfiguration 是否已赋值
                     */
                    bool TargetConfigurationHasBeenSet() const;

                private:

                    /**
                     * 基于规则的扩缩容配置
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 调整值
                     */
                    int64_t m_scalingAdjustment;
                    bool m_scalingAdjustmentHasBeenSet;

                    /**
                     * 调整类型
                     */
                    std::string m_scalingAdjustmentType;
                    bool m_scalingAdjustmentTypeHasBeenSet;

                    /**
                     * 指标阈值
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 比较符
                     */
                    std::string m_comparisonOperator;
                    bool m_comparisonOperatorHasBeenSet;

                    /**
                     * 时间长度（分钟）
                     */
                    int64_t m_evaluationPeriods;
                    bool m_evaluationPeriodsHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 扩缩容配置类型
                     */
                    TargetConfiguration m_targetConfiguration;
                    bool m_targetConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PUTSCALINGPOLICYREQUEST_H_
