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
                     * 获取扩缩容配置服务器舰队ID
                     * @return FleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置扩缩容配置服务器舰队ID
                     * @param _fleetId 扩缩容配置服务器舰队ID
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
                     * 获取扩缩容策略名称，最小长度为1，最大长度为1024
                     * @return Name 扩缩容策略名称，最小长度为1，最大长度为1024
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩缩容策略名称，最小长度为1，最大长度为1024
                     * @param _name 扩缩容策略名称，最小长度为1，最大长度为1024
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
                     * 获取扩缩容调整值，ScalingAdjustmentType取值PercentChangeInCapacity时，取值范围-99~99
ScalingAdjustmentType取值ChangeInCapacity或ExactCapacity时，最小值要缩容的最多CVM个数，最大值为实际最大的CVM个数限额
                     * @return ScalingAdjustment 扩缩容调整值，ScalingAdjustmentType取值PercentChangeInCapacity时，取值范围-99~99
ScalingAdjustmentType取值ChangeInCapacity或ExactCapacity时，最小值要缩容的最多CVM个数，最大值为实际最大的CVM个数限额
                     * 
                     */
                    int64_t GetScalingAdjustment() const;

                    /**
                     * 设置扩缩容调整值，ScalingAdjustmentType取值PercentChangeInCapacity时，取值范围-99~99
ScalingAdjustmentType取值ChangeInCapacity或ExactCapacity时，最小值要缩容的最多CVM个数，最大值为实际最大的CVM个数限额
                     * @param _scalingAdjustment 扩缩容调整值，ScalingAdjustmentType取值PercentChangeInCapacity时，取值范围-99~99
ScalingAdjustmentType取值ChangeInCapacity或ExactCapacity时，最小值要缩容的最多CVM个数，最大值为实际最大的CVM个数限额
                     * 
                     */
                    void SetScalingAdjustment(const int64_t& _scalingAdjustment);

                    /**
                     * 判断参数 ScalingAdjustment 是否已赋值
                     * @return ScalingAdjustment 是否已赋值
                     * 
                     */
                    bool ScalingAdjustmentHasBeenSet() const;

                    /**
                     * 获取扩缩容调整类型，取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）
                     * @return ScalingAdjustmentType 扩缩容调整类型，取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）
                     * 
                     */
                    std::string GetScalingAdjustmentType() const;

                    /**
                     * 设置扩缩容调整类型，取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）
                     * @param _scalingAdjustmentType 扩缩容调整类型，取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）
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
                     * 获取扩缩容指标阈值
                     * @return Threshold 扩缩容指标阈值
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置扩缩容指标阈值
                     * @param _threshold 扩缩容指标阈值
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取扩缩容策略比较符，取值：>,>=,<,<=
                     * @return ComparisonOperator 扩缩容策略比较符，取值：>,>=,<,<=
                     * 
                     */
                    std::string GetComparisonOperator() const;

                    /**
                     * 设置扩缩容策略比较符，取值：>,>=,<,<=
                     * @param _comparisonOperator 扩缩容策略比较符，取值：>,>=,<,<=
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
                     * 获取单个策略持续时间长度（分钟）
                     * @return EvaluationPeriods 单个策略持续时间长度（分钟）
                     * 
                     */
                    int64_t GetEvaluationPeriods() const;

                    /**
                     * 设置单个策略持续时间长度（分钟）
                     * @param _evaluationPeriods 单个策略持续时间长度（分钟）
                     * 
                     */
                    void SetEvaluationPeriods(const int64_t& _evaluationPeriods);

                    /**
                     * 判断参数 EvaluationPeriods 是否已赋值
                     * @return EvaluationPeriods 是否已赋值
                     * 
                     */
                    bool EvaluationPeriodsHasBeenSet() const;

                    /**
                     * 获取扩缩容参与计算的指标名称，PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）；
PolicyType取值TargetBased时，MetricName取值PercentAvailableGameSessions
                     * @return MetricName 扩缩容参与计算的指标名称，PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）；
PolicyType取值TargetBased时，MetricName取值PercentAvailableGameSessions
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置扩缩容参与计算的指标名称，PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）；
PolicyType取值TargetBased时，MetricName取值PercentAvailableGameSessions
                     * @param _metricName 扩缩容参与计算的指标名称，PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）；
PolicyType取值TargetBased时，MetricName取值PercentAvailableGameSessions
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
                     * 获取策略类型，取值：TargetBased表示基于目标的策略；RuleBased表示基于规则的策略
                     * @return PolicyType 策略类型，取值：TargetBased表示基于目标的策略；RuleBased表示基于规则的策略
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型，取值：TargetBased表示基于目标的策略；RuleBased表示基于规则的策略
                     * @param _policyType 策略类型，取值：TargetBased表示基于目标的策略；RuleBased表示基于规则的策略
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
                     * 获取扩缩容目标值配置，只有TargetBased类型的策略生效
                     * @return TargetConfiguration 扩缩容目标值配置，只有TargetBased类型的策略生效
                     * 
                     */
                    TargetConfiguration GetTargetConfiguration() const;

                    /**
                     * 设置扩缩容目标值配置，只有TargetBased类型的策略生效
                     * @param _targetConfiguration 扩缩容目标值配置，只有TargetBased类型的策略生效
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
                     * 扩缩容配置服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 扩缩容策略名称，最小长度为1，最大长度为1024
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩缩容调整值，ScalingAdjustmentType取值PercentChangeInCapacity时，取值范围-99~99
ScalingAdjustmentType取值ChangeInCapacity或ExactCapacity时，最小值要缩容的最多CVM个数，最大值为实际最大的CVM个数限额
                     */
                    int64_t m_scalingAdjustment;
                    bool m_scalingAdjustmentHasBeenSet;

                    /**
                     * 扩缩容调整类型，取值（ChangeInCapacity，ExactCapacity，PercentChangeInCapacity）
                     */
                    std::string m_scalingAdjustmentType;
                    bool m_scalingAdjustmentTypeHasBeenSet;

                    /**
                     * 扩缩容指标阈值
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 扩缩容策略比较符，取值：>,>=,<,<=
                     */
                    std::string m_comparisonOperator;
                    bool m_comparisonOperatorHasBeenSet;

                    /**
                     * 单个策略持续时间长度（分钟）
                     */
                    int64_t m_evaluationPeriods;
                    bool m_evaluationPeriodsHasBeenSet;

                    /**
                     * 扩缩容参与计算的指标名称，PolicyType取值RuleBased，
MetricName取值（AvailableGameServerSessions，AvailableCustomCount，PercentAvailableCustomCount，ActiveInstances，IdleInstances，CurrentPlayerSessions和PercentIdleInstances）；
PolicyType取值TargetBased时，MetricName取值PercentAvailableGameSessions
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 策略类型，取值：TargetBased表示基于目标的策略；RuleBased表示基于规则的策略
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 扩缩容目标值配置，只有TargetBased类型的策略生效
                     */
                    TargetConfiguration m_targetConfiguration;
                    bool m_targetConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PUTSCALINGPOLICYREQUEST_H_
