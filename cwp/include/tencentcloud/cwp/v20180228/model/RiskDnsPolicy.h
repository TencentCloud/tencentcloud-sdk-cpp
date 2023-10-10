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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 恶意请求策略
                */
                class RiskDnsPolicy : public AbstractModel
                {
                public:
                    RiskDnsPolicy();
                    ~RiskDnsPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略类型[0:系统,1:用户]
                     * @return PolicyType 策略类型[0:系统,1:用户]
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置策略类型[0:系统,1:用户]
                     * @param _policyType 策略类型[0:系统,1:用户]
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略动作[0:告警,1:放行,2:拦截+告警]
                     * @return PolicyAction 策略动作[0:告警,1:放行,2:拦截+告警]
                     * 
                     */
                    int64_t GetPolicyAction() const;

                    /**
                     * 设置策略动作[0:告警,1:放行,2:拦截+告警]
                     * @param _policyAction 策略动作[0:告警,1:放行,2:拦截+告警]
                     * 
                     */
                    void SetPolicyAction(const int64_t& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取主机范围[1: 所有专业版+旗舰版|2:所有旗舰版|0: 部分主机]
                     * @return HostScope 主机范围[1: 所有专业版+旗舰版|2:所有旗舰版|0: 部分主机]
                     * 
                     */
                    int64_t GetHostScope() const;

                    /**
                     * 设置主机范围[1: 所有专业版+旗舰版|2:所有旗舰版|0: 部分主机]
                     * @param _hostScope 主机范围[1: 所有专业版+旗舰版|2:所有旗舰版|0: 部分主机]
                     * 
                     */
                    void SetHostScope(const int64_t& _hostScope);

                    /**
                     * 判断参数 HostScope 是否已赋值
                     * @return HostScope 是否已赋值
                     * 
                     */
                    bool HostScopeHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return HostIds 主机ID
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置主机ID
                     * @param _hostIds 主机ID
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取域名,作为入参时需要进行base64 encode
                     * @return Domains 域名,作为入参时需要进行base64 encode
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名,作为入参时需要进行base64 encode
                     * @param _domains 域名,作为入参时需要进行base64 encode
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取是否生效[0:生效,1:不生效]
                     * @return IsEnabled 是否生效[0:生效,1:不生效]
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置是否生效[0:生效,1:不生效]
                     * @param _isEnabled 是否生效[0:生效,1:不生效]
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDesc 策略描述
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置策略描述
                     * @param _policyDesc 策略描述
                     * 
                     */
                    void SetPolicyDesc(const std::string& _policyDesc);

                    /**
                     * 判断参数 PolicyDesc 是否已赋值
                     * @return PolicyDesc 是否已赋值
                     * 
                     */
                    bool PolicyDescHasBeenSet() const;

                    /**
                     * 获取是否处理之前的事件[0:不处理|1:处理]
                     * @return IsDealOldEvent 是否处理之前的事件[0:不处理|1:处理]
                     * 
                     */
                    int64_t GetIsDealOldEvent() const;

                    /**
                     * 设置是否处理之前的事件[0:不处理|1:处理]
                     * @param _isDealOldEvent 是否处理之前的事件[0:不处理|1:处理]
                     * 
                     */
                    void SetIsDealOldEvent(const int64_t& _isDealOldEvent);

                    /**
                     * 判断参数 IsDealOldEvent 是否已赋值
                     * @return IsDealOldEvent 是否已赋值
                     * 
                     */
                    bool IsDealOldEventHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件ID
                     * @param _eventId 事件ID
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型[0:系统,1:用户]
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略动作[0:告警,1:放行,2:拦截+告警]
                     */
                    int64_t m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * 主机范围[1: 所有专业版+旗舰版|2:所有旗舰版|0: 部分主机]
                     */
                    int64_t m_hostScope;
                    bool m_hostScopeHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 域名,作为入参时需要进行base64 encode
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 是否生效[0:生效,1:不生效]
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 策略ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * 是否处理之前的事件[0:不处理|1:处理]
                     */
                    int64_t m_isDealOldEvent;
                    bool m_isDealOldEventHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 事件ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSPOLICY_H_
