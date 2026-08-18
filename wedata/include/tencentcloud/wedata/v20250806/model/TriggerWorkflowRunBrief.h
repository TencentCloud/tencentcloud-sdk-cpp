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
                     * 获取<p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>用户AppId</p>
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
                     * @return ExecutionId <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionId <p>工作流运行ID</p>
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
                     * 获取<p>触发器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId <p>触发器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>触发器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId <p>触发器ID</p>
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
                     * 获取<p>触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event</p>
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
                     * 获取<p>工作流触发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>工作流触发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>工作流触发时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>工作流触发时间</p>
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
                     * 获取<p>执行开始时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime <p>执行开始时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行开始时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime <p>执行开始时间戳</p>
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
                     * 获取<p>执行结束时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime <p>执行结束时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行结束时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime <p>执行结束时间戳</p>
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
                     * 获取<p>运行时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionCostTime <p>运行时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionCostTime() const;

                    /**
                     * 设置<p>运行时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionCostTime <p>运行时长，单位秒</p>
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
                     * 获取<p>并发排队花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime <p>并发排队花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置<p>并发排队花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime <p>并发排队花费时间，单位秒</p>
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
                     * 获取<p>等待资源花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingCostTime <p>等待资源花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置<p>等待资源花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingCostTime <p>等待资源花费时间，单位秒</p>
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
                     * 获取<p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionState <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置<p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionState <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING</p>
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
                     * 获取<p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserUin <p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置<p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserUin <p>运行用户UIN</p>
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
                     * 获取<p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserName <p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserName() const;

                    /**
                     * 设置<p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserName <p>运行用户名称</p>
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
                     * 获取<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeStr <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeStr <p>错误码</p>
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
                     * 获取<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams <p>运行参数</p>
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
                     * 获取<p>工作流版本信息ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowVersionId <p>工作流版本信息ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置<p>工作流版本信息ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowVersionId <p>工作流版本信息ID</p>
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
                     * 获取<p>运行的任务范围,逗号分隔的任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedTaskIds <p>运行的任务范围,逗号分隔的任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置<p>运行的任务范围,逗号分隔的任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectedTaskIds <p>运行的任务范围,逗号分隔的任务ID列表</p>
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
                     * 获取<p>等待并发开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime <p>等待并发开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置<p>等待并发开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime <p>等待并发开始时间</p>
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
                     * 获取<p>排队等待开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime <p>排队等待开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置<p>排队等待开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime <p>排队等待开始时间</p>
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
                     * 获取<p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>运行结束时间</p>
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
                     * 获取<p>文件夹ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId <p>文件夹ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>文件夹ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId <p>文件夹ID</p>
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
                     * 获取<p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlannedSchedulingTime <p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlannedSchedulingTime() const;

                    /**
                     * 设置<p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plannedSchedulingTime <p>计划调度时间</p>
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
                     * 获取<p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUinInCharge <p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUinInCharge() const;

                    /**
                     * 设置<p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUinInCharge <p>责任人ID</p>
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
                     * 获取<p>关联实体是否存在</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedEntityExist <p>关联实体是否存在</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAssociatedEntityExist() const;

                    /**
                     * 设置<p>关联实体是否存在</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedEntityExist <p>关联实体是否存在</p>
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
                     * 获取<p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowExecutionId <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowExecutionId() const;

                    /**
                     * 设置<p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowExecutionId <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentWorkflowExecutionId(const std::string& _parentWorkflowExecutionId);

                    /**
                     * 判断参数 ParentWorkflowExecutionId 是否已赋值
                     * @return ParentWorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool ParentWorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>父任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTaskExecutionId <p>父任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentTaskExecutionId() const;

                    /**
                     * 设置<p>父任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTaskExecutionId <p>父任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTaskExecutionId(const std::string& _parentTaskExecutionId);

                    /**
                     * 判断参数 ParentTaskExecutionId 是否已赋值
                     * @return ParentTaskExecutionId 是否已赋值
                     * 
                     */
                    bool ParentTaskExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>父任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTaskExecutionName <p>父任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentTaskExecutionName() const;

                    /**
                     * 设置<p>父任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTaskExecutionName <p>父任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTaskExecutionName(const std::string& _parentTaskExecutionName);

                    /**
                     * 判断参数 ParentTaskExecutionName 是否已赋值
                     * @return ParentTaskExecutionName 是否已赋值
                     * 
                     */
                    bool ParentTaskExecutionNameHasBeenSet() const;

                private:

                    /**
                     * <p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

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
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>触发器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>触发方式:调度触发Scheduler、手动触发ManualTrigger、事件触发Event</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>工作流触发时间</p>
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
                     * <p>执行开始时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行结束时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>运行时长，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionCostTime;
                    bool m_executionCostTimeHasBeenSet;

                    /**
                     * <p>并发排队花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * <p>等待资源花费时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * <p>执行状态，运行失败:FAILED、运行成功:SUCCESS、等待中:PENDING、跳过运行:SKIPED、运行中:RUNNING</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * <p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * <p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserName;
                    bool m_executeUserNameHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>工作流版本信息ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * <p>是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>运行的任务范围,逗号分隔的任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * <p>等待并发开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * <p>排队等待开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * <p>运行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>文件夹ID</p>
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
                     * <p>计划调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plannedSchedulingTime;
                    bool m_plannedSchedulingTimeHasBeenSet;

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
                     * <p>责任人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUinInCharge;
                    bool m_userUinInChargeHasBeenSet;

                    /**
                     * <p>关联实体是否存在</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_associatedEntityExist;
                    bool m_associatedEntityExistHasBeenSet;

                    /**
                     * <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowExecutionId;
                    bool m_parentWorkflowExecutionIdHasBeenSet;

                    /**
                     * <p>父任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentTaskExecutionId;
                    bool m_parentTaskExecutionIdHasBeenSet;

                    /**
                     * <p>父任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentTaskExecutionName;
                    bool m_parentTaskExecutionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWRUNBRIEF_H_
