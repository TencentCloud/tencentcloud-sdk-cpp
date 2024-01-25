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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONETASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONETASKINFO_H_

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
                * 任务列表信息-项目克隆使用
                */
                class ProjectCloneTaskInfo : public AbstractModel
                {
                public:
                    ProjectCloneTaskInfo();
                    ~ProjectCloneTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
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
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取N-新建
NS-草稿
Y-运行
F-停止
O-冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus N-新建
NS-草稿
Y-运行
F-停止
O-冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置N-新建
NS-草稿
Y-运行
F-停止
O-冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus N-新建
NS-草稿
Y-运行
F-停止
O-冻结
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLatestSubmitTime 任务最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskLatestSubmitTime() const;

                    /**
                     * 设置任务最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLatestSubmitTime 任务最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLatestSubmitTime(const std::string& _taskLatestSubmitTime);

                    /**
                     * 判断参数 TaskLatestSubmitTime 是否已赋值
                     * @return TaskLatestSubmitTime 是否已赋值
                     * 
                     */
                    bool TaskLatestSubmitTimeHasBeenSet() const;

                    /**
                     * 获取原始资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalResourceGroup 原始资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalResourceGroup() const;

                    /**
                     * 设置原始资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalResourceGroup 原始资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalResourceGroup(const std::string& _originalResourceGroup);

                    /**
                     * 判断参数 OriginalResourceGroup 是否已赋值
                     * @return OriginalResourceGroup 是否已赋值
                     * 
                     */
                    bool OriginalResourceGroupHasBeenSet() const;

                    /**
                     * 获取目标资源组id（迁移使用），目前为 null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetResourceGroup 目标资源组id（迁移使用），目前为 null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetResourceGroup() const;

                    /**
                     * 设置目标资源组id（迁移使用），目前为 null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetResourceGroup 目标资源组id（迁移使用），目前为 null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetResourceGroup(const std::string& _targetResourceGroup);

                    /**
                     * 判断参数 TargetResourceGroup 是否已赋值
                     * @return TargetResourceGroup 是否已赋值
                     * 
                     */
                    bool TargetResourceGroupHasBeenSet() const;

                private:

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 任务id
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
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * N-新建
NS-草稿
Y-运行
F-停止
O-冻结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务最近一次提交时间（未提交则为 null）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskLatestSubmitTime;
                    bool m_taskLatestSubmitTimeHasBeenSet;

                    /**
                     * 原始资源组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalResourceGroup;
                    bool m_originalResourceGroupHasBeenSet;

                    /**
                     * 目标资源组id（迁移使用），目前为 null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetResourceGroup;
                    bool m_targetResourceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECTCLONETASKINFO_H_
