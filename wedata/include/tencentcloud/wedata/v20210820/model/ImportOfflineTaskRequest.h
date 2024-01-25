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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTOFFLINETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskBaseInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ImportOfflineTask请求参数结构体
                */
                class ImportOfflineTaskRequest : public AbstractModel
                {
                public:
                    ImportOfflineTaskRequest();
                    ~ImportOfflineTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取任务名称
                     * @return TaskInfoList 任务名称
                     * 
                     */
                    std::vector<TaskBaseInfo> GetTaskInfoList() const;

                    /**
                     * 设置任务名称
                     * @param _taskInfoList 任务名称
                     * 
                     */
                    void SetTaskInfoList(const std::vector<TaskBaseInfo>& _taskInfoList);

                    /**
                     * 判断参数 TaskInfoList 是否已赋值
                     * @return TaskInfoList 是否已赋值
                     * 
                     */
                    bool TaskInfoListHasBeenSet() const;

                    /**
                     * 获取重命名策略，0（跳过）、1（重命名）
                     * @return TaskNameExistMode 重命名策略，0（跳过）、1（重命名）
                     * 
                     */
                    int64_t GetTaskNameExistMode() const;

                    /**
                     * 设置重命名策略，0（跳过）、1（重命名）
                     * @param _taskNameExistMode 重命名策略，0（跳过）、1（重命名）
                     * 
                     */
                    void SetTaskNameExistMode(const int64_t& _taskNameExistMode);

                    /**
                     * 判断参数 TaskNameExistMode 是否已赋值
                     * @return TaskNameExistMode 是否已赋值
                     * 
                     */
                    bool TaskNameExistModeHasBeenSet() const;

                    /**
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取任务文件夹id
                     * @return TaskFolderId 任务文件夹id
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置任务文件夹id
                     * @param _taskFolderId 任务文件夹id
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::vector<TaskBaseInfo> m_taskInfoList;
                    bool m_taskInfoListHasBeenSet;

                    /**
                     * 重命名策略，0（跳过）、1（重命名）
                     */
                    int64_t m_taskNameExistMode;
                    bool m_taskNameExistModeHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务文件夹id
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTOFFLINETASKREQUEST_H_
