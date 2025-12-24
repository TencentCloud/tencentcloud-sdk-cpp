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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMGROUP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/NotificationFatigue.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警分组信息
                */
                class AlarmGroup : public AbstractModel
                {
                public:
                    AlarmGroup();
                    ~AlarmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * @return AlarmWays 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * 
                     */
                    std::vector<std::string> GetAlarmWays() const;

                    /**
                     * 设置告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     * @param _alarmWays 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
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
                     * 获取告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @return AlarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * 
                     */
                    uint64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * @param _alarmRecipientType 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     * 
                     */
                    void SetAlarmRecipientType(const uint64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

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

                    /**
                     * 获取告警接收人ID
                     * @return AlarmRecipientIds 告警接收人ID
                     * 
                     */
                    std::vector<std::string> GetAlarmRecipientIds() const;

                    /**
                     * 设置告警接收人ID
                     * @param _alarmRecipientIds 告警接收人ID
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
                     * 获取告警升级人
                     * @return AlarmEscalationRecipients 告警升级人
                     * 
                     */
                    std::vector<std::string> GetAlarmEscalationRecipients() const;

                    /**
                     * 设置告警升级人
                     * @param _alarmEscalationRecipients 告警升级人
                     * 
                     */
                    void SetAlarmEscalationRecipients(const std::vector<std::string>& _alarmEscalationRecipients);

                    /**
                     * 判断参数 AlarmEscalationRecipients 是否已赋值
                     * @return AlarmEscalationRecipients 是否已赋值
                     * 
                     */
                    bool AlarmEscalationRecipientsHasBeenSet() const;

                    /**
                     * 获取告警升级人ID
                     * @return AlarmEscalationRecipientIds 告警升级人ID
                     * 
                     */
                    std::vector<std::string> GetAlarmEscalationRecipientIds() const;

                    /**
                     * 设置告警升级人ID
                     * @param _alarmEscalationRecipientIds 告警升级人ID
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
                    uint64_t GetAlarmEscalationInterval() const;

                    /**
                     * 设置告警升级间隔
                     * @param _alarmEscalationInterval 告警升级间隔
                     * 
                     */
                    void SetAlarmEscalationInterval(const uint64_t& _alarmEscalationInterval);

                    /**
                     * 判断参数 AlarmEscalationInterval 是否已赋值
                     * @return AlarmEscalationInterval 是否已赋值
                     * 
                     */
                    bool AlarmEscalationIntervalHasBeenSet() const;

                    /**
                     * 获取告警通知疲劳度配置。
                     * @return NotificationFatigue 告警通知疲劳度配置。
                     * 
                     */
                    NotificationFatigue GetNotificationFatigue() const;

                    /**
                     * 设置告警通知疲劳度配置。
                     * @param _notificationFatigue 告警通知疲劳度配置。
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
                     * 获取告警渠道规则 json 格式
                     * @return AlarmMessageRule 告警渠道规则 json 格式
                     * 
                     */
                    std::string GetAlarmMessageRule() const;

                    /**
                     * 设置告警渠道规则 json 格式
                     * @param _alarmMessageRule 告警渠道规则 json 格式
                     * 
                     */
                    void SetAlarmMessageRule(const std::string& _alarmMessageRule);

                    /**
                     * 判断参数 AlarmMessageRule 是否已赋值
                     * @return AlarmMessageRule 是否已赋值
                     * 
                     */
                    bool AlarmMessageRuleHasBeenSet() const;

                private:

                    /**
                     * 告警方式,1.邮件，2.短信，3.微信，4.语音，5.企业微信，6.Http，7.企业微信群；告警方式code列表（默认1.邮件）
                     */
                    std::vector<std::string> m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * 告警接收人类型：1.指定人员，2.任务责任人，3.值班表（默认1.指定人员）
                     */
                    uint64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 告警接收人
                     */
                    std::vector<std::string> m_alarmRecipients;
                    bool m_alarmRecipientsHasBeenSet;

                    /**
                     * 告警接收人ID
                     */
                    std::vector<std::string> m_alarmRecipientIds;
                    bool m_alarmRecipientIdsHasBeenSet;

                    /**
                     * 告警升级人
                     */
                    std::vector<std::string> m_alarmEscalationRecipients;
                    bool m_alarmEscalationRecipientsHasBeenSet;

                    /**
                     * 告警升级人ID
                     */
                    std::vector<std::string> m_alarmEscalationRecipientIds;
                    bool m_alarmEscalationRecipientIdsHasBeenSet;

                    /**
                     * 告警升级间隔
                     */
                    uint64_t m_alarmEscalationInterval;
                    bool m_alarmEscalationIntervalHasBeenSet;

                    /**
                     * 告警通知疲劳度配置。
                     */
                    NotificationFatigue m_notificationFatigue;
                    bool m_notificationFatigueHasBeenSet;

                    /**
                     * 告警渠道规则 json 格式
                     */
                    std::string m_alarmMessageRule;
                    bool m_alarmMessageRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMGROUP_H_
