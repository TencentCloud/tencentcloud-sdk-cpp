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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreBaselineRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreBaselineRule返回参数结构体
                */
                class DescribeIgnoreBaselineRuleResponse : public AbstractModel
                {
                public:
                    DescribeIgnoreBaselineRuleResponse();
                    ~DescribeIgnoreBaselineRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取忽略基线检测项列表信息
                     * @return IgnoreBaselineRuleList 忽略基线检测项列表信息
                     * 
                     */
                    std::vector<IgnoreBaselineRule> GetIgnoreBaselineRuleList() const;

                    /**
                     * 判断参数 IgnoreBaselineRuleList 是否已赋值
                     * @return IgnoreBaselineRuleList 是否已赋值
                     * 
                     */
                    bool IgnoreBaselineRuleListHasBeenSet() const;

                    /**
                     * 获取分页查询记录总数
                     * @return TotalCount 分页查询记录总数
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
                     * 忽略基线检测项列表信息
                     */
                    std::vector<IgnoreBaselineRule> m_ignoreBaselineRuleList;
                    bool m_ignoreBaselineRuleListHasBeenSet;

                    /**
                     * 分页查询记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULERESPONSE_H_
