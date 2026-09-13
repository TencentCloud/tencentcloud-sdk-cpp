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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunListOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflowTaskRun请求参数结构体
                */
                class GetWorkflowTaskRunRequest : public AbstractModel
                {
                public:
                    GetWorkflowTaskRunRequest();
                    ~GetWorkflowTaskRunRequest() = default;
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
                     * 获取<p>任务运行ID，可通过 ListWorkflowTaskRuns 获取。必填</p>
                     * @return WorkflowTaskRunId <p>任务运行ID，可通过 ListWorkflowTaskRuns 获取。必填</p>
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>任务运行ID，可通过 ListWorkflowTaskRuns 获取。必填</p>
                     * @param _workflowTaskRunId <p>任务运行ID，可通过 ListWorkflowTaskRuns 获取。必填</p>
                     * 
                     */
                    void SetWorkflowTaskRunId(const std::string& _workflowTaskRunId);

                    /**
                     * 判断参数 WorkflowTaskRunId 是否已赋值
                     * @return WorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool WorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取<p>内嵌工作流任务运行列表选项（仅限 FOR_EACH 任务使用）。非必填</p>
                     * @return InnerWorkflowTaskRunListOption <p>内嵌工作流任务运行列表选项（仅限 FOR_EACH 任务使用）。非必填</p>
                     * 
                     */
                    InnerWorkflowTaskRunListOption GetInnerWorkflowTaskRunListOption() const;

                    /**
                     * 设置<p>内嵌工作流任务运行列表选项（仅限 FOR_EACH 任务使用）。非必填</p>
                     * @param _innerWorkflowTaskRunListOption <p>内嵌工作流任务运行列表选项（仅限 FOR_EACH 任务使用）。非必填</p>
                     * 
                     */
                    void SetInnerWorkflowTaskRunListOption(const InnerWorkflowTaskRunListOption& _innerWorkflowTaskRunListOption);

                    /**
                     * 判断参数 InnerWorkflowTaskRunListOption 是否已赋值
                     * @return InnerWorkflowTaskRunListOption 是否已赋值
                     * 
                     */
                    bool InnerWorkflowTaskRunListOptionHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>任务运行ID，可通过 ListWorkflowTaskRuns 获取。必填</p>
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>内嵌工作流任务运行列表选项（仅限 FOR_EACH 任务使用）。非必填</p>
                     */
                    InnerWorkflowTaskRunListOption m_innerWorkflowTaskRunListOption;
                    bool m_innerWorkflowTaskRunListOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNREQUEST_H_
