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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/JobView.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeJobs返回参数结构体
                */
                class DescribeJobsResponse : public AbstractModel
                {
                public:
                    DescribeJobsResponse();
                    ~DescribeJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业任务概览列表
                     * @return JobSet 作业任务概览列表
                     * 
                     */
                    std::vector<JobView> GetJobSet() const;

                    /**
                     * 判断参数 JobSet 是否已赋值
                     * @return JobSet 是否已赋值
                     * 
                     */
                    bool JobSetHasBeenSet() const;

                    /**
                     * 获取符合条件的作业任务数量。
                     * @return TotalCount 符合条件的作业任务数量。
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
                     * 作业任务概览列表
                     */
                    std::vector<JobView> m_jobSet;
                    bool m_jobSetHasBeenSet;

                    /**
                     * 符合条件的作业任务数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSRESPONSE_H_
