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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYTASKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYTASKDTO_H_

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
                * 【项目克隆任务模式】依赖任务信息
                */
                class DependencyTaskDTO : public AbstractModel
                {
                public:
                    DependencyTaskDTO();
                    ~DependencyTaskDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已选任务id
                     * @return SelectedTaskId 已选任务id
                     * 
                     */
                    std::string GetSelectedTaskId() const;

                    /**
                     * 设置已选任务id
                     * @param _selectedTaskId 已选任务id
                     * 
                     */
                    void SetSelectedTaskId(const std::string& _selectedTaskId);

                    /**
                     * 判断参数 SelectedTaskId 是否已赋值
                     * @return SelectedTaskId 是否已赋值
                     * 
                     */
                    bool SelectedTaskIdHasBeenSet() const;

                    /**
                     * 获取已选任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedTaskName 已选任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelectedTaskName() const;

                    /**
                     * 设置已选任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectedTaskName 已选任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelectedTaskName(const std::string& _selectedTaskName);

                    /**
                     * 判断参数 SelectedTaskName 是否已赋值
                     * @return SelectedTaskName 是否已赋值
                     * 
                     */
                    bool SelectedTaskNameHasBeenSet() const;

                    /**
                     * 获取依赖任务id
                     * @return DependencyTaskId 依赖任务id
                     * 
                     */
                    std::string GetDependencyTaskId() const;

                    /**
                     * 设置依赖任务id
                     * @param _dependencyTaskId 依赖任务id
                     * 
                     */
                    void SetDependencyTaskId(const std::string& _dependencyTaskId);

                    /**
                     * 判断参数 DependencyTaskId 是否已赋值
                     * @return DependencyTaskId 是否已赋值
                     * 
                     */
                    bool DependencyTaskIdHasBeenSet() const;

                    /**
                     * 获取依赖任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTaskName 依赖任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTaskName() const;

                    /**
                     * 设置依赖任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTaskName 依赖任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTaskName(const std::string& _dependencyTaskName);

                    /**
                     * 判断参数 DependencyTaskName 是否已赋值
                     * @return DependencyTaskName 是否已赋值
                     * 
                     */
                    bool DependencyTaskNameHasBeenSet() const;

                    /**
                     * 获取依赖任务是否跨项目
                     * @return CrossProject 依赖任务是否跨项目
                     * 
                     */
                    bool GetCrossProject() const;

                    /**
                     * 设置依赖任务是否跨项目
                     * @param _crossProject 依赖任务是否跨项目
                     * 
                     */
                    void SetCrossProject(const bool& _crossProject);

                    /**
                     * 判断参数 CrossProject 是否已赋值
                     * @return CrossProject 是否已赋值
                     * 
                     */
                    bool CrossProjectHasBeenSet() const;

                    /**
                     * 获取依赖任务对应项目id
                     * @return DependencyProjectId 依赖任务对应项目id
                     * 
                     */
                    std::string GetDependencyProjectId() const;

                    /**
                     * 设置依赖任务对应项目id
                     * @param _dependencyProjectId 依赖任务对应项目id
                     * 
                     */
                    void SetDependencyProjectId(const std::string& _dependencyProjectId);

                    /**
                     * 判断参数 DependencyProjectId 是否已赋值
                     * @return DependencyProjectId 是否已赋值
                     * 
                     */
                    bool DependencyProjectIdHasBeenSet() const;

                    /**
                     * 获取依赖任务对应项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyProjectName 依赖任务对应项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyProjectName() const;

                    /**
                     * 设置依赖任务对应项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyProjectName 依赖任务对应项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyProjectName(const std::string& _dependencyProjectName);

                    /**
                     * 判断参数 DependencyProjectName 是否已赋值
                     * @return DependencyProjectName 是否已赋值
                     * 
                     */
                    bool DependencyProjectNameHasBeenSet() const;

                    /**
                     * 获取依赖任务虚拟标识
                     * @return DependencyTaskVirtualFlag 依赖任务虚拟标识
                     * 
                     */
                    bool GetDependencyTaskVirtualFlag() const;

                    /**
                     * 设置依赖任务虚拟标识
                     * @param _dependencyTaskVirtualFlag 依赖任务虚拟标识
                     * 
                     */
                    void SetDependencyTaskVirtualFlag(const bool& _dependencyTaskVirtualFlag);

                    /**
                     * 判断参数 DependencyTaskVirtualFlag 是否已赋值
                     * @return DependencyTaskVirtualFlag 是否已赋值
                     * 
                     */
                    bool DependencyTaskVirtualFlagHasBeenSet() const;

                    /**
                     * 获取边依赖标识
                     * @return LinkDependency 边依赖标识
                     * 
                     */
                    bool GetLinkDependency() const;

                    /**
                     * 设置边依赖标识
                     * @param _linkDependency 边依赖标识
                     * 
                     */
                    void SetLinkDependency(const bool& _linkDependency);

                    /**
                     * 判断参数 LinkDependency 是否已赋值
                     * @return LinkDependency 是否已赋值
                     * 
                     */
                    bool LinkDependencyHasBeenSet() const;

                    /**
                     * 获取已选任务虚拟标识
                     * @return SelectedTaskVirtualFlag 已选任务虚拟标识
                     * 
                     */
                    bool GetSelectedTaskVirtualFlag() const;

                    /**
                     * 设置已选任务虚拟标识
                     * @param _selectedTaskVirtualFlag 已选任务虚拟标识
                     * 
                     */
                    void SetSelectedTaskVirtualFlag(const bool& _selectedTaskVirtualFlag);

                    /**
                     * 判断参数 SelectedTaskVirtualFlag 是否已赋值
                     * @return SelectedTaskVirtualFlag 是否已赋值
                     * 
                     */
                    bool SelectedTaskVirtualFlagHasBeenSet() const;

                    /**
                     * 获取依赖任务工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyTaskWorkflowName 依赖任务工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependencyTaskWorkflowName() const;

                    /**
                     * 设置依赖任务工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyTaskWorkflowName 依赖任务工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyTaskWorkflowName(const std::string& _dependencyTaskWorkflowName);

                    /**
                     * 判断参数 DependencyTaskWorkflowName 是否已赋值
                     * @return DependencyTaskWorkflowName 是否已赋值
                     * 
                     */
                    bool DependencyTaskWorkflowNameHasBeenSet() const;

                private:

                    /**
                     * 已选任务id
                     */
                    std::string m_selectedTaskId;
                    bool m_selectedTaskIdHasBeenSet;

                    /**
                     * 已选任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selectedTaskName;
                    bool m_selectedTaskNameHasBeenSet;

                    /**
                     * 依赖任务id
                     */
                    std::string m_dependencyTaskId;
                    bool m_dependencyTaskIdHasBeenSet;

                    /**
                     * 依赖任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTaskName;
                    bool m_dependencyTaskNameHasBeenSet;

                    /**
                     * 依赖任务是否跨项目
                     */
                    bool m_crossProject;
                    bool m_crossProjectHasBeenSet;

                    /**
                     * 依赖任务对应项目id
                     */
                    std::string m_dependencyProjectId;
                    bool m_dependencyProjectIdHasBeenSet;

                    /**
                     * 依赖任务对应项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyProjectName;
                    bool m_dependencyProjectNameHasBeenSet;

                    /**
                     * 依赖任务虚拟标识
                     */
                    bool m_dependencyTaskVirtualFlag;
                    bool m_dependencyTaskVirtualFlagHasBeenSet;

                    /**
                     * 边依赖标识
                     */
                    bool m_linkDependency;
                    bool m_linkDependencyHasBeenSet;

                    /**
                     * 已选任务虚拟标识
                     */
                    bool m_selectedTaskVirtualFlag;
                    bool m_selectedTaskVirtualFlagHasBeenSet;

                    /**
                     * 依赖任务工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyTaskWorkflowName;
                    bool m_dependencyTaskWorkflowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYTASKDTO_H_
