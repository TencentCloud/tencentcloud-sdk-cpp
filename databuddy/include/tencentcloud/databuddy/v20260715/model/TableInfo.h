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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ColumnInfo.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Partitioning.h>
#include <tencentcloud/databuddy/v20260715/model/Index.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
#include <tencentcloud/databuddy/v20260715/model/FeatureTableDetail.h>
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
                * 表信息
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
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
                     * 获取分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitioning 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Partitioning> GetPartitioning() const;

                    /**
                     * 设置分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitioning 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitioning(const std::vector<Partitioning>& _partitioning);

                    /**
                     * 判断参数 Partitioning 是否已赋值
                     * @return Partitioning 是否已赋值
                     * 
                     */
                    bool PartitioningHasBeenSet() const;

                    /**
                     * 获取索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Indexes 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Index> GetIndexes() const;

                    /**
                     * 设置索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexes 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexes(const std::vector<Index>& _indexes);

                    /**
                     * 判断参数 Indexes 是否已赋值
                     * @return Indexes 是否已赋值
                     * 
                     */
                    bool IndexesHasBeenSet() const;

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
                     * 获取表版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableFormat 表版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置表版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableFormat 表版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

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
                     * 获取总文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilesCount 总文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilesCount() const;

                    /**
                     * 设置总文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filesCount 总文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilesCount(const std::string& _filesCount);

                    /**
                     * 判断参数 FilesCount 是否已赋值
                     * @return FilesCount 是否已赋值
                     * 
                     */
                    bool FilesCountHasBeenSet() const;

                    /**
                     * 获取总数据量大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilesSize 总数据量大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilesSize() const;

                    /**
                     * 设置总数据量大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filesSize 总数据量大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilesSize(const std::string& _filesSize);

                    /**
                     * 判断参数 FilesSize 是否已赋值
                     * @return FilesSize 是否已赋值
                     * 
                     */
                    bool FilesSizeHasBeenSet() const;

                    /**
                     * 获取表类型

- Managed 内部
- External 外部
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表类型

- Managed 内部
- External 外部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表类型

- Managed 内部
- External 外部
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表类型

- Managed 内部
- External 外部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取特征表类型：Online-在线表 Offline-离线表 空字符串-非特征表
                     * @return FeatureTableType 特征表类型：Online-在线表 Offline-离线表 空字符串-非特征表
                     * 
                     */
                    std::string GetFeatureTableType() const;

                    /**
                     * 设置特征表类型：Online-在线表 Offline-离线表 空字符串-非特征表
                     * @param _featureTableType 特征表类型：Online-在线表 Offline-离线表 空字符串-非特征表
                     * 
                     */
                    void SetFeatureTableType(const std::string& _featureTableType);

                    /**
                     * 判断参数 FeatureTableType 是否已赋值
                     * @return FeatureTableType 是否已赋值
                     * 
                     */
                    bool FeatureTableTypeHasBeenSet() const;

                    /**
                     * 获取特征表详细信息，仅当FeatureTableType不为空时有值
                     * @return FeatureTableDetail 特征表详细信息，仅当FeatureTableType不为空时有值
                     * 
                     */
                    FeatureTableDetail GetFeatureTableDetail() const;

                    /**
                     * 设置特征表详细信息，仅当FeatureTableType不为空时有值
                     * @param _featureTableDetail 特征表详细信息，仅当FeatureTableType不为空时有值
                     * 
                     */
                    void SetFeatureTableDetail(const FeatureTableDetail& _featureTableDetail);

                    /**
                     * 判断参数 FeatureTableDetail 是否已赋值
                     * @return FeatureTableDetail 是否已赋值
                     * 
                     */
                    bool FeatureTableDetailHasBeenSet() const;

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
                     * 获取表级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 表级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置表级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 表级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
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
                     * 分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Partitioning> m_partitioning;
                    bool m_partitioningHasBeenSet;

                    /**
                     * 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Index> m_indexes;
                    bool m_indexesHasBeenSet;

                    /**
                     * 编辑者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * 表版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

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
                     * 总文件数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filesCount;
                    bool m_filesCountHasBeenSet;

                    /**
                     * 总数据量大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filesSize;
                    bool m_filesSizeHasBeenSet;

                    /**
                     * 表类型

- Managed 内部
- External 外部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 特征表类型：Online-在线表 Offline-离线表 空字符串-非特征表
                     */
                    std::string m_featureTableType;
                    bool m_featureTableTypeHasBeenSet;

                    /**
                     * 特征表详细信息，仅当FeatureTableType不为空时有值
                     */
                    FeatureTableDetail m_featureTableDetail;
                    bool m_featureTableDetailHasBeenSet;

                    /**
                     * 当前用户对该实体的权限信息
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * 表级标签列表，仅当请求中FetchOption.FetchTags=true时返回，默认不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TABLEINFO_H_
