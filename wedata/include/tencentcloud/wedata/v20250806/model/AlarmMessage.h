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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警信息
                */
                class AlarmMessage : public AbstractModel
                {
                public:
                    AlarmMessage();
                    ~AlarmMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警消息Id
                     * @return AlarmMessageId 告警消息Id
                     * 
                     */
                    uint64_t GetAlarmMessageId() const;

                    /**
                     * 设置告警消息Id
                     * @param _alarmMessageId 告警消息Id
                     * 
                     */
                    void SetAlarmMessageId(const uint64_t& _alarmMessageId);

                    /**
                     * 判断参数 AlarmMessageId 是否已赋值
                     * @return AlarmMessageId 是否已赋值
                     * 
                     */
                    bool AlarmMessageIdHasBeenSet() const;

                    /**
                     * 获取告警时间，同一条告警可能发送多次，只显示最新的告警时间
                     * @return AlarmTime 告警时间，同一条告警可能发送多次，只显示最新的告警时间
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置告警时间，同一条告警可能发送多次，只显示最新的告警时间
                     * @param _alarmTime 告警时间，同一条告警可能发送多次，只显示最新的告警时间
                     * 
                     */
                    void SetAlarmTime(const std::string& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务的实例数据时间
                     * @return CurRunDate 任务的实例数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置任务的实例数据时间
                     * @param _curRunDate 任务的实例数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取告警原因
                     * @return AlarmReason 告警原因
                     * 
                     */
                    std::string GetAlarmReason() const;

                    /**
                     * 设置告警原因
                     * @param _alarmReason 告警原因
                     * 
                     */
                    void SetAlarmReason(const std::string& _alarmReason);

                    /**
                     * 判断参数 AlarmReason 是否已赋值
                     * @return AlarmReason 是否已赋值
                     * 
                     */
                    bool AlarmReasonHasBeenSet() const;

                    /**
                     * 获取告警级别，1.普通， 2.重要，3.紧急
                     * @return AlarmLevel 告警级别，1.普通， 2.重要，3.紧急
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别，1.普通， 2.重要，3.紧急
                     * @param _alarmLevel 告警级别，1.普通， 2.重要，3.紧急
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警规则Id
                     * @return AlarmRuleId 告警规则Id
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置告警规则Id
                     * @param _alarmRuleId 告警规则Id
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                    /**
                     * 获取告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群 
                     * @return AlarmWays 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群 
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群 
                     * @param _alarmWays 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群 
                     * 
                     */
                    void SetAlarmWays(const std::vector<std::string>& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取告警接收人
                     * @return AlarmRecipients 告警接收人
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipients() const;

                    /**
                     * 设置告警接收人
                     * @param _alarmRecipients 告警接收人
                     * 
                     */
                    void SetAlarmRecipients(const std::vector<std::string>& _alarmRecipients);

                    /**
                     * 判断参数 AlarmRecipients 是否已赋值
                     * @return AlarmRecipients 是否已赋值
                     * 
                     */
                    bool AlarmRecipientsHasBeenSet() const;

                private:

                    /**
                     * 告警消息Id
                     */
                    uint64_t m_alarmMessageId;
                    bool m_alarmMessageIdHasBeenSet;

                    /**
                     * 告警时间，同一条告警可能发送多次，只显示最新的告警时间
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务的实例数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 告警原因
                     */
                    std::string m_alarmReason;
                    bool m_alarmReasonHasBeenSet;

                    /**
                     * 告警级别，1.普通， 2.重要，3.紧急
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警规则Id
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群 
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * 告警接收人
                     */
                    std::vector<std::string> m_alarmRecipients;
                    bool m_alarmRecipientsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_
