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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_

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
                * DeleteScenarios请求参数结构体
                */
                class DeleteScenariosRequest : public AbstractModel
                {
                public:
                    DeleteScenariosRequest();
                    ~DeleteScenariosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID数组
                     * @return ScenarioIds 场景ID数组
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置场景ID数组
                     * @param _scenarioIds 场景ID数组
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

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
                     * 获取是否删除场景相关的任务。默认为否。
                     * @return DeleteJobs 是否删除场景相关的任务。默认为否。
                     * 
                     */
                    bool GetDeleteJobs() const;

                    /**
                     * 设置是否删除场景相关的任务。默认为否。
                     * @param _deleteJobs 是否删除场景相关的任务。默认为否。
                     * 
                     */
                    void SetDeleteJobs(const bool& _deleteJobs);

                    /**
                     * 判断参数 DeleteJobs 是否已赋值
                     * @return DeleteJobs 是否已赋值
                     * 
                     */
                    bool DeleteJobsHasBeenSet() const;

                private:

                    /**
                     * 场景ID数组
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否删除场景相关的任务。默认为否。
                     */
                    bool m_deleteJobs;
                    bool m_deleteJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETESCENARIOSREQUEST_H_
