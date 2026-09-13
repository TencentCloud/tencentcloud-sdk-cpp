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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 单个操作项的执行结果。 由 RunWorkflow / RerunWorkflowRun / KillWorkflowRun 共用： RunWorkflow—— WorkflowId / WorkflowName 有值，WorkflowRunId 为空 RerunWorkflowRun —— WorkflowId / WorkflowName / WorkflowRunId 均有值 KillWorkflowRun  —— WorkflowId / WorkflowName / WorkflowRunId 均有值
                */
                class RunActionBrief : public AbstractModel
                {
                public:
                    RunActionBrief();
                    ~RunActionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取操作动作ID，用于追踪具体的执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunActionId 操作动作ID，用于追踪具体的执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunActionId() const;

                    /**
                     * 设置操作动作ID，用于追踪具体的执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runActionId 操作动作ID，用于追踪具体的执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunActionId(const std::string& _runActionId);

                    /**
                     * 判断参数 RunActionId 是否已赋值
                     * @return RunActionId 是否已赋值
                     * 
                     */
                    bool RunActionIdHasBeenSet() const;

                    /**
                     * 获取失败错误信息，操作失败时返回具体的错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 失败错误信息，操作失败时返回具体的错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置失败错误信息，操作失败时返回具体的错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 失败错误信息，操作失败时返回具体的错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取操作状态，true 表示成功，false 表示失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpStatus 操作状态，true 表示成功，false 表示失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOpStatus() const;

                    /**
                     * 设置操作状态，true 表示成功，false 表示失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _opStatus 操作状态，true 表示成功，false 表示失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpStatus(const bool& _opStatus);

                    /**
                     * 判断参数 OpStatus 是否已赋值
                     * @return OpStatus 是否已赋值
                     * 
                     */
                    bool OpStatusHasBeenSet() const;

                    /**
                     * 获取工作流运行ID。重跑 / 终止场景返回被操作的运行ID；运行工作流场景为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunId 工作流运行ID。重跑 / 终止场景返回被操作的运行ID；运行工作流场景为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行ID。重跑 / 终止场景返回被操作的运行ID；运行工作流场景为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId 工作流运行ID。重跑 / 终止场景返回被操作的运行ID；运行工作流场景为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                private:

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 操作动作ID，用于追踪具体的执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runActionId;
                    bool m_runActionIdHasBeenSet;

                    /**
                     * 失败错误信息，操作失败时返回具体的错误描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 操作状态，true 表示成功，false 表示失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_opStatus;
                    bool m_opStatusHasBeenSet;

                    /**
                     * 工作流运行ID。重跑 / 终止场景返回被操作的运行ID；运行工作流场景为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_
