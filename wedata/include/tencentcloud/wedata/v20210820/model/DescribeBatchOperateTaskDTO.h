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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 批量操作任务列表
                */
                class DescribeBatchOperateTaskDTO : public AbstractModel
                {
                public:
                    DescribeBatchOperateTaskDTO();
                    ~DescribeBatchOperateTaskDTO() = default;
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
                     * 获取<p>工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流Id</p>
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
                     * 获取<p>工作流名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName <p>工作流名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName <p>工作流名</p>
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
                     * 获取<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p>
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
                     * 获取<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeId <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeId <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeDesc <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeDesc <p>任务类型</p>
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
                     * 获取<p>文件夹名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName <p>文件夹名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件夹名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName <p>文件夹名</p>
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
                     * 获取<p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubmit() const;

                    /**
                     * 设置<p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmit(const uint64_t& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取<p>引擎：<br>presto\SparkJob\SparkSql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngine <p>引擎：<br>presto\SparkJob\SparkSql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置<p>引擎：<br>presto\SparkJob\SparkSql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngine <p>引擎：<br>presto\SparkJob\SparkSql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

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
                     * 获取<p>创造时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创造时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创造时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创造时间</p>
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
                     * 获取<p>周期类型D天周期<br>H小时<br>Ccrontab类型<br>I分钟<br>O一次性<br>Y年<br>R用户驱动<br>W周<br>M月</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleUnit <p>周期类型D天周期<br>H小时<br>Ccrontab类型<br>I分钟<br>O一次性<br>Y年<br>R用户驱动<br>W周<br>M月</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置<p>周期类型D天周期<br>H小时<br>Ccrontab类型<br>I分钟<br>O一次性<br>Y年<br>R用户驱动<br>W周<br>M月</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleUnit <p>周期类型D天周期<br>H小时<br>Ccrontab类型<br>I分钟<br>O一次性<br>Y年<br>R用户驱动<br>W周<br>M月</p>
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
                     * 获取<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleDesc <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置<p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleDesc <p>调度计划</p>
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
                     * 获取<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeResource <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputeResource() const;

                    /**
                     * 设置<p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeResource <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeResource(const std::string& _computeResource);

                    /**
                     * 判断参数 ComputeResource 是否已赋值
                     * @return ComputeResource 是否已赋值
                     * 
                     */
                    bool ComputeResourceHasBeenSet() const;

                    /**
                     * 获取<p>dlc地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcRegion <p>dlc地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcRegion() const;

                    /**
                     * 设置<p>dlc地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcRegion <p>dlc地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcRegion(const std::string& _dlcRegion);

                    /**
                     * 判断参数 DlcRegion 是否已赋值
                     * @return DlcRegion 是否已赋值
                     * 
                     */
                    bool DlcRegionHasBeenSet() const;

                    /**
                     * 获取<p>资源组或自定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInherit <p>资源组或自定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsInherit() const;

                    /**
                     * 设置<p>资源组或自定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInherit <p>资源组或自定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInherit(const std::string& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                    /**
                     * 获取<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilege <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>工作流Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * <p>文件夹名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>文件夹ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * <p>是否提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * <p>引擎：<br>presto\SparkJob\SparkSql</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创造时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>周期类型D天周期<br>H小时<br>Ccrontab类型<br>I分钟<br>O一次性<br>Y年<br>R用户驱动<br>W周<br>M月</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * <p>调度计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * <p>引擎名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeResource;
                    bool m_computeResourceHasBeenSet;

                    /**
                     * <p>dlc地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcRegion;
                    bool m_dlcRegionHasBeenSet;

                    /**
                     * <p>资源组或自定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isInherit;
                    bool m_isInheritHasBeenSet;

                    /**
                     * <p>用户对该资源的最高权限</p><p>枚举值：</p><ul><li>NO_PERMISSIONS： 无权限</li><li>CAN_VIEW： 只读权限</li><li>CAN_MANAGE： 管理权限</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_
