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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/LinkOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/AiOpsEventListenerDTO.h>
#include <tencentcloud/wedata/v20210820/model/AiopsScriptInfo.h>
#include <tencentcloud/wedata/v20210820/model/AiopsDLCResourceConfigDto.h>
#include <tencentcloud/wedata/v20210820/model/AiopsSimpleTaskDto.h>
#include <tencentcloud/wedata/v20210820/model/ExtResourceFlagDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务运维详情
                */
                class TaskOpsDto : public AbstractModel
                {
                public:
                    TaskOpsDto();
                    ~TaskOpsDto() = default;
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
                     * 获取<p>虚拟任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskId <p>虚拟任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置<p>虚拟任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskId <p>虚拟任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualFlag <p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置<p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualFlag <p>虚拟任务标记</p>
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
                     * 获取<p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名</p>
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
                     * 获取<p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流id</p>
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
                     * 获取<p>任务为虚拟任务时，任务所在的真实工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealWorkflowId <p>任务为虚拟任务时，任务所在的真实工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置<p>任务为虚拟任务时，任务所在的真实工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realWorkflowId <p>任务为虚拟任务时，任务所在的真实工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealWorkflowId(const std::string& _realWorkflowId);

                    /**
                     * 判断参数 RealWorkflowId 是否已赋值
                     * @return RealWorkflowId 是否已赋值
                     * 
                     */
                    bool RealWorkflowIdHasBeenSet() const;

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
                     * 获取<p>文件夹名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName <p>文件夹名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件夹名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName <p>文件夹名字</p>
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
                     * 获取<p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate <p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置<p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate <p>最近更新时间</p>
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
                     * 获取<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge <p>责任人</p>
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
                     * 获取<p>责任人用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId <p>责任人用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置<p>责任人用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId <p>责任人用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取<p>调度生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>调度生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>调度生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>调度生效日期</p>
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
                     * 获取<p>调度结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>调度结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>调度结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>调度结束日期</p>
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
                     * 获取<p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime <p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置<p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime <p>执行时间左闭区间</p>
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
                     * 获取<p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime <p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置<p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime <p>执行时间右闭区间</p>
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
                     * 获取<p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep <p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置<p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep <p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取<p>调度cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression <p>调度cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>调度cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression <p>调度cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取<p>延时执行时间，unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime <p>延时执行时间，unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置<p>延时执行时间，unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime <p>延时执行时间，unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime <p>开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置<p>开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime <p>开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupTime(const uint64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取<p>重试等待时间, unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait <p>重试等待时间, unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryWait() const;

                    /**
                     * 设置<p>重试等待时间, unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait <p>重试等待时间, unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWait(const uint64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取<p>是否可重试，1 代表可以重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryAble <p>是否可重试，1 代表可以重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryAble() const;

                    /**
                     * 设置<p>是否可重试，1 代表可以重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryAble <p>是否可重试，1 代表可以重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryAble(const uint64_t& _retryAble);

                    /**
                     * 判断参数 RetryAble 是否已赋值
                     * @return RetryAble 是否已赋值
                     * 
                     */
                    bool RetryAbleHasBeenSet() const;

                    /**
                     * 获取<p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为&#39;0,3,4&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为&#39;0,3,4&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为&#39;0,3,4&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为&#39;0,3,4&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取<p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit <p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置<p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit <p>运行次数限制</p>
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
                     * 获取<p>指定的运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp <p>指定的运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置<p>指定的运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp <p>指定的运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取<p>集群name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>最小数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinDateTime <p>最小数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinDateTime() const;

                    /**
                     * 设置<p>最小数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minDateTime <p>最小数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinDateTime(const std::string& _minDateTime);

                    /**
                     * 判断参数 MinDateTime 是否已赋值
                     * @return MinDateTime 是否已赋值
                     * 
                     */
                    bool MinDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最大数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDateTime <p>最大数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxDateTime() const;

                    /**
                     * 设置<p>最大数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDateTime <p>最大数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDateTime(const std::string& _maxDateTime);

                    /**
                     * 判断参数 MaxDateTime 是否已赋值
                     * @return MaxDateTime 是否已赋值
                     * 
                     */
                    bool MaxDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行耗时超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTL <p>运行耗时超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置<p>运行耗时超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTL <p>运行耗时超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTTL(const int64_t& _executionTTL);

                    /**
                     * 判断参数 ExecutionTTL 是否已赋值
                     * @return ExecutionTTL 是否已赋值
                     * 
                     */
                    bool ExecutionTTLHasBeenSet() const;

                    /**
                     * 获取<p>自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend <p>自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend <p>自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelfDepend(const std::string& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

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
                     * 获取<p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notes <p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置<p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notes <p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取<p>任务初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy <p>任务初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置<p>任务初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy <p>任务初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                    /**
                     * 获取<p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue <p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置<p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue <p>计算队列</p>
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
                     * 获取<p>最新调度提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime <p>最新调度提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置<p>最新调度提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerCommitTime <p>最新调度提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastSchedulerCommitTime(const std::string& _lastSchedulerCommitTime);

                    /**
                     * 判断参数 LastSchedulerCommitTime 是否已赋值
                     * @return LastSchedulerCommitTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerCommitTimeHasBeenSet() const;

                    /**
                     * 获取<p>按cron表达式计算的任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalizedJobStartTime <p>按cron表达式计算的任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置<p>按cron表达式计算的任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalizedJobStartTime <p>按cron表达式计算的任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNormalizedJobStartTime(const std::string& _normalizedJobStartTime);

                    /**
                     * 判断参数 NormalizedJobStartTime 是否已赋值
                     * @return NormalizedJobStartTime 是否已赋值
                     * 
                     */
                    bool NormalizedJobStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>调度计划描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc <p>调度计划描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置<p>调度计划描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc <p>调度计划描述</p>
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
                     * 获取<p>计算资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup <p>计算资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置<p>计算资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup <p>计算资源组</p>
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
                     * 获取<p>任务创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>任务创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>任务创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>任务创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>任务依赖类型 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel <p>任务依赖类型 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置<p>任务依赖类型 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel <p>任务依赖类型 and、or</p>
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
                     * 获取<p>任务工作流依赖 yes、no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow <p>任务工作流依赖 yes、no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>任务工作流依赖 yes、no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow <p>任务工作流依赖 yes、no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>事件监听配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerConfig <p>事件监听配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventListenerConfig() const;

                    /**
                     * 设置<p>事件监听配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerConfig <p>事件监听配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventListenerConfig(const std::string& _eventListenerConfig);

                    /**
                     * 判断参数 EventListenerConfig 是否已赋值
                     * @return EventListenerConfig 是否已赋值
                     * 
                     */
                    bool EventListenerConfigHasBeenSet() const;

                    /**
                     * 获取<p>事件驱动配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventPublisherConfig <p>事件驱动配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventPublisherConfig() const;

                    /**
                     * 设置<p>事件驱动配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventPublisherConfig <p>事件驱动配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventPublisherConfig(const std::string& _eventPublisherConfig);

                    /**
                     * 判断参数 EventPublisherConfig 是否已赋值
                     * @return EventPublisherConfig 是否已赋值
                     * 
                     */
                    bool EventPublisherConfigHasBeenSet() const;

                    /**
                     * 获取<p>虚拟任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskStatus <p>虚拟任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskStatus() const;

                    /**
                     * 设置<p>虚拟任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskStatus <p>虚拟任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualTaskStatus(const std::string& _virtualTaskStatus);

                    /**
                     * 判断参数 VirtualTaskStatus 是否已赋值
                     * @return VirtualTaskStatus 是否已赋值
                     * 
                     */
                    bool VirtualTaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务依赖边详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLinkInfo <p>任务依赖边详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LinkOpsDto GetTaskLinkInfo() const;

                    /**
                     * 设置<p>任务依赖边详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLinkInfo <p>任务依赖边详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLinkInfo(const LinkOpsDto& _taskLinkInfo);

                    /**
                     * 判断参数 TaskLinkInfo 是否已赋值
                     * @return TaskLinkInfo 是否已赋值
                     * 
                     */
                    bool TaskLinkInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务产品类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName <p>任务产品类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>任务产品类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName <p>任务产品类型</p>
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
                     * 获取<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>主账户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnId <p>主账户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置<p>主账户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownId <p>主账户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnId(const std::string& _ownId);

                    /**
                     * 判断参数 OwnId 是否已赋值
                     * @return OwnId 是否已赋值
                     * 
                     */
                    bool OwnIdHasBeenSet() const;

                    /**
                     * 获取<p>用户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>用户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>用户userId</p>
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
                     * 获取<p>更新人昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser <p>更新人昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置<p>更新人昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser <p>更新人昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>更新人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId <p>更新人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置<p>更新人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId <p>更新人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

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
                     * 获取<p>任务类型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeDesc <p>任务类型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置<p>任务类型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeDesc <p>任务类型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeDesc(const std::string& _taskTypeDesc);

                    /**
                     * 判断参数 TaskTypeDesc 是否已赋值
                     * @return TaskTypeDesc 是否已赋值
                     * 
                     */
                    bool TaskTypeDescHasBeenSet() const;

                    /**
                     * 获取<p>是否展示工作流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowWorkflow <p>是否展示工作流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowWorkflow() const;

                    /**
                     * 设置<p>是否展示工作流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showWorkflow <p>是否展示工作流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowWorkflow(const bool& _showWorkflow);

                    /**
                     * 判断参数 ShowWorkflow 是否已赋值
                     * @return ShowWorkflow 是否已赋值
                     * 
                     */
                    bool ShowWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime <p>首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置<p>首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime <p>首次提交时间</p>
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
                     * 获取<p>首次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstRunTime <p>首次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置<p>首次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstRunTime <p>首次运行时间</p>
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
                     * 获取<p>调度描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleDesc <p>调度描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置<p>调度描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleDesc <p>调度描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取<p>周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleNum <p>周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleNum() const;

                    /**
                     * 设置<p>周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleNum <p>周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleNum(const int64_t& _cycleNum);

                    /**
                     * 判断参数 CycleNum 是否已赋值
                     * @return CycleNum 是否已赋值
                     * 
                     */
                    bool CycleNumHasBeenSet() const;

                    /**
                     * 获取<p>表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Crontab <p>表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置<p>表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontab <p>表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrontab(const std::string& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                    /**
                     * 获取<p>开始日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartDate <p>开始日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>开始日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startDate <p>开始日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndDate <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endDate <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>周期单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleUnit <p>周期单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置<p>周期单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleUnit <p>周期单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取<p>初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitStrategy <p>初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置<p>初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initStrategy <p>初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInitStrategy(const std::string& _initStrategy);

                    /**
                     * 判断参数 InitStrategy 是否已赋值
                     * @return InitStrategy 是否已赋值
                     * 
                     */
                    bool InitStrategyHasBeenSet() const;

                    /**
                     * 获取<p>层级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Layer <p>层级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置<p>层级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _layer <p>层级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取<p>来源数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceId <p>来源数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置<p>来源数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceId <p>来源数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>来源数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceType <p>来源数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置<p>来源数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceType <p>来源数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceId <p>目标数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置<p>目标数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceId <p>目标数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>目标数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceType <p>目标数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置<p>目标数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceType <p>目标数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>子任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TasksStr <p>子任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTasksStr() const;

                    /**
                     * 设置<p>子任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasksStr <p>子任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasksStr(const std::string& _tasksStr);

                    /**
                     * 判断参数 TasksStr 是否已赋值
                     * @return TasksStr 是否已赋值
                     * 
                     */
                    bool TasksStrHasBeenSet() const;

                    /**
                     * 获取<p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit <p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置<p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit <p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

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
                     * 获取<p>任务扩展信息(目前返沪离线同步的任务详情)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExtInfo <p>任务扩展信息(目前返沪离线同步的任务详情)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExtInfo() const;

                    /**
                     * 设置<p>任务扩展信息(目前返沪离线同步的任务详情)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExtInfo <p>任务扩展信息(目前返沪离线同步的任务详情)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExtInfo(const std::string& _taskExtInfo);

                    /**
                     * 判断参数 TaskExtInfo 是否已赋值
                     * @return TaskExtInfo 是否已赋值
                     * 
                     */
                    bool TaskExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务绑定的事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerInfos <p>任务绑定的事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiOpsEventListenerDTO> GetEventListenerInfos() const;

                    /**
                     * 设置<p>任务绑定的事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerInfos <p>任务绑定的事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventListenerInfos(const std::vector<AiOpsEventListenerDTO>& _eventListenerInfos);

                    /**
                     * 判断参数 EventListenerInfos 是否已赋值
                     * @return EventListenerInfos 是否已赋值
                     * 
                     */
                    bool EventListenerInfosHasBeenSet() const;

                    /**
                     * 获取<p>脚本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptInfo <p>脚本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsScriptInfo GetScriptInfo() const;

                    /**
                     * 设置<p>脚本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptInfo <p>脚本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptInfo(const AiopsScriptInfo& _scriptInfo);

                    /**
                     * 判断参数 ScriptInfo 是否已赋值
                     * @return ScriptInfo 是否已赋值
                     * 
                     */
                    bool ScriptInfoHasBeenSet() const;

                    /**
                     * 获取<p>DLC资源配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DLCResourceConfig <p>DLC资源配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsDLCResourceConfigDto GetDLCResourceConfig() const;

                    /**
                     * 设置<p>DLC资源配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dLCResourceConfig <p>DLC资源配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDLCResourceConfig(const AiopsDLCResourceConfigDto& _dLCResourceConfig);

                    /**
                     * 判断参数 DLCResourceConfig 是否已赋值
                     * @return DLCResourceConfig 是否已赋值
                     * 
                     */
                    bool DLCResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>父任务simple信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTaskInfos <p>父任务simple信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsSimpleTaskDto GetParentTaskInfos() const;

                    /**
                     * 设置<p>父任务simple信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTaskInfos <p>父任务simple信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTaskInfos(const AiopsSimpleTaskDto& _parentTaskInfos);

                    /**
                     * 判断参数 ParentTaskInfos 是否已赋值
                     * @return ParentTaskInfos 是否已赋值
                     * 
                     */
                    bool ParentTaskInfosHasBeenSet() const;

                    /**
                     * 获取<p>资源获取标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtResourceFlag <p>资源获取标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtResourceFlagDto GetExtResourceFlag() const;

                    /**
                     * 设置<p>资源获取标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extResourceFlag <p>资源获取标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtResourceFlag(const ExtResourceFlagDto& _extResourceFlag);

                    /**
                     * 判断参数 ExtResourceFlag 是否已赋值
                     * @return ExtResourceFlag 是否已赋值
                     * 
                     */
                    bool ExtResourceFlagHasBeenSet() const;

                    /**
                     * 获取<p>父任务simple信息(新)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewParentTaskInfos <p>父任务simple信息(新)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiopsSimpleTaskDto> GetNewParentTaskInfos() const;

                    /**
                     * 设置<p>父任务simple信息(新)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newParentTaskInfos <p>父任务simple信息(新)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewParentTaskInfos(const std::vector<AiopsSimpleTaskDto>& _newParentTaskInfos);

                    /**
                     * 判断参数 NewParentTaskInfos 是否已赋值
                     * @return NewParentTaskInfos 是否已赋值
                     * 
                     */
                    bool NewParentTaskInfosHasBeenSet() const;

                    /**
                     * 获取<p>任务自依赖类型：<br>yes： 任务需满足自依赖<br>no：任务无需满足自依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfWorkFlowDependType <p>任务自依赖类型：<br>yes： 任务需满足自依赖<br>no：任务无需满足自依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfWorkFlowDependType() const;

                    /**
                     * 设置<p>任务自依赖类型：<br>yes： 任务需满足自依赖<br>no：任务无需满足自依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfWorkFlowDependType <p>任务自依赖类型：<br>yes： 任务需满足自依赖<br>no：任务无需满足自依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelfWorkFlowDependType(const std::string& _selfWorkFlowDependType);

                    /**
                     * 判断参数 SelfWorkFlowDependType 是否已赋值
                     * @return SelfWorkFlowDependType 是否已赋值
                     * 
                     */
                    bool SelfWorkFlowDependTypeHasBeenSet() const;

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
                     * 获取<p>负责人Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId <p>负责人Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>负责人Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId <p>负责人Id</p>
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
                     * 获取<p>当前用户对该任务的权限列表， 当前支持<br>CAN_MANAGE : 有权限管理操作</p>
                     * @return Privileges <p>当前用户对该任务的权限列表， 当前支持<br>CAN_MANAGE : 有权限管理操作</p>
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置<p>当前用户对该任务的权限列表， 当前支持<br>CAN_MANAGE : 有权限管理操作</p>
                     * @param _privileges <p>当前用户对该任务的权限列表， 当前支持<br>CAN_MANAGE : 有权限管理操作</p>
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
                     * 获取<p>bundle客户端唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>bundle客户端唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>bundle客户端唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>bundle客户端唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>bundle客户端信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>bundle客户端信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>bundle客户端信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>bundle客户端信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>工作流类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowType <p>工作流类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置<p>工作流类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowType <p>工作流类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExtDTO <p>任务扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskExtOpsDto GetTaskExtDTO() const;

                    /**
                     * 设置<p>任务扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExtDTO <p>任务扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExtDTO(const TaskExtOpsDto& _taskExtDTO);

                    /**
                     * 判断参数 TaskExtDTO 是否已赋值
                     * @return TaskExtDTO 是否已赋值
                     * 
                     */
                    bool TaskExtDTOHasBeenSet() const;

                    /**
                     * 获取<p>任务时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>任务时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>任务时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>任务时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>代理任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyTaskId <p>代理任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyTaskId() const;

                    /**
                     * 设置<p>代理任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyTaskId <p>代理任务ID</p>
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
                     * 获取<p>代理任务类型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyTaskTypeId <p>代理任务类型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxyTaskTypeId() const;

                    /**
                     * 设置<p>代理任务类型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyTaskTypeId <p>代理任务类型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyTaskTypeId(const int64_t& _proxyTaskTypeId);

                    /**
                     * 判断参数 ProxyTaskTypeId 是否已赋值
                     * @return ProxyTaskTypeId 是否已赋值
                     * 
                     */
                    bool ProxyTaskTypeIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>虚拟任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * <p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>任务为虚拟任务时，任务所在的真实工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realWorkflowId;
                    bool m_realWorkflowIdHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>文件夹名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * <p>任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * <p>责任人用户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * <p>调度生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>调度结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行时间左闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * <p>执行时间右闭区间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>调度cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>延时执行时间，unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>重试等待时间, unit=分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * <p>是否可重试，1 代表可以重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryAble;
                    bool m_retryAbleHasBeenSet;

                    /**
                     * <p>调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为&#39;0,3,4&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * <p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>指定的运行节点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * <p>集群name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>最小数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minDateTime;
                    bool m_minDateTimeHasBeenSet;

                    /**
                     * <p>最大数据时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxDateTime;
                    bool m_maxDateTimeHasBeenSet;

                    /**
                     * <p>运行耗时超时时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * <p>自依赖类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

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
                     * <p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * <p>任务初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * <p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * <p>最新调度提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * <p>按cron表达式计算的任务开始执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * <p>调度计划描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * <p>计算资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>任务创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>任务依赖类型 and、or</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * <p>任务工作流依赖 yes、no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>事件监听配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventListenerConfig;
                    bool m_eventListenerConfigHasBeenSet;

                    /**
                     * <p>事件驱动配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventPublisherConfig;
                    bool m_eventPublisherConfigHasBeenSet;

                    /**
                     * <p>虚拟任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * <p>任务依赖边详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LinkOpsDto m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * <p>任务产品类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>项目id</p>
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
                     * <p>主账户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * <p>用户userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>租户id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * <p>更新人昵称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>更新人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * <p>任务类型id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>任务类型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * <p>是否展示工作流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showWorkflow;
                    bool m_showWorkflowHasBeenSet;

                    /**
                     * <p>首次提交时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * <p>首次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * <p>调度描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * <p>周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleNum;
                    bool m_cycleNumHasBeenSet;

                    /**
                     * <p>表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * <p>开始日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>周期单位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * <p>初始化策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * <p>层级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * <p>来源数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * <p>来源数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * <p>目标数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * <p>目标数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * <p>子任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tasksStr;
                    bool m_tasksStrHasBeenSet;

                    /**
                     * <p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

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
                     * <p>任务扩展信息(目前返沪离线同步的任务详情)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExtInfo;
                    bool m_taskExtInfoHasBeenSet;

                    /**
                     * <p>任务绑定的事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiOpsEventListenerDTO> m_eventListenerInfos;
                    bool m_eventListenerInfosHasBeenSet;

                    /**
                     * <p>脚本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsScriptInfo m_scriptInfo;
                    bool m_scriptInfoHasBeenSet;

                    /**
                     * <p>DLC资源配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsDLCResourceConfigDto m_dLCResourceConfig;
                    bool m_dLCResourceConfigHasBeenSet;

                    /**
                     * <p>父任务simple信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsSimpleTaskDto m_parentTaskInfos;
                    bool m_parentTaskInfosHasBeenSet;

                    /**
                     * <p>资源获取标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtResourceFlagDto m_extResourceFlag;
                    bool m_extResourceFlagHasBeenSet;

                    /**
                     * <p>父任务simple信息(新)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiopsSimpleTaskDto> m_newParentTaskInfos;
                    bool m_newParentTaskInfosHasBeenSet;

                    /**
                     * <p>任务自依赖类型：<br>yes： 任务需满足自依赖<br>no：任务无需满足自依赖</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfWorkFlowDependType;
                    bool m_selfWorkFlowDependTypeHasBeenSet;

                    /**
                     * <p>允许重跑类型，ALL 表示无论实例运行成功还是失败都允许重跑，NONE表示无论成功或者失败都不允许重跑，FAILURE 表示只有运行失败才能重跑</p>
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>负责人Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * <p>当前用户对该任务的权限列表， 当前支持<br>CAN_MANAGE : 有权限管理操作</p>
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * <p>bundle客户端唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>bundle客户端信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>工作流类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * <p>任务扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskExtOpsDto m_taskExtDTO;
                    bool m_taskExtDTOHasBeenSet;

                    /**
                     * <p>任务时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>代理任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyTaskId;
                    bool m_proxyTaskIdHasBeenSet;

                    /**
                     * <p>代理任务类型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxyTaskTypeId;
                    bool m_proxyTaskTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_
