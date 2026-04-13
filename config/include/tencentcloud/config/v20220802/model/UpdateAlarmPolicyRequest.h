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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateAlarmPolicy请求参数结构体
                */
                class UpdateAlarmPolicyRequest : public AbstractModel
                {
                public:
                    UpdateAlarmPolicyRequest();
                    ~UpdateAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警策略id
                     * @return AlarmPolicyId 告警策略id
                     * 
                     */
                    uint64_t GetAlarmPolicyId() const;

                    /**
                     * 设置告警策略id
                     * @param _alarmPolicyId 告警策略id
                     * 
                     */
                    void SetAlarmPolicyId(const uint64_t& _alarmPolicyId);

                    /**
                     * 判断参数 AlarmPolicyId 是否已赋值
                     * @return AlarmPolicyId 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdHasBeenSet() const;

                    /**
                     * 获取告警策略名
                     * @return Name 告警策略名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警策略名
                     * @param _name 告警策略名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取事件范围  1：当前账号  2：多账号
                     * @return EventScope 事件范围  1：当前账号  2：多账号
                     * 
                     */
                    std::vector<int64_t> GetEventScope() const;

                    /**
                     * 设置事件范围  1：当前账号  2：多账号
                     * @param _eventScope 事件范围  1：当前账号  2：多账号
                     * 
                     */
                    void SetEventScope(const std::vector<int64_t>& _eventScope);

                    /**
                     * 判断参数 EventScope 是否已赋值
                     * @return EventScope 是否已赋值
                     * 
                     */
                    bool EventScopeHasBeenSet() const;

                    /**
                     * 获取风险等级 1：高风险  2：中风险 3：低风险
                     * @return RiskLevel 风险等级 1：高风险  2：中风险 3：低风险
                     * 
                     */
                    std::vector<int64_t> GetRiskLevel() const;

                    /**
                     * 设置风险等级 1：高风险  2：中风险 3：低风险
                     * @param _riskLevel 风险等级 1：高风险  2：中风险 3：低风险
                     * 
                     */
                    void SetRiskLevel(const std::vector<int64_t>& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取通知时间段
                     * @return NoticeTime 通知时间段
                     * 
                     */
                    std::string GetNoticeTime() const;

                    /**
                     * 设置通知时间段
                     * @param _noticeTime 通知时间段
                     * 
                     */
                    void SetNoticeTime(const std::string& _noticeTime);

                    /**
                     * 判断参数 NoticeTime 是否已赋值
                     * @return NoticeTime 是否已赋值
                     * 
                     */
                    bool NoticeTimeHasBeenSet() const;

                    /**
                     * 获取通知机制
                     * @return NotificationMechanism 通知机制
                     * 
                     */
                    std::string GetNotificationMechanism() const;

                    /**
                     * 设置通知机制
                     * @param _notificationMechanism 通知机制
                     * 
                     */
                    void SetNotificationMechanism(const std::string& _notificationMechanism);

                    /**
                     * 判断参数 NotificationMechanism 是否已赋值
                     * @return NotificationMechanism 是否已赋值
                     * 
                     */
                    bool NotificationMechanismHasBeenSet() const;

                    /**
                     * 获取状态 1：启用 2：停用
                     * @return Status 状态 1：启用 2：停用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 1：启用 2：停用
                     * @param _status 状态 1：启用 2：停用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取通知周期,1-7数字分别代表周一到周日
                     * @return NoticePeriod 通知周期,1-7数字分别代表周一到周日
                     * 
                     */
                    std::vector<int64_t> GetNoticePeriod() const;

                    /**
                     * 设置通知周期,1-7数字分别代表周一到周日
                     * @param _noticePeriod 通知周期,1-7数字分别代表周一到周日
                     * 
                     */
                    void SetNoticePeriod(const std::vector<int64_t>& _noticePeriod);

                    /**
                     * 判断参数 NoticePeriod 是否已赋值
                     * @return NoticePeriod 是否已赋值
                     * 
                     */
                    bool NoticePeriodHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return Description 策略描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述
                     * @param _description 策略描述
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
                     * 告警策略id
                     */
                    uint64_t m_alarmPolicyId;
                    bool m_alarmPolicyIdHasBeenSet;

                    /**
                     * 告警策略名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件范围  1：当前账号  2：多账号
                     */
                    std::vector<int64_t> m_eventScope;
                    bool m_eventScopeHasBeenSet;

                    /**
                     * 风险等级 1：高风险  2：中风险 3：低风险
                     */
                    std::vector<int64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 通知时间段
                     */
                    std::string m_noticeTime;
                    bool m_noticeTimeHasBeenSet;

                    /**
                     * 通知机制
                     */
                    std::string m_notificationMechanism;
                    bool m_notificationMechanismHasBeenSet;

                    /**
                     * 状态 1：启用 2：停用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通知周期,1-7数字分别代表周一到周日
                     */
                    std::vector<int64_t> m_noticePeriod;
                    bool m_noticePeriodHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATEALARMPOLICYREQUEST_H_
