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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedParameter.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流运行信息
                */
                class WorkflowRun : public AbstractModel
                {
                public:
                    WorkflowRun();
                    ~WorkflowRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 主账号ID
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
                     * 获取触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)
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
                     * 获取pending 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime pending 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置pending 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime pending 状态开始时间，单位：毫秒时间戳
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
                     * 获取queue 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime queue 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置queue 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime queue 状态开始时间，单位：毫秒时间戳
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
                     * 获取终态时间，运行进入终态时都有值，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 终态时间，运行进入终态时都有值，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置终态时间，运行进入终态时都有值，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 终态时间，运行进入终态时都有值，单位：毫秒时间戳
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
                     * 获取并发排队花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime 并发排队花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置并发排队花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime 并发排队花费时间，单位：秒
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
                     * 获取等待资源花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingCostTime 等待资源花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置等待资源花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingCostTime 等待资源花费时间，单位：秒
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
                     * 获取运行状态。取值参考工作流运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState 运行状态。取值参考工作流运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置运行状态。取值参考工作流运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState 运行状态。取值参考工作流运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
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
                     * 获取计算资源（任务的资源组ID集合）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupIds 计算资源（任务的资源组ID集合）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResourceGroupIds() const;

                    /**
                     * 设置计算资源（任务的资源组ID集合）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupIds 计算资源（任务的资源组ID集合）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupIds(const std::vector<std::string>& _resourceGroupIds);

                    /**
                     * 判断参数 ResourceGroupIds 是否已赋值
                     * @return ResourceGroupIds 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdsHasBeenSet() const;

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
                     * 获取工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowVersionId 工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowVersionId 工作流版本ID
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
                     * 获取当前工作流是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportRerun 当前工作流是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置当前工作流是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportRerun 当前工作流是否支持重跑
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
                     * 获取工作流运行创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 工作流运行创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置工作流运行创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 工作流运行创建时间，单位：毫秒时间戳
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
                     * 获取运行的任务范围，任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedTaskIds 运行的任务范围，任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置运行的任务范围，任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectedTaskIds 运行的任务范围，任务ID列表
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
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelList 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelList 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取父工作流运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowRunId 父工作流运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowRunId() const;

                    /**
                     * 设置父工作流运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowRunId 父工作流运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentWorkflowRunId(const std::string& _parentWorkflowRunId);

                    /**
                     * 判断参数 ParentWorkflowRunId 是否已赋值
                     * @return ParentWorkflowRunId 是否已赋值
                     * 
                     */
                    bool ParentWorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取父工作流任务运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowTaskRunId 父工作流任务运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowTaskRunId() const;

                    /**
                     * 设置父工作流任务运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowTaskRunId 父工作流任务运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentWorkflowTaskRunId(const std::string& _parentWorkflowTaskRunId);

                    /**
                     * 判断参数 ParentWorkflowTaskRunId 是否已赋值
                     * @return ParentWorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool ParentWorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取父工作流任务运行名称 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowTaskRunName 父工作流任务运行名称 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowTaskRunName() const;

                    /**
                     * 设置父工作流任务运行名称 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowTaskRunName 父工作流任务运行名称 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentWorkflowTaskRunName(const std::string& _parentWorkflowTaskRunName);

                    /**
                     * 判断参数 ParentWorkflowTaskRunName 是否已赋值
                     * @return ParentWorkflowTaskRunName 是否已赋值
                     * 
                     */
                    bool ParentWorkflowTaskRunNameHasBeenSet() const;

                    /**
                     * 获取权限信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission 权限信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置权限信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission 权限信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取工作流高级运行时用户填入的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedParameters 工作流高级运行时用户填入的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvancedParameter> GetAdvancedParameters() const;

                    /**
                     * 设置工作流高级运行时用户填入的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedParameters 工作流高级运行时用户填入的参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedParameters(const std::vector<AdvancedParameter>& _advancedParameters);

                    /**
                     * 判断参数 AdvancedParameters 是否已赋值
                     * @return AdvancedParameters 是否已赋值
                     * 
                     */
                    bool AdvancedParametersHasBeenSet() const;

                private:

                    /**
                     * 主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

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
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 运行开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * pending 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * queue 状态开始时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * 运行结束时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * 终态时间，运行进入终态时都有值，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 运行时长，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * 并发排队花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * 等待资源花费时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * 运行状态。取值参考工作流运行状态枚举，如 Pending / Running / Succeeded / Failed / Killed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * 计算资源（任务的资源组ID集合）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourceGroupIds;
                    bool m_resourceGroupIdsHasBeenSet;

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
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 工作流版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * 当前工作流是否支持重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * 工作流运行创建时间，单位：毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * 运行的任务范围，任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * 资源组信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * 父工作流运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowRunId;
                    bool m_parentWorkflowRunIdHasBeenSet;

                    /**
                     * 父工作流任务运行ID 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowTaskRunId;
                    bool m_parentWorkflowTaskRunIdHasBeenSet;

                    /**
                     * 父工作流任务运行名称 【由嵌套工作流触发独有】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowTaskRunName;
                    bool m_parentWorkflowTaskRunNameHasBeenSet;

                    /**
                     * 权限信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 工作流高级运行时用户填入的参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvancedParameter> m_advancedParameters;
                    bool m_advancedParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_
