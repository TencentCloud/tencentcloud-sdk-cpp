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
                     * 获取告警升级人ID列表
若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。
                     * @return AlarmEscalationRecipientIds 告警升级人ID列表
若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。
                     * 
                     */
                    std::vector<std::string> GetAlarmEscalationRecipientIds() const;

                    /**
                     * 设置告警升级人ID列表
若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。
                     * @param _alarmEscalationRecipientIds 告警升级人ID列表
若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。
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
                     * 获取告警升级间隔
                     * @return AlarmEscalationInterval 告警升级间隔
                     * 
                     */
                    int64_t GetAlarmEscalationInterval() const;

                    /**
                     * 设置告警升级间隔
                     * @param _alarmEscalationInterval 告警升级间隔
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
                     * 获取告警通知疲劳配置
                     * @return NotificationFatigue 告警通知疲劳配置
                     * 
                     */
                    NotificationFatigue GetNotificationFatigue() const;

                    /**
                     * 设置告警通知疲劳配置
                     * @param _notificationFatigue 告警通知疲劳配置
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
                     * 获取告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道
                     * @return AlarmWays 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道
                     * @param _alarmWays 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道
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
                     * 获取企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表
                     * @return WebHooks 企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表
                     * 
                     */
                    std::vector<AlarmWayWebHook> GetWebHooks() const;

                    /**
                     * 设置企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表
                     * @param _webHooks 企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表
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
                     * 获取告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @return AlarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * 
                     */
                    int64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @param _alarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
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
                     * 获取根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表
                     * @return AlarmRecipientIds 根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipientIds() const;

                    /**
                     * 设置根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表
                     * @param _alarmRecipientIds 根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表
                     * 
                     */
                    void SetAlarmRecipientIds(const std::vector<std::string>& _alarmRecipientIds);

                    /**
                     * 判断参数 AlarmRecipientIds 是否已赋值
                     * @return AlarmRecipientIds 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdsHasBeenSet() const;

                private:

                    /**
                     * 告警升级人ID列表
若告警接收人或上级升级人未在告警间隔时间内确认告警，则会发送告警给下一级升级人。
                     */
                    std::vector<std::string> m_alarmEscalationRecipientIds;
                    bool m_alarmEscalationRecipientIdsHasBeenSet;

                    /**
                     * 告警升级间隔
                     */
                    int64_t m_alarmEscalationInterval;
                    bool m_alarmEscalationIntervalHasBeenSet;

                    /**
                     * 告警通知疲劳配置
                     */
                    NotificationFatigue m_notificationFatigue;
                    bool m_notificationFatigueHasBeenSet;

                    /**
                     * 告警渠道 1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群（默认1.邮件） 7.企业微信群 8 飞书群 9 钉钉群 10 Slack群 11 Teams群 只能选择一个渠道
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * 企业微信群/飞书群/钉钉群 /Slack群/Teams群的webhook地址列表
                     */
                    std::vector<AlarmWayWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                    /**
                     * 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     */
                    int64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 根据AlarmRecipientType的类型该列表具有不同的业务id 1（指定人员）: 告警接收人id列表 2（任务责任人）：无需配置 3（值班表）：值班表id列表
                     */
                    std::vector<std::string> m_alarmRecipientIds;
                    bool m_alarmRecipientIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMGROUP_H_
