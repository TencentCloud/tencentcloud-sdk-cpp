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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMWafDLPRule请求参数结构体
                */
                class ModifyLLMWafDLPRuleRequest : public AbstractModel
                {
                public:
                    ModifyLLMWafDLPRuleRequest();
                    ~ModifyLLMWafDLPRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要修改的规则id列表</p>
                     * @return RuleIds <p>要修改的规则id列表</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置<p>要修改的规则id列表</p>
                     * @param _ruleIds <p>要修改的规则id列表</p>
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取<p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * @return ServiceId <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * @param _serviceId <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>动作</p>
                     * @return RuleAction <p>动作</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>动作</p>
                     * @param _ruleAction <p>动作</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>开关</p>
                     * @return Status <p>开关</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关</p>
                     * @param _status <p>开关</p>
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
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * @return Direction <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置<p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * @param _direction <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * @return Domain <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * @param _domain <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * <p>要修改的规则id列表</p>
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * <p>SDK 模式传 ServiceId（与 Domain 二选一）</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>动作</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>开关</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>检测方向：1是入向，2是出向，3是入向和出向都检测</p>
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>域名模式传 Domain（与 ServiceId 二选一）</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMWAFDLPRULEREQUEST_H_
