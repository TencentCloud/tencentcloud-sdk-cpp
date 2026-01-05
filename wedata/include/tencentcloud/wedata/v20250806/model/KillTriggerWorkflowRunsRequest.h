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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_

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
                * KillTriggerWorkflowRuns请求参数结构体
                */
                class KillTriggerWorkflowRunsRequest : public AbstractModel
                {
                public:
                    KillTriggerWorkflowRunsRequest();
                    ~KillTriggerWorkflowRunsRequest() = default;
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
                     * 获取指定要停止的工作流执行ID
                     * @return WorkflowExecutionIdList 指定要停止的工作流执行ID
                     * 
                     */
                    std::vector<std::string> GetWorkflowExecutionIdList() const;

                    /**
                     * 设置指定要停止的工作流执行ID
                     * @param _workflowExecutionIdList 指定要停止的工作流执行ID
                     * 
                     */
                    void SetWorkflowExecutionIdList(const std::vector<std::string>& _workflowExecutionIdList);

                    /**
                     * 判断参数 WorkflowExecutionIdList 是否已赋值
                     * @return WorkflowExecutionIdList 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdListHasBeenSet() const;

                    /**
                     * 获取当指定的工作流运行为空时，是否全部终止正在运行的工作流执行	
                     * @return All 当指定的工作流运行为空时，是否全部终止正在运行的工作流执行	
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置当指定的工作流运行为空时，是否全部终止正在运行的工作流执行	
                     * @param _all 当指定的工作流运行为空时，是否全部终止正在运行的工作流执行	
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取当指定的工作流运行为空时，是否仅停止等待中的工作流运行
                     * @return Pending 当指定的工作流运行为空时，是否仅停止等待中的工作流运行
                     * 
                     */
                    bool GetPending() const;

                    /**
                     * 设置当指定的工作流运行为空时，是否仅停止等待中的工作流运行
                     * @param _pending 当指定的工作流运行为空时，是否仅停止等待中的工作流运行
                     * 
                     */
                    void SetPending(const bool& _pending);

                    /**
                     * 判断参数 Pending 是否已赋值
                     * @return Pending 是否已赋值
                     * 
                     */
                    bool PendingHasBeenSet() const;

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
                     * 指定要停止的工作流执行ID
                     */
                    std::vector<std::string> m_workflowExecutionIdList;
                    bool m_workflowExecutionIdListHasBeenSet;

                    /**
                     * 当指定的工作流运行为空时，是否全部终止正在运行的工作流执行	
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 当指定的工作流运行为空时，是否仅停止等待中的工作流运行
                     */
                    bool m_pending;
                    bool m_pendingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSREQUEST_H_
