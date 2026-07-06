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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAgentSummaryList返回参数结构体
                */
                class DescribeAgentSummaryListResponse : public AbstractModel
                {
                public:
                    DescribeAgentSummaryListResponse();
                    ~DescribeAgentSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>Agent摘要信息</p>
                     * @return AgentList <p>Agent摘要信息</p>
                     * 
                     */
                    std::vector<AgentSummary> GetAgentList() const;

                    /**
                     * 判断参数 AgentList 是否已赋值
                     * @return AgentList 是否已赋值
                     * 
                     */
                    bool AgentListHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Agent摘要信息</p>
                     */
                    std::vector<AgentSummary> m_agentList;
                    bool m_agentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTSUMMARYLISTRESPONSE_H_
