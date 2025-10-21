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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSREQUEST_H_

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
                * DescribeRulesByRuleIds请求参数结构体
                */
                class DescribeRulesByRuleIdsRequest : public AbstractModel
                {
                public:
                    DescribeRulesByRuleIdsRequest();
                    ~DescribeRulesByRuleIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID列表。最多支持10个规则。
                     * @return RuleIds 规则ID列表。最多支持10个规则。
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置规则ID列表。最多支持10个规则。
                     * @param _ruleIds 规则ID列表。最多支持10个规则。
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * 规则ID列表。最多支持10个规则。
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESBYRULEIDSREQUEST_H_
