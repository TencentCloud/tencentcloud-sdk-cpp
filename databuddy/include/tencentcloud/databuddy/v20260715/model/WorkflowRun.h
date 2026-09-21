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
                     * 获取<p>主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>主账号ID</p>
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
                     * 获取<p>触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)</p>
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
                     * 获取<p>pending 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingStartTime <p>pending 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingStartTime() const;

                    /**
                     * 设置<p>pending 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingStartTime <p>pending 状态开始时间，单位：毫秒时间戳</p>
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
                     * 获取<p>queue 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueStartTime <p>queue 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueStartTime() const;

                    /**
                     * 设置<p>queue 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueStartTime <p>queue 状态开始时间，单位：毫秒时间戳</p>
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
                     * 获取<p>终态时间，运行进入终态时都有值，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>终态时间，运行进入终态时都有值，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>终态时间，运行进入终态时都有值，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>终态时间，运行进入终态时都有值，单位：毫秒时间戳</p>
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
                     * 获取<p>并发排队花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueCostTime <p>并发排队花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueCostTime() const;

                    /**
                     * 设置<p>并发排队花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueCostTime <p>并发排队花费时间，单位：秒</p>
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
                     * 获取<p>等待资源花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingCostTime <p>等待资源花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingCostTime() const;

                    /**
                     * 设置<p>等待资源花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingCostTime <p>等待资源花费时间，单位：秒</p>
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
                     * 获取<p>运行状态。CREATE(&quot;初始化&quot;),     QUEUED(&quot;等待中&quot;),     PENDING(&quot;准备中&quot;),     RUNNING(&quot;运行中&quot;),     SKIPPED(&quot;跳过运行&quot;),     SUCCESS(&quot;成功&quot;),     FAILED(&quot;失败&quot;),     TERMINATING(&quot;终止中&quot;),     TERMINATED(&quot;终止&quot;),     CANCELLED(&quot;被手动终止&quot;)等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState <p>运行状态。CREATE(&quot;初始化&quot;),     QUEUED(&quot;等待中&quot;),     PENDING(&quot;准备中&quot;),     RUNNING(&quot;运行中&quot;),     SKIPPED(&quot;跳过运行&quot;),     SUCCESS(&quot;成功&quot;),     FAILED(&quot;失败&quot;),     TERMINATING(&quot;终止中&quot;),     TERMINATED(&quot;终止&quot;),     CANCELLED(&quot;被手动终止&quot;)等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>运行状态。CREATE(&quot;初始化&quot;),     QUEUED(&quot;等待中&quot;),     PENDING(&quot;准备中&quot;),     RUNNING(&quot;运行中&quot;),     SKIPPED(&quot;跳过运行&quot;),     SUCCESS(&quot;成功&quot;),     FAILED(&quot;失败&quot;),     TERMINATING(&quot;终止中&quot;),     TERMINATED(&quot;终止&quot;),     CANCELLED(&quot;被手动终止&quot;)等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState <p>运行状态。CREATE(&quot;初始化&quot;),     QUEUED(&quot;等待中&quot;),     PENDING(&quot;准备中&quot;),     RUNNING(&quot;运行中&quot;),     SKIPPED(&quot;跳过运行&quot;),     SUCCESS(&quot;成功&quot;),     FAILED(&quot;失败&quot;),     TERMINATING(&quot;终止中&quot;),     TERMINATED(&quot;终止&quot;),     CANCELLED(&quot;被手动终止&quot;)等</p>
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
                     * 获取<p>计算资源（任务的资源组ID集合）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupIds <p>计算资源（任务的资源组ID集合）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResourceGroupIds() const;

                    /**
                     * 设置<p>计算资源（任务的资源组ID集合）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupIds <p>计算资源（任务的资源组ID集合）</p>
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
                     * 获取<p>工作流版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowVersionId <p>工作流版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置<p>工作流版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowVersionId <p>工作流版本ID</p>
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
                     * 获取<p>当前工作流是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportRerun <p>当前工作流是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportRerun() const;

                    /**
                     * 设置<p>当前工作流是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportRerun <p>当前工作流是否支持重跑</p>
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
                     * 获取<p>工作流运行创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>工作流运行创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>工作流运行创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>工作流运行创建时间，单位：毫秒时间戳</p>
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
                     * 获取<p>运行的任务范围，任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedTaskIds <p>运行的任务范围，任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSelectedTaskIds() const;

                    /**
                     * 设置<p>运行的任务范围，任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectedTaskIds <p>运行的任务范围，任务ID列表</p>
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
                     * 获取<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelList <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelList <p>标签列表</p>
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
                     * 获取<p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowRunId <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowRunId() const;

                    /**
                     * 设置<p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowRunId <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
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
                     * 获取<p>父工作流任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowTaskRunId <p>父工作流任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowTaskRunId() const;

                    /**
                     * 设置<p>父工作流任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowTaskRunId <p>父工作流任务运行ID 【由嵌套工作流触发独有】</p>
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
                     * 获取<p>父工作流任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentWorkflowTaskRunName <p>父工作流任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentWorkflowTaskRunName() const;

                    /**
                     * 设置<p>父工作流任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentWorkflowTaskRunName <p>父工作流任务运行名称 【由嵌套工作流触发独有】</p>
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
                     * 获取<p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
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
                     * 获取<p>工作流高级运行时用户填入的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedParameters <p>工作流高级运行时用户填入的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvancedParameter> GetAdvancedParameters() const;

                    /**
                     * 设置<p>工作流高级运行时用户填入的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedParameters <p>工作流高级运行时用户填入的参数</p>
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

                    /**
                     * 获取<p>计划调度时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledTime <p>计划调度时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>计划调度时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledTime <p>计划调度时间</p><p>参数格式：毫秒时间戳（UTC）</p>
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
                     * <p>主账号ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

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
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>触发方式，Scheduler、ManualTrigger、Event (参考SchedulerTriggerType)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>pending 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingStartTime;
                    bool m_pendingStartTimeHasBeenSet;

                    /**
                     * <p>queue 状态开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueStartTime;
                    bool m_queueStartTimeHasBeenSet;

                    /**
                     * <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>终态时间，运行进入终态时都有值，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>并发排队花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueCostTime;
                    bool m_queueCostTimeHasBeenSet;

                    /**
                     * <p>等待资源花费时间，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingCostTime;
                    bool m_pendingCostTimeHasBeenSet;

                    /**
                     * <p>运行状态。CREATE(&quot;初始化&quot;),     QUEUED(&quot;等待中&quot;),     PENDING(&quot;准备中&quot;),     RUNNING(&quot;运行中&quot;),     SKIPPED(&quot;跳过运行&quot;),     SUCCESS(&quot;成功&quot;),     FAILED(&quot;失败&quot;),     TERMINATING(&quot;终止中&quot;),     TERMINATED(&quot;终止&quot;),     CANCELLED(&quot;被手动终止&quot;)等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>计算资源（任务的资源组ID集合）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resourceGroupIds;
                    bool m_resourceGroupIdsHasBeenSet;

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
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>工作流版本ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * <p>当前工作流是否支持重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportRerun;
                    bool m_supportRerunHasBeenSet;

                    /**
                     * <p>工作流运行创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>重跑次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * <p>运行的任务范围，任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_selectedTaskIds;
                    bool m_selectedTaskIdsHasBeenSet;

                    /**
                     * <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>父工作流运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowRunId;
                    bool m_parentWorkflowRunIdHasBeenSet;

                    /**
                     * <p>父工作流任务运行ID 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowTaskRunId;
                    bool m_parentWorkflowTaskRunIdHasBeenSet;

                    /**
                     * <p>父工作流任务运行名称 【由嵌套工作流触发独有】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentWorkflowTaskRunName;
                    bool m_parentWorkflowTaskRunNameHasBeenSet;

                    /**
                     * <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>工作流高级运行时用户填入的参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvancedParameter> m_advancedParameters;
                    bool m_advancedParametersHasBeenSet;

                    /**
                     * <p>计划调度时间</p><p>参数格式：毫秒时间戳（UTC）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWRUN_H_
