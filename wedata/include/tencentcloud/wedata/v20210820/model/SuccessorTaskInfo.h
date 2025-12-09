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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUCCESSORTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUCCESSORTASKINFO_H_

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
                * 下游任务列表
                */
                class SuccessorTaskInfo : public AbstractModel
                {
                public:
                    SuccessorTaskInfo();
                    ~SuccessorTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取所属工作流id
                     * @return WorkflowId 所属工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置所属工作流id
                     * @param _workflowId 所属工作流id
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
                     * 获取任务名
                     * @return TaskName 任务名
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
                     * @param _taskName 任务名
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
                     * 获取层级，0表示当前任务
                     * @return Layer 层级，0表示当前任务
                     * 
                     */
                    int64_t GetLayer() const;

                    /**
                     * 设置层级，0表示当前任务
                     * @param _layer 层级，0表示当前任务
                     * 
                     */
                    void SetLayer(const int64_t& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取任务类型，-1表示跨流任务
                     * @return TaskTypeId 任务类型，-1表示跨流任务
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置任务类型，-1表示跨流任务
                     * @param _taskTypeId 任务类型，-1表示跨流任务
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
                     * 获取责任人
                     * @return InCharge 责任人
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
                     * @param _inCharge 责任人
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
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
                     * 获取所属工作流名称
                     * @return WorkflowName 所属工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置所属工作流名称
                     * @param _workflowName 所属工作流名称
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
                     * 获取调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleDesc 调度计划
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
                     * 获取当前用户对该资源的权限列表
CAN_MANAGE 有修改操作权限
NO_PERMISSION 无权限
                     * @return Privileges 当前用户对该资源的权限列表
CAN_MANAGE 有修改操作权限
NO_PERMISSION 无权限
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置当前用户对该资源的权限列表
CAN_MANAGE 有修改操作权限
NO_PERMISSION 无权限
                     * @param _privileges 当前用户对该资源的权限列表
CAN_MANAGE 有修改操作权限
NO_PERMISSION 无权限
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 所属工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 层级，0表示当前任务
                     */
                    int64_t m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型，-1表示跨流任务
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 责任人
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 所属工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 周期单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * 任务类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * 当前用户对该资源的权限列表
CAN_MANAGE 有修改操作权限
NO_PERMISSION 无权限
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUCCESSORTASKINFO_H_
