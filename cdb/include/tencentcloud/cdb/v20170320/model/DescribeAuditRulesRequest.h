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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAuditRules请求参数结构体
                */
                class DescribeAuditRulesRequest : public AbstractModel
                {
                public:
                    DescribeAuditRulesRequest();
                    ~DescribeAuditRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审计规则 ID。
                     * @return RuleId 审计规则 ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置审计规则 ID。
                     * @param _ruleId 审计规则 ID。
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
                     * 获取审计规则名称。支持按审计规则名称进行模糊匹配查询。
                     * @return RuleName 审计规则名称。支持按审计规则名称进行模糊匹配查询。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置审计规则名称。支持按审计规则名称进行模糊匹配查询。
                     * @param _ruleName 审计规则名称。支持按审计规则名称进行模糊匹配查询。
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
                     * 获取分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * @return Limit 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * @param _limit 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量。默认值为0。
                     * @return Offset 分页偏移量。默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。默认值为0。
                     * @param _offset 分页偏移量。默认值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 审计规则 ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 审计规则名称。支持按审计规则名称进行模糊匹配查询。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 分页大小参数。默认值为 20，最小值为 1，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULESREQUEST_H_
