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
                     * 获取任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionId 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionId 任务运行ID
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
                     * 获取执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionState 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionState 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING
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
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
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
                     * 获取工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionId 工作流运行ID
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
                     * 获取任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务 ID
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
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
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
                     * 获取任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionId 任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionId 任务版本
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
                     * 获取触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发类型
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
                     * 获取等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime 等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime 等待时长，单位秒
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
                     * 获取所属资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup 所属资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置所属资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup 所属资源组
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
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode 错误码
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
                     * 获取运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserUin 运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserUin 运行账号
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
                     * 获取创建人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreaterUin 创建人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreaterUin() const;

                    /**
                     * 设置创建人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createrUin 创建人 ID
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
                     * 获取执行平台执行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 执行平台执行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置执行平台执行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 执行平台执行 ID
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
                     * 获取创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间戳
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
                     * 获取更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间戳
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
                     * 获取依赖任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFinishedTime 依赖任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置依赖任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFinishedTime 依赖任务完成时间
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
                     * 获取任务下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime 任务下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置任务下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime 任务下发执行平台时间
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
                     * 获取开始等待资源时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime 开始等待资源时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置开始等待资源时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime 开始等待资源时间
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
                     * 获取运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 运行开始时间
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
                     * 获取运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 运行结束时间
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
                     * 获取排队时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime 排队时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置排队时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime 排队时间
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
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTime 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTime 运行时间
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
                     * 获取总花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllCostTime 总花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllCostTime() const;

                    /**
                     * 设置总花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allCostTime 总花费时间
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
                     * 获取时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeZone 时区
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
                     * 获取依赖上游任务 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList 依赖上游任务 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置依赖上游任务 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList 依赖上游任务 ID 列表
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
                     * 获取运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunParams 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runParams 运行参数
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
                     * 获取任务扩展信息，包含脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeExtensions 任务扩展信息，包含脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeExtensions() const;

                    /**
                     * 设置任务扩展信息，包含脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeExtensions 任务扩展信息，包含脚本路径
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
                     * 获取重试次数，为 0 则表示首次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryTimes 重试次数，为 0 则表示首次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryTimes() const;

                    /**
                     * 设置重试次数，为 0 则表示首次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryTimes 重试次数，为 0 则表示首次运行
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
                     * 获取左侧坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate 左侧坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置左侧坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate 左侧坐标
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
                     * 获取顶部坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate 顶部坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置顶部坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate 顶部坐标
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
                     * 获取资源组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 资源组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 资源组 ID
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
                     * 获取错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeStr 错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeStr 错误码描述
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
                     * 获取创建人 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建人 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置创建人 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUin 创建人 UIN
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
                     * 获取下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueTime 下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issueTime 下发执行平台时间
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
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
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
                     * 获取运行人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserName 运行人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置运行人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserName 运行人名称
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
                     * 获取重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerunTimes 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRerunTimes() const;

                    /**
                     * 设置重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerunTimes 重跑次数
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
                     * 获取是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatestExecution 是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLatestExecution() const;

                    /**
                     * 设置是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatestExecution 是否是最新一次运行
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
                     * 获取任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExecutionState 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExecutionState() const;

                    /**
                     * 设置任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExecutionState 任务运行状态
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
                     * 获取周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 周期类型
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
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserNameInCharge 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserNameInCharge() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userNameInCharge 责任人名称
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
                     * 获取责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUinInCharge 责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUinInCharge 责任人id
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
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 资源组名称
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
                     * 获取时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timezone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimezone() const;

                    /**
                     * 设置时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timezone 时区
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
                     * 获取文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId 文件夹id
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
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName 文件夹名称
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
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
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
                     * 获取任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId 任务类型id
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
                     * 获取工作流运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams 工作流运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置工作流运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams 工作流运行参数
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
                     * 获取是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportRerun 是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportRerun 是否支持重跑
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
                     * 获取工作流运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionState 工作流运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowExecutionState() const;

                    /**
                     * 设置工作流运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionState 工作流运行状态
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
                     * 获取任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionResult 任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionResult() const;

                    /**
                     * 设置任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionResult 任务执行结果
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

                private:

                    /**
                     * 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIP、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * 所属资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * 创建人 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createrUin;
                    bool m_createrUinHasBeenSet;

                    /**
                     * 执行平台执行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 创建时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 依赖任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * 任务下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * 开始等待资源时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 排队时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 总花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allCostTime;
                    bool m_allCostTimeHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 依赖上游任务 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * 任务扩展信息，包含脚本路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeExtensions;
                    bool m_taskTypeExtensionsHasBeenSet;

                    /**
                     * 重试次数，为 0 则表示首次运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * 左侧坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * 顶部坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * 资源组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * 创建人 UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 下发执行平台时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 运行人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * 是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLatestExecution;
                    bool m_isLatestExecutionHasBeenSet;

                    /**
                     * 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExecutionState;
                    bool m_taskExecutionStateHasBeenSet;

                    /**
                     * 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userNameInCharge;
                    bool m_userNameInChargeHasBeenSet;

                    /**
                     * 责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timezone;
                    bool m_timezoneHasBeenSet;

                    /**
                     * 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 工作流运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * 工作流运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowExecutionState;
                    bool m_workflowExecutionStateHasBeenSet;

                    /**
                     * 任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionResult;
                    bool m_executionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKRUNBRIEF_H_
