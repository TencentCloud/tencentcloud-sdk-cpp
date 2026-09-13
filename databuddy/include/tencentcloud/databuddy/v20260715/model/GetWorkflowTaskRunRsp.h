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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRun.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflowTaskRunRsp
                */
                class GetWorkflowTaskRunRsp : public AbstractModel
                {
                public:
                    GetWorkflowTaskRunRsp();
                    ~GetWorkflowTaskRunRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowTaskRunId 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowTaskRunId 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行状态。取值参考工作流任务运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState 运行状态。取值参考工作流任务运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置运行状态。取值参考工作流任务运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState 运行状态。取值参考工作流任务运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunState(const std::string& _runState);

                    /**
                     * 判断参数 RunState 是否已赋值
                     * @return RunState 是否已赋值
                     * 
                     */
                    bool RunStateHasBeenSet() const;

                    /**
                     * 获取工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * @return WorkflowRunId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId 工作流运行ID
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

                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
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
                     * 获取任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeName 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeName 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取任务版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionId 任务版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置任务版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionId 任务版本ID
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
                     * 获取触发类型 (参考SchedulerTriggerType枚举)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发类型 (参考SchedulerTriggerType枚举)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发类型 (参考SchedulerTriggerType枚举)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发类型 (参考SchedulerTriggerType枚举)
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
                     * 获取所属资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 所属资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置所属资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 所属资源组ID
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
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeString 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeString() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeString 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodeString(const std::string& _errorCodeString);

                    /**
                     * 判断参数 ErrorCodeString 是否已赋值
                     * @return ErrorCodeString 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringHasBeenSet() const;

                    /**
                     * 获取运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserUin 运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserUin 运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserName 运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserName() const;

                    /**
                     * 设置运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserName 运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUserName(const std::string& _runUserName);

                    /**
                     * 判断参数 RunUserName 是否已赋值
                     * @return RunUserName 是否已赋值
                     * 
                     */
                    bool RunUserNameHasBeenSet() const;

                    /**
                     * 获取创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取执行平台执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 执行平台执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置执行平台执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 执行平台执行ID
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
                     * 获取创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，单位：毫秒时间戳
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
                     * 获取更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，单位：毫秒时间戳
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
                     * 获取依赖任务完成时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFinishedTime 依赖任务完成时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置依赖任务完成时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFinishedTime 依赖任务完成时间，单位：毫秒时间戳
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
                     * 获取运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunStartTime 运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunStartTime() const;

                    /**
                     * 设置运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runStartTime 运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunStartTime(const std::string& _runStartTime);

                    /**
                     * 判断参数 RunStartTime 是否已赋值
                     * @return RunStartTime 是否已赋值
                     * 
                     */
                    bool RunStartTimeHasBeenSet() const;

                    /**
                     * 获取运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunEndTime 运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runEndTime 运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                    /**
                     * 获取运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunCostTime 运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunCostTime() const;

                    /**
                     * 设置运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runCostTime 运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunCostTime(const std::string& _runCostTime);

                    /**
                     * 判断参数 RunCostTime 是否已赋值
                     * @return RunCostTime 是否已赋值
                     * 
                     */
                    bool RunCostTimeHasBeenSet() const;

                    /**
                     * 获取等待时长（依赖就绪到开始运行的等待耗时），单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime 等待时长（依赖就绪到开始运行的等待耗时），单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置等待时长（依赖就绪到开始运行的等待耗时），单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime 等待时长（依赖就绪到开始运行的等待耗时），单位：秒
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
                     * 获取下发执行平台时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueTime 下发执行平台时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置下发执行平台时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issueTime 下发执行平台时间，单位：毫秒时间戳
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
                     * 获取依赖上游任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList 依赖上游任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置依赖上游任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList 依赖上游任务ID列表
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
                     * 获取任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate 任务X坐标
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
                     * 获取任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate 任务Y坐标
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
                     * 获取重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryTimes 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryTimes 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryTimes(const int64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

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
                     * 获取重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerunTimes 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRerunTimes() const;

                    /**
                     * 设置重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerunTimes 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerunTimes(const int64_t& _rerunTimes);

                    /**
                     * 判断参数 RerunTimes 是否已赋值
                     * @return RerunTimes 是否已赋值
                     * 
                     */
                    bool RerunTimesHasBeenSet() const;

                    /**
                     * 获取是否最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatestRun 是否最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLatestRun() const;

                    /**
                     * 设置是否最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatestRun 是否最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLatestRun(const bool& _isLatestRun);

                    /**
                     * 判断参数 IsLatestRun 是否已赋值
                     * @return IsLatestRun 是否已赋值
                     * 
                     */
                    bool IsLatestRunHasBeenSet() const;

                    /**
                     * 获取资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupInfoList 资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetResourceGroupInfoList() const;

                    /**
                     * 设置资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupInfoList 资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupInfoList(const std::vector<ResourceGroupInfo>& _resourceGroupInfoList);

                    /**
                     * 判断参数 ResourceGroupInfoList 是否已赋值
                     * @return ResourceGroupInfoList 是否已赋值
                     * 
                     */
                    bool ResourceGroupInfoListHasBeenSet() const;

                    /**
                     * 获取错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 错误消息
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
                     * 获取运行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunResult 运行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunResult() const;

                    /**
                     * 设置运行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runResult 运行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunResult(const std::string& _runResult);

                    /**
                     * 判断参数 RunResult 是否已赋值
                     * @return RunResult 是否已赋值
                     * 
                     */
                    bool RunResultHasBeenSet() const;

                    /**
                     * 获取内嵌工作流任务运行详情（仅限 FOR_EACH 任务，其他任务类型不返回该字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerWorkflowTaskRun 内嵌工作流任务运行详情（仅限 FOR_EACH 任务，其他任务类型不返回该字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InnerWorkflowTaskRun GetInnerWorkflowTaskRun() const;

                    /**
                     * 设置内嵌工作流任务运行详情（仅限 FOR_EACH 任务，其他任务类型不返回该字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerWorkflowTaskRun 内嵌工作流任务运行详情（仅限 FOR_EACH 任务，其他任务类型不返回该字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerWorkflowTaskRun(const InnerWorkflowTaskRun& _innerWorkflowTaskRun);

                    /**
                     * 判断参数 InnerWorkflowTaskRun 是否已赋值
                     * @return InnerWorkflowTaskRun 是否已赋值
                     * 
                     */
                    bool InnerWorkflowTaskRunHasBeenSet() const;

                private:

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * 运行状态。取值参考工作流任务运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

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
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * 任务版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * 触发类型 (参考SchedulerTriggerType枚举)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 所属资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * 运行用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * 运行用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserName;
                    bool m_runUserNameHasBeenSet;

                    /**
                     * 创建人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 执行平台执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 依赖任务完成时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * 运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * 运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * 运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * 等待时长（依赖就绪到开始运行的等待耗时），单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * 下发执行平台时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 依赖上游任务ID列表
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
                     * 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * 是否最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLatestRun;
                    bool m_isLatestRunHasBeenSet;

                    /**
                     * 资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * 错误消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 运行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runResult;
                    bool m_runResultHasBeenSet;

                    /**
                     * 内嵌工作流任务运行详情（仅限 FOR_EACH 任务，其他任务类型不返回该字段）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InnerWorkflowTaskRun m_innerWorkflowTaskRun;
                    bool m_innerWorkflowTaskRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWTASKRUNRSP_H_
