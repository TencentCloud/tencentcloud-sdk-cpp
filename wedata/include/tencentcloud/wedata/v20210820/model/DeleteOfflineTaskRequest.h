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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_

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
                * DeleteOfflineTask请求参数结构体
                */
                class DeleteOfflineTaskRequest : public AbstractModel
                {
                public:
                    DeleteOfflineTaskRequest();
                    ~DeleteOfflineTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作者name
                     * @return OperatorName 操作者name
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作者name
                     * @param _operatorName 操作者name
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取项目/工作空间id
                     * @return ProjectId 项目/工作空间id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目/工作空间id
                     * @param _projectId 项目/工作空间id
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
                     * 获取虚拟任务标记(跟之前调度接口保持一致默认false)
                     * @return VirtualFlag 虚拟任务标记(跟之前调度接口保持一致默认false)
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置虚拟任务标记(跟之前调度接口保持一致默认false)
                     * @param _virtualFlag 虚拟任务标记(跟之前调度接口保持一致默认false)
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                private:

                    /**
                     * 操作者name
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 项目/工作空间id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 虚拟任务标记(跟之前调度接口保持一致默认false)
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_
