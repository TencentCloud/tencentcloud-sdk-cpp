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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/DependOnBrief.h>
#include <tencentcloud/databuddy/v20260715/model/TaskRetryStrategy.h>
#include <tencentcloud/databuddy/v20260715/model/AdvancedDependencyConfig.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流列表项中的工作流任务节点简要信息
                */
                class WorkflowTaskNodeBrief : public AbstractModel
                {
                public:
                    WorkflowTaskNodeBrief();
                    ~WorkflowTaskNodeBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTypeName 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskTypeName 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取任务依赖列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnList 任务依赖列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependOnBrief> GetDependOnList() const;

                    /**
                     * 设置任务依赖列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnList 任务依赖列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnList(const std::vector<DependOnBrief>& _dependOnList);

                    /**
                     * 判断参数 DependOnList 是否已赋值
                     * @return DependOnList 是否已赋值
                     * 
                     */
                    bool DependOnListHasBeenSet() const;

                    /**
                     * 获取任务资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 任务资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置任务资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 任务资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取任务资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 任务资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置任务资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 任务资源组名称
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
                     * 获取任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftCoordinate 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLeftCoordinate() const;

                    /**
                     * 设置任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leftCoordinate 任务X坐标
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
                     * 获取任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopCoordinate 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTopCoordinate() const;

                    /**
                     * 设置任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topCoordinate 任务Y坐标
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
                     * 获取任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRetryStrategy 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskRetryStrategy GetTaskRetryStrategy() const;

                    /**
                     * 设置任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRetryStrategy 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRetryStrategy(const TaskRetryStrategy& _taskRetryStrategy);

                    /**
                     * 判断参数 TaskRetryStrategy 是否已赋值
                     * @return TaskRetryStrategy 是否已赋值
                     * 
                     */
                    bool TaskRetryStrategyHasBeenSet() const;

                    /**
                     * 获取依赖运行条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependOnRunCondition 依赖运行条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependOnRunCondition() const;

                    /**
                     * 设置依赖运行条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependOnRunCondition 依赖运行条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependOnRunCondition(const std::string& _dependOnRunCondition);

                    /**
                     * 判断参数 DependOnRunCondition 是否已赋值
                     * @return DependOnRunCondition 是否已赋值
                     * 
                     */
                    bool DependOnRunConditionHasBeenSet() const;

                    /**
                     * 获取高级依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedDependencyConfig 高级依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedDependencyConfig GetAdvancedDependencyConfig() const;

                    /**
                     * 设置高级依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedDependencyConfig 高级依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig);

                    /**
                     * 判断参数 AdvancedDependencyConfig 是否已赋值
                     * @return AdvancedDependencyConfig 是否已赋值
                     * 
                     */
                    bool AdvancedDependencyConfigHasBeenSet() const;

                    /**
                     * 获取内嵌工作流任务节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTask 内嵌工作流任务节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowTaskNodeBrief GetInnerTask() const;

                    /**
                     * 设置内嵌工作流任务节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTask 内嵌工作流任务节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTask(const WorkflowTaskNodeBrief& _innerTask);

                    /**
                     * 判断参数 InnerTask 是否已赋值
                     * @return InnerTask 是否已赋值
                     * 
                     */
                    bool InnerTaskHasBeenSet() const;

                private:

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

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
                     * 任务类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * 任务依赖列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependOnBrief> m_dependOnList;
                    bool m_dependOnListHasBeenSet;

                    /**
                     * 任务资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 任务资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 任务X坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_leftCoordinate;
                    bool m_leftCoordinateHasBeenSet;

                    /**
                     * 任务Y坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_topCoordinate;
                    bool m_topCoordinateHasBeenSet;

                    /**
                     * 任务重试策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskRetryStrategy m_taskRetryStrategy;
                    bool m_taskRetryStrategyHasBeenSet;

                    /**
                     * 依赖运行条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependOnRunCondition;
                    bool m_dependOnRunConditionHasBeenSet;

                    /**
                     * 高级依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedDependencyConfig m_advancedDependencyConfig;
                    bool m_advancedDependencyConfigHasBeenSet;

                    /**
                     * 内嵌工作流任务节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowTaskNodeBrief m_innerTask;
                    bool m_innerTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWTASKNODEBRIEF_H_
