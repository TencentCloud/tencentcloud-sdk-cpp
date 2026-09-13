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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_

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
                * KillWorkflowRun请求参数结构体
                */
                class KillWorkflowRunRequest : public AbstractModel
                {
                public:
                    KillWorkflowRunRequest();
                    ~KillWorkflowRunRequest() = default;
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

                    /**
                     * 获取<p>待终止的工作流运行ID列表，可通过 ListWorkflowRuns 获取</p>
                     * @return WorkflowRunIds <p>待终止的工作流运行ID列表，可通过 ListWorkflowRuns 获取</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowRunIds() const;

                    /**
                     * 设置<p>待终止的工作流运行ID列表，可通过 ListWorkflowRuns 获取</p>
                     * @param _workflowRunIds <p>待终止的工作流运行ID列表，可通过 ListWorkflowRuns 获取</p>
                     * 
                     */
                    void SetWorkflowRunIds(const std::vector<std::string>& _workflowRunIds);

                    /**
                     * 判断参数 WorkflowRunIds 是否已赋值
                     * @return WorkflowRunIds 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否终止该工作流下所有未进入终态的运行。非必填，默认 false</p>
                     * @return KillAllRuns <p>是否终止该工作流下所有未进入终态的运行。非必填，默认 false</p>
                     * 
                     */
                    bool GetKillAllRuns() const;

                    /**
                     * 设置<p>是否终止该工作流下所有未进入终态的运行。非必填，默认 false</p>
                     * @param _killAllRuns <p>是否终止该工作流下所有未进入终态的运行。非必填，默认 false</p>
                     * 
                     */
                    void SetKillAllRuns(const bool& _killAllRuns);

                    /**
                     * 判断参数 KillAllRuns 是否已赋值
                     * @return KillAllRuns 是否已赋值
                     * 
                     */
                    bool KillAllRunsHasBeenSet() const;

                    /**
                     * 获取<p>是否只终止处于等待中（Pending）状态的运行。非必填，默认 false</p>
                     * @return OnlyKillPendingRuns <p>是否只终止处于等待中（Pending）状态的运行。非必填，默认 false</p>
                     * 
                     */
                    bool GetOnlyKillPendingRuns() const;

                    /**
                     * 设置<p>是否只终止处于等待中（Pending）状态的运行。非必填，默认 false</p>
                     * @param _onlyKillPendingRuns <p>是否只终止处于等待中（Pending）状态的运行。非必填，默认 false</p>
                     * 
                     */
                    void SetOnlyKillPendingRuns(const bool& _onlyKillPendingRuns);

                    /**
                     * 判断参数 OnlyKillPendingRuns 是否已赋值
                     * @return OnlyKillPendingRuns 是否已赋值
                     * 
                     */
                    bool OnlyKillPendingRunsHasBeenSet() const;

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

                    /**
                     * <p>待终止的工作流运行ID列表，可通过 ListWorkflowRuns 获取</p>
                     */
                    std::vector<std::string> m_workflowRunIds;
                    bool m_workflowRunIdsHasBeenSet;

                    /**
                     * <p>是否终止该工作流下所有未进入终态的运行。非必填，默认 false</p>
                     */
                    bool m_killAllRuns;
                    bool m_killAllRunsHasBeenSet;

                    /**
                     * <p>是否只终止处于等待中（Pending）状态的运行。非必填，默认 false</p>
                     */
                    bool m_onlyKillPendingRuns;
                    bool m_onlyKillPendingRunsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_KILLWORKFLOWRUNREQUEST_H_
