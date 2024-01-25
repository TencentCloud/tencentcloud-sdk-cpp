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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHYBRISREQ_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHYBRISREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Columns.h>
#include <tencentcloud/wedata/v20210820/model/BizParams.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 元数据信息
                */
                class TableHybrisReq : public AbstractModel
                {
                public:
                    TableHybrisReq();
                    ~TableHybrisReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据类型：HIVE，ICEBERG，CDW，DLC
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsType 数据类型：HIVE，ICEBERG，CDW，DLC
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置数据类型：HIVE，ICEBERG，CDW，DLC
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msType 数据类型：HIVE，ICEBERG，CDW，DLC
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取DbName类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName DbName类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置DbName类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName DbName类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Name表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Name表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Name表名称
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
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 创建人
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
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const double& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取创建人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccount 创建人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOwnerAccount() const;

                    /**
                     * 设置创建人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerAccount 创建人账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerAccount(const double& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取普通字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 普通字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Columns> GetColumns() const;

                    /**
                     * 设置普通字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 普通字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<Columns>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取分区字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionKeys 分区字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Columns> GetPartitionKeys() const;

                    /**
                     * 设置分区字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionKeys 分区字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionKeys(const std::vector<Columns>& _partitionKeys);

                    /**
                     * 判断参数 PartitionKeys 是否已赋值
                     * @return PartitionKeys 是否已赋值
                     * 
                     */
                    bool PartitionKeysHasBeenSet() const;

                    /**
                     * 获取Catalog类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog Catalog类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog Catalog类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type Type类型
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
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameCn 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameCn 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

                    /**
                     * 获取中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 中文描述
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
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionType 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionType() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionType 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionType(const int64_t& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLifeTime() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeTime(const uint64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                    /**
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageFormat 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageFormat() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageFormat 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageFormat(const std::string& _storageFormat);

                    /**
                     * 判断参数 StorageFormat 是否已赋值
                     * @return StorageFormat 是否已赋值
                     * 
                     */
                    bool StorageFormatHasBeenSet() const;

                    /**
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnDelimiter 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnDelimiter() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnDelimiter 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnDelimiter(const std::string& _columnDelimiter);

                    /**
                     * 判断参数 ColumnDelimiter 是否已赋值
                     * @return ColumnDelimiter 是否已赋值
                     * 
                     */
                    bool ColumnDelimiterHasBeenSet() const;

                    /**
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionType 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectionType 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取表英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameEn 表英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置表英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameEn 表英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取建表 SQL，DDL 模式 建 hive 表时，wedata 会对其进行 base64 解码，故传进来之前应该进行 base64转码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sql 建表 SQL，DDL 模式 建 hive 表时，wedata 会对其进行 base64 解码，故传进来之前应该进行 base64转码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置建表 SQL，DDL 模式 建 hive 表时，wedata 会对其进行 base64 解码，故传进来之前应该进行 base64转码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sql 建表 SQL，DDL 模式 建 hive 表时，wedata 会对其进行 base64 解码，故传进来之前应该进行 base64转码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取表业务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParams 表业务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BizParams GetBizParams() const;

                    /**
                     * 设置表业务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizParams 表业务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizParams(const BizParams& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * 数据类型：HIVE，ICEBERG，CDW，DLC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * DbName类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Name表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 创建人账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 普通字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Columns> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 分区字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Columns> m_partitionKeys;
                    bool m_partitionKeysHasBeenSet;

                    /**
                     * Catalog类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * 中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageFormat;
                    bool m_storageFormatHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnDelimiter;
                    bool m_columnDelimiterHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 表英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * 建表 SQL，DDL 模式 建 hive 表时，wedata 会对其进行 base64 解码，故传进来之前应该进行 base64转码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 表业务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BizParams m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEHYBRISREQ_H_
