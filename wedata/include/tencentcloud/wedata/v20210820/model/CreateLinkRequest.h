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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATELINKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATELINKREQUEST_H_

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
                * CreateLink请求参数结构体
                */
                class CreateLinkRequest : public AbstractModel
                {
                public:
                    CreateLinkRequest();
                    ~CreateLinkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前项目id
                     * @return ProjectId 当前项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置当前项目id
                     * @param _projectId 当前项目id
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
                     * 获取边的源节点
                     * @return TaskFrom 边的源节点
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置边的源节点
                     * @param _taskFrom 边的源节点
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取边的目标节点
                     * @return TaskTo 边的目标节点
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置边的目标节点
                     * @param _taskTo 边的目标节点
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取当前工作流id
                     * @return WorkflowId 当前工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置当前工作流id
                     * @param _workflowId 当前工作流id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * 当前项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 边的源节点
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * 边的目标节点
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * 当前工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATELINKREQUEST_H_
