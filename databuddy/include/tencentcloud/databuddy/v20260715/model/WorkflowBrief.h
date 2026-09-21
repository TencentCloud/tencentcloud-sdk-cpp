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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowRunBrief.h>
#include <tencentcloud/databuddy/v20260715/model/ResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作流列表项
                */
                class WorkflowBrief : public AbstractModel
                {
                public:
                    WorkflowBrief();
                    ~WorkflowBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>工作流ID</p>
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin <p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin <p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>工作流负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserName <p>工作流负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置<p>工作流负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserName <p>工作流负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取<p>工作流负责人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserUin <p>工作流负责人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserUin() const;

                    /**
                     * 设置<p>工作流负责人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserUin <p>工作流负责人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserUin(const std::string& _ownerUserUin);

                    /**
                     * 判断参数 OwnerUserUin 是否已赋值
                     * @return OwnerUserUin 是否已赋值
                     * 
                     */
                    bool OwnerUserUinHasBeenSet() const;

                    /**
                     * 获取<p>工作流负责人展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerDisplayName <p>工作流负责人展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerDisplayName() const;

                    /**
                     * 设置<p>工作流负责人展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerDisplayName <p>工作流负责人展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerDisplayName(const std::string& _ownerDisplayName);

                    /**
                     * 判断参数 OwnerDisplayName 是否已赋值
                     * @return OwnerDisplayName 是否已赋值
                     * 
                     */
                    bool OwnerDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，单位：毫秒时间戳</p>
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
                     * 获取<p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间，单位：毫秒时间戳</p>
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
                     * 获取<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelList <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelList <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trigger <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTriggerConfiguration> GetTrigger() const;

                    /**
                     * 设置<p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trigger <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrigger(const std::vector<WorkflowTriggerConfiguration>& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserUin <p>工作流运行人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置<p>工作流运行人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserUin <p>工作流运行人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunUserName <p>工作流运行人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunUserName() const;

                    /**
                     * 设置<p>工作流运行人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runUserName <p>工作流运行人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunUserName(const std::string& _runUserName);

                    /**
                     * 判断参数 RunUserName 是否已赋值
                     * @return RunUserName 是否已赋值
                     * 
                     */
                    bool RunUserNameHasBeenSet() const;

                    /**
                     * 获取<p>工作流任务节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskList <p>工作流任务节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTaskNodeBrief> GetTaskList() const;

                    /**
                     * 设置<p>工作流任务节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskList <p>工作流任务节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskList(const std::vector<WorkflowTaskNodeBrief>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>工作流运行情况列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunList <p>工作流运行情况列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowRunBrief> GetWorkflowRunList() const;

                    /**
                     * 设置<p>工作流运行情况列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunList <p>工作流运行情况列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRunList(const std::vector<WorkflowRunBrief>& _workflowRunList);

                    /**
                     * 判断参数 WorkflowRunList 是否已赋值
                     * @return WorkflowRunList 是否已赋值
                     * 
                     */
                    bool WorkflowRunListHasBeenSet() const;

                    /**
                     * 获取<p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupInfoList <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetResourceGroupInfoList() const;

                    /**
                     * 设置<p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupInfoList <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupInfoList(const std::vector<ResourceGroupInfo>& _resourceGroupInfoList);

                    /**
                     * 判断参数 ResourceGroupInfoList 是否已赋值
                     * @return ResourceGroupInfoList 是否已赋值
                     * 
                     */
                    bool ResourceGroupInfoListHasBeenSet() const;

                    /**
                     * 获取<p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>工作流绑定的 Bundle 唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>工作流绑定的 Bundle 唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>工作流绑定的 Bundle 唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>工作流绑定的 Bundle 唯一标识，未绑定时为空</p>
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
                     * 获取<p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>Bundle信息</p>
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
                     * 获取<p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitConfigId <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGitConfigId() const;

                    /**
                     * 设置<p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitConfigId <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitConfigId(const std::string& _gitConfigId);

                    /**
                     * 判断参数 GitConfigId 是否已赋值
                     * @return GitConfigId 是否已赋值
                     * 
                     */
                    bool GitConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitBranch <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置<p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitBranch <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     * 
                     */
                    bool GitBranchHasBeenSet() const;

                private:

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>工作流ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>工作流负责人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * <p>工作流负责人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserUin;
                    bool m_ownerUserUinHasBeenSet;

                    /**
                     * <p>工作流负责人展示名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerDisplayName;
                    bool m_ownerDisplayNameHasBeenSet;

                    /**
                     * <p>创建时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTriggerConfiguration> m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>工作流运行人UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * <p>工作流运行人用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runUserName;
                    bool m_runUserNameHasBeenSet;

                    /**
                     * <p>工作流任务节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTaskNodeBrief> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>工作流运行情况列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowRunBrief> m_workflowRunList;
                    bool m_workflowRunListHasBeenSet;

                    /**
                     * <p>资源组信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceGroupInfo> m_resourceGroupInfoList;
                    bool m_resourceGroupInfoListHasBeenSet;

                    /**
                     * <p>授权权限类型<br>PERMISSION_TYPE_UNSPECIFIED：未指定权限<br>MANAGE : 管理权限：包含所有操作权限<br>RUN : 运行权限：可执行实体<br>VIEW : 查看权限：可查看实体内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>工作流绑定的 Bundle 唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gitConfigId;
                    bool m_gitConfigIdHasBeenSet;

                    /**
                     * <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBRIEF_H_
