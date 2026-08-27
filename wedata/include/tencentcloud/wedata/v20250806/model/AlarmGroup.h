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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/NotificationFatigue.h>
#include <tencentcloud/wedata/v20250806/model/AlarmWayWebHook.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警规则接收人配置
                */
                class AlarmGroup : public AbstractModel
                {
                public:
                    AlarmGroup();
                    ~AlarmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警升级人ID列表<br>若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。</p>
                     * @return AlarmEscalationRecipientIds <p>告警升级人ID列表<br>若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmEscalationRecipientIds() const;

                    /**
                     * 设置<p>告警升级人ID列表<br>若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。</p>
                     * @param _alarmEscalationRecipientIds <p>告警升级人ID列表<br>若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。</p>
                     * 
                     */
                    void SetAlarmEscalationRecipientIds(const std::vector<std::string>& _alarmEscalationRecipientIds);

                    /**
                     * 判断参数 AlarmEscalationRecipientIds 是否已赋值
                     * @return AlarmEscalationRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmEscalationRecipientIdsHasBeenSet() const;

                    /**
                     * 获取<p>告警升级间隔</p>
                     * @return AlarmEscalationInterval <p>告警升级间隔</p>
                     * 
                     */
                    int64_t GetAlarmEscalationInterval() const;

                    /**
                     * 设置<p>告警升级间隔</p>
                     * @param _alarmEscalationInterval <p>告警升级间隔</p>
                     * 
                     */
                    void SetAlarmEscalationInterval(const int64_t& _alarmEscalationInterval);

                    /**
                     * 判断参数 AlarmEscalationInterval 是否已赋值
                     * @return AlarmEscalationInterval 是否已赋值
                     * 
                     */
                    bool AlarmEscalationIntervalHasBeenSet() const;

                    /**
                     * 获取<p>告警通知疲劳配置</p>
                     * @return NotificationFatigue <p>告警通知疲劳配置</p>
                     * 
                     */
                    NotificationFatigue GetNotificationFatigue() const;

                    /**
                     * 设置<p>告警通知疲劳配置</p>
                     * @param _notificationFatigue <p>告警通知疲劳配置</p>
                     * 
                     */
                    void SetNotificationFatigue(const NotificationFatigue& _notificationFatigue);

                    /**
                     * 判断参数 NotificationFatigue 是否已赋值
                     * @return NotificationFatigue 是否已赋值
                     * 
                     */
                    bool NotificationFatigueHasBeenSet() const;

                    /**
                     * 获取<p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道</p>
                     * @return AlarmWays <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置<p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道</p>
                     * @param _alarmWays <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道</p>
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
                     * 获取<p>企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表</p>
                     * @return WebHooks <p>企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表</p>
                     * 
                     */
                    std::vector<AlarmWayWebHook> GetWebHooks() const;

                    /**
                     * 设置<p>企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表</p>
                     * @param _webHooks <p>企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表</p>
                     * 
                     */
                    void SetWebHooks(const std::vector<AlarmWayWebHook>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                    /**
                     * 获取<p>告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）</p>
                     * @return AlarmRecipientType <p>告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）</p>
                     * 
                     */
                    int64_t GetAlarmRecipientType() const;

                    /**
                     * 设置<p>告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）</p>
                     * @param _alarmRecipientType <p>告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）</p>
                     * 
                     */
                    void SetAlarmRecipientType(const int64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取<p>根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表</p>
                     * @return AlarmRecipientIds <p>根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipientIds() const;

                    /**
                     * 设置<p>根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表</p>
                     * @param _alarmRecipientIds <p>根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表</p>
                     * 
                     */
                    void SetAlarmRecipientIds(const std::vector<std::string>& _alarmRecipientIds);

                    /**
                     * 判断参数 AlarmRecipientIds 是否已赋值
                     * @return AlarmRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdsHasBeenSet() const;

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
                     * <p>告警升级人ID列表<br>若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。</p>
                     */
                    std::vector<std::string> m_alarmEscalationRecipientIds;
                    bool m_alarmEscalationRecipientIdsHasBeenSet;

                    /**
                     * <p>告警升级间隔</p>
                     */
                    int64_t m_alarmEscalationInterval;
                    bool m_alarmEscalationIntervalHasBeenSet;

                    /**
                     * <p>告警通知疲劳配置</p>
                     */
                    NotificationFatigue m_notificationFatigue;
                    bool m_notificationFatigueHasBeenSet;

                    /**
                     * <p>告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道</p>
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * <p>企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表</p>
                     */
                    std::vector<AlarmWayWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                    /**
                     * <p>告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）</p>
                     */
                    int64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * <p>根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表</p>
                     */
                    std::vector<std::string> m_alarmRecipientIds;
                    bool m_alarmRecipientIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_
