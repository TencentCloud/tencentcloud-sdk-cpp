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
                     * 获取<p>告警消息Id</p>
                     * @return AlarmMessageId <p>告警消息Id</p>
                     * 
                     */
                    uint64_t GetAlarmMessageId() const;

                    /**
                     * 设置<p>告警消息Id</p>
                     * @param _alarmMessageId <p>告警消息Id</p>
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
                     * 获取<p>告警时间，同一条告警可能发送多次，只显示最新的告警时间</p>
                     * @return AlarmTime <p>告警时间，同一条告警可能发送多次，只显示最新的告警时间</p>
                     * 
                     */
                    std::string GetAlarmTime() const;

                    /**
                     * 设置<p>告警时间，同一条告警可能发送多次，只显示最新的告警时间</p>
                     * @param _alarmTime <p>告警时间，同一条告警可能发送多次，只显示最新的告警时间</p>
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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>任务Id</p>
                     * @return TaskId <p>任务Id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务Id</p>
                     * @param _taskId <p>任务Id</p>
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
                     * 获取<p>任务的实例数据时间</p>
                     * @return CurRunDate <p>任务的实例数据时间</p>
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置<p>任务的实例数据时间</p>
                     * @param _curRunDate <p>任务的实例数据时间</p>
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
                     * 获取<p>告警原因</p>
                     * @return AlarmReason <p>告警原因</p>
                     * 
                     */
                    std::string GetAlarmReason() const;

                    /**
                     * 设置<p>告警原因</p>
                     * @param _alarmReason <p>告警原因</p>
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
                     * 获取<p>告警级别，1.普通， 2.重要，3.紧急</p>
                     * @return AlarmLevel <p>告警级别，1.普通， 2.重要，3.紧急</p>
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置<p>告警级别，1.普通， 2.重要，3.紧急</p>
                     * @param _alarmLevel <p>告警级别，1.普通， 2.重要，3.紧急</p>
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
                     * 获取<p>告警规则Id</p>
                     * @return AlarmRuleId <p>告警规则Id</p>
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置<p>告警规则Id</p>
                     * @param _alarmRuleId <p>告警规则Id</p>
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
                     * 获取<p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群</p>
                     * @return AlarmWays <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置<p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群</p>
                     * @param _alarmWays <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群</p>
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
                     * 获取<p>告警接收人</p>
                     * @return AlarmRecipients <p>告警接收人</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipients() const;

                    /**
                     * 设置<p>告警接收人</p>
                     * @param _alarmRecipients <p>告警接收人</p>
                     * 
                     */
                    void SetAlarmRecipients(const std::vector<std::string>& _alarmRecipients);

                    /**
                     * 判断参数 AlarmRecipients 是否已赋值
                     * @return AlarmRecipients 是否已赋值
                     * 
                     */
                    bool AlarmRecipientsHasBeenSet() const;

                    /**
                     * 获取<p>自定义邮箱列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomEmails <p>自定义邮箱列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomEmails() const;

                    /**
                     * 设置<p>自定义邮箱列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customEmails <p>自定义邮箱列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomEmails(const std::vector<std::string>& _customEmails);

                    /**
                     * 判断参数 CustomEmails 是否已赋值
                     * @return CustomEmails 是否已赋值
                     * 
                     */
                    bool CustomEmailsHasBeenSet() const;

                private:

                    /**
                     * <p>告警消息Id</p>
                     */
                    uint64_t m_alarmMessageId;
                    bool m_alarmMessageIdHasBeenSet;

                    /**
                     * <p>告警时间，同一条告警可能发送多次，只显示最新的告警时间</p>
                     */
                    std::string m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务Id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务的实例数据时间</p>
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * <p>告警原因</p>
                     */
                    std::string m_alarmReason;
                    bool m_alarmReasonHasBeenSet;

                    /**
                     * <p>告警级别，1.普通， 2.重要，3.紧急</p>
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>告警规则Id</p>
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群， 8.飞书群，9.钉钉群，10.Slack群,11.Teams群（默认1.邮件），7.企业微信群，8.飞书群，9.钉钉群，10.Slack群，11.Teams群</p>
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * <p>告警接收人</p>
                     */
                    std::vector<std::string> m_alarmRecipients;
                    bool m_alarmRecipientsHasBeenSet;

                    /**
                     * <p>自定义邮箱列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customEmails;
                    bool m_customEmailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMMESSAGE_H_
