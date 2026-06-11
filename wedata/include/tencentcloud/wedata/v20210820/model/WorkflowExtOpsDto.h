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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_

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
                * 工作流
                */
                class WorkflowExtOpsDto : public AbstractModel
                {
                public:
                    WorkflowExtOpsDto();
                    ~WorkflowExtOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务数量count</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCount <p>任务数量count</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置<p>任务数量count</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCount <p>任务数量count</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName <p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置<p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderName <p>文件名</p>
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
                     * 获取<p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowId <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置<p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowId <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

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
                     * 获取<p>责任人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId <p>责任人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置<p>责任人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId <p>责任人userId</p>
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
                     * 获取<p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowDesc <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowDesc() const;

                    /**
                     * 设置<p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowDesc <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowDesc(const std::string& _workFlowDesc);

                    /**
                     * 判断参数 WorkFlowDesc 是否已赋值
                     * @return WorkFlowDesc 是否已赋值
                     * 
                     */
                    bool WorkFlowDescHasBeenSet() const;

                    /**
                     * 获取<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowName() const;

                    /**
                     * 设置<p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowName <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowName(const std::string& _workFlowName);

                    /**
                     * 判断参数 WorkFlowName 是否已赋值
                     * @return WorkFlowName 是否已赋值
                     * 
                     */
                    bool WorkFlowNameHasBeenSet() const;

                    /**
                     * 获取<p>工作流文件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId <p>工作流文件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置<p>工作流文件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId <p>工作流文件id</p>
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
                     * 获取<p>工作流状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>工作流状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>工作流状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>工作流状态</p>
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
                     * 获取<p>工作流创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>工作流创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>工作流创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>工作流创建时间</p>
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
                     * 获取<p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime <p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime <p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyUser <p>最近更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyUser() const;

                    /**
                     * 设置<p>最近更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyUser <p>最近更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyUser(const std::string& _modifyUser);

                    /**
                     * 判断参数 ModifyUser 是否已赋值
                     * @return ModifyUser 是否已赋值
                     * 
                     */
                    bool ModifyUserHasBeenSet() const;

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
                     * 获取<p>bundle客户端绑定唯一id</p>
                     * @return BundleId <p>bundle客户端绑定唯一id</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>bundle客户端绑定唯一id</p>
                     * @param _bundleId <p>bundle客户端绑定唯一id</p>
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
                     * 获取<p>bundle客户端扩展信息，json格式</p>
                     * @return BundleInfo <p>bundle客户端扩展信息，json格式</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>bundle客户端扩展信息，json格式</p>
                     * @param _bundleInfo <p>bundle客户端扩展信息，json格式</p>
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
                     * 获取<p>引用该手动工作流的嵌套工作流任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NestedBySpTaskIds <p>引用该手动工作流的嵌套工作流任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNestedBySpTaskIds() const;

                    /**
                     * 设置<p>引用该手动工作流的嵌套工作流任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nestedBySpTaskIds <p>引用该手动工作流的嵌套工作流任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNestedBySpTaskIds(const std::vector<std::string>& _nestedBySpTaskIds);

                    /**
                     * 判断参数 NestedBySpTaskIds 是否已赋值
                     * @return NestedBySpTaskIds 是否已赋值
                     * 
                     */
                    bool NestedBySpTaskIdsHasBeenSet() const;

                private:

                    /**
                     * <p>任务数量count</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * <p>文件名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * <p>工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>责任人userId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

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
                     * <p>工作流描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowDesc;
                    bool m_workFlowDescHasBeenSet;

                    /**
                     * <p>工作流名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowName;
                    bool m_workFlowNameHasBeenSet;

                    /**
                     * <p>工作流文件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * <p>工作流状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>工作流创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>最近更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyUser;
                    bool m_modifyUserHasBeenSet;

                    /**
                     * <p>工作流类型，周期cycle，手动manual</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * <p>bundle客户端绑定唯一id</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>bundle客户端扩展信息，json格式</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>引用该手动工作流的嵌套工作流任务ID列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nestedBySpTaskIds;
                    bool m_nestedBySpTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWEXTOPSDTO_H_
