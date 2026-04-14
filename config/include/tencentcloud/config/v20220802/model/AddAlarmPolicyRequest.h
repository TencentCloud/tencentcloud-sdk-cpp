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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_

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
                * AddAlarmPolicy请求参数结构体
                */
                class AddAlarmPolicyRequest : public AbstractModel
                {
                public:
                    AddAlarmPolicyRequest();
                    ~AddAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警策略名</p>
                     * @return Name <p>告警策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警策略名</p>
                     * @param _name <p>告警策略名</p>
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
                     * 获取<p>事件类型 1：资源不合规事件</p>
                     * @return Type <p>事件类型 1：资源不合规事件</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>事件类型 1：资源不合规事件</p>
                     * @param _type <p>事件类型 1：资源不合规事件</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>事件范围  1：当前账号  2：多账号</p>
                     * @return EventScope <p>事件范围  1：当前账号  2：多账号</p>
                     * 
                     */
                    std::vector<int64_t> GetEventScope() const;

                    /**
                     * 设置<p>事件范围  1：当前账号  2：多账号</p>
                     * @param _eventScope <p>事件范围  1：当前账号  2：多账号</p>
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
                     * 获取<p>风险等级 1：高风险  2：中风险 3：低风险</p>
                     * @return RiskLevel <p>风险等级 1：高风险  2：中风险 3：低风险</p>
                     * 
                     */
                    std::vector<int64_t> GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级 1：高风险  2：中风险 3：低风险</p>
                     * @param _riskLevel <p>风险等级 1：高风险  2：中风险 3：低风险</p>
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
                     * 获取<p>通知时间段</p>
                     * @return NoticeTime <p>通知时间段</p>
                     * 
                     */
                    std::string GetNoticeTime() const;

                    /**
                     * 设置<p>通知时间段</p>
                     * @param _noticeTime <p>通知时间段</p>
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
                     * 获取<p>通知机制</p>
                     * @return NotificationMechanism <p>通知机制</p>
                     * 
                     */
                    std::string GetNotificationMechanism() const;

                    /**
                     * 设置<p>通知机制</p>
                     * @param _notificationMechanism <p>通知机制</p>
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
                     * 获取<p>状态 1：启用 2：停用</p>
                     * @return Status <p>状态 1：启用 2：停用</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态 1：启用 2：停用</p>
                     * @param _status <p>状态 1：启用 2：停用</p>
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
                     * 获取<p>通知周期</p>
                     * @return NoticePeriod <p>通知周期</p>
                     * 
                     */
                    std::vector<int64_t> GetNoticePeriod() const;

                    /**
                     * 设置<p>通知周期</p>
                     * @param _noticePeriod <p>通知周期</p>
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
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
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
                     * <p>告警策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>事件类型 1：资源不合规事件</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>事件范围  1：当前账号  2：多账号</p>
                     */
                    std::vector<int64_t> m_eventScope;
                    bool m_eventScopeHasBeenSet;

                    /**
                     * <p>风险等级 1：高风险  2：中风险 3：低风险</p>
                     */
                    std::vector<int64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>通知时间段</p>
                     */
                    std::string m_noticeTime;
                    bool m_noticeTimeHasBeenSet;

                    /**
                     * <p>通知机制</p>
                     */
                    std::string m_notificationMechanism;
                    bool m_notificationMechanismHasBeenSet;

                    /**
                     * <p>状态 1：启用 2：停用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>通知周期</p>
                     */
                    std::vector<int64_t> m_noticePeriod;
                    bool m_noticePeriodHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDALARMPOLICYREQUEST_H_
