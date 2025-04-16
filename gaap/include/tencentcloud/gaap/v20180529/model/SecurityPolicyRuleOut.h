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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 安全策略规则（出参）
                */
                class SecurityPolicyRuleOut : public AbstractModel
                {
                public:
                    SecurityPolicyRuleOut();
                    ~SecurityPolicyRuleOut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略：允许（ACCEPT）或拒绝（DROP）
                     * @return Action 策略：允许（ACCEPT）或拒绝（DROP）
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略：允许（ACCEPT）或拒绝（DROP）
                     * @param _action 策略：允许（ACCEPT）或拒绝（DROP）
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取请求来源Ip或Ip段
                     * @return SourceCidr 请求来源Ip或Ip段
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置请求来源Ip或Ip段
                     * @param _sourceCidr 请求来源Ip或Ip段
                     * 
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     * 
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取规则别名
                     * @return AliasName 规则别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置规则别名
                     * @param _aliasName 规则别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取目标端口范围
                     * @return DestPortRange 目标端口范围
                     * 
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置目标端口范围
                     * @param _destPortRange 目标端口范围
                     * 
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     * 
                     */
                    bool DestPortRangeHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取要匹配的协议类型（TCP/UDP）
                     * @return Protocol 要匹配的协议类型（TCP/UDP）
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置要匹配的协议类型（TCP/UDP）
                     * @param _protocol 要匹配的协议类型（TCP/UDP）
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取安全策略ID
                     * @return PolicyId 安全策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID
                     * @param _policyId 安全策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 策略：允许（ACCEPT）或拒绝（DROP）
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 请求来源Ip或Ip段
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * 规则别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 目标端口范围
                     */
                    std::string m_destPortRange;
                    bool m_destPortRangeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 要匹配的协议类型（TCP/UDP）
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 安全策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEOUT_H_
