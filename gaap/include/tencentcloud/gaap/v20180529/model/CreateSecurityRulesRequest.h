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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleIn.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateSecurityRules请求参数结构体
                */
                class CreateSecurityRulesRequest : public AbstractModel
                {
                public:
                    CreateSecurityRulesRequest();
                    ~CreateSecurityRulesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取访问规则列表
                     * @return RuleList 访问规则列表
                     * 
                     */
                    std::vector<SecurityPolicyRuleIn> GetRuleList() const;

                    /**
                     * 设置访问规则列表
                     * @param _ruleList 访问规则列表
                     * 
                     */
                    void SetRuleList(const std::vector<SecurityPolicyRuleIn>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * 安全策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 访问规则列表
                     */
                    std::vector<SecurityPolicyRuleIn> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATESECURITYRULESREQUEST_H_
