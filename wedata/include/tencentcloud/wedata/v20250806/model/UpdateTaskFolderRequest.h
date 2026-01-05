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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTaskFolder请求参数结构体
                */
                class UpdateTaskFolderRequest : public AbstractModel
                {
                public:
                    UpdateTaskFolderRequest();
                    ~UpdateTaskFolderRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
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
                     * 获取文件夹ID，可通过ListTaskFolders接口获取
                     * @return TaskFolderId 文件夹ID，可通过ListTaskFolders接口获取
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置文件夹ID，可通过ListTaskFolders接口获取
                     * @param _taskFolderId 文件夹ID，可通过ListTaskFolders接口获取
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取更新后的任务文件夹名称
                     * @return TaskFolderName 更新后的任务文件夹名称
                     * 
                     */
                    std::string GetTaskFolderName() const;

                    /**
                     * 设置更新后的任务文件夹名称
                     * @param _taskFolderName 更新后的任务文件夹名称
                     * 
                     */
                    void SetTaskFolderName(const std::string& _taskFolderName);

                    /**
                     * 判断参数 TaskFolderName 是否已赋值
                     * @return TaskFolderName 是否已赋值
                     * 
                     */
                    bool TaskFolderNameHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 文件夹ID，可通过ListTaskFolders接口获取
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * 更新后的任务文件夹名称
                     */
                    std::string m_taskFolderName;
                    bool m_taskFolderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKFOLDERREQUEST_H_
