/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 负责人
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
                     * 获取数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 数据时间
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
                     * 获取下一个数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextCurDate 下一个数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextCurDate() const;

                    /**
                     * 设置下一个数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextCurDate 下一个数据时间
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
                     * 获取运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriority 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriority 运行优先级
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
                     * 获取尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit 尝试运行次数
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
                     * 获取当前运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 当前运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置当前运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries 当前运行次数
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
                     * 获取重跑总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRunNum 重跑总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalRunNum() const;

                    /**
                     * 设置重跑总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRunNum 重跑总次数
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
                     * 获取是否补录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoFlag 是否补录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDoFlag() const;

                    /**
                     * 设置是否补录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doFlag 是否补录
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
                     * 获取是否是重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedoFlag 是否是重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRedoFlag() const;

                    /**
                     * 设置是否是重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redoFlag 是否是重跑
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
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 实例状态
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
                     * 获取运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeBroker 运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeBroker() const;

                    /**
                     * 设置运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeBroker 运行节点
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
                     * 获取失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 失败的原因
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
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
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
                     * 获取依赖判断完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependenceFulfillTime 依赖判断完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependenceFulfillTime() const;

                    /**
                     * 设置依赖判断完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependenceFulfillTime 依赖判断完成时间
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
                     * 获取首次依赖判断通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstDependenceFulfillTime 首次依赖判断通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstDependenceFulfillTime() const;

                    /**
                     * 设置首次依赖判断通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstDependenceFulfillTime 首次依赖判断通过时间
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
                     * 获取首次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstStartTime 首次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstStartTime() const;

                    /**
                     * 设置首次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstStartTime 首次启动时间
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
                     * 获取开始启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始启动时间
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
                     * 获取运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 运行完成时间
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
                     * 获取耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime 耗费时间
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
                     * 获取耗费时间(ms)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMillisecond 耗费时间(ms)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCostMillisecond() const;

                    /**
                     * 设置耗费时间(ms)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMillisecond 耗费时间(ms)
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
                     * 获取最大运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxCostTime 最大运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxCostTime() const;

                    /**
                     * 设置最大运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxCostTime 最大运行耗时
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
                     * 获取最小运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinCostTime 最小运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinCostTime() const;

                    /**
                     * 设置最小运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minCostTime 最小运行耗时
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
                     * 获取平均运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgCostTime 平均运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAvgCostTime() const;

                    /**
                     * 设置平均运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgCostTime 平均运行耗时
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
                     * 获取最近日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLog 最近日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLog() const;

                    /**
                     * 设置最近日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLog 最近日志
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
                     * 获取调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDateTime 调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDateTime() const;

                    /**
                     * 设置调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDateTime 调度时间
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
                     * 获取上次调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerDateTime 上次调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerDateTime() const;

                    /**
                     * 设置上次调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerDateTime 上次调度时间
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
                     * 获取最后更新事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 最后更新事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置最后更新事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate 最后更新事件
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取分支，依赖关系 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel 分支，依赖关系 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置分支，依赖关系 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel 分支，依赖关系 and、or
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
                     * 获取执行空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionSpace 执行空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionSpace() const;

                    /**
                     * 设置执行空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionSpace 执行空间
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
                     * 获取忽略事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreEvent 忽略事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIgnoreEvent() const;

                    /**
                     * 设置忽略事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreEvent 忽略事件
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
                     * 获取虚拟任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualFlag 虚拟任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置虚拟任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualFlag 虚拟任务实例
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
                     * 获取递归实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SonList 递归实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSonList() const;

                    /**
                     * 设置递归实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sonList 递归实例信息
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
                     * 获取产品业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品业务名称
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
                     * 获取资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup 资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup 资源组
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
                     * 获取资源组指定执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceInstanceId 资源组指定执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置资源组指定执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceInstanceId 资源组指定执行节点
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
                     * 获取资源队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue 资源队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置资源队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue 资源队列
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
                     * 获取调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc 调度计划
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
                     * 获取最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime 最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime 最近提交时间
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
                     * 获取首次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstRunTime 首次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置首次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstRunTime 首次执行时间
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
                     * 获取项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectIdent 项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectIdent 项目标识
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
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 租户id
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
                     * 获取实例标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey 实例标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey 实例标识
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
                     * 获取资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 资源组id
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
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName 资源组名称
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
                     * 获取关联实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedInstanceList 关联实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceOpsDto> GetRelatedInstanceList() const;

                    /**
                     * 设置关联实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedInstanceList 关联实例信息。
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
                     * 获取关联实例信息数量，不和RelatedInstanceList强关联。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedInstanceSize 关联实例信息数量，不和RelatedInstanceList强关联。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelatedInstanceSize() const;

                    /**
                     * 设置关联实例信息数量，不和RelatedInstanceList强关联。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedInstanceSize 关联实例信息数量，不和RelatedInstanceList强关联。
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
                     * 获取ownerId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId ownerId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置ownerId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId ownerId
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
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户id
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
                     * 获取实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLifeCycleOpsDto 实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceLifeCycleOpsDto GetInstanceLifeCycleOpsDto() const;

                    /**
                     * 设置实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLifeCycleOpsDto 实例生命周期
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
                     * 获取自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryAttempts 自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryAttempts() const;

                    /**
                     * 设置自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryAttempts 自动重试次数
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
                     * 获取紧急去除的依赖父实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletedFatherList 紧急去除的依赖父实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDeletedFatherList() const;

                    /**
                     * 设置紧急去除的依赖父实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletedFatherList 紧急去除的依赖父实例列表
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
                     * 获取循环依赖关联的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CirculateInstanceList 循环依赖关联的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceOpsDto> GetCirculateInstanceList() const;

                    /**
                     * 设置循环依赖关联的实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _circulateInstanceList 循环依赖关联的实例
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
                     * 获取并发策略, 0: 等待并发, 1: kill自身
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcurrentStrategy 并发策略, 0: 等待并发, 1: kill自身
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConcurrentStrategy() const;

                    /**
                     * 设置并发策略, 0: 等待并发, 1: kill自身
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrentStrategy 并发策略, 0: 等待并发, 1: kill自身
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
                     * 获取调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType 调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScheduleRunType() const;

                    /**
                     * 设置调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType 调度运行方式, 0: 周期调度, 1: 空跑调度
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

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

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
                     * 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 下一个数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextCurDate;
                    bool m_nextCurDateHasBeenSet;

                    /**
                     * 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 当前运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 重跑总次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalRunNum;
                    bool m_totalRunNumHasBeenSet;

                    /**
                     * 是否补录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_doFlag;
                    bool m_doFlagHasBeenSet;

                    /**
                     * 是否是重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_redoFlag;
                    bool m_redoFlagHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeBroker;
                    bool m_runtimeBrokerHasBeenSet;

                    /**
                     * 失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 依赖判断完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependenceFulfillTime;
                    bool m_dependenceFulfillTimeHasBeenSet;

                    /**
                     * 首次依赖判断通过时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstDependenceFulfillTime;
                    bool m_firstDependenceFulfillTimeHasBeenSet;

                    /**
                     * 首次启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstStartTime;
                    bool m_firstStartTimeHasBeenSet;

                    /**
                     * 开始启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 耗费时间(ms)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_costMillisecond;
                    bool m_costMillisecondHasBeenSet;

                    /**
                     * 最大运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * 最小运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * 平均运行耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_avgCostTime;
                    bool m_avgCostTimeHasBeenSet;

                    /**
                     * 最近日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLog;
                    bool m_lastLogHasBeenSet;

                    /**
                     * 调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDateTime;
                    bool m_schedulerDateTimeHasBeenSet;

                    /**
                     * 上次调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerDateTime;
                    bool m_lastSchedulerDateTimeHasBeenSet;

                    /**
                     * 最后更新事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分支，依赖关系 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * 执行空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionSpace;
                    bool m_executionSpaceHasBeenSet;

                    /**
                     * 忽略事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreEvent;
                    bool m_ignoreEventHasBeenSet;

                    /**
                     * 虚拟任务实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

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
                     * 递归实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sonList;
                    bool m_sonListHasBeenSet;

                    /**
                     * 产品业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 资源组指定执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                    /**
                     * 资源队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * 最近提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * 首次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 实例标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 关联实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceOpsDto> m_relatedInstanceList;
                    bool m_relatedInstanceListHasBeenSet;

                    /**
                     * 关联实例信息数量，不和RelatedInstanceList强关联。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relatedInstanceSize;
                    bool m_relatedInstanceSizeHasBeenSet;

                    /**
                     * ownerId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceLifeCycleOpsDto m_instanceLifeCycleOpsDto;
                    bool m_instanceLifeCycleOpsDtoHasBeenSet;

                    /**
                     * 自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryAttempts;
                    bool m_retryAttemptsHasBeenSet;

                    /**
                     * 紧急去除的依赖父实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_deletedFatherList;
                    bool m_deletedFatherListHasBeenSet;

                    /**
                     * 循环依赖关联的实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceOpsDto> m_circulateInstanceList;
                    bool m_circulateInstanceListHasBeenSet;

                    /**
                     * 并发策略, 0: 等待并发, 1: kill自身
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * 调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEOPSDTO_H_
