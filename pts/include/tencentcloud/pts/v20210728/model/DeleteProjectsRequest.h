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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_

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
                * DeleteProjects请求参数结构体
                */
                class DeleteProjectsRequest : public AbstractModel
                {
                public:
                    DeleteProjectsRequest();
                    ~DeleteProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID数组
                     * @return ProjectIds 项目ID数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID数组
                     * @param _projectIds 项目ID数组
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取是否删除项目相关的场景。默认为否。
                     * @return DeleteScenarios 是否删除项目相关的场景。默认为否。
                     * 
                     */
                    bool GetDeleteScenarios() const;

                    /**
                     * 设置是否删除项目相关的场景。默认为否。
                     * @param _deleteScenarios 是否删除项目相关的场景。默认为否。
                     * 
                     */
                    void SetDeleteScenarios(const bool& _deleteScenarios);

                    /**
                     * 判断参数 DeleteScenarios 是否已赋值
                     * @return DeleteScenarios 是否已赋值
                     * 
                     */
                    bool DeleteScenariosHasBeenSet() const;

                    /**
                     * 获取是否删除项目相关的任务。默认为否。
                     * @return DeleteJobs 是否删除项目相关的任务。默认为否。
                     * 
                     */
                    bool GetDeleteJobs() const;

                    /**
                     * 设置是否删除项目相关的任务。默认为否。
                     * @param _deleteJobs 是否删除项目相关的任务。默认为否。
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
                     * 项目ID数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 是否删除项目相关的场景。默认为否。
                     */
                    bool m_deleteScenarios;
                    bool m_deleteScenariosHasBeenSet;

                    /**
                     * 是否删除项目相关的任务。默认为否。
                     */
                    bool m_deleteJobs;
                    bool m_deleteJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETEPROJECTSREQUEST_H_
