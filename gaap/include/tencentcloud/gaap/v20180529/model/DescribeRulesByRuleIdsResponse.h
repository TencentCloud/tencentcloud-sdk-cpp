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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRulesByRuleIds返回参数结构体
                */
                class DescribeRulesByRuleIdsResponse : public AbstractModel
                {
                public:
                    DescribeRulesByRuleIdsResponse();
                    ~DescribeRulesByRuleIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的规则总个数。
                     * @return TotalCount 返回的规则总个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回的规则列表。
                     * @return RuleSet 返回的规则列表。
                     * 
                     */
                    std::vector<RuleInfo> GetRuleSet() const;

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * 
                     */
                    bool RuleSetHasBeenSet() const;

                private:

                    /**
                     * 返回的规则总个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的规则列表。
                     */
                    std::vector<RuleInfo> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSRESPONSE_H_
