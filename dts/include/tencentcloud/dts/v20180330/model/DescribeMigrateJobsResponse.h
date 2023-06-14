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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateJobInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeMigrateJobs返回参数结构体
                */
                class DescribeMigrateJobsResponse : public AbstractModel
                {
                public:
                    DescribeMigrateJobsResponse();
                    ~DescribeMigrateJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务数目
                     * @return TotalCount 任务数目
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
                     * 获取任务详情数组
                     * @return JobList 任务详情数组
                     * 
                     */
                    std::vector<MigrateJobInfo> GetJobList() const;

                    /**
                     * 判断参数 JobList 是否已赋值
                     * @return JobList 是否已赋值
                     * 
                     */
                    bool JobListHasBeenSet() const;

                private:

                    /**
                     * 任务数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务详情数组
                     */
                    std::vector<MigrateJobInfo> m_jobList;
                    bool m_jobListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBEMIGRATEJOBSRESPONSE_H_
