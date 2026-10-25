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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VOLUME_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 数据卷信息
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>catalog信息</p>
                     * @return CatalogName <p>catalog信息</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>catalog信息</p>
                     * @param _catalogName <p>catalog信息</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>schema 信息</p>
                     * @return SchemaName <p>schema 信息</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema 信息</p>
                     * @param _schemaName <p>schema 信息</p>
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>模型描述</p>
                     * @return Comment <p>模型描述</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>模型描述</p>
                     * @param _comment <p>模型描述</p>
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
                     * 获取<p>存储位置</p>
                     * @return StorageLocation <p>存储位置</p>
                     * 
                     */
                    std::string GetStorageLocation() const;

                    /**
                     * 设置<p>存储位置</p>
                     * @param _storageLocation <p>存储位置</p>
                     * 
                     */
                    void SetStorageLocation(const std::string& _storageLocation);

                    /**
                     * 判断参数 StorageLocation 是否已赋值
                     * @return StorageLocation 是否已赋值
                     * 
                     */
                    bool StorageLocationHasBeenSet() const;

                    /**
                     * 获取<p>扩展数据</p>
                     * @return Properties <p>扩展数据</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>扩展数据</p>
                     * @param _properties <p>扩展数据</p>
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
                     * 获取<p>审计数据</p>
                     * @return Audit <p>审计数据</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>审计数据</p>
                     * @param _audit <p>审计数据</p>
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
                     * 获取数据卷类型，取值：MANAGED(内部管理)、EXTERNAL(外部存储)
                     * @return Type 数据卷类型，取值：MANAGED(内部管理)、EXTERNAL(外部存储)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据卷类型，取值：MANAGED(内部管理)、EXTERNAL(外部存储)
                     * @param _type 数据卷类型，取值：MANAGED(内部管理)、EXTERNAL(外部存储)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>责任人信息</p>
                     * @return MetaOwner <p>责任人信息</p>
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置<p>责任人信息</p>
                     * @param _metaOwner <p>责任人信息</p>
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
                     * 获取<p>资产全局唯一ID</p>
                     * @return AssetGuid <p>资产全局唯一ID</p>
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>资产全局唯一ID</p>
                     * @param _assetGuid <p>资产全局唯一ID</p>
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
                     * 获取<p>当前用户对该实体的权限信息</p>
                     * @return PermissionDetail <p>当前用户对该实体的权限信息</p>
                     * 
                     */
                    PermissionDetail GetPermissionDetail() const;

                    /**
                     * 设置<p>当前用户对该实体的权限信息</p>
                     * @param _permissionDetail <p>当前用户对该实体的权限信息</p>
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
                     * 获取<p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置<p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
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
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>catalog信息</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>schema 信息</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>模型描述</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>存储位置</p>
                     */
                    std::string m_storageLocation;
                    bool m_storageLocationHasBeenSet;

                    /**
                     * <p>扩展数据</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>审计数据</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * 数据卷类型，取值：MANAGED(内部管理)、EXTERNAL(外部存储)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>责任人信息</p>
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * <p>资产全局唯一ID</p>
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>当前用户对该实体的权限信息</p>
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * <p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_VOLUME_H_
