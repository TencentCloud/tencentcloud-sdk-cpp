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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeDsVO.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtDsVO.h>
#include <tencentcloud/wedata/v20210820/model/AlarmDsVO.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfigDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskDsDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskLinkDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskInDsDto.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskOutDsDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskDataRegistryDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskCycleLinkDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务信息
                */
                class TaskDsDTO : public AbstractModel
                {
                public:
                    TaskDsDTO();
                    ~TaskDsDTO() = default;
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
                     * 获取虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskId 虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置虚拟任务标记
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskId 虚拟任务标记
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
                     * 获取真实工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealWorkflowId 真实工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置真实工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realWorkflowId 真实工作流id
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate 更新时间
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
                     * 获取生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 生效日期
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
                     * 获取结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束日期
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
                    int64_t GetCycleStep() const;

                    /**
                     * 设置步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 步长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression 对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression 对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算
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
                     * 获取延时调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延时调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置延时调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime 延时调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取延时执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime 延时执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置延时执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime 延时执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupTime(const int64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retriable 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retriable 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetriable(const int64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     * 
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 调度扩展信息
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
                    int64_t GetTryLimit() const;

                    /**
                     * 设置运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

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
                    int64_t GetRunPriority() const;

                    /**
                     * 设置运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriority 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunPriority(const int64_t& _runPriority);

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
                    TaskTypeDsVO GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const TaskTypeDsVO& _taskType);

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
                     * 获取是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend 是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend 是否自身依赖 是1 否2 并行3
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
                     * 获取LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate LeftCoordinate坐标
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
                     * 获取TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate TopCoordinate坐标
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
                     * 获取TaskExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExt TaskExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskExtDsVO GetTaskExt() const;

                    /**
                     * 设置TaskExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExt TaskExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExt(const TaskExtDsVO& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     * 
                     */
                    bool TaskExtHasBeenSet() const;

                    /**
                     * 获取taskExt 导入导出json使用 private Map  properties;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties taskExt 导入导出json使用 private Map  properties;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置taskExt 导入导出json使用 private Map  properties;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties taskExt 导入导出json使用 private Map  properties;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

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
                     * 获取实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1
     * 表示当前周期生成下一周期数据时间任务实例
     *
     * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy 实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1
     * 表示当前周期生成下一周期数据时间任务实例
     *
     * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1
     * 表示当前周期生成下一周期数据时间任务实例
     *
     * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy 实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1
     * 表示当前周期生成下一周期数据时间任务实例
     *
     * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径
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
                     * 获取资源池队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue 资源池队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置资源池队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue 资源池队列名称
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
                     * 获取任务告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarms 任务告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmDsVO> GetAlarms() const;

                    /**
                     * 设置任务告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarms 任务告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarms(const std::vector<AlarmDsVO>& _alarms);

                    /**
                     * 判断参数 Alarms 是否已赋值
                     * @return Alarms 是否已赋值
                     * 
                     */
                    bool AlarmsHasBeenSet() const;

                    /**
                     * 获取alarmDTO 导入导出json使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarm alarmDTO 导入导出json使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarm() const;

                    /**
                     * 设置alarmDTO 导入导出json使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarm alarmDTO 导入导出json使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarm(const std::string& _alarm);

                    /**
                     * 判断参数 Alarm 是否已赋值
                     * @return Alarm 是否已赋值
                     * 
                     */
                    bool AlarmHasBeenSet() const;

                    /**
                     * 获取任务脚本是否发生变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptChange 任务脚本是否发生变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置任务脚本是否发生变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptChange 任务脚本是否发生变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptChange(const bool& _scriptChange);

                    /**
                     * 判断参数 ScriptChange 是否已赋值
                     * @return ScriptChange 是否已赋值
                     * 
                     */
                    bool ScriptChangeHasBeenSet() const;

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
                     * 获取最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime 最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerCommitTime 最新调度计划变更时间 仅生产态
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
                     * 获取仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalizedJobStartTime 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalizedJobStartTime 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
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
                     * 获取启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoverFreezeStartTime 启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecoverFreezeStartTime() const;

                    /**
                     * 设置启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoverFreezeStartTime 启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecoverFreezeStartTime(const std::string& _recoverFreezeStartTime);

                    /**
                     * 判断参数 RecoverFreezeStartTime 是否已赋值
                     * @return RecoverFreezeStartTime 是否已赋值
                     * 
                     */
                    bool RecoverFreezeStartTimeHasBeenSet() const;

                    /**
                     * 获取源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServer 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServer 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServer(const std::string& _sourceServer);

                    /**
                     * 判断参数 SourceServer 是否已赋值
                     * @return SourceServer 是否已赋值
                     * 
                     */
                    bool SourceServerHasBeenSet() const;

                    /**
                     * 获取目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServer 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServer 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetServer(const std::string& _targetServer);

                    /**
                     * 判断参数 TargetServer 是否已赋值
                     * @return TargetServer 是否已赋值
                     * 
                     */
                    bool TargetServerHasBeenSet() const;

                    /**
                     * 获取父子节点树
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 父子节点树
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDsDTO> GetTasks() const;

                    /**
                     * 设置父子节点树
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 父子节点树
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<TaskDsDTO>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creater 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel 分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel 分支，依赖关系，and/or, 默认and
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
                     * 获取是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
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
                     * 获取支持事件监听器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerConfig 支持事件监听器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventListenerConfig() const;

                    /**
                     * 设置支持事件监听器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerConfig 支持事件监听器配置导入导出
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
                     * 获取支持事件触发器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventPublisherConfig 支持事件触发器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventPublisherConfig() const;

                    /**
                     * 设置支持事件触发器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventPublisherConfig 支持事件触发器配置导入导出
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
                     * 获取依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyConfigList 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyConfigDsDTO> GetDependencyConfigList() const;

                    /**
                     * 设置依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyConfigList 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyConfigList(const std::vector<DependencyConfigDsDTO>& _dependencyConfigList);

                    /**
                     * 判断参数 DependencyConfigList 是否已赋值
                     * @return DependencyConfigList 是否已赋值
                     * 
                     */
                    bool DependencyConfigListHasBeenSet() const;

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
                     * 获取回收站还原提示语
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecycleTips 回收站还原提示语
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecycleTips() const;

                    /**
                     * 设置回收站还原提示语
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recycleTips 回收站还原提示语
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecycleTips(const std::string& _recycleTips);

                    /**
                     * 判断参数 RecycleTips 是否已赋值
                     * @return RecycleTips 是否已赋值
                     * 
                     */
                    bool RecycleTipsHasBeenSet() const;

                    /**
                     * 获取回收站所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecycleUser 回收站所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecycleUser() const;

                    /**
                     * 设置回收站所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recycleUser 回收站所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecycleUser(const std::string& _recycleUser);

                    /**
                     * 判断参数 RecycleUser 是否已赋值
                     * @return RecycleUser 是否已赋值
                     * 
                     */
                    bool RecycleUserHasBeenSet() const;

                    /**
                     * 获取新增 或 修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewOrUpdate 新增 或 修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewOrUpdate() const;

                    /**
                     * 设置新增 或 修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newOrUpdate 新增 或 修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewOrUpdate(const std::string& _newOrUpdate);

                    /**
                     * 判断参数 NewOrUpdate 是否已赋值
                     * @return NewOrUpdate 是否已赋值
                     * 
                     */
                    bool NewOrUpdateHasBeenSet() const;

                    /**
                     * 获取任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskDsDto> GetParams() const;

                    /**
                     * 设置任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<ParameterTaskDsDto>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLinkInfo 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskLinkDsDTO> GetTaskLinkInfo() const;

                    /**
                     * 设置任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLinkInfo 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLinkInfo(const std::vector<TaskLinkDsDTO>& _taskLinkInfo);

                    /**
                     * 判断参数 TaskLinkInfo 是否已赋值
                     * @return TaskLinkInfo 是否已赋值
                     * 
                     */
                    bool TaskLinkInfoHasBeenSet() const;

                    /**
                     * 获取导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportResult 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetImportResult() const;

                    /**
                     * 设置导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importResult 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportResult(const bool& _importResult);

                    /**
                     * 判断参数 ImportResult 是否已赋值
                     * @return ImportResult 是否已赋值
                     * 
                     */
                    bool ImportResultHasBeenSet() const;

                    /**
                     * 获取导入失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportErrMsg 导入失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImportErrMsg() const;

                    /**
                     * 设置导入失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importErrMsg 导入失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportErrMsg(const std::string& _importErrMsg);

                    /**
                     * 判断参数 ImportErrMsg 是否已赋值
                     * @return ImportErrMsg 是否已赋值
                     * 
                     */
                    bool ImportErrMsgHasBeenSet() const;

                    /**
                     * 获取任务内容 全部内容 配置内容 资源内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentType 任务内容 全部内容 配置内容 资源内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置任务内容 全部内容 配置内容 资源内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentType 任务内容 全部内容 配置内容 资源内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取是否导入提交运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAutoSubmit 是否导入提交运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTaskAutoSubmit() const;

                    /**
                     * 设置是否导入提交运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAutoSubmit 是否导入提交运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAutoSubmit(const bool& _taskAutoSubmit);

                    /**
                     * 判断参数 TaskAutoSubmit 是否已赋值
                     * @return TaskAutoSubmit 是否已赋值
                     * 
                     */
                    bool TaskAutoSubmitHasBeenSet() const;

                    /**
                     * 获取上层产品 数据质量 / 数据开发 / ...
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 上层产品 数据质量 / 数据开发 / ...
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置上层产品 数据质量 / 数据开发 / ...
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 上层产品 数据质量 / 数据开发 / ...
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
                     * 获取创建者帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnId 创建者帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置创建者帐号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownId 创建者帐号
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
                     * 获取子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 子账号
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
                     * 获取最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser 最后修改的人
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
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最后修改时间
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
                     * 获取最后修改的人的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 最后修改的人的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置最后修改的人的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 最后修改的人的ID
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
                     * 获取版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionDesc 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionDesc 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取编排-删除添加的链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkId 编排-删除添加的链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置编排-删除添加的链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkId 编排-删除添加的链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkId(const std::string& _linkId);

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                    /**
                     * 获取脚本引用关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserFileId 脚本引用关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserFileId() const;

                    /**
                     * 设置脚本引用关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userFileId 脚本引用关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserFileId(const std::string& _userFileId);

                    /**
                     * 判断参数 UserFileId 是否已赋值
                     * @return UserFileId 是否已赋值
                     * 
                     */
                    bool UserFileIdHasBeenSet() const;

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
                     * 获取去向数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceId 去向数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置去向数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceId 去向数据源ID
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
                     * 获取去向数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceType 去向数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置去向数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceType 去向数据源类型
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
                     * 获取输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamInList 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskInDsDto> GetParamInList() const;

                    /**
                     * 设置输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramInList 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamInList(const std::vector<ParameterTaskInDsDto>& _paramInList);

                    /**
                     * 判断参数 ParamInList 是否已赋值
                     * @return ParamInList 是否已赋值
                     * 
                     */
                    bool ParamInListHasBeenSet() const;

                    /**
                     * 获取输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamOutList 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskOutDsDto> GetParamOutList() const;

                    /**
                     * 设置输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramOutList 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamOutList(const std::vector<ParameterTaskOutDsDto>& _paramOutList);

                    /**
                     * 判断参数 ParamOutList 是否已赋值
                     * @return ParamOutList 是否已赋值
                     * 
                     */
                    bool ParamOutListHasBeenSet() const;

                    /**
                     * 获取任务文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFolderId 任务文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置任务文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFolderId 任务文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                    /**
                     * 获取最大尝试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryAttempts 最大尝试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置最大尝试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryAttempts 最大尝试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryAttempts(const int64_t& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * 
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceName 数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceName() const;

                    /**
                     * 设置数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceName 数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceServiceName(const std::string& _sourceServiceName);

                    /**
                     * 判断参数 SourceServiceName 是否已赋值
                     * @return SourceServiceName 是否已赋值
                     * 
                     */
                    bool SourceServiceNameHasBeenSet() const;

                    /**
                     * 获取任务产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRegisterOutputTable 任务产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistryDTO> GetTaskRegisterOutputTable() const;

                    /**
                     * 设置任务产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRegisterOutputTable 任务产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRegisterOutputTable(const std::vector<TaskDataRegistryDTO>& _taskRegisterOutputTable);

                    /**
                     * 判断参数 TaskRegisterOutputTable 是否已赋值
                     * @return TaskRegisterOutputTable 是否已赋值
                     * 
                     */
                    bool TaskRegisterOutputTableHasBeenSet() const;

                    /**
                     * 获取循环依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleDependencyConfigList 循环依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskCycleLinkDTO> GetCycleDependencyConfigList() const;

                    /**
                     * 设置循环依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleDependencyConfigList 循环依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleDependencyConfigList(const std::vector<TaskCycleLinkDTO>& _cycleDependencyConfigList);

                    /**
                     * 判断参数 CycleDependencyConfigList 是否已赋值
                     * @return CycleDependencyConfigList 是否已赋值
                     * 
                     */
                    bool CycleDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取特殊警告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning 特殊警告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarning() const;

                    /**
                     * 设置特殊警告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warning 特殊警告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarning(const std::string& _warning);

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * 
                     */
                    bool WarningHasBeenSet() const;

                    /**
                     * 获取0 正常调度 1 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType 0 正常调度 1 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScheduleRunType() const;

                    /**
                     * 设置0 正常调度 1 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType 0 正常调度 1 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleRunType(const int64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcurrentStrategy 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConcurrentStrategy() const;

                    /**
                     * 设置0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrentStrategy 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcurrentStrategy(const int64_t& _concurrentStrategy);

                    /**
                     * 判断参数 ConcurrentStrategy 是否已赋值
                     * @return ConcurrentStrategy 是否已赋值
                     * 
                     */
                    bool ConcurrentStrategyHasBeenSet() const;

                    /**
                     * 获取UTC+8;UDC-8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone UTC+8;UDC-8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置UTC+8;UDC-8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone UTC+8;UDC-8
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
                     * 获取引用的代码模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 引用的代码模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置引用的代码模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 引用的代码模版id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 虚拟任务标记
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
                     * 真实工作流id
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
                     * 更新时间
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
                     * 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期
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
                     * 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 延时调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 延时执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * 调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeDsVO m_taskType;
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
                     * 是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * LeftCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * TopCoordinate坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * TaskExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskExtDsVO m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * taskExt 导入导出json使用 private Map  properties;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1
     * 表示当前周期生成下一周期数据时间任务实例
     *
     * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * 资源池队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 任务告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmDsVO> m_alarms;
                    bool m_alarmsHasBeenSet;

                    /**
                     * alarmDTO 导入导出json使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * 任务脚本是否发生变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * 最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * 启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recoverFreezeStartTime;
                    bool m_recoverFreezeStartTimeHasBeenSet;

                    /**
                     * 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * 父子节点树
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDsDTO> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * 是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 支持事件监听器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventListenerConfig;
                    bool m_eventListenerConfigHasBeenSet;

                    /**
                     * 支持事件触发器配置导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventPublisherConfig;
                    bool m_eventPublisherConfigHasBeenSet;

                    /**
                     * 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyConfigDsDTO> m_dependencyConfigList;
                    bool m_dependencyConfigListHasBeenSet;

                    /**
                     * 虚拟任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * 回收站还原提示语
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recycleTips;
                    bool m_recycleTipsHasBeenSet;

                    /**
                     * 回收站所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recycleUser;
                    bool m_recycleUserHasBeenSet;

                    /**
                     * 新增 或 修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newOrUpdate;
                    bool m_newOrUpdateHasBeenSet;

                    /**
                     * 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskDsDto> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 任务上游依赖信息 用于发布管理导入导出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLinkDsDTO> m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_importResult;
                    bool m_importResultHasBeenSet;

                    /**
                     * 导入失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_importErrMsg;
                    bool m_importErrMsgHasBeenSet;

                    /**
                     * 任务内容 全部内容 配置内容 资源内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 是否导入提交运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_taskAutoSubmit;
                    bool m_taskAutoSubmitHasBeenSet;

                    /**
                     * 上层产品 数据质量 / 数据开发 / ...
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 创建者帐号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * 子账号
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
                     * 最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后修改的人的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * 资源组

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * 编排-删除添加的链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * 脚本引用关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userFileId;
                    bool m_userFileIdHasBeenSet;

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
                     * 去向数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * 去向数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskInDsDto> m_paramInList;
                    bool m_paramInListHasBeenSet;

                    /**
                     * 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskOutDsDto> m_paramOutList;
                    bool m_paramOutListHasBeenSet;

                    /**
                     * 任务文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * 最大尝试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceName;
                    bool m_sourceServiceNameHasBeenSet;

                    /**
                     * 任务产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistryDTO> m_taskRegisterOutputTable;
                    bool m_taskRegisterOutputTableHasBeenSet;

                    /**
                     * 循环依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskCycleLinkDTO> m_cycleDependencyConfigList;
                    bool m_cycleDependencyConfigListHasBeenSet;

                    /**
                     * 特殊警告信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * 0 正常调度 1 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * 0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * UTC+8;UDC-8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 引用的代码模版id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDSDTO_H_
