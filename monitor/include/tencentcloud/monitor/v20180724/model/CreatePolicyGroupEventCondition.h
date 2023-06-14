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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPEVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPEVENTCONDITION_H_

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
                * 创建策略传入的事件告警条件
                */
                class CreatePolicyGroupEventCondition : public AbstractModel
                {
                public:
                    CreatePolicyGroupEventCondition();
                    ~CreatePolicyGroupEventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警事件的Id
                     * @return EventId 告警事件的Id
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置告警事件的Id
                     * @param _eventId 告警事件的Id
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取告警发送收敛类型。0连续告警，1指数告警
                     * @return AlarmNotifyType 告警发送收敛类型。0连续告警，1指数告警
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置告警发送收敛类型。0连续告警，1指数告警
                     * @param _alarmNotifyType 告警发送收敛类型。0连续告警，1指数告警
                     * 
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * 
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * @return AlarmNotifyPeriod 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * @param _alarmNotifyPeriod 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * 
                     */
                    void SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * 
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * @return RuleId 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * @param _ruleId 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 告警事件的Id
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 告警发送收敛类型。0连续告警，1指数告警
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPEVENTCONDITION_H_
