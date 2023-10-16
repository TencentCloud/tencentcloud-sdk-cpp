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
                     * 获取文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 文件夹id
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 文件夹名称
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
                     * 获取所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 所属项目id
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取父文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentsFolderId 父文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentsFolderId() const;

                    /**
                     * 设置父文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentsFolderId 父文件夹id
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
                     * 获取工作流总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 工作流总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置工作流总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 工作流总数
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
                     * 获取工作流列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Workflows 工作流列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowCanvasOpsDto> GetWorkflows() const;

                    /**
                     * 设置工作流列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflows 工作流列表
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
                     * 获取子文件夹总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalFolders 子文件夹总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalFolders() const;

                    /**
                     * 设置子文件夹总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalFolders 子文件夹总数
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
                     * 获取子文件夹列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Folders 子文件夹列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FolderDsDto> GetFolders() const;

                    /**
                     * 设置子文件夹列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folders 子文件夹列表
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
                     * 获取搜索类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FindType 搜索类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFindType() const;

                    /**
                     * 设置搜索类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _findType 搜索类型
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

                private:

                    /**
                     * 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 父文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentsFolderId;
                    bool m_parentsFolderIdHasBeenSet;

                    /**
                     * 工作流总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 工作流列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowCanvasOpsDto> m_workflows;
                    bool m_workflowsHasBeenSet;

                    /**
                     * 子文件夹总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalFolders;
                    bool m_totalFoldersHasBeenSet;

                    /**
                     * 子文件夹列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FolderDsDto> m_folders;
                    bool m_foldersHasBeenSet;

                    /**
                     * 搜索类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_findType;
                    bool m_findTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FOLDERDSDTO_H_
