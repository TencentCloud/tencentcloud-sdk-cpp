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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/StrToStrMap.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseAuditLogOptDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例运维详情
                */
                class InstanceOpsDto : public AbstractModel
                {
                public:
                    InstanceOpsDto();
                    ~InstanceOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge <p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置<p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge <p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

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
                     * 获取<p>数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate <p>数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置<p>数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate <p>数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取<p>下一个数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextCurDate <p>下一个数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextCurDate() const;

                    /**
                     * 设置<p>下一个数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextCurDate <p>下一个数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextCurDate(const std::string& _nextCurDate);

                    /**
                     * 判断参数 NextCurDate 是否已赋值
                     * @return NextCurDate 是否已赋值
                     * 
                     */
                    bool NextCurDateHasBeenSet() const;

                    /**
                     * 获取<p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriority <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置<p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriority <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunPriority(const uint64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取<p>尝试运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit <p>尝试运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置<p>尝试运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit <p>尝试运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTryLimit(const uint64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取<p>当前运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries <p>当前运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置<p>当前运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries <p>当前运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取<p>重跑总次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRunNum <p>重跑总次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置<p>重跑总次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRunNum <p>重跑总次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRunNum(const uint64_t& _totalRunNum);

                    /**
                     * 判断参数 TotalRunNum 是否已赋值
                     * @return TotalRunNum 是否已赋值
                     * 
                     */
                    bool TotalRunNumHasBeenSet() const;

                    /**
                     * 获取<p>是否补录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoFlag <p>是否补录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDoFlag() const;

                    /**
                     * 设置<p>是否补录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doFlag <p>是否补录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoFlag(const uint64_t& _doFlag);

                    /**
                     * 判断参数 DoFlag 是否已赋值
                     * @return DoFlag 是否已赋值
                     * 
                     */
                    bool DoFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否是重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedoFlag <p>是否是重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRedoFlag() const;

                    /**
                     * 设置<p>是否是重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redoFlag <p>是否是重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedoFlag(const uint64_t& _redoFlag);

                    /**
                     * 判断参数 RedoFlag 是否已赋值
                     * @return RedoFlag 是否已赋值
                     * 
                     */
                    bool RedoFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeBroker <p>运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeBroker() const;

                    /**
                     * 设置<p>运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeBroker <p>运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeBroker(const std::string& _runtimeBroker);

                    /**
                     * 判断参数 RuntimeBroker 是否已赋值
                     * @return RuntimeBroker 是否已赋值
                     * 
                     */
                    bool RuntimeBrokerHasBeenSet() const;

                    /**
                     * 获取<p>失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc <p>失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置<p>失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc <p>失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const TaskTypeOpsDto& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>依赖判断完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFulfillTime <p>依赖判断完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFulfillTime() const;

                    /**
                     * 设置<p>依赖判断完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFulfillTime <p>依赖判断完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependenceFulfillTime(const std::string& _dependenceFulfillTime);

                    /**
                     * 判断参数 DependenceFulfillTime 是否已赋值
                     * @return DependenceFulfillTime 是否已赋值
                     * 
                     */
                    bool DependenceFulfillTimeHasBeenSet() const;

                    /**
                     * 获取<p>首次依赖判断通过时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstDependenceFulfillTime <p>首次依赖判断通过时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstDependenceFulfillTime() const;

                    /**
                     * 设置<p>首次依赖判断通过时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstDependenceFulfillTime <p>首次依赖判断通过时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstDependenceFulfillTime(const std::string& _firstDependenceFulfillTime);

                    /**
                     * 判断参数 FirstDependenceFulfillTime 是否已赋值
                     * @return FirstDependenceFulfillTime 是否已赋值
                     * 
                     */
                    bool FirstDependenceFulfillTimeHasBeenSet() const;

                    /**
                     * 获取<p>首次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstStartTime <p>首次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstStartTime() const;

                    /**
                     * 设置<p>首次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstStartTime <p>首次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstStartTime(const std::string& _firstStartTime);

                    /**
                     * 判断参数 FirstStartTime 是否已赋值
                     * @return FirstStartTime 是否已赋值
                     * 
                     */
                    bool FirstStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开始启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>运行完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>运行完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>运行完成时间</p>
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
                     * 获取<p>耗费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime <p>耗费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置<p>耗费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime <p>耗费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取<p>耗费时间(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMillisecond <p>耗费时间(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCostMillisecond() const;

                    /**
                     * 设置<p>耗费时间(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMillisecond <p>耗费时间(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostMillisecond(const uint64_t& _costMillisecond);

                    /**
                     * 判断参数 CostMillisecond 是否已赋值
                     * @return CostMillisecond 是否已赋值
                     * 
                     */
                    bool CostMillisecondHasBeenSet() const;

                    /**
                     * 获取<p>最大运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxCostTime <p>最大运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxCostTime() const;

                    /**
                     * 设置<p>最大运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxCostTime <p>最大运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxCostTime(const uint64_t& _maxCostTime);

                    /**
                     * 判断参数 MaxCostTime 是否已赋值
                     * @return MaxCostTime 是否已赋值
                     * 
                     */
                    bool MaxCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>最小运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinCostTime <p>最小运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinCostTime() const;

                    /**
                     * 设置<p>最小运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minCostTime <p>最小运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinCostTime(const uint64_t& _minCostTime);

                    /**
                     * 判断参数 MinCostTime 是否已赋值
                     * @return MinCostTime 是否已赋值
                     * 
                     */
                    bool MinCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>平均运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgCostTime <p>平均运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAvgCostTime() const;

                    /**
                     * 设置<p>平均运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgCostTime <p>平均运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvgCostTime(const double& _avgCostTime);

                    /**
                     * 判断参数 AvgCostTime 是否已赋值
                     * @return AvgCostTime 是否已赋值
                     * 
                     */
                    bool AvgCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLog <p>最近日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLog() const;

                    /**
                     * 设置<p>最近日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLog <p>最近日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLog(const std::string& _lastLog);

                    /**
                     * 判断参数 LastLog 是否已赋值
                     * @return LastLog 是否已赋值
                     * 
                     */
                    bool LastLogHasBeenSet() const;

                    /**
                     * 获取<p>调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDateTime <p>调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDateTime() const;

                    /**
                     * 设置<p>调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDateTime <p>调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerDateTime(const std::string& _schedulerDateTime);

                    /**
                     * 判断参数 SchedulerDateTime 是否已赋值
                     * @return SchedulerDateTime 是否已赋值
                     * 
                     */
                    bool SchedulerDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerDateTime <p>上次调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerDateTime() const;

                    /**
                     * 设置<p>上次调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerDateTime <p>上次调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastSchedulerDateTime(const std::string& _lastSchedulerDateTime);

                    /**
                     * 判断参数 LastSchedulerDateTime 是否已赋值
                     * @return LastSchedulerDateTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后更新事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate <p>最后更新事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置<p>最后更新事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate <p>最后更新事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     * 
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>分支，依赖关系 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel <p>分支，依赖关系 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置<p>分支，依赖关系 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel <p>分支，依赖关系 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyRel(const std::string& _dependencyRel);

                    /**
                     * 判断参数 DependencyRel 是否已赋值
                     * @return DependencyRel 是否已赋值
                     * 
                     */
                    bool DependencyRelHasBeenSet() const;

                    /**
                     * 获取<p>执行空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionSpace <p>执行空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionSpace() const;

                    /**
                     * 设置<p>执行空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionSpace <p>执行空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionSpace(const std::string& _executionSpace);

                    /**
                     * 判断参数 ExecutionSpace 是否已赋值
                     * @return ExecutionSpace 是否已赋值
                     * 
                     */
                    bool ExecutionSpaceHasBeenSet() const;

                    /**
                     * 获取<p>忽略事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreEvent <p>忽略事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIgnoreEvent() const;

                    /**
                     * 设置<p>忽略事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreEvent <p>忽略事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreEvent(const bool& _ignoreEvent);

                    /**
                     * 判断参数 IgnoreEvent 是否已赋值
                     * @return IgnoreEvent 是否已赋值
                     * 
                     */
                    bool IgnoreEventHasBeenSet() const;

                    /**
                     * 获取<p>虚拟任务实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualFlag <p>虚拟任务实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置<p>虚拟任务实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualFlag <p>虚拟任务实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

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
                     * 获取<p>递归实例信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SonList <p>递归实例信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSonList() const;

                    /**
                     * 设置<p>递归实例信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sonList <p>递归实例信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSonList(const std::string& _sonList);

                    /**
                     * 判断参数 SonList 是否已赋值
                     * @return SonList 是否已赋值
                     * 
                     */
                    bool SonListHasBeenSet() const;

                    /**
                     * 获取<p>产品业务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName <p>产品业务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品业务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName <p>产品业务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup <p>资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置<p>资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup <p>资源组</p>
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
                     * 获取<p>资源组指定执行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceInstanceId <p>资源组指定执行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置<p>资源组指定执行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceInstanceId <p>资源组指定执行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceInstanceId(const std::string& _resourceInstanceId);

                    /**
                     * 判断参数 ResourceInstanceId 是否已赋值
                     * @return ResourceInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue <p>资源队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置<p>资源队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue <p>资源队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     * 
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     * 
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取<p>最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime <p>最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置<p>最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime <p>最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstSubmitTime(const std::string& _firstSubmitTime);

                    /**
                     * 判断参数 FirstSubmitTime 是否已赋值
                     * @return FirstSubmitTime 是否已赋值
                     * 
                     */
                    bool FirstSubmitTimeHasBeenSet() const;

                    /**
                     * 获取<p>首次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstRunTime <p>首次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置<p>首次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstRunTime <p>首次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstRunTime(const std::string& _firstRunTime);

                    /**
                     * 判断参数 FirstRunTime 是否已赋值
                     * @return FirstRunTime 是否已赋值
                     * 
                     */
                    bool FirstRunTimeHasBeenSet() const;

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
                     * 获取<p>项目标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectIdent <p>项目标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置<p>项目标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectIdent <p>项目标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     * 
                     */
                    bool ProjectIdentHasBeenSet() const;

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
                     * 获取<p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId <p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置<p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId <p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取<p>实例标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey <p>实例标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>实例标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey <p>实例标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取<p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置<p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>关联实例信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedInstanceList <p>关联实例信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceOpsDto> GetRelatedInstanceList() const;

                    /**
                     * 设置<p>关联实例信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedInstanceList <p>关联实例信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedInstanceList(const std::vector<InstanceOpsDto>& _relatedInstanceList);

                    /**
                     * 判断参数 RelatedInstanceList 是否已赋值
                     * @return RelatedInstanceList 是否已赋值
                     * 
                     */
                    bool RelatedInstanceListHasBeenSet() const;

                    /**
                     * 获取<p>关联实例信息数量，不和RelatedInstanceList强关联。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedInstanceSize <p>关联实例信息数量，不和RelatedInstanceList强关联。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelatedInstanceSize() const;

                    /**
                     * 设置<p>关联实例信息数量，不和RelatedInstanceList强关联。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedInstanceSize <p>关联实例信息数量，不和RelatedInstanceList强关联。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedInstanceSize(const int64_t& _relatedInstanceSize);

                    /**
                     * 判断参数 RelatedInstanceSize 是否已赋值
                     * @return RelatedInstanceSize 是否已赋值
                     * 
                     */
                    bool RelatedInstanceSizeHasBeenSet() const;

                    /**
                     * 获取<p>ownerId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId <p>ownerId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>ownerId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId <p>ownerId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取<p>用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>实例生命周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLifeCycleOpsDto <p>实例生命周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceLifeCycleOpsDto GetInstanceLifeCycleOpsDto() const;

                    /**
                     * 设置<p>实例生命周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLifeCycleOpsDto <p>实例生命周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLifeCycleOpsDto(const InstanceLifeCycleOpsDto& _instanceLifeCycleOpsDto);

                    /**
                     * 判断参数 InstanceLifeCycleOpsDto 是否已赋值
                     * @return InstanceLifeCycleOpsDto 是否已赋值
                     * 
                     */
                    bool InstanceLifeCycleOpsDtoHasBeenSet() const;

                    /**
                     * 获取<p>自动重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryAttempts <p>自动重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryAttempts() const;

                    /**
                     * 设置<p>自动重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryAttempts <p>自动重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryAttempts(const uint64_t& _retryAttempts);

                    /**
                     * 判断参数 RetryAttempts 是否已赋值
                     * @return RetryAttempts 是否已赋值
                     * 
                     */
                    bool RetryAttemptsHasBeenSet() const;

                    /**
                     * 获取<p>紧急去除的依赖父实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletedFatherList <p>紧急去除的依赖父实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDeletedFatherList() const;

                    /**
                     * 设置<p>紧急去除的依赖父实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletedFatherList <p>紧急去除的依赖父实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletedFatherList(const std::vector<std::string>& _deletedFatherList);

                    /**
                     * 判断参数 DeletedFatherList 是否已赋值
                     * @return DeletedFatherList 是否已赋值
                     * 
                     */
                    bool DeletedFatherListHasBeenSet() const;

                    /**
                     * 获取<p>循环依赖关联的实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CirculateInstanceList <p>循环依赖关联的实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceOpsDto> GetCirculateInstanceList() const;

                    /**
                     * 设置<p>循环依赖关联的实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _circulateInstanceList <p>循环依赖关联的实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCirculateInstanceList(const std::vector<InstanceOpsDto>& _circulateInstanceList);

                    /**
                     * 判断参数 CirculateInstanceList 是否已赋值
                     * @return CirculateInstanceList 是否已赋值
                     * 
                     */
                    bool CirculateInstanceListHasBeenSet() const;

                    /**
                     * 获取<p>并发策略, 0: 等待并发, 1: kill自身</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcurrentStrategy <p>并发策略, 0: 等待并发, 1: kill自身</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConcurrentStrategy() const;

                    /**
                     * 设置<p>并发策略, 0: 等待并发, 1: kill自身</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrentStrategy <p>并发策略, 0: 等待并发, 1: kill自身</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcurrentStrategy(const uint64_t& _concurrentStrategy);

                    /**
                     * 判断参数 ConcurrentStrategy 是否已赋值
                     * @return ConcurrentStrategy 是否已赋值
                     * 
                     */
                    bool ConcurrentStrategyHasBeenSet() const;

                    /**
                     * 获取<p>调度运行方式, 0: 周期调度, 1: 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType <p>调度运行方式, 0: 周期调度, 1: 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScheduleRunType() const;

                    /**
                     * 设置<p>调度运行方式, 0: 周期调度, 1: 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType <p>调度运行方式, 0: 周期调度, 1: 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleRunType(const uint64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取<p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     * @return AllowRedoType <p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置<p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     * @param _allowRedoType <p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例生命周期</p>
                     * @return InstanceCycleType <p>实例生命周期</p>
                     * 
                     */
                    std::string GetInstanceCycleType() const;

                    /**
                     * 设置<p>实例生命周期</p>
                     * @param _instanceCycleType <p>实例生命周期</p>
                     * 
                     */
                    void SetInstanceCycleType(const std::string& _instanceCycleType);

                    /**
                     * 判断参数 InstanceCycleType 是否已赋值
                     * @return InstanceCycleType 是否已赋值
                     * 
                     */
                    bool InstanceCycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例执行计划描述</p>
                     * @return InstanceSchedulerDesc <p>实例执行计划描述</p>
                     * 
                     */
                    std::string GetInstanceSchedulerDesc() const;

                    /**
                     * 设置<p>实例执行计划描述</p>
                     * @param _instanceSchedulerDesc <p>实例执行计划描述</p>
                     * 
                     */
                    void SetInstanceSchedulerDesc(const std::string& _instanceSchedulerDesc);

                    /**
                     * 判断参数 InstanceSchedulerDesc 是否已赋值
                     * @return InstanceSchedulerDesc 是否已赋值
                     * 
                     */
                    bool InstanceSchedulerDescHasBeenSet() const;

                    /**
                     * 获取<p>当前用户对该实例的权限列表</p>
                     * @return Privileges <p>当前用户对该实例的权限列表</p>
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置<p>当前用户对该实例的权限列表</p>
                     * @param _privileges <p>当前用户对该实例的权限列表</p>
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取<p>任务执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExecutionId <p>任务执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExecutionId() const;

                    /**
                     * 设置<p>任务执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExecutionId <p>任务执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExecutionId(const std::string& _taskExecutionId);

                    /**
                     * 判断参数 TaskExecutionId 是否已赋值
                     * @return TaskExecutionId 是否已赋值
                     * 
                     */
                    bool TaskExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>dlc taskid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcTaskId <p>dlc taskid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcTaskId() const;

                    /**
                     * 设置<p>dlc taskid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcTaskId <p>dlc taskid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcTaskId(const std::string& _dlcTaskId);

                    /**
                     * 判断参数 DlcTaskId 是否已赋值
                     * @return DlcTaskId 是否已赋值
                     * 
                     */
                    bool DlcTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>dlc jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcSparkJobId <p>dlc jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcSparkJobId() const;

                    /**
                     * 设置<p>dlc jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcSparkJobId <p>dlc jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcSparkJobId(const std::string& _dlcSparkJobId);

                    /**
                     * 判断参数 DlcSparkJobId 是否已赋值
                     * @return DlcSparkJobId 是否已赋值
                     * 
                     */
                    bool DlcSparkJobIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext <p>扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StrToStrMap GetExt() const;

                    /**
                     * 设置<p>扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ext <p>扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExt(const StrToStrMap& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取<p>事件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedEventList <p>事件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventCaseAuditLogOptDto> GetRelatedEventList() const;

                    /**
                     * 设置<p>事件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedEventList <p>事件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedEventList(const std::vector<EventCaseAuditLogOptDto>& _relatedEventList);

                    /**
                     * 判断参数 RelatedEventList 是否已赋值
                     * @return RelatedEventList 是否已赋值
                     * 
                     */
                    bool RelatedEventListHasBeenSet() const;

                    /**
                     * 获取<p>代理任务ID（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyTaskId <p>代理任务ID（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyTaskId() const;

                    /**
                     * 设置<p>代理任务ID（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyTaskId <p>代理任务ID（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyTaskId(const std::string& _proxyTaskId);

                    /**
                     * 判断参数 ProxyTaskId 是否已赋值
                     * @return ProxyTaskId 是否已赋值
                     * 
                     */
                    bool ProxyTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>嵌套工作流名称（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunName <p>嵌套工作流名称（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunName() const;

                    /**
                     * 设置<p>嵌套工作流名称（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunName <p>嵌套工作流名称（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRunName(const std::string& _workflowRunName);

                    /**
                     * 判断参数 WorkflowRunName 是否已赋值
                     * @return WorkflowRunName 是否已赋值
                     * 
                     */
                    bool WorkflowRunNameHasBeenSet() const;

                    /**
                     * 获取<p>代理任务类型（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyTaskType <p>代理任务类型（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeOpsDto GetProxyTaskType() const;

                    /**
                     * 设置<p>代理任务类型（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyTaskType <p>代理任务类型（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyTaskType(const TaskTypeOpsDto& _proxyTaskType);

                    /**
                     * 判断参数 ProxyTaskType 是否已赋值
                     * @return ProxyTaskType 是否已赋值
                     * 
                     */
                    bool ProxyTaskTypeHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * <p>下一个数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextCurDate;
                    bool m_nextCurDateHasBeenSet;

                    /**
                     * <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>尝试运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * <p>当前运行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * <p>重跑总次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * <p>是否补录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_doFlag;
                    bool m_doFlagHasBeenSet;

                    /**
                     * <p>是否是重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_redoFlag;
                    bool m_redoFlagHasBeenSet;

                    /**
                     * <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeBroker;
                    bool m_runtimeBrokerHasBeenSet;

                    /**
                     * <p>失败的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>依赖判断完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFulfillTime;
                    bool m_dependenceFulfillTimeHasBeenSet;

                    /**
                     * <p>首次依赖判断通过时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstDependenceFulfillTime;
                    bool m_firstDependenceFulfillTimeHasBeenSet;

                    /**
                     * <p>首次启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstStartTime;
                    bool m_firstStartTimeHasBeenSet;

                    /**
                     * <p>开始启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>运行完成时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>耗费时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * <p>耗费时间(ms)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_costMillisecond;
                    bool m_costMillisecondHasBeenSet;

                    /**
                     * <p>最大运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * <p>最小运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * <p>平均运行耗时</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_avgCostTime;
                    bool m_avgCostTimeHasBeenSet;

                    /**
                     * <p>最近日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLog;
                    bool m_lastLogHasBeenSet;

                    /**
                     * <p>调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDateTime;
                    bool m_schedulerDateTimeHasBeenSet;

                    /**
                     * <p>上次调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerDateTime;
                    bool m_lastSchedulerDateTimeHasBeenSet;

                    /**
                     * <p>最后更新事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>分支，依赖关系 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * <p>执行空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * <p>忽略事件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreEvent;
                    bool m_ignoreEventHasBeenSet;

                    /**
                     * <p>虚拟任务实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

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
                     * <p>递归实例信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sonList;
                    bool m_sonListHasBeenSet;

                    /**
                     * <p>产品业务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>资源组指定执行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                    /**
                     * <p>资源队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * <p>最近提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * <p>首次执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * <p>项目名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * <p>实例标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>资源组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * <p>关联实例信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceOpsDto> m_relatedInstanceList;
                    bool m_relatedInstanceListHasBeenSet;

                    /**
                     * <p>关联实例信息数量，不和RelatedInstanceList强关联。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relatedInstanceSize;
                    bool m_relatedInstanceSizeHasBeenSet;

                    /**
                     * <p>ownerId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * <p>用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>实例生命周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceLifeCycleOpsDto m_instanceLifeCycleOpsDto;
                    bool m_instanceLifeCycleOpsDtoHasBeenSet;

                    /**
                     * <p>自动重试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryAttempts;
                    bool m_retryAttemptsHasBeenSet;

                    /**
                     * <p>紧急去除的依赖父实例列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_deletedFatherList;
                    bool m_deletedFatherListHasBeenSet;

                    /**
                     * <p>循环依赖关联的实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceOpsDto> m_circulateInstanceList;
                    bool m_circulateInstanceListHasBeenSet;

                    /**
                     * <p>并发策略, 0: 等待并发, 1: kill自身</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * <p>调度运行方式, 0: 周期调度, 1: 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>实例生命周期</p>
                     */
                    std::string m_instanceCycleType;
                    bool m_instanceCycleTypeHasBeenSet;

                    /**
                     * <p>实例执行计划描述</p>
                     */
                    std::string m_instanceSchedulerDesc;
                    bool m_instanceSchedulerDescHasBeenSet;

                    /**
                     * <p>当前用户对该实例的权限列表</p>
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * <p>任务执行id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExecutionId;
                    bool m_taskExecutionIdHasBeenSet;

                    /**
                     * <p>dlc taskid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcTaskId;
                    bool m_dlcTaskIdHasBeenSet;

                    /**
                     * <p>dlc jobid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcSparkJobId;
                    bool m_dlcSparkJobIdHasBeenSet;

                    /**
                     * <p>扩展属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StrToStrMap m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * <p>事件列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventCaseAuditLogOptDto> m_relatedEventList;
                    bool m_relatedEventListHasBeenSet;

                    /**
                     * <p>代理任务ID（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyTaskId;
                    bool m_proxyTaskIdHasBeenSet;

                    /**
                     * <p>嵌套工作流名称（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowRunName;
                    bool m_workflowRunNameHasBeenSet;

                    /**
                     * <p>代理任务类型（仅 嵌套场景使用，非 嵌套 场景为 null）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_proxyTaskType;
                    bool m_proxyTaskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_
