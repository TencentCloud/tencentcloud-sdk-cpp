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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * RemoveEnterpriseSecurityGroupRule请求参数结构体
                */
                class RemoveEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    RemoveEnterpriseSecurityGroupRuleRequest();
                    ~RemoveEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则的uuid，可通过查询规则列表获取</p>
                     * @return RuleUuid <p>规则的uuid，可通过查询规则列表获取</p>
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置<p>规则的uuid，可通过查询规则列表获取</p>
                     * @param _ruleUuid <p>规则的uuid，可通过查询规则列表获取</p>
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取<p>删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可</p>
                     * @return RemoveType <p>删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可</p>
                     * 
                     */
                    int64_t GetRemoveType() const;

                    /**
                     * 设置<p>删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可</p>
                     * @param _removeType <p>删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可</p>
                     * 
                     */
                    void SetRemoveType(const int64_t& _removeType);

                    /**
                     * 判断参数 RemoveType 是否已赋值
                     * @return RemoveType 是否已赋值
                     * 
                     */
                    bool RemoveTypeHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                private:

                    /**
                     * <p>规则的uuid，可通过查询规则列表获取</p>
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * <p>删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可</p>
                     */
                    int64_t m_removeType;
                    bool m_removeTypeHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
