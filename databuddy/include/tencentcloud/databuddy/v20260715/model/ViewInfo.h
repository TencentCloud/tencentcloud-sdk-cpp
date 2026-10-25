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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VIEWINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ColumnInfo.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
#include <tencentcloud/databuddy/v20260715/model/PermissionDetail.h>
#include <tencentcloud/databuddy/v20260715/model/CommonTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 视图信息
                */
                class ViewInfo : public AbstractModel
                {
                public:
                    ViewInfo();
                    ~ViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 表名称
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
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 描述
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
                     * 获取字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ColumnInfo> GetColumns() const;

                    /**
                     * 设置字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<ColumnInfo>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取属性值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 属性值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置属性值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 属性值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Audit 编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audit 编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取owner信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaOwner owner信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置owner信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaOwner owner信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaOwner(const MetaOwner& _metaOwner);

                    /**
                     * 判断参数 MetaOwner 是否已赋值
                     * @return MetaOwner 是否已赋值
                     * 
                     */
                    bool MetaOwnerHasBeenSet() const;

                    /**
                     * 获取资产全局唯一ID
                     * @return AssetGuid 资产全局唯一ID
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置资产全局唯一ID
                     * @param _assetGuid 资产全局唯一ID
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                    /**
                     * 获取当前用户对该实体的权限信息
                     * @return PermissionDetail 当前用户对该实体的权限信息
                     * 
                     */
                    PermissionDetail GetPermissionDetail() const;

                    /**
                     * 设置当前用户对该实体的权限信息
                     * @param _permissionDetail 当前用户对该实体的权限信息
                     * 
                     */
                    void SetPermissionDetail(const PermissionDetail& _permissionDetail);

                    /**
                     * 判断参数 PermissionDetail 是否已赋值
                     * @return PermissionDetail 是否已赋值
                     * 
                     */
                    bool PermissionDetailHasBeenSet() const;

                    /**
                     * 获取标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<CommonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 属性值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * owner信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * 资产全局唯一ID
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * 当前用户对该实体的权限信息
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * 标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VIEWINFO_H_
