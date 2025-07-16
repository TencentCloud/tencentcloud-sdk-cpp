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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTEVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTEVENTCONDITION_H_

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
                * ModifyConditionsTemplateRequestEventCondition
                */
                class ModifyConditionsTemplateRequestEventCondition : public AbstractModel
                {
                public:
                    ModifyConditionsTemplateRequestEventCondition();
                    ~ModifyConditionsTemplateRequestEventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知周期
                     * @return AlarmNotifyPeriod 告警通知周期
                     * @deprecated
                     */
                    std::string GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警通知周期
                     * @param _alarmNotifyPeriod 告警通知周期
                     * @deprecated
                     */
                    void SetAlarmNotifyPeriod(const std::string& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * @deprecated
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取告警通知方式
                     * @return AlarmNotifyType 告警通知方式
                     * @deprecated
                     */
                    std::string GetAlarmNotifyType() const;

                    /**
                     * 设置告警通知方式
                     * @param _alarmNotifyType 告警通知方式
                     * @deprecated
                     */
                    void SetAlarmNotifyType(const std::string& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * @deprecated
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * @deprecated
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置事件ID
                     * @param _eventID 事件ID
                     * @deprecated
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * @deprecated
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * @deprecated
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * @deprecated
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * @deprecated
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取重构后的eventType
                     * @return MetricName 重构后的eventType
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置重构后的eventType
                     * @param _metricName 重构后的eventType
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
                     * 获取事件描述信息
                     * @return Description 事件描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述信息
                     * @param _description 事件描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 告警通知周期
                     */
                    std::string m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 告警通知方式
                     */
                    std::string m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 事件ID
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 重构后的eventType
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 事件描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTEVENTCONDITION_H_
