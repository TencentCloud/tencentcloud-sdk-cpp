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
                     * 获取<p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskId <p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置<p>虚拟任务标记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskId <p>虚拟任务标记</p>
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
                     * 获取<p>真实工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealWorkflowId <p>真实工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置<p>真实工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realWorkflowId <p>真实工作流id</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate <p>更新时间</p>
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
                     * 获取<p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
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
                     * 获取<p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>生效日期</p>
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
                     * 获取<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束日期</p>
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
                    int64_t GetCycleStep() const;

                    /**
                     * 设置<p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep <p>步长</p>
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
                     * 获取<p>对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression <p>对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置<p>对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression <p>对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算</p>
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
                     * 获取<p>延时调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime <p>延时调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置<p>延时调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime <p>延时调度</p>
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
                     * 获取<p>延时执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime <p>延时执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置<p>延时执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupTime <p>延时执行时间</p>
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
                     * 获取<p>重试等待时间,单位分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait <p>重试等待时间,单位分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置<p>重试等待时间,单位分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWait <p>重试等待时间,单位分钟</p>
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
                     * 获取<p>是否可重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retriable <p>是否可重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置<p>是否可重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retriable <p>是否可重试</p>
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
                     * 获取<p>调度扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction <p>调度扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>调度扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction <p>调度扩展信息</p>
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
                    int64_t GetTryLimit() const;

                    /**
                     * 设置<p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tryLimit <p>运行次数限制</p>
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
                     * 获取<p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriority <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置<p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriority <p>运行优先级</p>
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
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeDsVO GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务类型</p>
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
                     * 获取<p>是否自身依赖 是1 否2 并行3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend <p>是否自身依赖 是1 否2 并行3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelfDepend() const;

                    /**
                     * 设置<p>是否自身依赖 是1 否2 并行3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selfDepend <p>是否自身依赖 是1 否2 并行3</p>
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
                     * 获取<p>LeftCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate <p>LeftCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置<p>LeftCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate <p>LeftCoordinate坐标</p>
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
                     * 获取<p>TopCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate <p>TopCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置<p>TopCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate <p>TopCoordinate坐标</p>
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
                     * 获取<p>TaskExt信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExt <p>TaskExt信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskExtDsVO GetTaskExt() const;

                    /**
                     * 设置<p>TaskExt信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExt <p>TaskExt信息</p>
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
                     * 获取<p>taskExt 导入导出json使用 private Map  properties;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>taskExt 导入导出json使用 private Map  properties;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置<p>taskExt 导入导出json使用 private Map  properties;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>taskExt 导入导出json使用 private Map  properties;</p>
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
                     * 获取<p>实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1</p><pre><code> * 表示当前周期生成下一周期数据时间任务实例 * * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径</code></pre>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy <p>实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1</p><pre><code> * 表示当前周期生成下一周期数据时间任务实例 * * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径</code></pre>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置<p>实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1</p><pre><code> * 表示当前周期生成下一周期数据时间任务实例 * * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径</code></pre>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy <p>实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1</p><pre><code> * 表示当前周期生成下一周期数据时间任务实例 * * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径</code></pre>
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
                     * 获取<p>资源池队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue <p>资源池队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置<p>资源池队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnQueue <p>资源池队列名称</p>
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
                     * 获取<p>任务告警信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarms <p>任务告警信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmDsVO> GetAlarms() const;

                    /**
                     * 设置<p>任务告警信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarms <p>任务告警信息</p>
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
                     * 获取<p>alarmDTO 导入导出json使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarm <p>alarmDTO 导入导出json使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarm() const;

                    /**
                     * 设置<p>alarmDTO 导入导出json使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarm <p>alarmDTO 导入导出json使用</p>
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
                     * 获取<p>任务脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptChange <p>任务脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置<p>任务脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptChange <p>任务脚本是否发生变化</p>
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
                     * 获取<p>最新调度计划变更时间 仅生产态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime <p>最新调度计划变更时间 仅生产态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置<p>最新调度计划变更时间 仅生产态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerCommitTime <p>最新调度计划变更时间 仅生产态</p>
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
                     * 获取<p>仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalizedJobStartTime <p>仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置<p>仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalizedJobStartTime <p>仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算</p>
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
                     * 获取<p>启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecoverFreezeStartTime <p>启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecoverFreezeStartTime() const;

                    /**
                     * 设置<p>启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recoverFreezeStartTime <p>启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例</p>
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
                     * 获取<p>源数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServer <p>源数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置<p>源数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServer <p>源数据源</p>
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
                     * 获取<p>目标数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServer <p>目标数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置<p>目标数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServer <p>目标数据源</p>
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
                     * 获取<p>父子节点树</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>父子节点树</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDsDTO> GetTasks() const;

                    /**
                     * 设置<p>父子节点树</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>父子节点树</p>
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
                     * 获取<p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater <p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置<p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creater <p>创建者</p>
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
                     * 获取<p>分支，依赖关系，and/or, 默认and</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel <p>分支，依赖关系，and/or, 默认and</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置<p>分支，依赖关系，and/or, 默认and</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyRel <p>分支，依赖关系，and/or, 默认and</p>
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
                     * 获取<p>是否支持工作流依赖 yes / no 默认 no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow <p>是否支持工作流依赖 yes / no 默认 no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置<p>是否支持工作流依赖 yes / no 默认 no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyWorkflow <p>是否支持工作流依赖 yes / no 默认 no</p>
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
                     * 获取<p>支持事件监听器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListenerConfig <p>支持事件监听器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventListenerConfig() const;

                    /**
                     * 设置<p>支持事件监听器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListenerConfig <p>支持事件监听器配置导入导出</p>
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
                     * 获取<p>支持事件触发器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventPublisherConfig <p>支持事件触发器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventPublisherConfig() const;

                    /**
                     * 设置<p>支持事件触发器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventPublisherConfig <p>支持事件触发器配置导入导出</p>
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
                     * 获取<p>依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyConfigList <p>依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyConfigDsDTO> GetDependencyConfigList() const;

                    /**
                     * 设置<p>依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyConfigList <p>依赖配置</p>
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
                     * 获取<p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskStatus <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualTaskStatus() const;

                    /**
                     * 设置<p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualTaskStatus <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
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
                     * 获取<p>回收站还原提示语</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecycleTips <p>回收站还原提示语</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecycleTips() const;

                    /**
                     * 设置<p>回收站还原提示语</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recycleTips <p>回收站还原提示语</p>
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
                     * 获取<p>回收站所属用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecycleUser <p>回收站所属用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecycleUser() const;

                    /**
                     * 设置<p>回收站所属用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recycleUser <p>回收站所属用户</p>
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
                     * 获取<p>新增 或 修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewOrUpdate <p>新增 或 修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewOrUpdate() const;

                    /**
                     * 设置<p>新增 或 修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newOrUpdate <p>新增 或 修改</p>
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
                     * 获取<p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params <p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskDsDto> GetParams() const;

                    /**
                     * 设置<p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params <p>任务上游依赖信息 用于发布管理导入导出</p>
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
                     * 获取<p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLinkInfo <p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskLinkDsDTO> GetTaskLinkInfo() const;

                    /**
                     * 设置<p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLinkInfo <p>任务上游依赖信息 用于发布管理导入导出</p>
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
                     * 获取<p>导入结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportResult <p>导入结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetImportResult() const;

                    /**
                     * 设置<p>导入结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importResult <p>导入结果</p>
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
                     * 获取<p>导入失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportErrMsg <p>导入失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImportErrMsg() const;

                    /**
                     * 设置<p>导入失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importErrMsg <p>导入失败原因</p>
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
                     * 获取<p>任务内容 全部内容 配置内容 资源内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentType <p>任务内容 全部内容 配置内容 资源内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>任务内容 全部内容 配置内容 资源内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentType <p>任务内容 全部内容 配置内容 资源内容</p>
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
                     * 获取<p>是否导入提交运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAutoSubmit <p>是否导入提交运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTaskAutoSubmit() const;

                    /**
                     * 设置<p>是否导入提交运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAutoSubmit <p>是否导入提交运行</p>
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
                     * 获取<p>上层产品 数据质量 / 数据开发 / ...</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName <p>上层产品 数据质量 / 数据开发 / ...</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>上层产品 数据质量 / 数据开发 / ...</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName <p>上层产品 数据质量 / 数据开发 / ...</p>
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
                     * 获取<p>创建者帐号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnId <p>创建者帐号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置<p>创建者帐号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownId <p>创建者帐号</p>
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
                     * 获取<p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId <p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId <p>子账号</p>
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
                     * 获取<p>最后修改的人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser <p>最后修改的人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置<p>最后修改的人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser <p>最后修改的人</p>
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
                     * 获取<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>最后修改时间</p>
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
                     * 获取<p>最后修改的人的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId <p>最后修改的人的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置<p>最后修改的人的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId <p>最后修改的人的ID</p>
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
                     * 获取<p>版本提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionDesc <p>版本提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置<p>版本提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionDesc <p>版本提交说明</p>
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
                     * 获取<p>编排-删除添加的链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkId <p>编排-删除添加的链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置<p>编排-删除添加的链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkId <p>编排-删除添加的链接</p>
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
                     * 获取<p>脚本引用关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserFileId <p>脚本引用关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserFileId() const;

                    /**
                     * 设置<p>脚本引用关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userFileId <p>脚本引用关系</p>
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
                     * 获取<p>去向数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceId <p>去向数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置<p>去向数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceId <p>去向数据源ID</p>
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
                     * 获取<p>去向数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServiceType <p>去向数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置<p>去向数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetServiceType <p>去向数据源类型</p>
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
                     * 获取<p>输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamInList <p>输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskInDsDto> GetParamInList() const;

                    /**
                     * 设置<p>输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramInList <p>输入参数</p>
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
                     * 获取<p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamOutList <p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskOutDsDto> GetParamOutList() const;

                    /**
                     * 设置<p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramOutList <p>输出参数</p>
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
                     * 获取<p>任务文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskFolderId <p>任务文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置<p>任务文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskFolderId <p>任务文件夹id</p>
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
                     * 获取<p>最大尝试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryAttempts <p>最大尝试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置<p>最大尝试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryAttempts <p>最大尝试次数</p>
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
                     * 获取<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>资源组名称</p>
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
                     * 获取<p>数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServiceName <p>数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceServiceName() const;

                    /**
                     * 设置<p>数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceServiceName <p>数据源</p>
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
                     * 获取<p>任务产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRegisterOutputTable <p>任务产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistryDTO> GetTaskRegisterOutputTable() const;

                    /**
                     * 设置<p>任务产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRegisterOutputTable <p>任务产出登记</p>
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
                     * 获取<p>循环依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleDependencyConfigList <p>循环依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskCycleLinkDTO> GetCycleDependencyConfigList() const;

                    /**
                     * 设置<p>循环依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleDependencyConfigList <p>循环依赖配置</p>
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
                     * 获取<p>特殊警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warning <p>特殊警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarning() const;

                    /**
                     * 设置<p>特殊警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warning <p>特殊警告信息</p>
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
                     * 获取<p>0 正常调度 1 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType <p>0 正常调度 1 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScheduleRunType() const;

                    /**
                     * 设置<p>0 正常调度 1 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType <p>0 正常调度 1 空跑调度</p>
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
                     * 获取<p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcurrentStrategy <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConcurrentStrategy() const;

                    /**
                     * 设置<p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrentStrategy <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill</p>
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
                     * 获取<p>UTC+8;UDC-8</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>UTC+8;UDC-8</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>UTC+8;UDC-8</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>UTC+8;UDC-8</p>
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
                     * 获取<p>引用的代码模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId <p>引用的代码模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>引用的代码模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId <p>引用的代码模版id</p>
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

                    /**
                     * 获取<p>允许重跑类 ALL 无论实例成功或者失败，都允许重跑 FAILURE 只有失败的实例允许重跑，成功的实例不允许重跑 NONE 无论成功或者失败，都不允许重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowRedoType <p>允许重跑类 ALL 无论实例成功或者失败，都允许重跑 FAILURE 只有失败的实例允许重跑，成功的实例不允许重跑 NONE 无论成功或者失败，都不允许重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置<p>允许重跑类 ALL 无论实例成功或者失败，都允许重跑 FAILURE 只有失败的实例允许重跑，成功的实例不允许重跑 NONE 无论成功或者失败，都不允许重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowRedoType <p>允许重跑类 ALL 无论实例成功或者失败，都允许重跑 FAILURE 只有失败的实例允许重跑，成功的实例不允许重跑 NONE 无论成功或者失败，都不允许重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>BundleId<br>CI/CD工程生成的bundle唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>BundleId<br>CI/CD工程生成的bundle唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId<br>CI/CD工程生成的bundle唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>BundleId<br>CI/CD工程生成的bundle唯一标识</p>
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
                     * 获取<p>bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>bundle信息</p>
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
                     * 获取<p>是否允许下游依赖 0 不允许 1 允许</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowDownstreamDependency <p>是否允许下游依赖 0 不允许 1 允许</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAllowDownstreamDependency() const;

                    /**
                     * 设置<p>是否允许下游依赖 0 不允许 1 允许</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowDownstreamDependency <p>是否允许下游依赖 0 不允许 1 允许</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowDownstreamDependency(const int64_t& _allowDownstreamDependency);

                    /**
                     * 判断参数 AllowDownstreamDependency 是否已赋值
                     * @return AllowDownstreamDependency 是否已赋值
                     * 
                     */
                    bool AllowDownstreamDependencyHasBeenSet() const;

                    /**
                     * 获取<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTriggerPolicy() const;

                    /**
                     * 设置<ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTriggerPolicy <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTriggerPolicy(const std::string& _dependencyTriggerPolicy);

                    /**
                     * 判断参数 DependencyTriggerPolicy 是否已赋值
                     * @return DependencyTriggerPolicy 是否已赋值
                     * 
                     */
                    bool DependencyTriggerPolicyHasBeenSet() const;

                    /**
                     * 获取<p>任务最后更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTimestamp <p>任务最后更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastUpdateTimestamp() const;

                    /**
                     * 设置<p>任务最后更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTimestamp <p>任务最后更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTimestamp(const uint64_t& _lastUpdateTimestamp);

                    /**
                     * 判断参数 LastUpdateTimestamp 是否已赋值
                     * @return LastUpdateTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdateTimestampHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>虚拟任务标记</p>
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
                     * <p>真实工作流id</p>
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
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
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
                     * <p>生效日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束日期</p>
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
                     * <p>周期类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>步长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>对于crontab类型调度配置其为用户输入 对于周期类型调度配置其为系统计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * <p>延时调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>延时执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>重试等待时间,单位分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * <p>是否可重试</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * <p>调度扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * <p>运行次数限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * <p>运行优先级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeDsVO m_taskType;
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
                     * <p>是否自身依赖 是1 否2 并行3</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * <p>LeftCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * <p>TopCoordinate坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * <p>TaskExt信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskExtDsVO m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * <p>taskExt 导入导出json使用 private Map  properties;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>任务备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * <p>实例生成策略 T+1 表示当前周期生成上一周期数据时间任务实例 默认T+1 T+0 表示当前周期生成当前周期数据时间任务实例 T-1</p><pre><code> * 表示当前周期生成下一周期数据时间任务实例 * * service不做默认策略处理, 下沉到数据初始化默认T+1, service涉及到多个更新task的路径</code></pre>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                    /**
                     * <p>资源池队列名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * <p>任务告警信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmDsVO> m_alarms;
                    bool m_alarmsHasBeenSet;

                    /**
                     * <p>alarmDTO 导入导出json使用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * <p>任务脚本是否发生变化</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * <p>任务版本是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * <p>最新调度计划变更时间 仅生产态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * <p>仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * <p>启动暂停的任务时，选择不补录中间实例，通过此字段来标识从哪个时间开始生成实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recoverFreezeStartTime;
                    bool m_recoverFreezeStartTimeHasBeenSet;

                    /**
                     * <p>源数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * <p>目标数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * <p>父子节点树</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDsDTO> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * <p>分支，依赖关系，and/or, 默认and</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * <p>是否支持工作流依赖 yes / no 默认 no</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * <p>支持事件监听器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventListenerConfig;
                    bool m_eventListenerConfigHasBeenSet;

                    /**
                     * <p>支持事件触发器配置导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventPublisherConfig;
                    bool m_eventPublisherConfigHasBeenSet;

                    /**
                     * <p>依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyConfigDsDTO> m_dependencyConfigList;
                    bool m_dependencyConfigListHasBeenSet;

                    /**
                     * <p>任务状态，取值范围：</p><ul><li>N 新建</li><li>Y 运行</li><li>F 停止</li><li>O 冻结</li><li>T 停止中</li><li>INVALID 已失效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * <p>回收站还原提示语</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recycleTips;
                    bool m_recycleTipsHasBeenSet;

                    /**
                     * <p>回收站所属用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recycleUser;
                    bool m_recycleUserHasBeenSet;

                    /**
                     * <p>新增 或 修改</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newOrUpdate;
                    bool m_newOrUpdateHasBeenSet;

                    /**
                     * <p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskDsDto> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>任务上游依赖信息 用于发布管理导入导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLinkDsDTO> m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * <p>导入结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_importResult;
                    bool m_importResultHasBeenSet;

                    /**
                     * <p>导入失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_importErrMsg;
                    bool m_importErrMsgHasBeenSet;

                    /**
                     * <p>任务内容 全部内容 配置内容 资源内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>是否导入提交运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_taskAutoSubmit;
                    bool m_taskAutoSubmitHasBeenSet;

                    /**
                     * <p>上层产品 数据质量 / 数据开发 / ...</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>创建者帐号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * <p>子账号</p>
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
                     * <p>最后修改的人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>最后修改的人的ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * <p>资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * <p>版本提交说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * <p>编排-删除添加的链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * <p>脚本引用关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userFileId;
                    bool m_userFileIdHasBeenSet;

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
                     * <p>去向数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * <p>去向数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * <p>输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskInDsDto> m_paramInList;
                    bool m_paramInListHasBeenSet;

                    /**
                     * <p>输出参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskOutDsDto> m_paramOutList;
                    bool m_paramOutListHasBeenSet;

                    /**
                     * <p>任务文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                    /**
                     * <p>最大尝试次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServiceName;
                    bool m_sourceServiceNameHasBeenSet;

                    /**
                     * <p>任务产出登记</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistryDTO> m_taskRegisterOutputTable;
                    bool m_taskRegisterOutputTableHasBeenSet;

                    /**
                     * <p>循环依赖配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskCycleLinkDTO> m_cycleDependencyConfigList;
                    bool m_cycleDependencyConfigListHasBeenSet;

                    /**
                     * <p>特殊警告信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * <p>0 正常调度 1 空跑调度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * <p>0 并发度达到上限时，本次排队等待 1 并发度达到上限时，本次不执行，直接kill</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concurrentStrategy;
                    bool m_concurrentStrategyHasBeenSet;

                    /**
                     * <p>UTC+8;UDC-8</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>引用的代码模版id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>允许重跑类 ALL 无论实例成功或者失败，都允许重跑 FAILURE 只有失败的实例允许重跑，成功的实例不允许重跑 NONE 无论成功或者失败，都不允许重跑</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * <p>BundleId<br>CI/CD工程生成的bundle唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>是否允许下游依赖 0 不允许 1 允许</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_allowDownstreamDependency;
                    bool m_allowDownstreamDependencyHasBeenSet;

                    /**
                     * <ul><li>任务依赖运行条件，默认为ALL_SUCCESS，暂时只支持工作流调度项目下配置</li><li>ALL_SUCCESS： 全部成功：所有上游依赖任务都达到终态时，进行依赖判断，如果上游全部都成功，则依赖判断成功，否则如果上游有一个跳过运行，则标记为跳过运行，其余情况标记为上游失败</li><li>ALL_FAILED：全部失败：所有上游依赖任务都达到终态时，进行依赖判断，如果上游状态都是失败或者上游失败，则依赖判断成功，否则就标记为跳过运行</li><li>ALL_DONE：全部完成：所有上游依赖任务都达到终态时，进行依赖判断，直接是依赖判断成功</li><li>ALL_DONE_AT_LEAST_ONE_SUCCESS：上游全部完成至少一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个成功，则依赖判断成功，否则就是跳过运行</li><li>ALL_SKIPPED：上游全部都跳过: 所有上游依赖任务都达到终态时，进行依赖判断，所有的上游都是跳过状态才算依赖判断成功，否则当前节点就是跳过运行</li><li>ONE_FAILED：至少一个失败: 上游只要有一个失败了，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有失败，则跳过运行</li><li>ONE_SUCCESS：至少一个成功：上游只要有一个成功，就进行依赖判断，且依赖判断成功，如果上游全部完成但是没有成功，则跳过运行</li><li>ONE_DONE：至少一个完成：上游只要有一个完成了，就进行依赖判断，且依赖判断成功，否则还是等待上游</li><li>NONE_FAILED：上游全部完成，没有失败: 所有上游依赖任务都达到终态时，进行依赖判断，如果上游都是成功或者跳过运行，则依赖判断成功，否则标记为上游失败</li><li>ALL_DONE_NONE_FAILED_AT_LEAST_ONE_SUCCESS：上游全部完成，没有失败，至少有一个成功: 所有上游依赖任务都达到终态时，进行依赖判断，上游没有一个失败且至少有一个成功的情况下，依赖判断成功，否则就是跳过运行</li><li>NONE_SKIPPED：上游全部完成，没有跳过运行: 所有上游依赖任务都达到终态时，进行依赖判断, 如果上游状态全部都是成功、失败、上游失败状态，则依赖判断成功，否则为跳过运行</li><li>ALL_DONE_AT_LEAST_ONE_FAILED：上游全部完成至少一个失败: 所有上游依赖任务都达到终态时，进行依赖判断，至少有一个失败，则依赖判断成功，否则就是跳过运行</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTriggerPolicy;
                    bool m_dependencyTriggerPolicyHasBeenSet;

                    /**
                     * <p>任务最后更新时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastUpdateTimestamp;
                    bool m_lastUpdateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKDSDTO_H_
