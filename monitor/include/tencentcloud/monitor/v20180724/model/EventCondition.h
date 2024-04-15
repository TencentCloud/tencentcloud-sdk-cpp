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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 事件告警条件
                */
                class EventCondition : public AbstractModel
                {
                public:
                    EventCondition();
                    ~EventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmNotifyPeriod 告警通知频率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警通知频率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmNotifyPeriod 告警通知频率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmNotifyPeriod(const std::string& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * 
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmNotifyType 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmNotifyType() const;

                    /**
                     * 设置重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmNotifyType 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmNotifyType(const std::string& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * 
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * 
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置事件ID
                     * @param _eventID 事件ID
                     * 
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取事件展示名称（对外）
                     * @return EventDisplayName 事件展示名称（对外）
                     * 
                     */
                    std::string GetEventDisplayName() const;

                    /**
                     * 设置事件展示名称（对外）
                     * @param _eventDisplayName 事件展示名称（对外）
                     * 
                     */
                    void SetEventDisplayName(const std::string& _eventDisplayName);

                    /**
                     * 判断参数 EventDisplayName 是否已赋值
                     * @return EventDisplayName 是否已赋值
                     * 
                     */
                    bool EventDisplayNameHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 指标名
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

                private:

                    /**
                     * 告警通知频率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 重复通知策略预定义（0 - 只告警一次， 1 - 指数告警，2 - 连接告警）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 事件ID
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 事件展示名称（对外）
                     */
                    std::string m_eventDisplayName;
                    bool m_eventDisplayNameHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_EVENTCONDITION_H_
