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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCALINGPOLICYREQUEST_H_

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
                * ModifyScalingPolicy请求参数结构体
                */
                class ModifyScalingPolicyRequest : public AbstractModel
                {
                public:
                    ModifyScalingPolicyRequest();
                    ~ModifyScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警策略ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/33178">DescribeScalingPolicies</a> ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。</p>
                     * @return AutoScalingPolicyId <p>告警策略ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/33178">DescribeScalingPolicies</a> ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。</p>
                     * 
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置<p>告警策略ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/33178">DescribeScalingPolicies</a> ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。</p>
                     * @param _autoScalingPolicyId <p>告警策略ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/33178">DescribeScalingPolicies</a> ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。</p>
                     * 
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     * 
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。</p>
                     * @return ScalingPolicyName <p>告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。</p>
                     * 
                     */
                    std::string GetScalingPolicyName() const;

                    /**
                     * 设置<p>告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。</p>
                     * @param _scalingPolicyName <p>告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。</p>
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
                     * 获取<p>告警触发后，期望实例数修改方式，仅适用于简单策略。取值范围：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li></p>
                     * @return AdjustmentType <p>告警触发后，期望实例数修改方式，仅适用于简单策略。取值范围：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li></p>
                     * 
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置<p>告警触发后，期望实例数修改方式，仅适用于简单策略。取值范围：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li></p>
                     * @param _adjustmentType <p>告警触发后，期望实例数修改方式，仅适用于简单策略。取值范围：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li></p>
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
                     * 获取<p>告警触发后，期望实例数的调整值，仅适用于简单策略。<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> <li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> <li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li></p>
                     * @return AdjustmentValue <p>告警触发后，期望实例数的调整值，仅适用于简单策略。<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> <li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> <li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li></p>
                     * 
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置<p>告警触发后，期望实例数的调整值，仅适用于简单策略。<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> <li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> <li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li></p>
                     * @param _adjustmentValue <p>告警触发后，期望实例数的调整值，仅适用于简单策略。<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> <li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> <li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li></p>
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
                     * 获取<p>冷却时间，仅适用于简单策略，单位为秒。</p>
                     * @return Cooldown <p>冷却时间，仅适用于简单策略，单位为秒。</p>
                     * 
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置<p>冷却时间，仅适用于简单策略，单位为秒。</p>
                     * @param _cooldown <p>冷却时间，仅适用于简单策略，单位为秒。</p>
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
                     * 获取<p>告警监控指标，仅适用于简单策略。</p>
                     * @return MetricAlarm <p>告警监控指标，仅适用于简单策略。</p>
                     * 
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置<p>告警监控指标，仅适用于简单策略。</p>
                     * @param _metricAlarm <p>告警监控指标，仅适用于简单策略。</p>
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
                     * 获取<p>预定义监控项，仅适用于目标追踪策略。取值范围：<br><li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li><li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li><li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li><li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li><li>ASG_AVG_WAN_TRAFFIC_IN：平均外网出带宽</li>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>枚举值：<ul><li> ASG_AVG_CPU_UTILIZATION： 平均CPU使用率</li></ul>
                     * @return PredefinedMetricType <p>预定义监控项，仅适用于目标追踪策略。取值范围：<br><li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li><li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li><li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li><li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li><li>ASG_AVG_WAN_TRAFFIC_IN：平均外网出带宽</li>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>枚举值：<ul><li> ASG_AVG_CPU_UTILIZATION： 平均CPU使用率</li></ul>
                     * 
                     */
                    std::string GetPredefinedMetricType() const;

                    /**
                     * 设置<p>预定义监控项，仅适用于目标追踪策略。取值范围：<br><li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li><li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li><li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li><li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li><li>ASG_AVG_WAN_TRAFFIC_IN：平均外网出带宽</li>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>枚举值：<ul><li> ASG_AVG_CPU_UTILIZATION： 平均CPU使用率</li></ul>
                     * @param _predefinedMetricType <p>预定义监控项，仅适用于目标追踪策略。取值范围：<br><li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li><li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li><li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li><li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li><li>ASG_AVG_WAN_TRAFFIC_IN：平均外网出带宽</li>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>枚举值：<ul><li> ASG_AVG_CPU_UTILIZATION： 平均CPU使用率</li></ul>
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
                     * 获取<p>目标值，仅适用于目标追踪策略。<br><li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li><li>ASG_AVG_LAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li></p>
                     * @return TargetValue <p>目标值，仅适用于目标追踪策略。<br><li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li><li>ASG_AVG_LAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li></p>
                     * 
                     */
                    uint64_t GetTargetValue() const;

                    /**
                     * 设置<p>目标值，仅适用于目标追踪策略。<br><li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li><li>ASG_AVG_LAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li></p>
                     * @param _targetValue <p>目标值，仅适用于目标追踪策略。<br><li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li><li>ASG_AVG_LAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li></p>
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
                     * 获取<p>实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600。</p>
                     * @return EstimatedInstanceWarmup <p>实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600。</p>
                     * 
                     */
                    uint64_t GetEstimatedInstanceWarmup() const;

                    /**
                     * 设置<p>实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600。</p>
                     * @param _estimatedInstanceWarmup <p>实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600。</p>
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
                     * 获取<p>是否禁用缩容，仅适用于目标追踪策略。取值范围：<br><li>true：目标追踪策略仅触发扩容</li><li>false：目标追踪策略触发扩容和缩容</li></p>
                     * @return DisableScaleIn <p>是否禁用缩容，仅适用于目标追踪策略。取值范围：<br><li>true：目标追踪策略仅触发扩容</li><li>false：目标追踪策略触发扩容和缩容</li></p>
                     * 
                     */
                    bool GetDisableScaleIn() const;

                    /**
                     * 设置<p>是否禁用缩容，仅适用于目标追踪策略。取值范围：<br><li>true：目标追踪策略仅触发扩容</li><li>false：目标追踪策略触发扩容和缩容</li></p>
                     * @param _disableScaleIn <p>是否禁用缩容，仅适用于目标追踪策略。取值范围：<br><li>true：目标追踪策略仅触发扩容</li><li>false：目标追踪策略触发扩容和缩容</li></p>
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
                     * 获取<p>此参数已不再生效，请使用<a href="https://cloud.tencent.com/document/api/377/33185">创建通知</a>。通知组ID，即为用户组ID集合。</p>
                     * @return NotificationUserGroupIds <p>此参数已不再生效，请使用<a href="https://cloud.tencent.com/document/api/377/33185">创建通知</a>。通知组ID，即为用户组ID集合。</p>
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置<p>此参数已不再生效，请使用<a href="https://cloud.tencent.com/document/api/377/33185">创建通知</a>。通知组ID，即为用户组ID集合。</p>
                     * @param _notificationUserGroupIds <p>此参数已不再生效，请使用<a href="https://cloud.tencent.com/document/api/377/33185">创建通知</a>。通知组ID，即为用户组ID集合。</p>
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
                     * <p>告警策略ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/33178">DescribeScalingPolicies</a> ，取返回信息中的 AutoScalingPolicyId 获取告警策略ID。</p>
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                    /**
                     * <p>告警策略名称，在您账号中必须唯一。名称长度不能超过60，名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点。</p>
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * <p>告警触发后，期望实例数修改方式，仅适用于简单策略。取值范围：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li></p>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * <p>告警触发后，期望实例数的调整值，仅适用于简单策略。<li>当 AdjustmentType 为 CHANGE_IN_CAPACITY 时，AdjustmentValue 为正数表示告警触发后增加实例，为负数表示告警触发后减少实例 </li> <li> 当 AdjustmentType 为 EXACT_CAPACITY 时，AdjustmentValue 的值即为告警触发后新的期望实例数，需要大于或等于0 </li> <li> 当 AdjustmentType 为 PERCENT_CHANGE_IN_CAPACITY 时，AdjusmentValue 为正数表示告警触发后按百分比增加实例，为负数表示告警触发后按百分比减少实例，单位是：%。</li></p>
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * <p>冷却时间，仅适用于简单策略，单位为秒。</p>
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

                    /**
                     * <p>告警监控指标，仅适用于简单策略。</p>
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * <p>预定义监控项，仅适用于目标追踪策略。取值范围：<br><li>ASG_AVG_CPU_UTILIZATION：平均CPU使用率</li><li>ASG_AVG_LAN_TRAFFIC_OUT：平均内网出带宽</li><li>ASG_AVG_LAN_TRAFFIC_IN：平均内网入带宽</li><li>ASG_AVG_WAN_TRAFFIC_OUT：平均外网出带宽</li><li>ASG_AVG_WAN_TRAFFIC_IN：平均外网出带宽</li>当前外网出入带宽属于 CLB 类指标，其他指标属于 CVM 类指标。修改指标名称时不允许跨类别修改。</p>枚举值：<ul><li> ASG_AVG_CPU_UTILIZATION： 平均CPU使用率</li></ul>
                     */
                    std::string m_predefinedMetricType;
                    bool m_predefinedMetricTypeHasBeenSet;

                    /**
                     * <p>目标值，仅适用于目标追踪策略。<br><li>ASG_AVG_CPU_UTILIZATION：[1, 100)，单位：%</li><li>ASG_AVG_LAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_LAN_TRAFFIC_IN：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_OUT：&gt;0，单位：Mbps</li><li>ASG_AVG_WAN_TRAFFIC_IN：&gt;0，单位：Mbps</li></p>
                     */
                    uint64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                    /**
                     * <p>实例预热时间，单位为秒，仅适用于目标追踪策略。取值范围为0-3600。</p>
                     */
                    uint64_t m_estimatedInstanceWarmup;
                    bool m_estimatedInstanceWarmupHasBeenSet;

                    /**
                     * <p>是否禁用缩容，仅适用于目标追踪策略。取值范围：<br><li>true：目标追踪策略仅触发扩容</li><li>false：目标追踪策略触发扩容和缩容</li></p>
                     */
                    bool m_disableScaleIn;
                    bool m_disableScaleInHasBeenSet;

                    /**
                     * <p>此参数已不再生效，请使用<a href="https://cloud.tencent.com/document/api/377/33185">创建通知</a>。通知组ID，即为用户组ID集合。</p>
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCALINGPOLICYREQUEST_H_
