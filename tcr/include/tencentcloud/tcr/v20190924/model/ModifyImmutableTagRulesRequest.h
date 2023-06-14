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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYIMMUTABLETAGRULESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYIMMUTABLETAGRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ImmutableTagRule.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyImmutableTagRules请求参数结构体
                */
                class ModifyImmutableTagRulesRequest : public AbstractModel
                {
                public:
                    ModifyImmutableTagRulesRequest();
                    ~ModifyImmutableTagRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 Id
                     * @return RegistryId 实例 Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例 Id
                     * @param _registryId 实例 Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return NamespaceName 命名空间
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceName 命名空间
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取规则 Id
                     * @return RuleId 规则 Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则 Id
                     * @param _ruleId 规则 Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Rule 规则
                     * 
                     */
                    ImmutableTagRule GetRule() const;

                    /**
                     * 设置规则
                     * @param _rule 规则
                     * 
                     */
                    void SetRule(const ImmutableTagRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * 实例 Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 规则 Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则
                     */
                    ImmutableTagRule m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYIMMUTABLETAGRULESREQUEST_H_
