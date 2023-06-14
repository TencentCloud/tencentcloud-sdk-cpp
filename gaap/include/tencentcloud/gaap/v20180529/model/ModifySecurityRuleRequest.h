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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySecurityRule请求参数结构体
                */
                class ModifySecurityRuleRequest : public AbstractModel
                {
                public:
                    ModifySecurityRuleRequest();
                    ~ModifySecurityRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取规则名：不得超过30个字符，超过部分会被截断。
                     * @return AliasName 规则名：不得超过30个字符，超过部分会被截断。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置规则名：不得超过30个字符，超过部分会被截断。
                     * @param _aliasName 规则名：不得超过30个字符，超过部分会被截断。
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

                    /**
                     * 获取安全规则动作
                     * @return RuleAction 安全规则动作
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置安全规则动作
                     * @param _ruleAction 安全规则动作
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
                     * 获取规则关联地址，格式需要满足CIDR网络地址规范
                     * @return SourceCidr 规则关联地址，格式需要满足CIDR网络地址规范
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置规则关联地址，格式需要满足CIDR网络地址规范
                     * @param _sourceCidr 规则关联地址，格式需要满足CIDR网络地址规范
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
                     * 获取协议类型
                     * @return Protocol 协议类型
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型
                     * @param _protocol 协议类型
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
                     * 获取端口范围，支持以下格式
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * @return DestPortRange 端口范围，支持以下格式
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * 
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置端口范围，支持以下格式
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * @param _destPortRange 端口范围，支持以下格式
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * 
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     * 
                     */
                    bool DestPortRangeHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名：不得超过30个字符，超过部分会被截断。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 安全策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 安全规则动作
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 规则关联地址，格式需要满足CIDR网络地址规范
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * 协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口范围，支持以下格式
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     */
                    std::string m_destPortRange;
                    bool m_destPortRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_
