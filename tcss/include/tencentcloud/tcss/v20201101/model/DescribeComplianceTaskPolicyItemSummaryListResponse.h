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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePolicyItemSummary.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceTaskPolicyItemSummaryList返回参数结构体
                */
                class DescribeComplianceTaskPolicyItemSummaryListResponse : public AbstractModel
                {
                public:
                    DescribeComplianceTaskPolicyItemSummaryListResponse();
                    ~DescribeComplianceTaskPolicyItemSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回最近一次合规检查任务的ID。这个任务为本次所展示数据的来源。
                     * @return TaskId 返回最近一次合规检查任务的ID。这个任务为本次所展示数据的来源。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取返回检测项的总数。
                     * @return TotalCount 返回检测项的总数。
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
                     * 获取返回各检测项对应的汇总信息的列表。
                     * @return PolicyItemSummaryList 返回各检测项对应的汇总信息的列表。
                     * 
                     */
                    std::vector<CompliancePolicyItemSummary> GetPolicyItemSummaryList() const;

                    /**
                     * 判断参数 PolicyItemSummaryList 是否已赋值
                     * @return PolicyItemSummaryList 是否已赋值
                     * 
                     */
                    bool PolicyItemSummaryListHasBeenSet() const;

                private:

                    /**
                     * 返回最近一次合规检查任务的ID。这个任务为本次所展示数据的来源。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 返回检测项的总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回各检测项对应的汇总信息的列表。
                     */
                    std::vector<CompliancePolicyItemSummary> m_policyItemSummaryList;
                    bool m_policyItemSummaryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTRESPONSE_H_
