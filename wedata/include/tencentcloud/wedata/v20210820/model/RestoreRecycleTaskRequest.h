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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RESTORERECYCLETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RESTORERECYCLETASKREQUEST_H_

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
                * RestoreRecycleTask请求参数结构体
                */
                class RestoreRecycleTaskRequest : public AbstractModel
                {
                public:
                    RestoreRecycleTaskRequest();
                    ~RestoreRecycleTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取产品名称
DATA_DEV、DATA_QUALITY
                     * @return ProductName 产品名称
DATA_DEV、DATA_QUALITY
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
DATA_DEV、DATA_QUALITY
                     * @param _productName 产品名称
DATA_DEV、DATA_QUALITY
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取文件路径
                     * @return FileRemotePath 文件路径
                     * 
                     */
                    std::string GetFileRemotePath() const;

                    /**
                     * 设置文件路径
                     * @param _fileRemotePath 文件路径
                     * 
                     */
                    void SetFileRemotePath(const std::string& _fileRemotePath);

                    /**
                     * 判断参数 FileRemotePath 是否已赋值
                     * @return FileRemotePath 是否已赋值
                     * 
                     */
                    bool FileRemotePathHasBeenSet() const;

                    /**
                     * 获取是否虚拟任务
                     * @return VirtualFlag 是否虚拟任务
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置是否虚拟任务
                     * @param _virtualFlag 是否虚拟任务
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取虚拟任务id
                     * @return VirtualTaskId 虚拟任务id
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置虚拟任务id
                     * @param _virtualTaskId 虚拟任务id
                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 产品名称
DATA_DEV、DATA_QUALITY
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_fileRemotePath;
                    bool m_fileRemotePathHasBeenSet;

                    /**
                     * 是否虚拟任务
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * 虚拟任务id
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RESTORERECYCLETASKREQUEST_H_
