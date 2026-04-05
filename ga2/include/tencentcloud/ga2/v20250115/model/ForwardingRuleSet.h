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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 七层转发规则信息
                */
                class ForwardingRuleSet : public AbstractModel
                {
                public:
                    ForwardingRuleSet();
                    ~ForwardingRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层转发规则条件信息。
                     * @return RuleCondition 七层转发规则条件信息。
                     * 
                     */
                    std::vector<RuleCondition> GetRuleCondition() const;

                    /**
                     * 设置七层转发规则条件信息。
                     * @param _ruleCondition 七层转发规则条件信息。
                     * 
                     */
                    void SetRuleCondition(const std::vector<RuleCondition>& _ruleCondition);

                    /**
                     * 判断参数 RuleCondition 是否已赋值
                     * @return RuleCondition 是否已赋值
                     * 
                     */
                    bool RuleConditionHasBeenSet() const;

                    /**
                     * 获取七层转发规则行为信息。
                     * @return RuleAction 七层转发规则行为信息。
                     * 
                     */
                    std::vector<RuleAction> GetRuleAction() const;

                    /**
                     * 设置七层转发规则行为信息。
                     * @param _ruleAction 七层转发规则行为信息。
                     * 
                     */
                    void SetRuleAction(const std::vector<RuleAction>& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取是否开启回源Sni。
                     * @return EnableOriginSni 是否开启回源Sni。
                     * 
                     */
                    bool GetEnableOriginSni() const;

                    /**
                     * 设置是否开启回源Sni。
                     * @param _enableOriginSni 是否开启回源Sni。
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
                     * 获取回源Sni。
                     * @return OriginSni 回源Sni。
                     * 
                     */
                    std::string GetOriginSni() const;

                    /**
                     * 设置回源Sni。
                     * @param _originSni 回源Sni。
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
                     * 获取回源Herder信息。
                     * @return OriginHeaders 回源Herder信息。
                     * 
                     */
                    std::vector<OriginHeader> GetOriginHeaders() const;

                    /**
                     * 设置回源Herder信息。
                     * @param _originHeaders 回源Herder信息。
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
                     * 获取回源Host。
                     * @return OriginHost 回源Host。
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置回源Host。
                     * @param _originHost 回源Host。
                     * 
                     */
                    void SetOriginHost(const std::string& _originHost);

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

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
                     * 获取七层转发策略ID。
                     * @return ForwardingPolicyId 七层转发策略ID。
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置七层转发策略ID。
                     * @param _forwardingPolicyId 七层转发策略ID。
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
                     * 获取七层转发规则ID。
                     * @return ForwardingRuleId 七层转发规则ID。
                     * 
                     */
                    std::string GetForwardingRuleId() const;

                    /**
                     * 设置七层转发规则ID。
                     * @param _forwardingRuleId 七层转发规则ID。
                     * 
                     */
                    void SetForwardingRuleId(const std::string& _forwardingRuleId);

                    /**
                     * 判断参数 ForwardingRuleId 是否已赋值
                     * @return ForwardingRuleId 是否已赋值
                     * 
                     */
                    bool ForwardingRuleIdHasBeenSet() const;

                private:

                    /**
                     * 七层转发规则条件信息。
                     */
                    std::vector<RuleCondition> m_ruleCondition;
                    bool m_ruleConditionHasBeenSet;

                    /**
                     * 七层转发规则行为信息。
                     */
                    std::vector<RuleAction> m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 是否开启回源Sni。
                     */
                    bool m_enableOriginSni;
                    bool m_enableOriginSniHasBeenSet;

                    /**
                     * 回源Sni。
                     */
                    std::string m_originSni;
                    bool m_originSniHasBeenSet;

                    /**
                     * 回源Herder信息。
                     */
                    std::vector<OriginHeader> m_originHeaders;
                    bool m_originHeadersHasBeenSet;

                    /**
                     * 回源Host。
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

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
                     * 七层转发策略ID。
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * 七层转发规则ID。
                     */
                    std::string m_forwardingRuleId;
                    bool m_forwardingRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_
