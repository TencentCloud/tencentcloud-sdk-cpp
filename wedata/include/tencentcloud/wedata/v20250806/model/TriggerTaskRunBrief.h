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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 工作流调度模式下的任务运行概要信息
                */
                class TriggerTaskRunBrief : public AbstractModel
                {
                public:
                    TriggerTaskRunBrief();
                    ~TriggerTaskRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionId <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionId <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionState <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置<p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionState <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionId <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionId <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionId(const std::string& _workflowExecutionId);

                    /**
                     * 判断参数 WorkflowExecutionId 是否已赋值
                     * @return WorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionId <p>任务版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置<p>任务版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionId <p>任务版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskVersionId(const std::string& _taskVersionId);

                    /**
                     * 判断参数 TaskVersionId 是否已赋值
                     * @return TaskVersionId 是否已赋值
                     * 
                     */
                    bool TaskVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>触发类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>等待时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime <p>等待时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置<p>等待时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime <p>等待时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitTime(const std::string& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>所属资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup <p>所属资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置<p>所属资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup <p>所属资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>运行账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserUin <p>运行账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置<p>运行账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserUin <p>运行账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteUserUin(const std::string& _executeUserUin);

                    /**
                     * 判断参数 ExecuteUserUin 是否已赋值
                     * @return ExecuteUserUin 是否已赋值
                     * 
                     */
                    bool ExecuteUserUinHasBeenSet() const;

                    /**
                     * 获取<p>创建人 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreaterUin <p>创建人 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreaterUin() const;

                    /**
                     * 设置<p>创建人 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createrUin <p>创建人 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreaterUin(const std::string& _createrUin);

                    /**
                     * 判断参数 CreaterUin 是否已赋值
                     * @return CreaterUin 是否已赋值
                     * 
                     */
                    bool CreaterUinHasBeenSet() const;

                    /**
                     * 获取<p>执行平台执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId <p>执行平台执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>执行平台执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId <p>执行平台执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTime <p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTime() const;

                    /**
                     * 设置<p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTime <p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTime(const std::string& _scheduleTime);

                    /**
                     * 判断参数 ScheduleTime 是否已赋值
                     * @return ScheduleTime 是否已赋值
                     * 
                     */
                    bool ScheduleTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>依赖任务完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFinishedTime <p>依赖任务完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置<p>依赖任务完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFinishedTime <p>依赖任务完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependenceFinishedTime(const std::string& _dependenceFinishedTime);

                    /**
                     * 判断参数 DependenceFinishedTime 是否已赋值
                     * @return DependenceFinishedTime 是否已赋值
                     * 
                     */
                    bool DependenceFinishedTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime <p>任务下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置<p>任务下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime <p>任务下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueStartTime(const std::string& _queueStartTime);

                    /**
                     * 判断参数 QueueStartTime 是否已赋值
                     * @return QueueStartTime 是否已赋值
                     * 
                     */
                    bool QueueStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始等待资源时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime <p>开始等待资源时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置<p>开始等待资源时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime <p>开始等待资源时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPendingStartTime(const std::string& _pendingStartTime);

                    /**
                     * 判断参数 PendingStartTime 是否已赋值
                     * @return PendingStartTime 是否已赋值
                     * 
                     */
                    bool PendingStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime <p>运行开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>运行开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime <p>运行开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime <p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime <p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>排队时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime <p>排队时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置<p>排队时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime <p>排队时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueCostTime(const std::string& _queueCostTime);

                    /**
                     * 判断参数 QueueCostTime 是否已赋值
                     * @return QueueCostTime 是否已赋值
                     * 
                     */
                    bool QueueCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTime <p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置<p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTime <p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取<p>总花费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllCostTime <p>总花费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllCostTime() const;

                    /**
                     * 设置<p>总花费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allCostTime <p>总花费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllCostTime(const std::string& _allCostTime);

                    /**
                     * 判断参数 AllCostTime 是否已赋值
                     * @return AllCostTime 是否已赋值
                     * 
                     */
                    bool AllCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeZone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>依赖上游任务 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList <p>依赖上游任务 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置<p>依赖上游任务 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList <p>依赖上游任务 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnList(const std::vector<std::string>& _dependOnList);

                    /**
                     * 判断参数 DependOnList 是否已赋值
                     * @return DependOnList 是否已赋值
                     * 
                     */
                    bool DependOnListHasBeenSet() const;

                    /**
                     * 获取<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取<p>任务扩展信息，包含脚本路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeExtensions <p>任务扩展信息，包含脚本路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeExtensions() const;

                    /**
                     * 设置<p>任务扩展信息，包含脚本路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeExtensions <p>任务扩展信息，包含脚本路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeExtensions(const std::string& _taskTypeExtensions);

                    /**
                     * 判断参数 TaskTypeExtensions 是否已赋值
                     * @return TaskTypeExtensions 是否已赋值
                     * 
                     */
                    bool TaskTypeExtensionsHasBeenSet() const;

                    /**
                     * 获取<p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryTimes <p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryTimes() const;

                    /**
                     * 设置<p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryTimes <p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryTimes(const uint64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取<p>左侧坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate <p>左侧坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置<p>左侧坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate <p>左侧坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeftCoordinate(const double& _leftCoordinate);

                    /**
                     * 判断参数 LeftCoordinate 是否已赋值
                     * @return LeftCoordinate 是否已赋值
                     * 
                     */
                    bool LeftCoordinateHasBeenSet() const;

                    /**
                     * 获取<p>顶部坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate <p>顶部坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置<p>顶部坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate <p>顶部坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopCoordinate(const double& _topCoordinate);

                    /**
                     * 判断参数 TopCoordinate 是否已赋值
                     * @return TopCoordinate 是否已赋值
                     * 
                     */
                    bool TopCoordinateHasBeenSet() const;

                    /**
                     * 获取<p>资源组 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>资源组 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>资源组 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>错误码描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeStr <p>错误码描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置<p>错误码描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeStr <p>错误码描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodeStr(const std::string& _errorCodeStr);

                    /**
                     * 判断参数 ErrorCodeStr 是否已赋值
                     * @return ErrorCodeStr 是否已赋值
                     * 
                     */
                    bool ErrorCodeStrHasBeenSet() const;

                    /**
                     * 获取<p>创建人 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin <p>创建人 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置<p>创建人 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin <p>创建人 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取<p>下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueTime <p>下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置<p>下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issueTime <p>下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssueTime(const std::string& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName <p>工作流名称</p>
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
                     * 获取<p>运行人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserName <p>运行人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置<p>运行人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserName <p>运行人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteUserName(const std::string& _executeUserName);

                    /**
                     * 判断参数 ExecuteUserName 是否已赋值
                     * @return ExecuteUserName 是否已赋值
                     * 
                     */
                    bool ExecuteUserNameHasBeenSet() const;

                    /**
                     * 获取<p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerunTimes <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRerunTimes() const;

                    /**
                     * 设置<p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerunTimes <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerunTimes(const uint64_t& _rerunTimes);

                    /**
                     * 判断参数 RerunTimes 是否已赋值
                     * @return RerunTimes 是否已赋值
                     * 
                     */
                    bool RerunTimesHasBeenSet() const;

                    /**
                     * 获取<p>是否是最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatestExecution <p>是否是最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLatestExecution() const;

                    /**
                     * 设置<p>是否是最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatestExecution <p>是否是最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLatestExecution(const bool& _isLatestExecution);

                    /**
                     * 判断参数 IsLatestExecution 是否已赋值
                     * @return IsLatestExecution 是否已赋值
                     * 
                     */
                    bool IsLatestExecutionHasBeenSet() const;

                    /**
                     * 获取<p>任务运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExecutionState <p>任务运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExecutionState() const;

                    /**
                     * 设置<p>任务运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExecutionState <p>任务运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExecutionState(const std::string& _taskExecutionState);

                    /**
                     * 判断参数 TaskExecutionState 是否已赋值
                     * @return TaskExecutionState 是否已赋值
                     * 
                     */
                    bool TaskExecutionStateHasBeenSet() const;

                    /**
                     * 获取<p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置<p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserNameInCharge <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserNameInCharge() const;

                    /**
                     * 设置<p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userNameInCharge <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserNameInCharge(const std::string& _userNameInCharge);

                    /**
                     * 判断参数 UserNameInCharge 是否已赋值
                     * @return UserNameInCharge 是否已赋值
                     * 
                     */
                    bool UserNameInChargeHasBeenSet() const;

                    /**
                     * 获取<p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUinInCharge <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置<p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUinInCharge <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUinInCharge(const std::string& _userUinInCharge);

                    /**
                     * 判断参数 UserUinInCharge 是否已赋值
                     * @return UserUinInCharge 是否已赋值
                     * 
                     */
                    bool UserUinInChargeHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timezone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timezone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimezone(const std::string& _timezone);

                    /**
                     * 判断参数 Timezone 是否已赋值
                     * @return Timezone 是否已赋值
                     * 
                     */
                    bool TimezoneHasBeenSet() const;

                    /**
                     * 获取<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId <p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId <p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams <p>工作流运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置<p>工作流运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams <p>工作流运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowParams(const std::string& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportRerun <p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置<p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportRerun <p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportRerun(const bool& _supportRerun);

                    /**
                     * 判断参数 SupportRerun 是否已赋值
                     * @return SupportRerun 是否已赋值
                     * 
                     */
                    bool SupportRerunHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionState <p>工作流运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowExecutionState() const;

                    /**
                     * 设置<p>工作流运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionState <p>工作流运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionState(const std::string& _workflowExecutionState);

                    /**
                     * 判断参数 WorkflowExecutionState 是否已赋值
                     * @return WorkflowExecutionState 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionStateHasBeenSet() const;

                    /**
                     * 获取<p>任务执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionResult <p>任务执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionResult() const;

                    /**
                     * 设置<p>任务执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionResult <p>任务执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionResult(const std::string& _executionResult);

                    /**
                     * 判断参数 ExecutionResult 是否已赋值
                     * @return ExecutionResult 是否已赋值
                     * 
                     */
                    bool ExecutionResultHasBeenSet() const;

                    /**
                     * 获取<p>依赖策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTriggerPolicy <p>依赖策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTriggerPolicy() const;

                    /**
                     * 设置<p>依赖策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTriggerPolicy <p>依赖策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTriggerPolicy(const std::string& _dependencyTriggerPolicy);

                    /**
                     * 判断参数 DependencyTriggerPolicy 是否已赋值
                     * @return DependencyTriggerPolicy 是否已赋值
                     * 
                     */
                    bool DependencyTriggerPolicyHasBeenSet() const;

                    /**
                     * 获取<p>关联实体是否存在，true表示任务/工作流等实体存在，false表示实体已被删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedEntityExist <p>关联实体是否存在，true表示任务/工作流等实体存在，false表示实体已被删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAssociatedEntityExist() const;

                    /**
                     * 设置<p>关联实体是否存在，true表示任务/工作流等实体存在，false表示实体已被删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedEntityExist <p>关联实体是否存在，true表示任务/工作流等实体存在，false表示实体已被删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociatedEntityExist(const bool& _associatedEntityExist);

                    /**
                     * 判断参数 AssociatedEntityExist 是否已赋值
                     * @return AssociatedEntityExist 是否已赋值
                     * 
                     */
                    bool AssociatedEntityExistHasBeenSet() const;

                    /**
                     * 获取<p>调度执行类型</p><p>枚举值：</p><ul><li>0： 正常调度</li><li>1： 空跑调度</li><li>2： 用户驱动，手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType <p>调度执行类型</p><p>枚举值：</p><ul><li>0： 正常调度</li><li>1： 空跑调度</li><li>2： 用户驱动，手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleRunType() const;

                    /**
                     * 设置<p>调度执行类型</p><p>枚举值：</p><ul><li>0： 正常调度</li><li>1： 空跑调度</li><li>2： 用户驱动，手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType <p>调度执行类型</p><p>枚举值：</p><ul><li>0： 正常调度</li><li>1： 空跑调度</li><li>2： 用户驱动，手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleRunType(const std::string& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取<p>权限</p><p>枚举值：</p><ul><li>CAN_MANAGE： 可管理</li><li>CAN_VIEW： 可见</li><li>NO_PERMISSION： 无权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege <p>权限</p><p>枚举值：</p><ul><li>CAN_MANAGE： 可管理</li><li>CAN_VIEW： 可见</li><li>NO_PERMISSION： 无权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>权限</p><p>枚举值：</p><ul><li>CAN_MANAGE： 可管理</li><li>CAN_VIEW： 可见</li><li>NO_PERMISSION： 无权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilege <p>权限</p><p>枚举值：</p><ul><li>CAN_MANAGE： 可管理</li><li>CAN_VIEW： 可见</li><li>NO_PERMISSION： 无权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * <p>任务 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * <p>触发类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>等待时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * <p>所属资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>运行账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * <p>创建人 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createrUin;
                    bool m_createrUinHasBeenSet;

                    /**
                     * <p>执行平台执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>创建时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTime;
                    bool m_scheduleTimeHasBeenSet;

                    /**
                     * <p>更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>依赖任务完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * <p>任务下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * <p>开始等待资源时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * <p>运行开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>排队时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * <p>运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * <p>总花费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allCostTime;
                    bool m_allCostTimeHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>依赖上游任务 ID 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * <p>任务扩展信息，包含脚本路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeExtensions;
                    bool m_taskTypeExtensionsHasBeenSet;

                    /**
                     * <p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * <p>左侧坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * <p>顶部坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>资源组 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>错误码描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * <p>创建人 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * <p>下发执行平台时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>运行人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>是否是最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLatestExecution;
                    bool m_isLatestExecutionHasBeenSet;

                    /**
                     * <p>任务运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExecutionState;
                    bool m_taskExecutionStateHasBeenSet;

                    /**
                     * <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>责任人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userNameInCharge;
                    bool m_userNameInChargeHasBeenSet;

                    /**
                     * <p>责任人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                    /**
                     * <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>工作流运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * <p>工作流运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowExecutionState;
                    bool m_workflowExecutionStateHasBeenSet;

                    /**
                     * <p>任务执行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionResult;
                    bool m_executionResultHasBeenSet;

                    /**
                     * <p>依赖策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTriggerPolicy;
                    bool m_dependencyTriggerPolicyHasBeenSet;

                    /**
                     * <p>关联实体是否存在，true表示任务/工作流等实体存在，false表示实体已被删除</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_associatedEntityExist;
                    bool m_associatedEntityExistHasBeenSet;

                    /**
                     * <p>调度执行类型</p><p>枚举值：</p><ul><li>0： 正常调度</li><li>1： 空跑调度</li><li>2： 用户驱动，手动触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>权限</p><p>枚举值：</p><ul><li>CAN_MANAGE： 可管理</li><li>CAN_VIEW： 可见</li><li>NO_PERMISSION： 无权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_
