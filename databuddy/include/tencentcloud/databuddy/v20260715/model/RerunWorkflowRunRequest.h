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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RERUNWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RERUNWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TaskSchedulingParameterBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * RerunWorkflowRun请求参数结构体
                */
                class RerunWorkflowRunRequest : public AbstractModel
                {
                public:
                    RerunWorkflowRunRequest();
                    ~RerunWorkflowRunRequest() = default;
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
                     * 获取<p>工作流运行ID，可通过 ListWorkflowRuns 获取。必填</p>
                     * @return WorkflowRunId <p>工作流运行ID，可通过 ListWorkflowRuns 获取。必填</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行ID，可通过 ListWorkflowRuns 获取。必填</p>
                     * @param _workflowRunId <p>工作流运行ID，可通过 ListWorkflowRuns 获取。必填</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取<p>运行类型。必填。取值：1 普通运行，2 高级运行</p>
                     * @return RunType <p>运行类型。必填。取值：1 普通运行，2 高级运行</p>
                     * 
                     */
                    int64_t GetRunType() const;

                    /**
                     * 设置<p>运行类型。必填。取值：1 普通运行，2 高级运行</p>
                     * @param _runType <p>运行类型。必填。取值：1 普通运行，2 高级运行</p>
                     * 
                     */
                    void SetRunType(const int64_t& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取<p>运行类型为高级运行时填写的自定义运行参数</p>
                     * @return AdvancedParams <p>运行类型为高级运行时填写的自定义运行参数</p>
                     * 
                     */
                    std::vector<TaskSchedulingParameterBrief> GetAdvancedParams() const;

                    /**
                     * 设置<p>运行类型为高级运行时填写的自定义运行参数</p>
                     * @param _advancedParams <p>运行类型为高级运行时填写的自定义运行参数</p>
                     * 
                     */
                    void SetAdvancedParams(const std::vector<TaskSchedulingParameterBrief>& _advancedParams);

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取<p>本次需要重跑指定的任务ID集合，可通过 ListWorkflowTasks 获取，不传默认重跑该工作流下所有任务</p>
                     * @return TaskIds <p>本次需要重跑指定的任务ID集合，可通过 ListWorkflowTasks 获取，不传默认重跑该工作流下所有任务</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>本次需要重跑指定的任务ID集合，可通过 ListWorkflowTasks 获取，不传默认重跑该工作流下所有任务</p>
                     * @param _taskIds <p>本次需要重跑指定的任务ID集合，可通过 ListWorkflowTasks 获取，不传默认重跑该工作流下所有任务</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

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
                     * <p>工作流运行ID，可通过 ListWorkflowRuns 获取。必填</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>运行类型。必填。取值：1 普通运行，2 高级运行</p>
                     */
                    int64_t m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * <p>运行类型为高级运行时填写的自定义运行参数</p>
                     */
                    std::vector<TaskSchedulingParameterBrief> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * <p>本次需要重跑指定的任务ID集合，可通过 ListWorkflowTasks 获取，不传默认重跑该工作流下所有任务</p>
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RERUNWORKFLOWRUNREQUEST_H_
