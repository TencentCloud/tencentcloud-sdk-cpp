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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * MoveTasksToFolder请求参数结构体
                */
                class MoveTasksToFolderRequest : public AbstractModel
                {
                public:
                    MoveTasksToFolderRequest();
                    ~MoveTasksToFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取任务文件夹ID
                     * @return TaskFolderId 任务文件夹ID
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置任务文件夹ID
                     * @param _taskFolderId 任务文件夹ID
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
                     * 获取任务ID
                     * @return TaskIds 任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务ID
                     * @param _taskIds 任务ID
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取虚拟任务ID
                     * @return VirtualTaskIds 虚拟任务ID
                     * 
                     */
                    std::vector<std::string> GetVirtualTaskIds() const;

                    /**
                     * 设置虚拟任务ID
                     * @param _virtualTaskIds 虚拟任务ID
                     * 
                     */
                    void SetVirtualTaskIds(const std::vector<std::string>& _virtualTaskIds);

                    /**
                     * 判断参数 VirtualTaskIds 是否已赋值
                     * @return VirtualTaskIds 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdsHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务文件夹ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 虚拟任务ID
                     */
                    std::vector<std::string> m_virtualTaskIds;
                    bool m_virtualTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVETASKSTOFOLDERREQUEST_H_
