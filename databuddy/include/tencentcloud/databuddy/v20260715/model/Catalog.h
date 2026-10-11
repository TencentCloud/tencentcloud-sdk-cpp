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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
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
                * 数据目录实体结构
                */
                class Catalog : public AbstractModel
                {
                public:
                    Catalog();
                    ~Catalog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据目录唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>数据目录唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>数据目录唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>数据目录唯一id</p>
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
                     * 获取<p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>数据目录名称</p>
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
                     * 获取<p>数据目录类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>数据目录类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据目录类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>数据目录类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>数据目录描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>数据目录描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>数据目录描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>数据目录描述信息</p>
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
                     * 获取<p>状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5</p>
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
                     * 获取<p>数据目录属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>数据目录属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>数据目录属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>数据目录属性</p>
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
                     * 获取<p>操作人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator <p>操作人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator <p>操作人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>责任人信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaOwner <p>责任人信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置<p>责任人信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaOwner <p>责任人信息</p>
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
                     * 获取<p>审计信息</p>
                     * @return Audit <p>审计信息</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>审计信息</p>
                     * @param _audit <p>审计信息</p>
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
                     * 获取<p>当前workspace权限级别，取值对应PermissionLevel，0-无权限，1-只读，2-读写</p>
                     * @return CurrentWorkspacePermissionLevel <p>当前workspace权限级别，取值对应PermissionLevel，0-无权限，1-只读，2-读写</p>
                     * 
                     */
                    int64_t GetCurrentWorkspacePermissionLevel() const;

                    /**
                     * 设置<p>当前workspace权限级别，取值对应PermissionLevel，0-无权限，1-只读，2-读写</p>
                     * @param _currentWorkspacePermissionLevel <p>当前workspace权限级别，取值对应PermissionLevel，0-无权限，1-只读，2-读写</p>
                     * 
                     */
                    void SetCurrentWorkspacePermissionLevel(const int64_t& _currentWorkspacePermissionLevel);

                    /**
                     * 判断参数 CurrentWorkspacePermissionLevel 是否已赋值
                     * @return CurrentWorkspacePermissionLevel 是否已赋值
                     * 
                     */
                    bool CurrentWorkspacePermissionLevelHasBeenSet() const;

                    /**
                     * 获取<p>tccatalog属性中的tccatalog.identifier</p>
                     * @return Identifier <p>tccatalog属性中的tccatalog.identifier</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>tccatalog属性中的tccatalog.identifier</p>
                     * @param _identifier <p>tccatalog属性中的tccatalog.identifier</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

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
                     * 获取<p>是否为外部数据目录（基于数据源连接创建的Catalog，如MYSQL、EMR_HIVE、TCHOUSE_D、POSTGRESQL、DLC等）。true:外部目录, false:内置目录（TABLE/MODEL/VOLUME）</p>
                     * @return IsExternal <p>是否为外部数据目录（基于数据源连接创建的Catalog，如MYSQL、EMR_HIVE、TCHOUSE_D、POSTGRESQL、DLC等）。true:外部目录, false:内置目录（TABLE/MODEL/VOLUME）</p>
                     * 
                     */
                    bool GetIsExternal() const;

                    /**
                     * 设置<p>是否为外部数据目录（基于数据源连接创建的Catalog，如MYSQL、EMR_HIVE、TCHOUSE_D、POSTGRESQL、DLC等）。true:外部目录, false:内置目录（TABLE/MODEL/VOLUME）</p>
                     * @param _isExternal <p>是否为外部数据目录（基于数据源连接创建的Catalog，如MYSQL、EMR_HIVE、TCHOUSE_D、POSTGRESQL、DLC等）。true:外部目录, false:内置目录（TABLE/MODEL/VOLUME）</p>
                     * 
                     */
                    void SetIsExternal(const bool& _isExternal);

                    /**
                     * 判断参数 IsExternal 是否已赋值
                     * @return IsExternal 是否已赋值
                     * 
                     */
                    bool IsExternalHasBeenSet() const;

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

                    /**
                     * 获取<p>数据目录来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogSource <p>数据目录来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>数据目录来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogSource <p>数据目录来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                    /**
                     * 获取<p>连接侧数据目录名或数据库名（仅分析版三段式数据源有值，二段式数据源为空字符串）。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源：external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源：databaseName；MySQL 等二段式数据源：空字符串。注意：此字段仅分析版（CatalogSource=CONNECTION）有效，专业版（METALAKE）不填充。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionCatalogName <p>连接侧数据目录名或数据库名（仅分析版三段式数据源有值，二段式数据源为空字符串）。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源：external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源：databaseName；MySQL 等二段式数据源：空字符串。注意：此字段仅分析版（CatalogSource=CONNECTION）有效，专业版（METALAKE）不填充。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectionCatalogName() const;

                    /**
                     * 设置<p>连接侧数据目录名或数据库名（仅分析版三段式数据源有值，二段式数据源为空字符串）。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源：external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源：databaseName；MySQL 等二段式数据源：空字符串。注意：此字段仅分析版（CatalogSource=CONNECTION）有效，专业版（METALAKE）不填充。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectionCatalogName <p>连接侧数据目录名或数据库名（仅分析版三段式数据源有值，二段式数据源为空字符串）。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源：external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源：databaseName；MySQL 等二段式数据源：空字符串。注意：此字段仅分析版（CatalogSource=CONNECTION）有效，专业版（METALAKE）不填充。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectionCatalogName(const std::string& _connectionCatalogName);

                    /**
                     * 判断参数 ConnectionCatalogName 是否已赋值
                     * @return ConnectionCatalogName 是否已赋值
                     * 
                     */
                    bool ConnectionCatalogNameHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据目录类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据目录描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据目录属性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>操作人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>责任人信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * <p>审计信息</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>资产全局唯一ID</p>
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>当前workspace权限级别，取值对应PermissionLevel，0-无权限，1-只读，2-读写</p>
                     */
                    int64_t m_currentWorkspacePermissionLevel;
                    bool m_currentWorkspacePermissionLevelHasBeenSet;

                    /**
                     * <p>tccatalog属性中的tccatalog.identifier</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>当前用户对该实体的权限信息</p>
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * <p>是否为外部数据目录（基于数据源连接创建的Catalog，如MYSQL、EMR_HIVE、TCHOUSE_D、POSTGRESQL、DLC等）。true:外部目录, false:内置目录（TABLE/MODEL/VOLUME）</p>
                     */
                    bool m_isExternal;
                    bool m_isExternalHasBeenSet;

                    /**
                     * <p>标签信息列表。注意：仅当请求中 FetchTags=true 时返回，默认不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>数据目录来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                    /**
                     * <p>连接侧数据目录名或数据库名（仅分析版三段式数据源有值，二段式数据源为空字符串）。Doris/StarRocks/TChouse-D 等 MySQL 内核三段式数据源：external catalog 名称；PostgreSQL/Tencent PG/GaussDB/Hologres 等 PG 内核三段式数据源：databaseName；MySQL 等二段式数据源：空字符串。注意：此字段仅分析版（CatalogSource=CONNECTION）有效，专业版（METALAKE）不填充。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectionCatalogName;
                    bool m_connectionCatalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_
