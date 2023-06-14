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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_

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
                * 工作流信息
                */
                class Workflow : public AbstractModel
                {
                public:
                    Workflow();
                    ~Workflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
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
                     * 获取责任人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId 责任人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置责任人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId 责任人Id
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
                     * 获取项目标识
                     * @return ProjectIdent 项目标识
                     * 
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标识
                     * @param _projectIdent 项目标识
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
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowDesc 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowDesc 备注
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
                     * @return WorkflowName 工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
                     * @param _workflowName 工作流名称
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
                     * 获取所属文件夹id
                     * @return FolderId 所属文件夹id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置所属文件夹id
                     * @param _folderId 所属文件夹id
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
                     * 获取工作流所属用户分组id 若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupId 工作流所属用户分组id 若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置工作流所属用户分组id 若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupId 工作流所属用户分组id 若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取工作流所属用户分组名称  若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupName 工作流所属用户分组名称  若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置工作流所属用户分组名称  若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupName 工作流所属用户分组名称  若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroupName(const std::string& _userGroupName);

                    /**
                     * 判断参数 UserGroupName 是否已赋值
                     * @return UserGroupName 是否已赋值
                     * 
                     */
                    bool UserGroupNameHasBeenSet() const;

                private:

                    /**
                     * 工作流id
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
                     * 责任人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标识
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 所属文件夹id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 工作流所属用户分组id 若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * 工作流所属用户分组名称  若有多个,分号隔开: a;b;c
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOW_H_
