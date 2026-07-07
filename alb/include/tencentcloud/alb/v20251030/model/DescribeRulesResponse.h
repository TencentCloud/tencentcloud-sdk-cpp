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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleOutput.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeRules返回参数结构体
                */
                class DescribeRulesResponse : public AbstractModel
                {
                public:
                    DescribeRulesResponse();
                    ~DescribeRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下一次查询的Token值，如果当前是最后一页，返回为空。
                     * @return NextToken 下一次查询的Token值，如果当前是最后一页，返回为空。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取转发规则列表。
                     * @return Rules 转发规则列表。
                     * 
                     */
                    std::vector<RuleOutput> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取总的转发规则个数（根据监听器ID、规则ID等条件过滤后）。
                     * @return TotalCount 总的转发规则个数（根据监听器ID、规则ID等条件过滤后）。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 下一次查询的Token值，如果当前是最后一页，返回为空。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 转发规则列表。
                     */
                    std::vector<RuleOutput> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 总的转发规则个数（根据监听器ID、规则ID等条件过滤后）。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBERULESRESPONSE_H_
