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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Tag.h>
#include <tencentcloud/databuddy/v20260715/model/Owner.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 特征表定义
                */
                class FeatureTable : public AbstractModel
                {
                public:
                    FeatureTable();
                    ~FeatureTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名称
                     * @return Name 表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
                     * @param _name 表名称
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
                     * 获取全称
                     * @return FullName 全称
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置全称
                     * @param _fullName 全称
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取资产描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 资产描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置资产描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 资产描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取修改时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 修改时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 修改时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间，iso8601格式
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
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Owner GetOwner() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const Owner& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取资产ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetGuid 资产ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置资产ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetGuid 资产ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                private:

                    /**
                     * 表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 全称
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 资产描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 修改时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 创建时间，iso8601格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Owner m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 资产ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FEATURETABLE_H_
