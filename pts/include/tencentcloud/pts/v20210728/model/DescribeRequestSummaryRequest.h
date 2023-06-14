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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREQUESTSUMMARYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREQUESTSUMMARYREQUEST_H_

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
                * DescribeRequestSummary请求参数结构体
                */
                class DescribeRequestSummaryRequest : public AbstractModel
                {
                public:
                    DescribeRequestSummaryRequest();
                    ~DescribeRequestSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取压测任务ID
                     * @return JobId 压测任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置压测任务ID
                     * @param _jobId 压测任务ID
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
                     * 获取压测场景ID
                     * @return ScenarioId 压测场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置压测场景ID
                     * @param _scenarioId 压测场景ID
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
                     * 获取压测项目ID
                     * @return ProjectId 压测项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置压测项目ID
                     * @param _projectId 压测项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 压测任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 压测场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 压测项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEREQUESTSUMMARYREQUEST_H_
