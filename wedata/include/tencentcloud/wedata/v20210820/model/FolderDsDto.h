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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDERDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDERDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/WorkflowCanvasOpsDto.h>
#include <tencentcloud/wedata/v20210820/model/FolderDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 文件夹属性
                */
                class FolderDsDto : public AbstractModel
                {
                public:
                    FolderDsDto();
                    ~FolderDsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>所属项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>所属项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>所属项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>所属项目id</p>
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
                     * 获取<p>父文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentsFolderId <p>父文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置<p>父文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentsFolderId <p>父文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentsFolderId(const std::string& _parentsFolderId);

                    /**
                     * 判断参数 ParentsFolderId 是否已赋值
                     * @return ParentsFolderId 是否已赋值
                     * 
                     */
                    bool ParentsFolderIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>工作流总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>工作流总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>工作流总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>工作流列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workflows <p>工作流列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowCanvasOpsDto> GetWorkflows() const;

                    /**
                     * 设置<p>工作流列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflows <p>工作流列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflows(const std::vector<WorkflowCanvasOpsDto>& _workflows);

                    /**
                     * 判断参数 Workflows 是否已赋值
                     * @return Workflows 是否已赋值
                     * 
                     */
                    bool WorkflowsHasBeenSet() const;

                    /**
                     * 获取<p>子文件夹总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalFolders <p>子文件夹总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalFolders() const;

                    /**
                     * 设置<p>子文件夹总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalFolders <p>子文件夹总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalFolders(const int64_t& _totalFolders);

                    /**
                     * 判断参数 TotalFolders 是否已赋值
                     * @return TotalFolders 是否已赋值
                     * 
                     */
                    bool TotalFoldersHasBeenSet() const;

                    /**
                     * 获取<p>子文件夹列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Folders <p>子文件夹列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FolderDsDto> GetFolders() const;

                    /**
                     * 设置<p>子文件夹列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folders <p>子文件夹列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolders(const std::vector<FolderDsDto>& _folders);

                    /**
                     * 判断参数 Folders 是否已赋值
                     * @return Folders 是否已赋值
                     * 
                     */
                    bool FoldersHasBeenSet() const;

                    /**
                     * 获取<p>搜索类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FindType <p>搜索类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFindType() const;

                    /**
                     * 设置<p>搜索类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _findType <p>搜索类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFindType(const std::string& _findType);

                    /**
                     * 判断参数 FindType 是否已赋值
                     * @return FindType 是否已赋值
                     * 
                     */
                    bool FindTypeHasBeenSet() const;

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
                     * <p>文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>文件夹名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>父文件夹id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * <p>工作流总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>工作流列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowCanvasOpsDto> m_workflows;
                    bool m_workflowsHasBeenSet;

                    /**
                     * <p>子文件夹总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalFolders;
                    bool m_totalFoldersHasBeenSet;

                    /**
                     * <p>子文件夹列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FolderDsDto> m_folders;
                    bool m_foldersHasBeenSet;

                    /**
                     * <p>搜索类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_findType;
                    bool m_findTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDERDSDTO_H_
