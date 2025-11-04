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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeJobsOverview返回参数结构体
                */
                class DescribeJobsOverviewResponse : public AbstractModel
                {
                public:
                    DescribeJobsOverviewResponse();
                    ~DescribeJobsOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业任务数量
                     * @return JobTotal 作业任务数量
                     * 
                     */
                    uint64_t GetJobTotal() const;

                    /**
                     * 判断参数 JobTotal 是否已赋值
                     * @return JobTotal 是否已赋值
                     * 
                     */
                    bool JobTotalHasBeenSet() const;

                    /**
                     * 获取排队中的作业任务数量
                     * @return QueuingJobTotal 排队中的作业任务数量
                     * 
                     */
                    uint64_t GetQueuingJobTotal() const;

                    /**
                     * 判断参数 QueuingJobTotal 是否已赋值
                     * @return QueuingJobTotal 是否已赋值
                     * 
                     */
                    bool QueuingJobTotalHasBeenSet() const;

                    /**
                     * 获取运行中的作业数量
                     * @return RunningJobTotal 运行中的作业数量
                     * 
                     */
                    uint64_t GetRunningJobTotal() const;

                    /**
                     * 判断参数 RunningJobTotal 是否已赋值
                     * @return RunningJobTotal 是否已赋值
                     * 
                     */
                    bool RunningJobTotalHasBeenSet() const;

                private:

                    /**
                     * 作业任务数量
                     */
                    uint64_t m_jobTotal;
                    bool m_jobTotalHasBeenSet;

                    /**
                     * 排队中的作业任务数量
                     */
                    uint64_t m_queuingJobTotal;
                    bool m_queuingJobTotalHasBeenSet;

                    /**
                     * 运行中的作业数量
                     */
                    uint64_t m_runningJobTotal;
                    bool m_runningJobTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEJOBSOVERVIEWRESPONSE_H_
