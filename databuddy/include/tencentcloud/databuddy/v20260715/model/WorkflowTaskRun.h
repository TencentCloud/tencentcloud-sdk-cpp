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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流任务运行信息
                */
                class WorkflowTaskRun : public AbstractModel
                {
                public:
                    WorkflowTaskRun();
                    ~WorkflowTaskRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowTaskRunId <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowTaskRunId <p>任务运行ID</p>
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
                     * 获取<p>运行状态。如CREATE("初始化"), QUEUED("等待中"), PENDING("准备中"), RUNNING("运行中"), SKIPPED("跳过运行"), SUCCESS("成功"), FAILED("失败"), TERMINATING("终止中"), TERMINATED("终止"), CANCELLED("被手动终止")等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState <p>运行状态。如CREATE("初始化"), QUEUED("等待中"), PENDING("准备中"), RUNNING("运行中"), SKIPPED("跳过运行"), SUCCESS("成功"), FAILED("失败"), TERMINATING("终止中"), TERMINATED("终止"), CANCELLED("被手动终止")等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>运行状态。如CREATE("初始化"), QUEUED("等待中"), PENDING("准备中"), RUNNING("运行中"), SKIPPED("跳过运行"), SUCCESS("成功"), FAILED("失败"), TERMINATING("终止中"), TERMINATED("终止"), CANCELLED("被手动终止")等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState <p>运行状态。如CREATE("初始化"), QUEUED("等待中"), PENDING("准备中"), RUNNING("运行中"), SKIPPED("跳过运行"), SUCCESS("成功"), FAILED("失败"), TERMINATING("终止中"), TERMINATED("终止"), CANCELLED("被手动终止")等</p>
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
                     * 获取<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId <p>工作空间ID</p>
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
                     * @return WorkflowRunId <p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId <p>工作流运行ID</p>
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
                     * 获取<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>任务类型名称，请参考数据结构TaskType中TaskTypeName字段描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeName <p>任务类型名称，请参考数据结构TaskType中TaskTypeName字段描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置<p>任务类型名称，请参考数据结构TaskType中TaskTypeName字段描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeName <p>任务类型名称，请参考数据结构TaskType中TaskTypeName字段描述</p>
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
                     * 获取<p>任务版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionId <p>任务版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置<p>任务版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionId <p>任务版本ID</p>
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
                     * 获取<p>触发类型</p><p>枚举值：</p><ul><li>Manual： 手动触发</li><li>Scheduler： 调度触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发类型</p><p>枚举值：</p><ul><li>Manual： 手动触发</li><li>Scheduler： 调度触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发类型</p><p>枚举值：</p><ul><li>Manual： 手动触发</li><li>Scheduler： 调度触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发类型</p><p>枚举值：</p><ul><li>Manual： 手动触发</li><li>Scheduler： 调度触发</li></ul>
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
                     * 获取<p>所属资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>所属资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>所属资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>所属资源组ID</p>
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
                     * 获取<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeString <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeString() const;

                    /**
                     * 设置<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeString <p>错误码</p>
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
                     * 获取<p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserUin <p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置<p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserUin <p>运行用户UIN</p>
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
                     * 获取<p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserName <p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserName() const;

                    /**
                     * 设置<p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserName <p>运行用户名称</p>
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
                     * 获取<p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin <p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin <p>创建人UIN</p>
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
                     * 获取<p>执行平台执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId <p>执行平台执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>执行平台执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId <p>执行平台执行ID</p>
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
                     * 获取<p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，单位：毫秒时间戳</p>
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
                     * 获取<p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间，单位：毫秒时间戳</p>
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
                     * 获取<p>依赖任务完成时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFinishedTime <p>依赖任务完成时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFinishedTime() const;

                    /**
                     * 设置<p>依赖任务完成时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFinishedTime <p>依赖任务完成时间，单位：毫秒时间戳</p>
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
                     * 获取<p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunStartTime <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunStartTime() const;

                    /**
                     * 设置<p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runStartTime <p>运行开始时间，单位：毫秒时间戳</p>
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
                     * 获取<p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunEndTime <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置<p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runEndTime <p>运行结束时间，单位：毫秒时间戳</p>
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
                     * 获取<p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunCostTime <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunCostTime() const;

                    /**
                     * 设置<p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runCostTime <p>运行时长，单位：秒</p>
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
                     * 获取<p>等待时长（依赖就绪到开始运行的等待耗时），单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime <p>等待时长（依赖就绪到开始运行的等待耗时），单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置<p>等待时长（依赖就绪到开始运行的等待耗时），单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime <p>等待时长（依赖就绪到开始运行的等待耗时），单位：秒</p>
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
                     * 获取<p>下发执行平台时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueTime <p>下发执行平台时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置<p>下发执行平台时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issueTime <p>下发执行平台时间，单位：毫秒时间戳</p>
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
                     * 获取<p>依赖上游任务ID列表。保留字段，暂时返回为[]</p><p>保留字段，暂时返回为[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList <p>依赖上游任务ID列表。保留字段，暂时返回为[]</p><p>保留字段，暂时返回为[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDependOnList() const;

                    /**
                     * 设置<p>依赖上游任务ID列表。保留字段，暂时返回为[]</p><p>保留字段，暂时返回为[]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList <p>依赖上游任务ID列表。保留字段，暂时返回为[]</p><p>保留字段，暂时返回为[]</p>
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
                     * 获取<p>任务X坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate <p>任务X坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置<p>任务X坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate <p>任务X坐标</p>
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
                     * 获取<p>任务Y坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate <p>任务Y坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置<p>任务Y坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate <p>任务Y坐标</p>
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
                     * 获取<p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryTimes <p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置<p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryTimes <p>重试次数，为 0 则表示首次运行</p>
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
                     * 获取<p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerunTimes <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRerunTimes() const;

                    /**
                     * 设置<p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerunTimes <p>重跑次数</p>
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
                     * 获取<p>是否最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatestRun <p>是否最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLatestRun() const;

                    /**
                     * 设置<p>是否最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatestRun <p>是否最新一次运行</p>
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
                     * 获取<p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupInfoList <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetResourceGroupInfoList() const;

                    /**
                     * 设置<p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupInfoList <p>资源组信息列表</p>
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
                     * 获取<p>运行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunResult <p>运行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunResult() const;

                    /**
                     * 设置<p>运行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runResult <p>运行结果</p>
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
                     * 获取<p>任务依赖运行条件</p><p>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功<br>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功<br>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中<br>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败<br>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败<br>ALL_FAILED: 全部失败：所有上游依赖任务都失败<br>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行<br>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行<br>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行<br>ADVANCED:运行条件为高级模式时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnRunCondition <p>任务依赖运行条件</p><p>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功<br>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功<br>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中<br>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败<br>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败<br>ALL_FAILED: 全部失败：所有上游依赖任务都失败<br>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行<br>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行<br>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行<br>ADVANCED:运行条件为高级模式时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependOnRunCondition() const;

                    /**
                     * 设置<p>任务依赖运行条件</p><p>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功<br>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功<br>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中<br>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败<br>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败<br>ALL_FAILED: 全部失败：所有上游依赖任务都失败<br>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行<br>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行<br>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行<br>ADVANCED:运行条件为高级模式时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnRunCondition <p>任务依赖运行条件</p><p>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功<br>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功<br>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中<br>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败<br>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败<br>ALL_FAILED: 全部失败：所有上游依赖任务都失败<br>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行<br>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行<br>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行<br>ADVANCED:运行条件为高级模式时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnRunCondition(const std::string& _dependOnRunCondition);

                    /**
                     * 判断参数 DependOnRunCondition 是否已赋值
                     * @return DependOnRunCondition 是否已赋值
                     * 
                     */
                    bool DependOnRunConditionHasBeenSet() const;

                    /**
                     * 获取<p>高级依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedDependencyConfig <p>高级依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedDependencyConfig GetAdvancedDependencyConfig() const;

                    /**
                     * 设置<p>高级依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedDependencyConfig <p>高级依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig);

                    /**
                     * 判断参数 AdvancedDependencyConfig 是否已赋值
                     * @return AdvancedDependencyConfig 是否已赋值
                     * 
                     */
                    bool AdvancedDependencyConfigHasBeenSet() const;

                    /**
                     * 获取<p>内嵌工作流任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTask <p>内嵌工作流任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InnerWorkflowTaskBrief GetInnerTask() const;

                    /**
                     * 设置<p>内嵌工作流任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTask <p>内嵌工作流任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTask(const InnerWorkflowTaskBrief& _innerTask);

                    /**
                     * 判断参数 InnerTask 是否已赋值
                     * @return InnerTask 是否已赋值
                     * 
                     */
                    bool InnerTaskHasBeenSet() const;

                    /**
                     * 获取<p>计划调度时间</p><p>参数格式：毫秒时间戳，UTC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledTime <p>计划调度时间</p><p>参数格式：毫秒时间戳，UTC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>计划调度时间</p><p>参数格式：毫秒时间戳，UTC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledTime <p>计划调度时间</p><p>参数格式：毫秒时间戳，UTC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduledTime(const std::string& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>运行状态。如CREATE("初始化"), QUEUED("等待中"), PENDING("准备中"), RUNNING("运行中"), SKIPPED("跳过运行"), SUCCESS("成功"), FAILED("失败"), TERMINATING("终止中"), TERMINATED("终止"), CANCELLED("被手动终止")等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

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
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型名称，请参考数据结构TaskType中TaskTypeName字段描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * <p>任务版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * <p>触发类型</p><p>枚举值：</p><ul><li>Manual： 手动触发</li><li>Scheduler： 调度触发</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>所属资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>运行用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * <p>运行用户名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserName;
                    bool m_runUserNameHasBeenSet;

                    /**
                     * <p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>执行平台执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>依赖任务完成时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFinishedTime;
                    bool m_dependenceFinishedTimeHasBeenSet;

                    /**
                     * <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>等待时长（依赖就绪到开始运行的等待耗时），单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * <p>下发执行平台时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>依赖上游任务ID列表。保留字段，暂时返回为[]</p><p>保留字段，暂时返回为[]</p>
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
                     * <p>任务X坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * <p>任务Y坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>重试次数，为 0 则表示首次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>是否最新一次运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLatestRun;
                    bool m_isLatestRunHasBeenSet;

                    /**
                     * <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>运行结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runResult;
                    bool m_runResultHasBeenSet;

                    /**
                     * <p>任务依赖运行条件</p><p>ALL_SUCCESS: 全部成功：所有上游依赖任务均已执行并成功<br>ONE_SUCCESS: 至少一个成功：至少有一个上游依赖任务成功<br>NONE_FAILED: 目前没有失败：没有依赖任务失败，并且至少有一个依赖任务在运行中<br>ALL_DONE: 全部完成：所有上游依赖任务均已执行并完成（无论成功或失败<br>ONE_FAILED: 至少一个失败：至少有一个上游依赖任务失败<br>ALL_FAILED: 全部失败：所有上游依赖任务都失败<br>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行<br>ALL_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游<br>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行<br>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行<br>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行<br>ADVANCED:运行条件为高级模式时配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependOnRunCondition;
                    bool m_dependOnRunConditionHasBeenSet;

                    /**
                     * <p>高级依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedDependencyConfig m_advancedDependencyConfig;
                    bool m_advancedDependencyConfigHasBeenSet;

                    /**
                     * <p>内嵌工作流任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InnerWorkflowTaskBrief m_innerTask;
                    bool m_innerTaskHasBeenSet;

                    /**
                     * <p>计划调度时间</p><p>参数格式：毫秒时间戳，UTC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKRUN_H_
