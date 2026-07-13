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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOEVENTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOEVENTCONDITION_H_

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
                * 查询策略输出的事件告警条件
                */
                class DescribePolicyGroupInfoEventCondition : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoEventCondition();
                    ~DescribePolicyGroupInfoEventCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件id</p>
                     * @return EventId <p>事件id</p>
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置<p>事件id</p>
                     * @param _eventId <p>事件id</p>
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
                     * 获取<p>事件告警规则id</p>
                     * @return RuleId <p>事件告警规则id</p>
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置<p>事件告警规则id</p>
                     * @param _ruleId <p>事件告警规则id</p>
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>事件名称</p>
                     * @return EventShowName <p>事件名称</p>
                     * 
                     */
                    std::string GetEventShowName() const;

                    /**
                     * 设置<p>事件名称</p>
                     * @param _eventShowName <p>事件名称</p>
                     * 
                     */
                    void SetEventShowName(const std::string& _eventShowName);

                    /**
                     * 判断参数 EventShowName 是否已赋值
                     * @return EventShowName 是否已赋值
                     * 
                     */
                    bool EventShowNameHasBeenSet() const;

                    /**
                     * 获取<p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * @return AlarmNotifyPeriod <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置<p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * @param _alarmNotifyPeriod <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
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
                     * 获取<p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * @return AlarmNotifyType <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置<p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * @param _alarmNotifyType <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * 
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * 
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>事件id</p>
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>事件告警规则id</p>
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>事件名称</p>
                     */
                    std::string m_eventShowName;
                    bool m_eventShowNameHasBeenSet;

                    /**
                     * <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOEVENTCONDITION_H_
