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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMWHITERULERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMWHITERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesRspRuleListItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCustomWhiteRule返回参数结构体
                */
                class DescribeCustomWhiteRuleResponse : public AbstractModel
                {
                public:
                    DescribeCustomWhiteRuleResponse();
                    ~DescribeCustomWhiteRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则详情
                     * @return RuleList 规则详情
                     * 
                     */
                    std::vector<DescribeCustomRulesRspRuleListItem> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取规则条数
                     * @return TotalCount 规则条数
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 规则详情
                     */
                    std::vector<DescribeCustomRulesRspRuleListItem> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * 规则条数
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMWHITERULERESPONSE_H_
