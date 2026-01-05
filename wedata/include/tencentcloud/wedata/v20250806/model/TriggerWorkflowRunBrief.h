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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_

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
                * 工作流运行概要信息
                */
                class TriggerWorkflowRunBrief : public AbstractModel
                {
                public:
                    TriggerWorkflowRunBrief();
                    ~TriggerWorkflowRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * @return ExecutionId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionId 工作流运行ID
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
                     * 获取触发器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId 触发器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置触发器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId 触发器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event
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
                     * 获取工作流触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 工作流触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置工作流触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 工作流触发时间
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
                     * 获取执行开始时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 执行开始时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行开始时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 执行开始时间戳
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
                     * 获取执行结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 执行结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 执行结束时间戳
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
                     * 获取运行时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionCostTime 运行时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionCostTime() const;

                    /**
                     * 设置运行时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionCostTime 运行时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionCostTime(const std::string& _executionCostTime);

                    /**
                     * 判断参数 ExecutionCostTime 是否已赋值
                     * @return ExecutionCostTime 是否已赋值
                     * 
                     */
                    bool ExecutionCostTimeHasBeenSet() const;

                    /**
                     * 获取并发排队花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime 并发排队花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置并发排队花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime 并发排队花费时间，单位秒
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
                     * 获取等待资源花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingCostTime 等待资源花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置等待资源花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingCostTime 等待资源花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPendingCostTime(const std::string& _pendingCostTime);

                    /**
                     * 判断参数 PendingCostTime 是否已赋值
                     * @return PendingCostTime 是否已赋值
                     * 
                     */
                    bool PendingCostTimeHasBeenSet() const;

                    /**
                     * 获取执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionState 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionState 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING
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
                     * 获取运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserUin 运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserUin 运行用户UIN
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
                     * 获取运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserName 运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserName 运行用户名称
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
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeStr 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeStr 错误码
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
                     * 获取运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams 运行参数
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
                     * 获取工作流版本信息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowVersionId 工作流版本信息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置工作流版本信息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowVersionId 工作流版本信息ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowVersionId(const std::string& _workflowVersionId);

                    /**
                     * 判断参数 WorkflowVersionId 是否已赋值
                     * @return WorkflowVersionId 是否已赋值
                     * 
                     */
                    bool WorkflowVersionIdHasBeenSet() const;

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
                     * 获取运行的任务范围,逗号分隔的任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedTaskIds 运行的任务范围,逗号分隔的任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置运行的任务范围,逗号分隔的任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectedTaskIds 运行的任务范围,逗号分隔的任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelectedTaskIds(const std::vector<std::string>& _selectedTaskIds);

                    /**
                     * 判断参数 SelectedTaskIds 是否已赋值
                     * @return SelectedTaskIds 是否已赋值
                     * 
                     */
                    bool SelectedTaskIdsHasBeenSet() const;

                    /**
                     * 获取等待并发开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime 等待并发开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置等待并发开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime 等待并发开始时间
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
                     * 获取排队等待开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime 排队等待开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置排队等待开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime 排队等待开始时间
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
                     * 获取运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId 文件夹ID
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
                     * 获取计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlannedSchedulingTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlannedSchedulingTime() const;

                    /**
                     * 设置计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plannedSchedulingTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlannedSchedulingTime(const std::string& _plannedSchedulingTime);

                    /**
                     * 判断参数 PlannedSchedulingTime 是否已赋值
                     * @return PlannedSchedulingTime 是否已赋值
                     * 
                     */
                    bool PlannedSchedulingTimeHasBeenSet() const;

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
                     * 获取责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUinInCharge 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUinInCharge 责任人ID
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

                private:

                    /**
                     * 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

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
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 触发器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * 触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 工作流触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 执行开始时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 运行时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionCostTime;
                    bool m_executionCostTimeHasBeenSet;

                    /**
                     * 并发排队花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * 等待资源花费时间，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * 执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * 运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * 运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 工作流版本信息ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * 是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * 运行的任务范围,逗号分隔的任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * 等待并发开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * 排队等待开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件夹ID
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
                     * 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plannedSchedulingTime;
                    bool m_plannedSchedulingTimeHasBeenSet;

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
                     * 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_
