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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Job.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeAsyncJobs返回参数结构体
                */
                class DescribeAsyncJobsResponse : public AbstractModel
                {
                public:
                    DescribeAsyncJobsResponse();
                    ~DescribeAsyncJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表。
                     * @return Jobs 任务列表。
                     * 
                     */
                    std::vector<Job> GetJobs() const;

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                    /**
                     * 获取分批次查询时每次显示的条目数。
                     * @return MaxResults 分批次查询时每次显示的条目数。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取是否拥有下一次查询的令牌（Token）。取值：  如果 NextToken 为空表示没有下一次查询。 如果 NextToken 有返回值，该取值表示下一次查询开始的令牌。
                     * @return NextToken 是否拥有下一次查询的令牌（Token）。取值：  如果 NextToken 为空表示没有下一次查询。 如果 NextToken 有返回值，该取值表示下一次查询开始的令牌。
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
                     * 获取列表条目数。
                     * @return TotalCount 列表条目数。
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
                     * 任务列表。
                     */
                    std::vector<Job> m_jobs;
                    bool m_jobsHasBeenSet;

                    /**
                     * 分批次查询时每次显示的条目数。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 是否拥有下一次查询的令牌（Token）。取值：  如果 NextToken 为空表示没有下一次查询。 如果 NextToken 有返回值，该取值表示下一次查询开始的令牌。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 列表条目数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSRESPONSE_H_
