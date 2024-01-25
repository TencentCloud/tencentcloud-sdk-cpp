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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKFOLDERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKFOLDERREQUEST_H_

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
                * ModifyTaskFolder请求参数结构体
                */
                class ModifyTaskFolderRequest : public AbstractModel
                {
                public:
                    ModifyTaskFolderRequest();
                    ~ModifyTaskFolderRequest() = default;
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
                     * 获取文件夹名称
                     * @return FolderName 文件夹名称
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
                     * @param _folderName 文件夹名称
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取工作量ID
                     * @return WorkflowId 工作量ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作量ID
                     * @param _workflowId 工作量ID
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
                     * 获取父文件夹ID
                     * @return ParentFolderId 父文件夹ID
                     * 
                     */
                    std::string GetParentFolderId() const;

                    /**
                     * 设置父文件夹ID
                     * @param _parentFolderId 父文件夹ID
                     * 
                     */
                    void SetParentFolderId(const std::string& _parentFolderId);

                    /**
                     * 判断参数 ParentFolderId 是否已赋值
                     * @return ParentFolderId 是否已赋值
                     * 
                     */
                    bool ParentFolderIdHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹名称
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 工作量ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务文件夹ID
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * 父文件夹ID
                     */
                    std::string m_parentFolderId;
                    bool m_parentFolderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKFOLDERREQUEST_H_
