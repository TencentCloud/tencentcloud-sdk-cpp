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
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param RuleId 规则ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名：不得超过30个字符，超过部分会被截断。
                     * @return AliasName 规则名：不得超过30个字符，超过部分会被截断。
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置规则名：不得超过30个字符，超过部分会被截断。
                     * @param AliasName 规则名：不得超过30个字符，超过部分会被截断。
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取安全策略ID
                     * @return PolicyId 安全策略ID
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID
                     * @param PolicyId 安全策略ID
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYSECURITYRULEREQUEST_H_
