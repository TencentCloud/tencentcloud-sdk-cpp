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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/GovDatasourceInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据源元数据
                */
                class DatabaseMeta : public AbstractModel
                {
                public:
                    DatabaseMeta();
                    ~DatabaseMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取技术类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreType 技术类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置技术类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreType 技术类型
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
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名称
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
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源Id
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
                     * 获取项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目英文名
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
                     * 获取数据源类别：绑定引擎、绑定数据库,可用值:DB,ENGINE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 数据源类别：绑定引擎、绑定数据库,可用值:DB,ENGINE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置数据源类别：绑定引擎、绑定数据库,可用值:DB,ENGINE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 数据源类别：绑定引擎、绑定数据库,可用值:DB,ENGINE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 数据源描述信息
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
                     * 获取数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName db名称
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
                     * 获取项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectDisplayName 项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectDisplayName() const;

                    /**
                     * 设置项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectDisplayName 项目中文名
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
                     * 获取责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccountName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerAccountName 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取数据来源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 数据来源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置数据来源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 数据来源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

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
                     * 获取数据来源类型：hive/mysql/hbase等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog 数据来源类型：hive/mysql/hbase等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置数据来源类型：hive/mysql/hbase等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog 数据来源类型：hive/mysql/hbase等
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
                     * 获取存储量大小,单位为 byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 存储量大小,单位为 byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储量大小,单位为 byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 存储量大小,单位为 byte
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
                     * 获取格式化后的存储量大小，带单位，如 12B
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSizeWithUnit 格式化后的存储量大小，带单位，如 12B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageSizeWithUnit() const;

                    /**
                     * 设置格式化后的存储量大小，带单位，如 12B
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSizeWithUnit 格式化后的存储量大小，带单位，如 12B
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
                     * 获取总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableCount 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableCount() const;

                    /**
                     * 设置总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableCount 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableCount(const int64_t& _tableCount);

                    /**
                     * 判断参数 TableCount 是否已赋值
                     * @return TableCount 是否已赋值
                     * 
                     */
                    bool TableCountHasBeenSet() const;

                    /**
                     * 获取数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceList 数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GovDatasourceInfo> GetDatasourceList() const;

                    /**
                     * 设置数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceList 数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceList(const std::vector<GovDatasourceInfo>& _datasourceList);

                    /**
                     * 判断参数 DatasourceList 是否已赋值
                     * @return DatasourceList 是否已赋值
                     * 
                     */
                    bool DatasourceListHasBeenSet() const;

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
                     * 获取引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 引擎id
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
                     * 获取引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 引擎名称
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
                     * 获取库下表的最新更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTimeByTables 库下表的最新更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModifiedTimeByTables() const;

                    /**
                     * 设置库下表的最新更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTimeByTables 库下表的最新更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTimeByTables(const uint64_t& _modifiedTimeByTables);

                    /**
                     * 判断参数 ModifiedTimeByTables 是否已赋值
                     * @return ModifiedTimeByTables 是否已赋值
                     * 
                     */
                    bool ModifiedTimeByTablesHasBeenSet() const;

                    /**
                     * 获取库下表的最新访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAccessTimeByTables 库下表的最新访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastAccessTimeByTables() const;

                    /**
                     * 设置库下表的最新访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAccessTimeByTables 库下表的最新访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAccessTimeByTables(const uint64_t& _lastAccessTimeByTables);

                    /**
                     * 判断参数 LastAccessTimeByTables 是否已赋值
                     * @return LastAccessTimeByTables 是否已赋值
                     * 
                     */
                    bool LastAccessTimeByTablesHasBeenSet() const;

                    /**
                     * 获取库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseGuid 库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseGuid() const;

                    /**
                     * 设置库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseGuid 库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseGuid(const std::string& _databaseGuid);

                    /**
                     * 判断参数 DatabaseGuid 是否已赋值
                     * @return DatabaseGuid 是否已赋值
                     * 
                     */
                    bool DatabaseGuidHasBeenSet() const;

                private:

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 技术类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 项目英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 数据源类别：绑定引擎、绑定数据库,可用值:DB,ENGINE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * db名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 项目中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectDisplayName;
                    bool m_projectDisplayNameHasBeenSet;

                    /**
                     * 责任人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * 数据来源展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 数据库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据来源类型：hive/mysql/hbase等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 存储量大小,单位为 byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 格式化后的存储量大小，带单位，如 12B
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageSizeWithUnit;
                    bool m_storageSizeWithUnitHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableCount;
                    bool m_tableCountHasBeenSet;

                    /**
                     * 数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GovDatasourceInfo> m_datasourceList;
                    bool m_datasourceListHasBeenSet;

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
                     * 引擎id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 库下表的最新更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modifiedTimeByTables;
                    bool m_modifiedTimeByTablesHasBeenSet;

                    /**
                     * 库下表的最新访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastAccessTimeByTables;
                    bool m_lastAccessTimeByTablesHasBeenSet;

                    /**
                     * 库guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseGuid;
                    bool m_databaseGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATABASEMETA_H_
