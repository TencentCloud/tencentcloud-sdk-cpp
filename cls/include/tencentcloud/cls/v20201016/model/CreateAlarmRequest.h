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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmTarget.h>
#include <tencentcloud/cls/v20201016/model/MonitorTime.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarm请求参数结构体
                */
                class CreateAlarmRequest : public AbstractModel
                {
                public:
                    CreateAlarmRequest();
                    ~CreateAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略名称
                     * @return Name 告警策略名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警策略名称
                     * @param Name 告警策略名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取监控对象列表。
                     * @return AlarmTargets 监控对象列表。
                     */
                    std::vector<AlarmTarget> GetAlarmTargets() const;

                    /**
                     * 设置监控对象列表。
                     * @param AlarmTargets 监控对象列表。
                     */
                    void SetAlarmTargets(const std::vector<AlarmTarget>& _alarmTargets);

                    /**
                     * 判断参数 AlarmTargets 是否已赋值
                     * @return AlarmTargets 是否已赋值
                     */
                    bool AlarmTargetsHasBeenSet() const;

                    /**
                     * 获取监控任务运行时间点。
                     * @return MonitorTime 监控任务运行时间点。
                     */
                    MonitorTime GetMonitorTime() const;

                    /**
                     * 设置监控任务运行时间点。
                     * @param MonitorTime 监控任务运行时间点。
                     */
                    void SetMonitorTime(const MonitorTime& _monitorTime);

                    /**
                     * 判断参数 MonitorTime 是否已赋值
                     * @return MonitorTime 是否已赋值
                     */
                    bool MonitorTimeHasBeenSet() const;

                    /**
                     * 获取触发条件。
                     * @return Condition 触发条件。
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置触发条件。
                     * @param Condition 触发条件。
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     * @return TriggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     */
                    int64_t GetTriggerCount() const;

                    /**
                     * 设置持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     * @param TriggerCount 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     */
                    void SetTriggerCount(const int64_t& _triggerCount);

                    /**
                     * 判断参数 TriggerCount 是否已赋值
                     * @return TriggerCount 是否已赋值
                     */
                    bool TriggerCountHasBeenSet() const;

                    /**
                     * 获取告警重复的周期。单位是分钟。取值范围是0~1440。
                     * @return AlarmPeriod 告警重复的周期。单位是分钟。取值范围是0~1440。
                     */
                    int64_t GetAlarmPeriod() const;

                    /**
                     * 设置告警重复的周期。单位是分钟。取值范围是0~1440。
                     * @param AlarmPeriod 告警重复的周期。单位是分钟。取值范围是0~1440。
                     */
                    void SetAlarmPeriod(const int64_t& _alarmPeriod);

                    /**
                     * 判断参数 AlarmPeriod 是否已赋值
                     * @return AlarmPeriod 是否已赋值
                     */
                    bool AlarmPeriodHasBeenSet() const;

                    /**
                     * 获取关联的告警通知模板列表。
                     * @return AlarmNoticeIds 关联的告警通知模板列表。
                     */
                    std::vector<std::string> GetAlarmNoticeIds() const;

                    /**
                     * 设置关联的告警通知模板列表。
                     * @param AlarmNoticeIds 关联的告警通知模板列表。
                     */
                    void SetAlarmNoticeIds(const std::vector<std::string>& _alarmNoticeIds);

                    /**
                     * 判断参数 AlarmNoticeIds 是否已赋值
                     * @return AlarmNoticeIds 是否已赋值
                     */
                    bool AlarmNoticeIdsHasBeenSet() const;

                    /**
                     * 获取是否开启告警策略。默认值为true
                     * @return Status 是否开启告警策略。默认值为true
                     */
                    bool GetStatus() const;

                    /**
                     * 设置是否开启告警策略。默认值为true
                     * @param Status 是否开启告警策略。默认值为true
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 告警策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监控对象列表。
                     */
                    std::vector<AlarmTarget> m_alarmTargets;
                    bool m_alarmTargetsHasBeenSet;

                    /**
                     * 监控任务运行时间点。
                     */
                    MonitorTime m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * 触发条件。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 持续周期。持续满足触发条件TriggerCount个周期后，再进行告警；最小值为1，最大值为10。
                     */
                    int64_t m_triggerCount;
                    bool m_triggerCountHasBeenSet;

                    /**
                     * 告警重复的周期。单位是分钟。取值范围是0~1440。
                     */
                    int64_t m_alarmPeriod;
                    bool m_alarmPeriodHasBeenSet;

                    /**
                     * 关联的告警通知模板列表。
                     */
                    std::vector<std::string> m_alarmNoticeIds;
                    bool m_alarmNoticeIdsHasBeenSet;

                    /**
                     * 是否开启告警策略。默认值为true
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMREQUEST_H_
