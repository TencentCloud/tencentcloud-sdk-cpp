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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflow请求参数结构体
                */
                class GetWorkflowRequest : public AbstractModel
                {
                public:
                    GetWorkflowRequest();
                    ~GetWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @return WorkspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @param _workspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * @return WorkflowId <p>工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * @param _workflowId <p>工作流ID，可通过 ListWorkflows 获取。必填</p>
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
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>工作流ID，可通过 ListWorkflows 获取。必填</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWREQUEST_H_
