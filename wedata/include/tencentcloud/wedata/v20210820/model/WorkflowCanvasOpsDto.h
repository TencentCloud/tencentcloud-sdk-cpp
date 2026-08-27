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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/LinkOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 工作流画布详情
                */
                class WorkflowCanvasOpsDto : public AbstractModel
                {
                public:
                    WorkflowCanvasOpsDto();
                    ~WorkflowCanvasOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>工作流详情描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowDesc <p>工作流详情描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置<p>工作流详情描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowDesc <p>工作流详情描述</p>
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
                     * 获取<p>所属文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId <p>所属文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>所属文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId <p>所属文件夹id</p>
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
                     * 获取<p>所属文件夹ids</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderIds <p>所属文件夹ids</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFolderIds() const;

                    /**
                     * 设置<p>所属文件夹ids</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderIds <p>所属文件夹ids</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderIds(const std::vector<std::string>& _folderIds);

                    /**
                     * 判断参数 FolderIds 是否已赋值
                     * @return FolderIds 是否已赋值
                     * 
                     */
                    bool FolderIdsHasBeenSet() const;

                    /**
                     * 获取<p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskOpsDto> GetTasks() const;

                    /**
                     * 设置<p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<TaskOpsDto>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>任务依赖边列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Links <p>任务依赖边列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LinkOpsDto> GetLinks() const;

                    /**
                     * 设置<p>任务依赖边列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _links <p>任务依赖边列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinks(const std::vector<LinkOpsDto>& _links);

                    /**
                     * 判断参数 Links 是否已赋值
                     * @return Links 是否已赋值
                     * 
                     */
                    bool LinksHasBeenSet() const;

                    /**
                     * 获取<p>工作流所属用户分组id,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupId <p>工作流所属用户分组id,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置<p>工作流所属用户分组id,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupId <p>工作流所属用户分组id,若有多个分号隔开: a;b;c</p>
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
                     * 获取<p>工作流所属用户分组名称,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroupName <p>工作流所属用户分组名称,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroupName() const;

                    /**
                     * 设置<p>工作流所属用户分组名称,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroupName <p>工作流所属用户分组名称,若有多个分号隔开: a;b;c</p>
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
                     * 获取<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner <p>责任人</p>
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
                     * 获取<p>责任人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId <p>责任人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>责任人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId <p>责任人UserId</p>
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
                     * 获取<p>工作流类型，周期cycle，手动manual</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowType <p>工作流类型，周期cycle，手动manual</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置<p>工作流类型，周期cycle，手动manual</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowType <p>工作流类型，周期cycle，手动manual</p>
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
                     * <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流详情描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>所属文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>所属文件夹ids</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_folderIds;
                    bool m_folderIdsHasBeenSet;

                    /**
                     * <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskOpsDto> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>任务依赖边列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LinkOpsDto> m_links;
                    bool m_linksHasBeenSet;

                    /**
                     * <p>工作流所属用户分组id,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * <p>工作流所属用户分组名称,若有多个分号隔开: a;b;c</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroupName;
                    bool m_userGroupNameHasBeenSet;

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
                     * <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>责任人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * <p>工作流类型，周期cycle，手动manual</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWCANVASOPSDTO_H_
