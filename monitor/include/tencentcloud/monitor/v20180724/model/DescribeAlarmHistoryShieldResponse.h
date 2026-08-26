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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ShieldMetric.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmHistoryShield返回参数结构体
                */
                class DescribeAlarmHistoryShieldResponse : public AbstractModel
                {
                public:
                    DescribeAlarmHistoryShieldResponse();
                    ~DescribeAlarmHistoryShieldResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警屏蔽规则的ID
                     * @return ShieldId 告警屏蔽规则的ID
                     * 
                     */
                    std::string GetShieldId() const;

                    /**
                     * 判断参数 ShieldId 是否已赋值
                     * @return ShieldId 是否已赋值
                     * 
                     */
                    bool ShieldIdHasBeenSet() const;

                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取屏蔽策略名称
                     * @return Name 屏蔽策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否开启 1=开启 0=关闭
                     * @return Enable 是否开启 1=开启 0=关闭
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取监控类型展示名称
                     * @return MonitorTypeShowName 监控类型展示名称
                     * 
                     */
                    std::string GetMonitorTypeShowName() const;

                    /**
                     * 判断参数 MonitorTypeShowName 是否已赋值
                     * @return MonitorTypeShowName 是否已赋值
                     * 
                     */
                    bool MonitorTypeShowNameHasBeenSet() const;

                    /**
                     * 获取命名空间即策略类型
                     * @return NameSpace 命名空间即策略类型
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取策略类型展示名称
                     * @return NameSpaceShowName 策略类型展示名称
                     * 
                     */
                    std::string GetNameSpaceShowName() const;

                    /**
                     * 判断参数 NameSpaceShowName 是否已赋值
                     * @return NameSpaceShowName 是否已赋值
                     * 
                     */
                    bool NameSpaceShowNameHasBeenSet() const;

                    /**
                     * 获取屏蔽对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldObject 屏蔽对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetShieldObject() const;

                    /**
                     * 判断参数 ShieldObject 是否已赋值
                     * @return ShieldObject 是否已赋值
                     * 
                     */
                    bool ShieldObjectHasBeenSet() const;

                    /**
                     * 获取屏蔽指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldMetric 屏蔽指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ShieldMetric> GetShieldMetric() const;

                    /**
                     * 判断参数 ShieldMetric 是否已赋值
                     * @return ShieldMetric 是否已赋值
                     * 
                     */
                    bool ShieldMetricHasBeenSet() const;

                    /**
                     * 获取屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     * @return ShieldTimeType 屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     * 
                     */
                    std::string GetShieldTimeType() const;

                    /**
                     * 判断参数 ShieldTimeType 是否已赋值
                     * @return ShieldTimeType 是否已赋值
                     * 
                     */
                    bool ShieldTimeTypeHasBeenSet() const;

                    /**
                     * 获取开始时间 10:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间 10:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间 20:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间 20:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取循环开始日期 2022/04/01
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoopStartDate 循环开始日期 2022/04/01
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLoopStartDate() const;

                    /**
                     * 判断参数 LoopStartDate 是否已赋值
                     * @return LoopStartDate 是否已赋值
                     * 
                     */
                    bool LoopStartDateHasBeenSet() const;

                    /**
                     * 获取循环结束日期 2022/04/05
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoopEndDate 循环结束日期 2022/04/05
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLoopEndDate() const;

                    /**
                     * 判断参数 LoopEndDate 是否已赋值
                     * @return LoopEndDate 是否已赋值
                     * 
                     */
                    bool LoopEndDateHasBeenSet() const;

                    /**
                     * 获取NOT_TRIGGERED:未生效 TRIGGERING:生效中 EXPIRED:已过期
                     * @return CurrentStatus NOT_TRIGGERED:未生效 TRIGGERING:生效中 EXPIRED:已过期
                     * 
                     */
                    std::string GetCurrentStatus() const;

                    /**
                     * 判断参数 CurrentStatus 是否已赋值
                     * @return CurrentStatus 是否已赋值
                     * 
                     */
                    bool CurrentStatusHasBeenSet() const;

                    /**
                     * 获取需要屏蔽的策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldPolicyId 需要屏蔽的策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShieldPolicyId() const;

                    /**
                     * 判断参数 ShieldPolicyId 是否已赋值
                     * @return ShieldPolicyId 是否已赋值
                     * 
                     */
                    bool ShieldPolicyIdHasBeenSet() const;

                    /**
                     * 获取需要屏蔽的告警等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldAlarmLevel 需要屏蔽的告警等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetShieldAlarmLevel() const;

                    /**
                     * 判断参数 ShieldAlarmLevel 是否已赋值
                     * @return ShieldAlarmLevel 是否已赋值
                     * 
                     */
                    bool ShieldAlarmLevelHasBeenSet() const;

                    /**
                     * 获取屏蔽类型，1为维度屏蔽，0为实例名称屏蔽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldTag 屏蔽类型，1为维度屏蔽，0为实例名称屏蔽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShieldTag() const;

                    /**
                     * 判断参数 ShieldTag 是否已赋值
                     * @return ShieldTag 是否已赋值
                     * 
                     */
                    bool ShieldTagHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取告警历史会话ID
                     * @return SessionId 告警历史会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 告警屏蔽规则的ID
                     */
                    std::string m_shieldId;
                    bool m_shieldIdHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 屏蔽策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否开启 1=开启 0=关闭
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 监控类型展示名称
                     */
                    std::string m_monitorTypeShowName;
                    bool m_monitorTypeShowNameHasBeenSet;

                    /**
                     * 命名空间即策略类型
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 策略类型展示名称
                     */
                    std::string m_nameSpaceShowName;
                    bool m_nameSpaceShowNameHasBeenSet;

                    /**
                     * 屏蔽对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_shieldObject;
                    bool m_shieldObjectHasBeenSet;

                    /**
                     * 屏蔽指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ShieldMetric> m_shieldMetric;
                    bool m_shieldMetricHasBeenSet;

                    /**
                     * 屏蔽时间类型 FOREVER_SHIELD:永久屏蔽 PERIOD_SHIELD:绝对时间范围屏蔽 LOOP_SHIELD:相对时间范围屏蔽
                     */
                    std::string m_shieldTimeType;
                    bool m_shieldTimeTypeHasBeenSet;

                    /**
                     * 开始时间 10:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 20:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 循环开始日期 2022/04/01
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_loopStartDate;
                    bool m_loopStartDateHasBeenSet;

                    /**
                     * 循环结束日期 2022/04/05
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_loopEndDate;
                    bool m_loopEndDateHasBeenSet;

                    /**
                     * NOT_TRIGGERED:未生效 TRIGGERING:生效中 EXPIRED:已过期
                     */
                    std::string m_currentStatus;
                    bool m_currentStatusHasBeenSet;

                    /**
                     * 需要屏蔽的策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shieldPolicyId;
                    bool m_shieldPolicyIdHasBeenSet;

                    /**
                     * 需要屏蔽的告警等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_shieldAlarmLevel;
                    bool m_shieldAlarmLevelHasBeenSet;

                    /**
                     * 屏蔽类型，1为维度屏蔽，0为实例名称屏蔽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shieldTag;
                    bool m_shieldTagHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 告警历史会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMHISTORYSHIELDRESPONSE_H_
