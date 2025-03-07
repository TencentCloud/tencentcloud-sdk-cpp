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
                     * 获取虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskId 虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskId 虚拟任务id
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
                     * 获取虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualFlag 虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualFlag 虚拟任务标记
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
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
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
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流id
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
                     * 获取任务为虚拟任务时，任务所在的真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealWorkflowId 任务为虚拟任务时，任务所在的真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置任务为虚拟任务时，任务所在的真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realWorkflowId 任务为虚拟任务时，任务所在的真实工作流Id
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
                     * 获取文件夹名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName 文件夹名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName 文件夹名字
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
                     * 获取最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate 最近更新时间
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
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态
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
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCharge 责任人
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
                     * 获取责任人用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId 责任人用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置责任人用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId 责任人用户id
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
                     * 获取调度生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 调度生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置调度生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 调度生效日期
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
                     * 获取调度结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 调度结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置调度结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 调度结束日期
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
                     * 获取执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 执行时间左闭区间
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
                     * 获取执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 执行时间右闭区间
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
                     * 获取步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 步长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 步长
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
                     * 获取调度cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression 调度cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置调度cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression 调度cron表达式
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
                     * 获取延时执行时间，unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延时执行时间，unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延时执行时间，unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime 延时执行时间，unit=分钟
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
                     * 获取开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime 开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 设置开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime 开始执行时间
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
                     * 获取重试等待时间, unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait 重试等待时间, unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryWait() const;

                    /**
                     * 设置重试等待时间, unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait 重试等待时间, unit=分钟
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
                     * 获取是否可重试，1 代表可以重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryAble 是否可重试，1 代表可以重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetryAble() const;

                    /**
                     * 设置是否可重试，1 代表可以重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryAble 是否可重试，1 代表可以重试
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
                     * 获取调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'
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
                     * 获取运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit 运行次数限制
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
                     * 获取指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp 指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp 指定的运行节点
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
                     * 获取集群name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群name
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
                     * 获取最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinDateTime 最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinDateTime() const;

                    /**
                     * 设置最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minDateTime 最小数据时间
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
                     * 获取最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDateTime 最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxDateTime() const;

                    /**
                     * 设置最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDateTime 最大数据时间
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
                     * 获取运行耗时超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTL 运行耗时超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionTTL() const;

                    /**
                     * 设置运行耗时超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTL 运行耗时超时时间
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
                     * 获取自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend 自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend 自依赖类型
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
                     * 获取任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notes 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notes 任务备注
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
                     * 获取任务初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy 任务初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置任务初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy 任务初始化策略
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
                     * 获取计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue 计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue 计算队列
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
                     * 获取最新调度提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime 最新调度提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置最新调度提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerCommitTime 最新调度提交时间
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
                     * 获取按cron表达式计算的任务开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalizedJobStartTime 按cron表达式计算的任务开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置按cron表达式计算的任务开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalizedJobStartTime 按cron表达式计算的任务开始执行时间
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
                     * 获取调度计划描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc 调度计划描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置调度计划描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDesc 调度计划描述
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
                     * 获取计算资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup 计算资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置计算资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup 计算资源组
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
                     * 获取任务创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 任务创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置任务创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 任务创建人
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
                     * 获取任务依赖类型 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel 任务依赖类型 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置任务依赖类型 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel 任务依赖类型 and、or
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
                     * 获取任务工作流依赖 yes、no
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow 任务工作流依赖 yes、no
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置任务工作流依赖 yes、no
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow 任务工作流依赖 yes、no
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
                     * 获取事件监听配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerConfig 事件监听配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventListenerConfig() const;

                    /**
                     * 设置事件监听配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerConfig 事件监听配置
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
                     * 获取事件驱动配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventPublisherConfig 事件驱动配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventPublisherConfig() const;

                    /**
                     * 设置事件驱动配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventPublisherConfig 事件驱动配置
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
                     * 获取虚拟任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskStatus 虚拟任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskStatus() const;

                    /**
                     * 设置虚拟任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskStatus 虚拟任务状态
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
                     * 获取任务依赖边详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLinkInfo 任务依赖边详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LinkOpsDto GetTaskLinkInfo() const;

                    /**
                     * 设置任务依赖边详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLinkInfo 任务依赖边详情
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
                     * 获取任务产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 任务产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置任务产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 任务产品类型
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
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
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
                     * 获取主账户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnId 主账户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置主账户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownId 主账户userId
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
                     * 获取用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户userId
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
                     * 获取更新人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 更新人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置更新人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser 更新人昵称
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取更新人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 更新人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置更新人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 更新人userId
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
                     * 获取任务类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeDesc 任务类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置任务类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeDesc 任务类型描述
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
                     * 获取是否展示工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowWorkflow 是否展示工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowWorkflow() const;

                    /**
                     * 设置是否展示工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showWorkflow 是否展示工作流
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
                     * 获取首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstSubmitTime 首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstSubmitTime() const;

                    /**
                     * 设置首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstSubmitTime 首次提交时间
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
                     * 获取首次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstRunTime 首次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFirstRunTime() const;

                    /**
                     * 设置首次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstRunTime 首次运行时间
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
                     * 获取调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleDesc 调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleDesc 调度描述
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
                     * 获取周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleNum 周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCycleNum() const;

                    /**
                     * 设置周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleNum 周期
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
                     * 获取表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Crontab 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontab 表达式
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
                     * 获取开始日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartDate 开始日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startDate 开始日期
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
                     * 获取结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndDate 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endDate 结束日期
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
                     * 获取周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleUnit 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleUnit 周期单位
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
                     * 获取初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitStrategy 初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInitStrategy() const;

                    /**
                     * 设置初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initStrategy 初始化策略
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
                     * 获取层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Layer 层级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _layer 层级
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
                     * 获取来源数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceId 来源数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置来源数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceId 来源数据源ID
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
                     * 获取来源数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceType 来源数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置来源数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceType 来源数据源类型
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
                     * 获取目标数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceId 目标数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置目标数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceId 目标数据源ID
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
                     * 获取目标数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceType 目标数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置目标数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceType 目标数据源类型
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
                     * 获取子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TasksStr 子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTasksStr() const;

                    /**
                     * 设置子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasksStr 子任务列表
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
                     * 获取任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit 任务版本是否已提交
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
                     * 获取任务扩展信息(目前返沪离线同步的任务详情)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExtInfo 任务扩展信息(目前返沪离线同步的任务详情)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExtInfo() const;

                    /**
                     * 设置任务扩展信息(目前返沪离线同步的任务详情)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExtInfo 任务扩展信息(目前返沪离线同步的任务详情)
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
                     * 获取任务绑定的事件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerInfos 任务绑定的事件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiOpsEventListenerDTO> GetEventListenerInfos() const;

                    /**
                     * 设置任务绑定的事件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerInfos 任务绑定的事件信息
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
                     * 获取脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptInfo 脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsScriptInfo GetScriptInfo() const;

                    /**
                     * 设置脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptInfo 脚本信息
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
                     * 获取DLC资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DLCResourceConfig DLC资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsDLCResourceConfigDto GetDLCResourceConfig() const;

                    /**
                     * 设置DLC资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dLCResourceConfig DLC资源配置
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
                     * 获取父任务simple信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTaskInfos 父任务simple信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AiopsSimpleTaskDto GetParentTaskInfos() const;

                    /**
                     * 设置父任务simple信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTaskInfos 父任务simple信息
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
                     * 获取资源获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtResourceFlag 资源获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtResourceFlagDto GetExtResourceFlag() const;

                    /**
                     * 设置资源获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extResourceFlag 资源获取标识
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
                     * 获取父任务simple信息(新)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewParentTaskInfos 父任务simple信息(新)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AiopsSimpleTaskDto> GetNewParentTaskInfos() const;

                    /**
                     * 设置父任务simple信息(新)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newParentTaskInfos 父任务simple信息(新)
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
                     * 获取任务自依赖类型：
yes： 任务需满足自依赖
no：任务无需满足自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfWorkFlowDependType 任务自依赖类型：
yes： 任务需满足自依赖
no：任务无需满足自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfWorkFlowDependType() const;

                    /**
                     * 设置任务自依赖类型：
yes： 任务需满足自依赖
no：任务无需满足自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfWorkFlowDependType 任务自依赖类型：
yes： 任务需满足自依赖
no：任务无需满足自依赖
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

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * 虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务为虚拟任务时，任务所在的真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realWorkflowId;
                    bool m_realWorkflowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 文件夹名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 责任人用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * 调度生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 调度结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 调度cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 延时执行时间，unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 重试等待时间, unit=分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 是否可重试，1 代表可以重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryAble;
                    bool m_retryAbleHasBeenSet;

                    /**
                     * 调度配置-弹性周期配置，小时/周/月/年调度才有，小时任务指定每天的0点3点4点跑，则为'0,3,4'
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 集群name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minDateTime;
                    bool m_minDateTimeHasBeenSet;

                    /**
                     * 最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxDateTime;
                    bool m_maxDateTimeHasBeenSet;

                    /**
                     * 运行耗时超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTL;
                    bool m_executionTTLHasBeenSet;

                    /**
                     * 自依赖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

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
                     * 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 任务初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * 计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 最新调度提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * 按cron表达式计算的任务开始执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * 调度计划描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * 计算资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 任务创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 任务依赖类型 and、or
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * 任务工作流依赖 yes、no
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 事件监听配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventListenerConfig;
                    bool m_eventListenerConfigHasBeenSet;

                    /**
                     * 事件驱动配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventPublisherConfig;
                    bool m_eventPublisherConfigHasBeenSet;

                    /**
                     * 虚拟任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * 任务依赖边详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LinkOpsDto m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * 任务产品类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 项目id
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
                     * 主账户userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * 用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 更新人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 更新人userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 任务类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 任务类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * 是否展示工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showWorkflow;
                    bool m_showWorkflowHasBeenSet;

                    /**
                     * 首次提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstSubmitTime;
                    bool m_firstSubmitTimeHasBeenSet;

                    /**
                     * 首次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstRunTime;
                    bool m_firstRunTimeHasBeenSet;

                    /**
                     * 调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * 周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleNum;
                    bool m_cycleNumHasBeenSet;

                    /**
                     * 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * 开始日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_initStrategy;
                    bool m_initStrategyHasBeenSet;

                    /**
                     * 层级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * 来源数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * 来源数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * 目标数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * 目标数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * 子任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tasksStr;
                    bool m_tasksStrHasBeenSet;

                    /**
                     * 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

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
                     * 任务扩展信息(目前返沪离线同步的任务详情)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExtInfo;
                    bool m_taskExtInfoHasBeenSet;

                    /**
                     * 任务绑定的事件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiOpsEventListenerDTO> m_eventListenerInfos;
                    bool m_eventListenerInfosHasBeenSet;

                    /**
                     * 脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsScriptInfo m_scriptInfo;
                    bool m_scriptInfoHasBeenSet;

                    /**
                     * DLC资源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsDLCResourceConfigDto m_dLCResourceConfig;
                    bool m_dLCResourceConfigHasBeenSet;

                    /**
                     * 父任务simple信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiopsSimpleTaskDto m_parentTaskInfos;
                    bool m_parentTaskInfosHasBeenSet;

                    /**
                     * 资源获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtResourceFlagDto m_extResourceFlag;
                    bool m_extResourceFlagHasBeenSet;

                    /**
                     * 父任务simple信息(新)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AiopsSimpleTaskDto> m_newParentTaskInfos;
                    bool m_newParentTaskInfosHasBeenSet;

                    /**
                     * 任务自依赖类型：
yes： 任务需满足自依赖
no：任务无需满足自依赖
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfWorkFlowDependType;
                    bool m_selfWorkFlowDependTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKOPSDTO_H_
