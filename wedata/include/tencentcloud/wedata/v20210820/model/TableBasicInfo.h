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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_

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
                * 表的元数据信息
                */
                class TableBasicInfo : public AbstractModel
                {
                public:
                    TableBasicInfo();
                    ~TableBasicInfo() = default;
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
                     * 获取数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

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
                     * 获取引擎/存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 引擎/存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎/存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 引擎/存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取表类型，视图，外部表等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表类型，视图，外部表等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表类型，视图，外部表等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表类型，视图，外部表等
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
                     * 获取责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerId 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerId() const;

                    /**
                     * 设置责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerId 责任人ID
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
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName 责任人名称
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
                     * 获取存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLocation 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageLocation() const;

                    /**
                     * 设置存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLocation 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageLocation(const int64_t& _storageLocation);

                    /**
                     * 判断参数 StorageLocation 是否已赋值
                     * @return StorageLocation 是否已赋值
                     * 
                     */
                    bool StorageLocationHasBeenSet() const;

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
                     * 获取是否分区表，0-全量表 1-分区表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPartitionTable 是否分区表，0-全量表 1-分区表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPartitionTable() const;

                    /**
                     * 设置是否分区表，0-全量表 1-分区表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPartitionTable 是否分区表，0-全量表 1-分区表
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
                     * 获取分区字段list
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionColumns 分区字段list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPartitionColumns() const;

                    /**
                     * 设置分区字段list
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionColumns 分区字段list
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
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 存储量，字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取存储量，单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSizeWithUnit 存储量，单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置存储量，单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSizeWithUnit 存储量，单位
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
                     * 获取累计存储【MB】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSizeMb 累计存储【MB】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalSizeMb() const;

                    /**
                     * 设置累计存储【MB】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSizeMb 累计存储【MB】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalSizeMb(const uint64_t& _totalSizeMb);

                    /**
                     * 判断参数 TotalSizeMb 是否已赋值
                     * @return TotalSizeMb 是否已赋值
                     * 
                     */
                    bool TotalSizeMbHasBeenSet() const;

                    /**
                     * 获取副本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicaCount 副本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicaCount() const;

                    /**
                     * 设置副本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicaCount 副本数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicaCount(const int64_t& _replicaCount);

                    /**
                     * 判断参数 ReplicaCount 是否已赋值
                     * @return ReplicaCount 是否已赋值
                     * 
                     */
                    bool ReplicaCountHasBeenSet() const;

                    /**
                     * 获取文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileCount 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileCount() const;

                    /**
                     * 设置文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileCount 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileCount(const int64_t& _fileCount);

                    /**
                     * 判断参数 FileCount 是否已赋值
                     * @return FileCount 是否已赋值
                     * 
                     */
                    bool FileCountHasBeenSet() const;

                    /**
                     * 获取分区总数（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionCount 分区总数（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置分区总数（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionCount 分区总数（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取分区字段数量（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionFieldCount 分区字段数量（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionFieldCount() const;

                    /**
                     * 设置分区字段数量（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionFieldCount 分区字段数量（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionFieldCount(const int64_t& _partitionFieldCount);

                    /**
                     * 判断参数 PartitionFieldCount 是否已赋值
                     * @return PartitionFieldCount 是否已赋值
                     * 
                     */
                    bool PartitionFieldCountHasBeenSet() const;

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

                private:

                    /**
                     * 表的全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 数据源全局唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 引擎/存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 表类型，视图，外部表等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 所属项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 所属项目英中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 责任人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerId;
                    bool m_tableOwnerIdHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageLocation;
                    bool m_storageLocationHasBeenSet;

                    /**
                     * 表描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否分区表，0-全量表 1-分区表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPartitionTable;
                    bool m_isPartitionTableHasBeenSet;

                    /**
                     * 分区字段list
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_partitionColumns;
                    bool m_partitionColumnsHasBeenSet;

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
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 存储量，单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * 累计存储【MB】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalSizeMb;
                    bool m_totalSizeMbHasBeenSet;

                    /**
                     * 副本数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicaCount;
                    bool m_replicaCountHasBeenSet;

                    /**
                     * 文件数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileCount;
                    bool m_fileCountHasBeenSet;

                    /**
                     * 分区总数（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 分区字段数量（包含hive，iceberg）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionFieldCount;
                    bool m_partitionFieldCountHasBeenSet;

                    /**
                     * 生命周期-分区保留天数【分区保留策略时有效】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionExpireDays;
                    bool m_partitionExpireDaysHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASICINFO_H_
