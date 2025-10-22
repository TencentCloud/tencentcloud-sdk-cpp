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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSRESPONSE_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tia/v20180226/model/Job.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * ListJobs返回参数结构体
                */
                class ListJobsResponse : public AbstractModel
                {
                public:
                    ListJobsResponse();
                    ~ListJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务列表
                     * @return Jobs 训练任务列表
                     * 
                     */
                    std::vector<Job> GetJobs() const;

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                private:

                    /**
                     * 训练任务列表
                     */
                    std::vector<Job> m_jobs;
                    bool m_jobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_LISTJOBSRESPONSE_H_
