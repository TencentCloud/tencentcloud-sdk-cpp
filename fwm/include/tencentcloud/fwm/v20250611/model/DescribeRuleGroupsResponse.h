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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERULEGROUPSRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERULEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/RuleGroupResp.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeRuleGroups返回参数结构体
                */
                class DescribeRuleGroupsResponse : public AbstractModel
                {
                public:
                    DescribeRuleGroupsResponse();
                    ~DescribeRuleGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取规则组列表
                     * @return RuleGroups 规则组列表
                     * 
                     */
                    std::vector<RuleGroupResp> GetRuleGroups() const;

                    /**
                     * 判断参数 RuleGroups 是否已赋值
                     * @return RuleGroups 是否已赋值
                     * 
                     */
                    bool RuleGroupsHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规则组列表
                     */
                    std::vector<RuleGroupResp> m_ruleGroups;
                    bool m_ruleGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERULEGROUPSRESPONSE_H_
