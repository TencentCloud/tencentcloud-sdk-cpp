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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Job.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
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
                     * 获取任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobSet 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Job> GetJobSet() const;

                    /**
                     * 判断参数 JobSet 是否已赋值
                     * @return JobSet 是否已赋值
                     * 
                     */
                    bool JobSetHasBeenSet() const;

                    /**
                     * 获取任务数量
                     * @return Total 任务数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Job> m_jobSet;
                    bool m_jobSetHasBeenSet;

                    /**
                     * 任务数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEJOBSRESPONSE_H_
