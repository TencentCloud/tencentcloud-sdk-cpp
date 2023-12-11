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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ABORTJOBREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ABORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * AbortJob请求参数结构体
                */
                class AbortJobRequest : public AbstractModel
                {
                public:
                    AbortJobRequest();
                    ~AbortJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待停止的压测任务的 ID（所有的压测任务 ID 可以从 DescribeJobs 接口获取）
                     * @return JobId 待停止的压测任务的 ID（所有的压测任务 ID 可以从 DescribeJobs 接口获取）
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置待停止的压测任务的 ID（所有的压测任务 ID 可以从 DescribeJobs 接口获取）
                     * @param _jobId 待停止的压测任务的 ID（所有的压测任务 ID 可以从 DescribeJobs 接口获取）
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取中断原因
                     * @return AbortReason 中断原因
                     * 
                     */
                    int64_t GetAbortReason() const;

                    /**
                     * 设置中断原因
                     * @param _abortReason 中断原因
                     * 
                     */
                    void SetAbortReason(const int64_t& _abortReason);

                    /**
                     * 判断参数 AbortReason 是否已赋值
                     * @return AbortReason 是否已赋值
                     * 
                     */
                    bool AbortReasonHasBeenSet() const;

                private:

                    /**
                     * 待停止的压测任务的 ID（所有的压测任务 ID 可以从 DescribeJobs 接口获取）
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 中断原因
                     */
                    int64_t m_abortReason;
                    bool m_abortReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ABORTJOBREQUEST_H_
