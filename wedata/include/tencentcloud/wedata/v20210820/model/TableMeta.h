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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TablePropertyScore.h>
#include <tencentcloud/wedata/v20210820/model/TableHeat.h>
#include <tencentcloud/wedata/v20210820/model/SearchColumnDocVO.h>
#include <tencentcloud/wedata/v20210820/model/TableMetaProperty.h>
#include <tencentcloud/wedata/v20210820/model/GovDatasourceInfo.h>
#include <tencentcloud/wedata/v20210820/model/CreateAndDDLSupport.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表的元数据信息
                */
                class TableMeta : public AbstractModel
                {
                public:
                    TableMeta();
                    ~TableMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     * 
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名
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
                     * 获取表路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePath 表路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTablePath() const;

                    /**
                     * 设置表路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tablePath 表路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTablePath(const std::string& _tablePath);

                    /**
                     * 判断参数 TablePath 是否已赋值
                     * @return TablePath 是否已赋值
                     * 
                     */
                    bool TablePathHasBeenSet() const;

                    /**
                     * 获取表中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNameCn 表中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNameCn() const;

                    /**
                     * 设置表中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNameCn 表中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNameCn(const std::string& _tableNameCn);

                    /**
                     * 判断参数 TableNameCn 是否已赋值
                     * @return TableNameCn 是否已赋值
                     * 
                     */
                    bool TableNameCnHasBeenSet() const;

                    /**
                     * 获取元数据租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreId 元数据租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetastoreId() const;

                    /**
                     * 设置元数据租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreId 元数据租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetastoreId(const int64_t& _metastoreId);

                    /**
                     * 判断参数 MetastoreId 是否已赋值
                     * @return MetastoreId 是否已赋值
                     * 
                     */
                    bool MetastoreIdHasBeenSet() const;

                    /**
                     * 获取技术类型，可用值:HIVE,MYSQL,KAFKA, HBASE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreType 技术类型，可用值:HIVE,MYSQL,KAFKA, HBASE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置技术类型，可用值:HIVE,MYSQL,KAFKA, HBASE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreType 技术类型，可用值:HIVE,MYSQL,KAFKA, HBASE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetastoreType(const std::string& _metastoreType);

                    /**
                     * 判断参数 MetastoreType 是否已赋值
                     * @return MetastoreType 是否已赋值
                     * 
                     */
                    bool MetastoreTypeHasBeenSet() const;

                    /**
                     * 获取表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置表描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 表描述
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
                     * 获取列分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnSeparator 列分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnSeparator() const;

                    /**
                     * 设置列分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnSeparator 列分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnSeparator(const std::string& _columnSeparator);

                    /**
                     * 判断参数 ColumnSeparator 是否已赋值
                     * @return ColumnSeparator 是否已赋值
                     * 
                     */
                    bool ColumnSeparatorHasBeenSet() const;

                    /**
                     * 获取存储格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageFormat 存储格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageFormat() const;

                    /**
                     * 设置存储格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageFormat 存储格式
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
                     * 获取存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取表类型，如hive MANAGED_TABLE;EXTERNAL_TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表类型，如hive MANAGED_TABLE;EXTERNAL_TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表类型，如hive MANAGED_TABLE;EXTERNAL_TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表类型，如hive MANAGED_TABLE;EXTERNAL_TABLE
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
                     * 获取最近数据变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 最近数据变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近数据变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 最近数据变更时间
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
                     * 获取最近DDL变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdlModifyTime 最近DDL变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDdlModifyTime() const;

                    /**
                     * 设置最近DDL变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ddlModifyTime 最近DDL变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDdlModifyTime(const std::string& _ddlModifyTime);

                    /**
                     * 判断参数 DdlModifyTime 是否已赋值
                     * @return DdlModifyTime 是否已赋值
                     * 
                     */
                    bool DdlModifyTimeHasBeenSet() const;

                    /**
                     * 获取数据最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAccessTime 数据最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置数据最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAccessTime 数据最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 所属项目英文名
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
                     * 获取所属数据目录id（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogIds 所属数据目录id（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizCatalogIds() const;

                    /**
                     * 设置所属数据目录id（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogIds 所属数据目录id（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogIds(const std::vector<std::string>& _bizCatalogIds);

                    /**
                     * 判断参数 BizCatalogIds 是否已赋值
                     * @return BizCatalogIds 是否已赋值
                     * 
                     */
                    bool BizCatalogIdsHasBeenSet() const;

                    /**
                     * 获取所属数据目录（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogNames 所属数据目录（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizCatalogNames() const;

                    /**
                     * 设置所属数据目录（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogNames 所属数据目录（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogNames(const std::vector<std::string>& _bizCatalogNames);

                    /**
                     * 判断参数 BizCatalogNames 是否已赋值
                     * @return BizCatalogNames 是否已赋值
                     * 
                     */
                    bool BizCatalogNamesHasBeenSet() const;

                    /**
                     * 获取true已收藏/false表示未收藏状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasFavorite true已收藏/false表示未收藏状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasFavorite() const;

                    /**
                     * 设置true已收藏/false表示未收藏状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasFavorite true已收藏/false表示未收藏状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasFavorite(const bool& _hasFavorite);

                    /**
                     * 判断参数 HasFavorite 是否已赋值
                     * @return HasFavorite 是否已赋值
                     * 
                     */
                    bool HasFavoriteHasBeenSet() const;

                    /**
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeCycleTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeCycleTime() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeCycleTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeCycleTime(const int64_t& _lifeCycleTime);

                    /**
                     * 判断参数 LifeCycleTime 是否已赋值
                     * @return LifeCycleTime 是否已赋值
                     * 
                     */
                    bool LifeCycleTimeHasBeenSet() const;

                    /**
                     * 获取存储量，已转为适合的单位展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSizeWithUnit 存储量，已转为适合的单位展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置存储量，已转为适合的单位展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSizeWithUnit 存储量，已转为适合的单位展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSizeWithUnit(const std::string& _storageSizeWithUnit);

                    /**
                     * 判断参数 StorageSizeWithUnit 是否已赋值
                     * @return StorageSizeWithUnit 是否已赋值
                     * 
                     */
                    bool StorageSizeWithUnitHasBeenSet() const;

                    /**
                     * 获取数据源引擎的实例ID：如EMR集群实例ID/数据源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 数据源引擎的实例ID：如EMR集群实例ID/数据源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据源引擎的实例ID：如EMR集群实例ID/数据源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 数据源引擎的实例ID：如EMR集群实例ID/数据源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据来源技术类型：HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechnologyType 数据来源技术类型：HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTechnologyType() const;

                    /**
                     * 设置数据来源技术类型：HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _technologyType 数据来源技术类型：HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechnologyType(const std::string& _technologyType);

                    /**
                     * 判断参数 TechnologyType 是否已赋值
                     * @return TechnologyType 是否已赋值
                     * 
                     */
                    bool TechnologyTypeHasBeenSet() const;

                    /**
                     * 获取表英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNameEn 表英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNameEn() const;

                    /**
                     * 设置表英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNameEn 表英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNameEn(const std::string& _tableNameEn);

                    /**
                     * 判断参数 TableNameEn 是否已赋值
                     * @return TableNameEn 是否已赋值
                     * 
                     */
                    bool TableNameEnHasBeenSet() const;

                    /**
                     * 获取项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目Id
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
                     * 获取Kafka Topic 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions Kafka Topic 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置Kafka Topic 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions Kafka Topic 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const std::string& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Kafka Topic 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicationFactor Kafka Topic 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplicationFactor() const;

                    /**
                     * 设置Kafka Topic 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicationFactor Kafka Topic 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicationFactor(const std::string& _replicationFactor);

                    /**
                     * 判断参数 ReplicationFactor 是否已赋值
                     * @return ReplicationFactor 是否已赋值
                     * 
                     */
                    bool ReplicationFactorHasBeenSet() const;

                    /**
                     * 获取所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectDisplayName(const std::string& _projectDisplayName);

                    /**
                     * 判断参数 ProjectDisplayName 是否已赋值
                     * @return ProjectDisplayName 是否已赋值
                     * 
                     */
                    bool ProjectDisplayNameHasBeenSet() const;

                    /**
                     * 获取数据最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataModifyTime 数据最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataModifyTime() const;

                    /**
                     * 设置数据最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataModifyTime 数据最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataModifyTime(const std::string& _dataModifyTime);

                    /**
                     * 判断参数 DataModifyTime 是否已赋值
                     * @return DataModifyTime 是否已赋值
                     * 
                     */
                    bool DataModifyTimeHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取当前用户是否有管理员权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasAdminAuthority 当前用户是否有管理员权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasAdminAuthority() const;

                    /**
                     * 设置当前用户是否有管理员权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasAdminAuthority 当前用户是否有管理员权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasAdminAuthority(const bool& _hasAdminAuthority);

                    /**
                     * 判断参数 HasAdminAuthority 是否已赋值
                     * @return HasAdminAuthority 是否已赋值
                     * 
                     */
                    bool HasAdminAuthorityHasBeenSet() const;

                    /**
                     * 获取数据源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceDisplayName 数据源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceDisplayName() const;

                    /**
                     * 设置数据源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceDisplayName 数据源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceDisplayName(const std::string& _datasourceDisplayName);

                    /**
                     * 判断参数 DatasourceDisplayName 是否已赋值
                     * @return DatasourceDisplayName 是否已赋值
                     * 
                     */
                    bool DatasourceDisplayNameHasBeenSet() const;

                    /**
                     * 获取数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取租户下对表的收藏总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FavoriteCount 租户下对表的收藏总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFavoriteCount() const;

                    /**
                     * 设置租户下对表的收藏总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _favoriteCount 租户下对表的收藏总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFavoriteCount(const int64_t& _favoriteCount);

                    /**
                     * 判断参数 FavoriteCount 是否已赋值
                     * @return FavoriteCount 是否已赋值
                     * 
                     */
                    bool FavoriteCountHasBeenSet() const;

                    /**
                     * 获取租户下对表的点赞总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LikeCount 租户下对表的点赞总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLikeCount() const;

                    /**
                     * 设置租户下对表的点赞总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _likeCount 租户下对表的点赞总次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLikeCount(const int64_t& _likeCount);

                    /**
                     * 判断参数 LikeCount 是否已赋值
                     * @return LikeCount 是否已赋值
                     * 
                     */
                    bool LikeCountHasBeenSet() const;

                    /**
                     * 获取true已点赞/false表示未点赞状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasLike true已点赞/false表示未点赞状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasLike() const;

                    /**
                     * 设置true已点赞/false表示未点赞状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasLike true已点赞/false表示未点赞状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasLike(const bool& _hasLike);

                    /**
                     * 判断参数 HasLike 是否已赋值
                     * @return HasLike 是否已赋值
                     * 
                     */
                    bool HasLikeHasBeenSet() const;

                    /**
                     * 获取表的资产评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePropertyScore 表的资产评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TablePropertyScore GetTablePropertyScore() const;

                    /**
                     * 设置表的资产评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tablePropertyScore 表的资产评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTablePropertyScore(const TablePropertyScore& _tablePropertyScore);

                    /**
                     * 判断参数 TablePropertyScore 是否已赋值
                     * @return TablePropertyScore 是否已赋值
                     * 
                     */
                    bool TablePropertyScoreHasBeenSet() const;

                    /**
                     * 获取表的热度值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableHeat 表的热度值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TableHeat GetTableHeat() const;

                    /**
                     * 设置表的热度值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableHeat 表的热度值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableHeat(const TableHeat& _tableHeat);

                    /**
                     * 判断参数 TableHeat 是否已赋值
                     * @return TableHeat 是否已赋值
                     * 
                     */
                    bool TableHeatHasBeenSet() const;

                    /**
                     * 获取数据源ownerProjectId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerProjectId 数据源ownerProjectId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置数据源ownerProjectId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerProjectId 数据源ownerProjectId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerProjectId(const std::string& _ownerProjectId);

                    /**
                     * 判断参数 OwnerProjectId 是否已赋值
                     * @return OwnerProjectId 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdHasBeenSet() const;

                    /**
                     * 获取表负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerId 表负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerId() const;

                    /**
                     * 设置表负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerId 表负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableOwnerId(const std::string& _tableOwnerId);

                    /**
                     * 判断参数 TableOwnerId 是否已赋值
                     * @return TableOwnerId 是否已赋值
                     * 
                     */
                    bool TableOwnerIdHasBeenSet() const;

                    /**
                     * 获取系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceCategory 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceCategory() const;

                    /**
                     * 设置系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceCategory 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceCategory(const std::string& _dataSourceCategory);

                    /**
                     * 判断参数 DataSourceCategory 是否已赋值
                     * @return DataSourceCategory 是否已赋值
                     * 
                     */
                    bool DataSourceCategoryHasBeenSet() const;

                    /**
                     * 获取表字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 表字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchColumnDocVO> GetColumns() const;

                    /**
                     * 设置表字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 表字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<SearchColumnDocVO>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取表采集类型
TABLE, VIEW, MANAGED_TABLE(Hive管理表), EXTERNAL_TABLE(Hive外部表), VIRTUAL_VIEW(虚拟视图), MATERIALIZED_VIEW(物化视图), LATERAL_VIEW, INDEX_TABLE(索引表), END_SELECT(查询结构), INSTANCE(中间临时表类型(数据血缘)), CDW(CDW表类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaCrawlType 表采集类型
TABLE, VIEW, MANAGED_TABLE(Hive管理表), EXTERNAL_TABLE(Hive外部表), VIRTUAL_VIEW(虚拟视图), MATERIALIZED_VIEW(物化视图), LATERAL_VIEW, INDEX_TABLE(索引表), END_SELECT(查询结构), INSTANCE(中间临时表类型(数据血缘)), CDW(CDW表类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetaCrawlType() const;

                    /**
                     * 设置表采集类型
TABLE, VIEW, MANAGED_TABLE(Hive管理表), EXTERNAL_TABLE(Hive外部表), VIRTUAL_VIEW(虚拟视图), MATERIALIZED_VIEW(物化视图), LATERAL_VIEW, INDEX_TABLE(索引表), END_SELECT(查询结构), INSTANCE(中间临时表类型(数据血缘)), CDW(CDW表类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaCrawlType 表采集类型
TABLE, VIEW, MANAGED_TABLE(Hive管理表), EXTERNAL_TABLE(Hive外部表), VIRTUAL_VIEW(虚拟视图), MATERIALIZED_VIEW(物化视图), LATERAL_VIEW, INDEX_TABLE(索引表), END_SELECT(查询结构), INSTANCE(中间临时表类型(数据血缘)), CDW(CDW表类型)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaCrawlType(const std::string& _metaCrawlType);

                    /**
                     * 判断参数 MetaCrawlType 是否已赋值
                     * @return MetaCrawlType 是否已赋值
                     * 
                     */
                    bool MetaCrawlTypeHasBeenSet() const;

                    /**
                     * 获取是否视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsView 是否视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsView() const;

                    /**
                     * 设置是否视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isView 是否视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsView(const bool& _isView);

                    /**
                     * 判断参数 IsView 是否已赋值
                     * @return IsView 是否已赋值
                     * 
                     */
                    bool IsViewHasBeenSet() const;

                    /**
                     * 获取存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPartitionTable 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPartitionTable() const;

                    /**
                     * 设置判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPartitionTable 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPartitionTable(const int64_t& _isPartitionTable);

                    /**
                     * 判断参数 IsPartitionTable 是否已赋值
                     * @return IsPartitionTable 是否已赋值
                     * 
                     */
                    bool IsPartitionTableHasBeenSet() const;

                    /**
                     * 获取分区字段 key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionColumns 分区字段 key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPartitionColumns() const;

                    /**
                     * 设置分区字段 key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionColumns 分区字段 key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionColumns(const std::vector<std::string>& _partitionColumns);

                    /**
                     * 判断参数 PartitionColumns 是否已赋值
                     * @return PartitionColumns 是否已赋值
                     * 
                     */
                    bool PartitionColumnsHasBeenSet() const;

                    /**
                     * 获取生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionExpireDays 生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionExpireDays() const;

                    /**
                     * 设置生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionExpireDays 生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionExpireDays(const int64_t& _partitionExpireDays);

                    /**
                     * 判断参数 PartitionExpireDays 是否已赋值
                     * @return PartitionExpireDays 是否已赋值
                     * 
                     */
                    bool PartitionExpireDaysHasBeenSet() const;

                    /**
                     * 获取表附属信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableProperties 表附属信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableMetaProperty> GetTableProperties() const;

                    /**
                     * 设置表附属信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableProperties 表附属信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableProperties(const std::vector<TableMetaProperty>& _tableProperties);

                    /**
                     * 判断参数 TableProperties 是否已赋值
                     * @return TableProperties 是否已赋值
                     * 
                     */
                    bool TablePropertiesHasBeenSet() const;

                    /**
                     * 获取环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Schema 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schema 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取关联数据眼信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectDatasourceList 关联数据眼信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GovDatasourceInfo> GetCollectDatasourceList() const;

                    /**
                     * 设置关联数据眼信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectDatasourceList 关联数据眼信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectDatasourceList(const std::vector<GovDatasourceInfo>& _collectDatasourceList);

                    /**
                     * 判断参数 CollectDatasourceList 是否已赋值
                     * @return CollectDatasourceList 是否已赋值
                     * 
                     */
                    bool CollectDatasourceListHasBeenSet() const;

                    /**
                     * 获取采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectJobId 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectJobId() const;

                    /**
                     * 设置采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectJobId 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectJobId(const std::string& _collectJobId);

                    /**
                     * 判断参数 CollectJobId 是否已赋值
                     * @return CollectJobId 是否已赋值
                     * 
                     */
                    bool CollectJobIdHasBeenSet() const;

                    /**
                     * 获取采集任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectJobName 采集任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectJobName() const;

                    /**
                     * 设置采集任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectJobName 采集任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectJobName(const std::string& _collectJobName);

                    /**
                     * 判断参数 CollectJobName 是否已赋值
                     * @return CollectJobName 是否已赋值
                     * 
                     */
                    bool CollectJobNameHasBeenSet() const;

                    /**
                     * 获取数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Urn 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrn() const;

                    /**
                     * 设置数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urn 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrn(const std::string& _urn);

                    /**
                     * 判断参数 Urn 是否已赋值
                     * @return Urn 是否已赋值
                     * 
                     */
                    bool UrnHasBeenSet() const;

                    /**
                     * 获取是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasBizPermission 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasBizPermission() const;

                    /**
                     * 设置是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasBizPermission 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasBizPermission(const bool& _hasBizPermission);

                    /**
                     * 判断参数 HasBizPermission 是否已赋值
                     * @return HasBizPermission 是否已赋值
                     * 
                     */
                    bool HasBizPermissionHasBeenSet() const;

                    /**
                     * 获取引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerByEngine 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerByEngine() const;

                    /**
                     * 设置引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerByEngine 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerByEngine(const std::string& _ownerByEngine);

                    /**
                     * 判断参数 OwnerByEngine 是否已赋值
                     * @return OwnerByEngine 是否已赋值
                     * 
                     */
                    bool OwnerByEngineHasBeenSet() const;

                    /**
                     * 获取用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorTips 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorTips() const;

                    /**
                     * 设置用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorTips 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorTips(const std::string& _errorTips);

                    /**
                     * 判断参数 ErrorTips 是否已赋值
                     * @return ErrorTips 是否已赋值
                     * 
                     */
                    bool ErrorTipsHasBeenSet() const;

                    /**
                     * 获取是否支持select or ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IfSupportCreateAndDDL 是否支持select or ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreateAndDDLSupport GetIfSupportCreateAndDDL() const;

                    /**
                     * 设置是否支持select or ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ifSupportCreateAndDDL 是否支持select or ddl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIfSupportCreateAndDDL(const CreateAndDDLSupport& _ifSupportCreateAndDDL);

                    /**
                     * 判断参数 IfSupportCreateAndDDL 是否已赋值
                     * @return IfSupportCreateAndDDL 是否已赋值
                     * 
                     */
                    bool IfSupportCreateAndDDLHasBeenSet() const;

                    /**
                     * 获取资产来源 历史默认值都是CRAWLER
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFromType 资产来源 历史默认值都是CRAWLER
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataFromType() const;

                    /**
                     * 设置资产来源 历史默认值都是CRAWLER
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFromType 资产来源 历史默认值都是CRAWLER
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFromType(const std::string& _dataFromType);

                    /**
                     * 判断参数 DataFromType 是否已赋值
                     * @return DataFromType 是否已赋值
                     * 
                     */
                    bool DataFromTypeHasBeenSet() const;

                    /**
                     * 获取引擎侧责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineOwner 引擎侧责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineOwner() const;

                    /**
                     * 设置引擎侧责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineOwner 引擎侧责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineOwner(const std::string& _engineOwner);

                    /**
                     * 判断参数 EngineOwner 是否已赋值
                     * @return EngineOwner 是否已赋值
                     * 
                     */
                    bool EngineOwnerHasBeenSet() const;

                    /**
                     * 获取数据分层UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLayerUuid 数据分层UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLayerUuid() const;

                    /**
                     * 设置数据分层UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLayerUuid 数据分层UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLayerUuid(const std::string& _dataLayerUuid);

                    /**
                     * 判断参数 DataLayerUuid 是否已赋值
                     * @return DataLayerUuid 是否已赋值
                     * 
                     */
                    bool DataLayerUuidHasBeenSet() const;

                    /**
                     * 获取数据分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLayerName 数据分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLayerName() const;

                    /**
                     * 设置数据分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLayerName 数据分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLayerName(const std::string& _dataLayerName);

                    /**
                     * 判断参数 DataLayerName 是否已赋值
                     * @return DataLayerName 是否已赋值
                     * 
                     */
                    bool DataLayerNameHasBeenSet() const;

                    /**
                     * 获取字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnCount 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetColumnCount() const;

                    /**
                     * 设置字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnCount 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnCount(const int64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                private:

                    /**
                     * 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tablePath;
                    bool m_tablePathHasBeenSet;

                    /**
                     * 表中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNameCn;
                    bool m_tableNameCnHasBeenSet;

                    /**
                     * 元数据租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metastoreId;
                    bool m_metastoreIdHasBeenSet;

                    /**
                     * 技术类型，可用值:HIVE,MYSQL,KAFKA, HBASE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * 表描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 列分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnSeparator;
                    bool m_columnSeparatorHasBeenSet;

                    /**
                     * 存储格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageFormat;
                    bool m_storageFormatHasBeenSet;

                    /**
                     * 存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 表类型，如hive MANAGED_TABLE;EXTERNAL_TABLE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近数据变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 最近DDL变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ddlModifyTime;
                    bool m_ddlModifyTimeHasBeenSet;

                    /**
                     * 数据最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 所属数据目录id（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizCatalogIds;
                    bool m_bizCatalogIdsHasBeenSet;

                    /**
                     * 所属数据目录（可能多个）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizCatalogNames;
                    bool m_bizCatalogNamesHasBeenSet;

                    /**
                     * true已收藏/false表示未收藏状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasFavorite;
                    bool m_hasFavoriteHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeCycleTime;
                    bool m_lifeCycleTimeHasBeenSet;

                    /**
                     * 存储量，已转为适合的单位展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * 数据源引擎的实例ID：如EMR集群实例ID/数据源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据来源技术类型：HIVE/MYSQL/HBASE/KAFKA等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_technologyType;
                    bool m_technologyTypeHasBeenSet;

                    /**
                     * 表英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNameEn;
                    bool m_tableNameEnHasBeenSet;

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Kafka Topic 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Kafka Topic 副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replicationFactor;
                    bool m_replicationFactorHasBeenSet;

                    /**
                     * 所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 数据最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataModifyTime;
                    bool m_dataModifyTimeHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 当前用户是否有管理员权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasAdminAuthority;
                    bool m_hasAdminAuthorityHasBeenSet;

                    /**
                     * 数据源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceDisplayName;
                    bool m_datasourceDisplayNameHasBeenSet;

                    /**
                     * 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 租户下对表的收藏总次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_favoriteCount;
                    bool m_favoriteCountHasBeenSet;

                    /**
                     * 租户下对表的点赞总次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_likeCount;
                    bool m_likeCountHasBeenSet;

                    /**
                     * true已点赞/false表示未点赞状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasLike;
                    bool m_hasLikeHasBeenSet;

                    /**
                     * 表的资产评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TablePropertyScore m_tablePropertyScore;
                    bool m_tablePropertyScoreHasBeenSet;

                    /**
                     * 表的热度值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TableHeat m_tableHeat;
                    bool m_tableHeatHasBeenSet;

                    /**
                     * 数据源ownerProjectId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * 表负责人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerId;
                    bool m_tableOwnerIdHasBeenSet;

                    /**
                     * 系统源-CLUSTER, DB-自定义源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceCategory;
                    bool m_dataSourceCategoryHasBeenSet;

                    /**
                     * 表字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchColumnDocVO> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 表采集类型
TABLE, VIEW, MANAGED_TABLE(Hive管理表), EXTERNAL_TABLE(Hive外部表), VIRTUAL_VIEW(虚拟视图), MATERIALIZED_VIEW(物化视图), LATERAL_VIEW, INDEX_TABLE(索引表), END_SELECT(查询结构), INSTANCE(中间临时表类型(数据血缘)), CDW(CDW表类型)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metaCrawlType;
                    bool m_metaCrawlTypeHasBeenSet;

                    /**
                     * 是否视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isView;
                    bool m_isViewHasBeenSet;

                    /**
                     * 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 判断是否是分区表1 是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPartitionTable;
                    bool m_isPartitionTableHasBeenSet;

                    /**
                     * 分区字段 key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_partitionColumns;
                    bool m_partitionColumnsHasBeenSet;

                    /**
                     * 生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionExpireDays;
                    bool m_partitionExpireDaysHasBeenSet;

                    /**
                     * 表附属信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableMetaProperty> m_tableProperties;
                    bool m_tablePropertiesHasBeenSet;

                    /**
                     * 环境，取值 prod或者 dev
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 数据库模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 关联数据眼信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GovDatasourceInfo> m_collectDatasourceList;
                    bool m_collectDatasourceListHasBeenSet;

                    /**
                     * 采集任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectJobId;
                    bool m_collectJobIdHasBeenSet;

                    /**
                     * 采集任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectJobName;
                    bool m_collectJobNameHasBeenSet;

                    /**
                     * 数据源urn
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_urn;
                    bool m_urnHasBeenSet;

                    /**
                     * 是否有修改业务权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasBizPermission;
                    bool m_hasBizPermissionHasBeenSet;

                    /**
                     * 引擎侧创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerByEngine;
                    bool m_ownerByEngineHasBeenSet;

                    /**
                     * 用户无映射账户，请先完成账户映射后再来申请。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorTips;
                    bool m_errorTipsHasBeenSet;

                    /**
                     * 是否支持select or ddl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateAndDDLSupport m_ifSupportCreateAndDDL;
                    bool m_ifSupportCreateAndDDLHasBeenSet;

                    /**
                     * 资产来源 历史默认值都是CRAWLER
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataFromType;
                    bool m_dataFromTypeHasBeenSet;

                    /**
                     * 引擎侧责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineOwner;
                    bool m_engineOwnerHasBeenSet;

                    /**
                     * 数据分层UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLayerUuid;
                    bool m_dataLayerUuidHasBeenSet;

                    /**
                     * 数据分层名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLayerName;
                    bool m_dataLayerNameHasBeenSet;

                    /**
                     * 字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEMETA_H_
