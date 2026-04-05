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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/RuleCondition.h>
#include <tencentcloud/ga2/v20250115/model/RuleAction.h>
#include <tencentcloud/ga2/v20250115/model/OriginHeader.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateForwardingRule请求参数结构体
                */
                class CreateForwardingRuleRequest : public AbstractModel
                {
                public:
                    CreateForwardingRuleRequest();
                    ~CreateForwardingRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取策略ID。
                     * @return ForwardingPolicyId 策略ID。
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _forwardingPolicyId 策略ID。
                     * 
                     */
                    void SetForwardingPolicyId(const std::string& _forwardingPolicyId);

                    /**
                     * 判断参数 ForwardingPolicyId 是否已赋值
                     * @return ForwardingPolicyId 是否已赋值
                     * 
                     */
                    bool ForwardingPolicyIdHasBeenSet() const;

                    /**
                     * 获取七层转发规则条件信息。
                     * @return RuleConditions 七层转发规则条件信息。
                     * 
                     */
                    std::vector<RuleCondition> GetRuleConditions() const;

                    /**
                     * 设置七层转发规则条件信息。
                     * @param _ruleConditions 七层转发规则条件信息。
                     * 
                     */
                    void SetRuleConditions(const std::vector<RuleCondition>& _ruleConditions);

                    /**
                     * 判断参数 RuleConditions 是否已赋值
                     * @return RuleConditions 是否已赋值
                     * 
                     */
                    bool RuleConditionsHasBeenSet() const;

                    /**
                     * 获取七层转发规则行为信息。
                     * @return RuleActions 七层转发规则行为信息。
                     * 
                     */
                    std::vector<RuleAction> GetRuleActions() const;

                    /**
                     * 设置七层转发规则行为信息。
                     * @param _ruleActions 七层转发规则行为信息。
                     * 
                     */
                    void SetRuleActions(const std::vector<RuleAction>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取回源Header信息。
                     * @return OriginHeaders 回源Header信息。
                     * 
                     */
                    std::vector<OriginHeader> GetOriginHeaders() const;

                    /**
                     * 设置回源Header信息。
                     * @param _originHeaders 回源Header信息。
                     * 
                     */
                    void SetOriginHeaders(const std::vector<OriginHeader>& _originHeaders);

                    /**
                     * 判断参数 OriginHeaders 是否已赋值
                     * @return OriginHeaders 是否已赋值
                     * 
                     */
                    bool OriginHeadersHasBeenSet() const;

                    /**
                     * 获取是否开启回源sni。
                     * @return EnableOriginSni 是否开启回源sni。
                     * 
                     */
                    bool GetEnableOriginSni() const;

                    /**
                     * 设置是否开启回源sni。
                     * @param _enableOriginSni 是否开启回源sni。
                     * 
                     */
                    void SetEnableOriginSni(const bool& _enableOriginSni);

                    /**
                     * 判断参数 EnableOriginSni 是否已赋值
                     * @return EnableOriginSni 是否已赋值
                     * 
                     */
                    bool EnableOriginSniHasBeenSet() const;

                    /**
                     * 获取回源sni。
                     * @return OriginSni 回源sni。
                     * 
                     */
                    std::string GetOriginSni() const;

                    /**
                     * 设置回源sni。
                     * @param _originSni 回源sni。
                     * 
                     */
                    void SetOriginSni(const std::string& _originSni);

                    /**
                     * 判断参数 OriginSni 是否已赋值
                     * @return OriginSni 是否已赋值
                     * 
                     */
                    bool OriginSniHasBeenSet() const;

                    /**
                     * 获取回源host。
                     * @return OriginHost 回源host。
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置回源host。
                     * @param _originHost 回源host。
                     * 
                     */
                    void SetOriginHost(const std::string& _originHost);

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 策略ID。
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * 七层转发规则条件信息。
                     */
                    std::vector<RuleCondition> m_ruleConditions;
                    bool m_ruleConditionsHasBeenSet;

                    /**
                     * 七层转发规则行为信息。
                     */
                    std::vector<RuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * 回源Header信息。
                     */
                    std::vector<OriginHeader> m_originHeaders;
                    bool m_originHeadersHasBeenSet;

                    /**
                     * 是否开启回源sni。
                     */
                    bool m_enableOriginSni;
                    bool m_enableOriginSniHasBeenSet;

                    /**
                     * 回源sni。
                     */
                    std::string m_originSni;
                    bool m_originSniHasBeenSet;

                    /**
                     * 回源host。
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_
