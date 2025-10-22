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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYFORWARDRULEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYFORWARDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyForwardRule请求参数结构体
                */
                class ModifyForwardRuleRequest : public AbstractModel
                {
                public:
                    ModifyForwardRuleRequest();
                    ~ModifyForwardRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转发规则ID
                     * @return RuleId 转发规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则ID
                     * @param _ruleId 转发规则ID
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
                     * 获取转发规则名称
                     * @return RuleName 转发规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置转发规则名称
                     * @param _ruleName 转发规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取终端节点ID
                     * @return EndPointId 终端节点ID
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置终端节点ID
                     * @param _endPointId 终端节点ID
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                private:

                    /**
                     * 转发规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 转发规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 终端节点ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYFORWARDRULEREQUEST_H_
