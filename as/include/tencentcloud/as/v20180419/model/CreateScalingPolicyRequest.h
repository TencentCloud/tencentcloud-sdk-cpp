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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/MetricAlarm.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateScalingPolicy请求参数结构体
                */
                class CreateScalingPolicyRequest : public AbstractModel
                {
                public:
                    CreateScalingPolicyRequest();
                    ~CreateScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。
                     * @return ScalingPolicyName 告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。
                     * 
                     */
                    std::string GetScalingPolicyName() const;

                    /**
                     * 设置告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。
                     * @param _scalingPolicyName 告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。
                     * 
                     */
                    void SetScalingPolicyName(const std::string& _scalingPolicyName);

                    /**
                     * 判断参数 ScalingPolicyName 是否已赋值
                     * @return ScalingPolicyName 是否已赋值
                     * 
                     */
                    bool ScalingPolicyNameHasBeenSet() const;

                    /**
                     * 获取告警触发策略类型，默认类型为SIMPLE。取值范围：
<li>SIMPLE：简单策略</li>
<li>TARGET_TRACKING：目标追踪策略</li>
                     * @return ScalingPolicyType 告警触发策略类型，默认类型为SIMPLE。取值范围：
<li>SIMPLE：简单策略</li>
<li>TARGET_TRACKING：目标追踪策略</li>
                     * 
                     */
                    std::string GetScalingPolicyType() const;

                    /**
                     * 设置告警触发策略类型，默认类型为SIMPLE。取值范围：
<li>SIMPLE：简单策略</li>
<li>TARGET_TRACKING：目标追踪策略</li>
                     * @param _scalingPolicyType 告警触发策略类型，默认类型为SIMPLE。取值范围：
<li>SIMPLE：简单策略</li>
<li>TARGET_TRACKING：目标追踪策略</li>
                     * 
                     */
                    void SetScalingPolicyType(const std::string& _scalingPolicyType);

                    /**
                     * 判断参数 ScalingPolicyType 是否已赋值
                     * @return ScalingPolicyType 是否已赋值
                     * 
                     */
                    bool ScalingPolicyTypeHasBeenSet() const;

                    /**
                     * 获取告警触发后，期望实例数修改方式，仅适用于简单策略，在简单策略场景下必填。取值范围：
<li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li>
<li>EXACT_CAPACITY：调整至指定期望实例数</li>
<li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * @return AdjustmentType 告警触发后，期望实例数修改方式，仅适用于简单策略，在简单策略场景下必填。取值范围：
<li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li>
<li>EXACT_CAPACITY：调整至指定期望实例数</li>
<li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * 
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置告警触发后，期望实例数修改方式，仅适用于简单策略，在简单策略场景下必填。取值范围：
<li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li>
<li>EXACT_CAPACITY：调整至指定期望实例数</li>
<li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * @param _adjustmentType 告警触发后，期望实例数修改方式，仅适用于简单策略，在简单策略场景下必填。取值范围：
<li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li>
<li>EXACT_CAPACITY：调整至指定期望实例数</li>
<li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * 
                     */
                    void SetAdjustmentType(const std::string& _adjustmentType);

                    /**
                     * 判断参数 AdjustmentType 是否已赋值
                     * @return AdjustmentType 是否已赋值
                     * 
                     */
                    bool AdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取告警触发后，期望实例数的调整值，仅适用于简单策略，在简单策略场景下必填。
<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> 
<li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> 
<li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li>
                     * @return AdjustmentValue 告警触发后，期望实例数的调整值，仅适用于简单策略，在简单策略场景下必填。
<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> 
<li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> 
<li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li>
                     * 
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置告警触发后，期望实例数的调整值，仅适用于简单策略，在简单策略场景下必填。
<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> 
<li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> 
<li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li>
                     * @param _adjustmentValue 告警触发后，期望实例数的调整值，仅适用于简单策略，在简单策略场景下必填。
<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> 
<li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> 
<li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li>
                     * 
                     */
                    void SetAdjustmentValue(const int64_t& _adjustmentValue);

                    /**
                     * 判断参数 AdjustmentValue 是否已赋值
                     * @return AdjustmentValue 是否已赋值
                     * 
                     */
                    bool AdjustmentValueHasBeenSet() const;

                    /**
                     * 获取冷却时间，单位为秒，仅适用于简单策略。默认冷却时间300秒。
                     * @return Cooldown 冷却时间，单位为秒，仅适用于简单策略。默认冷却时间300秒。
                     * 
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置冷却时间，单位为秒，仅适用于简单策略。默认冷却时间300秒。
                     * @param _cooldown 冷却时间，单位为秒，仅适用于简单策略。默认冷却时间300秒。
                     * 
                     */
                    void SetCooldown(const uint64_t& _cooldown);

                    /**
                     * 判断参数 Cooldown 是否已赋值
                     * @return Cooldown 是否已赋值
                     * 
                     */
                    bool CooldownHasBeenSet() const;

                    /**
                     * 获取告警监控指标，仅适用于简单策略，在简单策略场景下必填。
                     * @return MetricAlarm 告警监控指标，仅适用于简单策略，在简单策略场景下必填。
                     * 
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置告警监控指标，仅适用于简单策略，在简单策略场景下必填。
                     * @param _metricAlarm 告警监控指标，仅适用于简单策略，在简单策略场景下必填。
                     * 
                     */
                    void SetMetricAlarm(const MetricAlarm& _metricAlarm);

                    /**
                     * 判断参数 MetricAlarm 是否已赋值
                     * @return MetricAlarm 是否已赋值
                     * 
                     */
                    bool MetricAlarmHasBeenSet() const;

                    /**
                     * 获取预定义监控项，仅适用于目标追踪策略，在目标追踪策略场景下必填。取值范围：
<li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：平均外网入带宽</li>
                     * @return PredefinedMetricType 预定义监控项，仅适用于目标追踪策略，在目标追踪策略场景下必填。取值范围：
<li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：平均外网入带宽</li>
                     * 
                     */
                    std::string GetPredefinedMetricType() const;

                    /**
                     * 设置预定义监控项，仅适用于目标追踪策略，在目标追踪策略场景下必填。取值范围：
<li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：平均外网入带宽</li>
                     * @param _predefinedMetricType 预定义监控项，仅适用于目标追踪策略，在目标追踪策略场景下必填。取值范围：
<li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：平均外网入带宽</li>
                     * 
                     */
                    void SetPredefinedMetricType(const std::string& _predefinedMetricType);

                    /**
                     * 判断参数 PredefinedMetricType 是否已赋值
                     * @return PredefinedMetricType 是否已赋值
                     * 
                     */
                    bool PredefinedMetricTypeHasBeenSet() const;

                    /**
                     * 获取目标值，仅适用于目标追踪策略，在目标追踪策略场景下必填。
<li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：>0，单位：Mbps</li>
                     * @return TargetValue 目标值，仅适用于目标追踪策略，在目标追踪策略场景下必填。
<li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：>0，单位：Mbps</li>
                     * 
                     */
                    uint64_t GetTargetValue() const;

                    /**
                     * 设置目标值，仅适用于目标追踪策略，在目标追踪策略场景下必填。
<li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：>0，单位：Mbps</li>
                     * @param _targetValue 目标值，仅适用于目标追踪策略，在目标追踪策略场景下必填。
<li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：>0，单位：Mbps</li>
                     * 
                     */
                    void SetTargetValue(const uint64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     * 
                     */
                    bool TargetValueHasBeenSet() const;

                    /**
                     * 获取实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600，默认预热时间300秒。
                     * @return EstimatedInstanceWarmup 实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600，默认预热时间300秒。
                     * 
                     */
                    uint64_t GetEstimatedInstanceWarmup() const;

                    /**
                     * 设置实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600，默认预热时间300秒。
                     * @param _estimatedInstanceWarmup 实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600，默认预热时间300秒。
                     * 
                     */
                    void SetEstimatedInstanceWarmup(const uint64_t& _estimatedInstanceWarmup);

                    /**
                     * 判断参数 EstimatedInstanceWarmup 是否已赋值
                     * @return EstimatedInstanceWarmup 是否已赋值
                     * 
                     */
                    bool EstimatedInstanceWarmupHasBeenSet() const;

                    /**
                     * 获取是否禁用缩容，仅适用于目标追踪策略，默认值为 false。取值范围：
<li>true：目标追踪策略仅触发扩容</li>
<li>false：目标追踪策略触发扩容和缩容</li>
                     * @return DisableScaleIn 是否禁用缩容，仅适用于目标追踪策略，默认值为 false。取值范围：
<li>true：目标追踪策略仅触发扩容</li>
<li>false：目标追踪策略触发扩容和缩容</li>
                     * 
                     */
                    bool GetDisableScaleIn() const;

                    /**
                     * 设置是否禁用缩容，仅适用于目标追踪策略，默认值为 false。取值范围：
<li>true：目标追踪策略仅触发扩容</li>
<li>false：目标追踪策略触发扩容和缩容</li>
                     * @param _disableScaleIn 是否禁用缩容，仅适用于目标追踪策略，默认值为 false。取值范围：
<li>true：目标追踪策略仅触发扩容</li>
<li>false：目标追踪策略触发扩容和缩容</li>
                     * 
                     */
                    void SetDisableScaleIn(const bool& _disableScaleIn);

                    /**
                     * 判断参数 DisableScaleIn 是否已赋值
                     * @return DisableScaleIn 是否已赋值
                     * 
                     */
                    bool DisableScaleInHasBeenSet() const;

                    /**
                     * 获取此参数已不再生效，请使用[创建通知](https://cloud.tencent.com/document/api/377/33185)。
通知组ID，即为用户组ID集合。
                     * @return NotificationUserGroupIds 此参数已不再生效，请使用[创建通知](https://cloud.tencent.com/document/api/377/33185)。
通知组ID，即为用户组ID集合。
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置此参数已不再生效，请使用[创建通知](https://cloud.tencent.com/document/api/377/33185)。
通知组ID，即为用户组ID集合。
                     * @param _notificationUserGroupIds 此参数已不再生效，请使用[创建通知](https://cloud.tencent.com/document/api/377/33185)。
通知组ID，即为用户组ID集合。
                     * 
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     * 
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 或调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * 告警触发策略类型，默认类型为SIMPLE。取值范围：
<li>SIMPLE：简单策略</li>
<li>TARGET_TRACKING：目标追踪策略</li>
                     */
                    std::string m_scalingPolicyType;
                    bool m_scalingPolicyTypeHasBeenSet;

                    /**
                     * 告警触发后，期望实例数修改方式，仅适用于简单策略，在简单策略场景下必填。取值范围：
<li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li>
<li>EXACT_CAPACITY：调整至指定期望实例数</li>
<li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * 告警触发后，期望实例数的调整值，仅适用于简单策略，在简单策略场景下必填。
<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> 
<li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> 
<li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li>
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * 冷却时间，单位为秒，仅适用于简单策略。默认冷却时间300秒。
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

                    /**
                     * 告警监控指标，仅适用于简单策略，在简单策略场景下必填。
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * 预定义监控项，仅适用于目标追踪策略，在目标追踪策略场景下必填。取值范围：
<li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：平均外网入带宽</li>
                     */
                    std::string m_predefinedMetricType;
                    bool m_predefinedMetricTypeHasBeenSet;

                    /**
                     * 目标值，仅适用于目标追踪策略，在目标追踪策略场景下必填。
<li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_LAN_TRAFFIC_IN：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT：>0，单位：Mbps</li>
<li>ASG_AVG_WAN_TRAFFIC_IN：>0，单位：Mbps</li>
                     */
                    uint64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                    /**
                     * 实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600，默认预热时间300秒。
                     */
                    uint64_t m_estimatedInstanceWarmup;
                    bool m_estimatedInstanceWarmupHasBeenSet;

                    /**
                     * 是否禁用缩容，仅适用于目标追踪策略，默认值为 false。取值范围：
<li>true：目标追踪策略仅触发扩容</li>
<li>false：目标追踪策略触发扩容和缩容</li>
                     */
                    bool m_disableScaleIn;
                    bool m_disableScaleInHasBeenSet;

                    /**
                     * 此参数已不再生效，请使用[创建通知](https://cloud.tencent.com/document/api/377/33185)。
通知组ID，即为用户组ID集合。
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_
