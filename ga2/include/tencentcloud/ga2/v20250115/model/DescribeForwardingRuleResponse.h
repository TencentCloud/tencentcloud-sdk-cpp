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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGRULERESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/ForwardingRuleSet.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeForwardingRule返回参数结构体
                */
                class DescribeForwardingRuleResponse : public AbstractModel
                {
                public:
                    DescribeForwardingRuleResponse();
                    ~DescribeForwardingRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的规则信息。
                     * @return ForwardingRuleSet 符合条件的规则信息。
                     * 
                     */
                    std::vector<ForwardingRuleSet> GetForwardingRuleSet() const;

                    /**
                     * 判断参数 ForwardingRuleSet 是否已赋值
                     * @return ForwardingRuleSet 是否已赋值
                     * 
                     */
                    bool ForwardingRuleSetHasBeenSet() const;

                    /**
                     * 获取符合条件的实例个数。
                     * @return TotalCount 符合条件的实例个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 符合条件的规则信息。
                     */
                    std::vector<ForwardingRuleSet> m_forwardingRuleSet;
                    bool m_forwardingRuleSetHasBeenSet;

                    /**
                     * 符合条件的实例个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEFORWARDINGRULERESPONSE_H_
