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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskLinkDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 工作流信息
                */
                class WorkflowDsDTO : public AbstractModel
                {
                public:
                    WorkflowDsDTO();
                    ~WorkflowDsDTO() = default;
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
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId 责任人ID
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
                     * 获取工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowDesc 工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowDesc 工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

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
                     * 获取SparkSQL参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkParams SparkSQL参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkParams() const;

                    /**
                     * 设置SparkSQL参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkParams SparkSQL参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkParams(const std::string& _sparkParams);

                    /**
                     * 判断参数 SparkParams 是否已赋值
                     * @return SparkParams 是否已赋值
                     * 
                     */
                    bool SparkParamsHasBeenSet() const;

                    /**
                     * 获取任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDsDTO> GetTasks() const;

                    /**
                     * 设置任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 任务列表
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
                     * 获取任务链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Links 任务链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskLinkDsDTO> GetLinks() const;

                    /**
                     * 设置任务链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _links 任务链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinks(const std::vector<TaskLinkDsDTO>& _links);

                    /**
                     * 判断参数 Links 是否已赋值
                     * @return Links 是否已赋值
                     * 
                     */
                    bool LinksHasBeenSet() const;

                    /**
                     * 获取参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskDsDto> GetParams() const;

                    /**
                     * 设置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 参数列表
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
                     * 获取工作流类型, 取值示例

- cycle 周期工作流
- manual 手动工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowType 工作流类型, 取值示例

- cycle 周期工作流
- manual 手动工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置工作流类型, 取值示例

- cycle 周期工作流
- manual 手动工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowType 工作流类型, 取值示例

- cycle 周期工作流
- manual 手动工作流
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

                private:

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

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
                     * 工作流描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * SparkSQL参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkParams;
                    bool m_sparkParamsHasBeenSet;

                    /**
                     * 任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDsDTO> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 任务链接列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLinkDsDTO> m_links;
                    bool m_linksHasBeenSet;

                    /**
                     * 参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskDsDto> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 工作流类型, 取值示例

- cycle 周期工作流
- manual 手动工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWDSDTO_H_
