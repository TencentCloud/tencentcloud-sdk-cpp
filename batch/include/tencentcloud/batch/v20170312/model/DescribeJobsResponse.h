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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/JobView.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
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
                     * 获取作业列表
                     * @return JobSet 作业列表
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
                     * 获取符合条件的作业数量
                     * @return TotalCount 符合条件的作业数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 作业列表
                     */
                    std::vector<JobView> m_jobSet;
                    bool m_jobSetHasBeenSet;

                    /**
                     * 符合条件的作业数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSRESPONSE_H_
