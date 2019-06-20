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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 告警触发策略。
                */
                class ScalingPolicy : public AbstractModel
                {
                public:
                    ScalingPolicy();
                    ~ScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param AutoScalingGroupId 伸缩组ID。
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取告警触发策略ID。
                     * @return AutoScalingPolicyId 告警触发策略ID。
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置告警触发策略ID。
                     * @param AutoScalingPolicyId 告警触发策略ID。
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                    /**
                     * 获取告警触发策略名称。
                     * @return ScalingPolicyName 告警触发策略名称。
                     */
                    std::string GetScalingPolicyName() const;

                    /**
                     * 设置告警触发策略名称。
                     * @param ScalingPolicyName 告警触发策略名称。
                     */
                    void SetScalingPolicyName(const std::string& _scalingPolicyName);

                    /**
                     * 判断参数 ScalingPolicyName 是否已赋值
                     * @return ScalingPolicyName 是否已赋值
                     */
                    bool ScalingPolicyNameHasBeenSet() const;

                    /**
                     * 获取告警触发后，期望实例数修改方式。取值 ：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * @return AdjustmentType 告警触发后，期望实例数修改方式。取值 ：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置告警触发后，期望实例数修改方式。取值 ：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     * @param AdjustmentType 告警触发后，期望实例数修改方式。取值 ：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     */
                    void SetAdjustmentType(const std::string& _adjustmentType);

                    /**
                     * 判断参数 AdjustmentType 是否已赋值
                     * @return AdjustmentType 是否已赋值
                     */
                    bool AdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取告警触发后，期望实例数的调整值。
                     * @return AdjustmentValue 告警触发后，期望实例数的调整值。
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置告警触发后，期望实例数的调整值。
                     * @param AdjustmentValue 告警触发后，期望实例数的调整值。
                     */
                    void SetAdjustmentValue(const int64_t& _adjustmentValue);

                    /**
                     * 判断参数 AdjustmentValue 是否已赋值
                     * @return AdjustmentValue 是否已赋值
                     */
                    bool AdjustmentValueHasBeenSet() const;

                    /**
                     * 获取冷却时间。
                     * @return Cooldown 冷却时间。
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置冷却时间。
                     * @param Cooldown 冷却时间。
                     */
                    void SetCooldown(const uint64_t& _cooldown);

                    /**
                     * 判断参数 Cooldown 是否已赋值
                     * @return Cooldown 是否已赋值
                     */
                    bool CooldownHasBeenSet() const;

                    /**
                     * 获取告警监控指标。
                     * @return MetricAlarm 告警监控指标。
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置告警监控指标。
                     * @param MetricAlarm 告警监控指标。
                     */
                    void SetMetricAlarm(const MetricAlarm& _metricAlarm);

                    /**
                     * 判断参数 MetricAlarm 是否已赋值
                     * @return MetricAlarm 是否已赋值
                     */
                    bool MetricAlarmHasBeenSet() const;

                    /**
                     * 获取通知组ID，即为用户组ID集合。
                     * @return NotificationUserGroupIds 通知组ID，即为用户组ID集合。
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置通知组ID，即为用户组ID集合。
                     * @param NotificationUserGroupIds 通知组ID，即为用户组ID集合。
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 告警触发策略ID。
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                    /**
                     * 告警触发策略名称。
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * 告警触发后，期望实例数修改方式。取值 ：<br><li>CHANGE_IN_CAPACITY：增加或减少若干期望实例数</li><li>EXACT_CAPACITY：调整至指定期望实例数</li> <li>PERCENT_CHANGE_IN_CAPACITY：按百分比调整期望实例数</li>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * 告警触发后，期望实例数的调整值。
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * 冷却时间。
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

                    /**
                     * 告警监控指标。
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * 通知组ID，即为用户组ID集合。
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_
