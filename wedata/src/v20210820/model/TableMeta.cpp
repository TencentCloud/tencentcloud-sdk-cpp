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

#include <tencentcloud/wedata/v20210820/model/TableMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableMeta::TableMeta() :
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableOwnerNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tablePathHasBeenSet(false),
    m_tableNameCnHasBeenSet(false),
    m_metastoreIdHasBeenSet(false),
    m_metastoreTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_columnSeparatorHasBeenSet(false),
    m_storageFormatHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_ddlModifyTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_bizCatalogIdsHasBeenSet(false),
    m_bizCatalogNamesHasBeenSet(false),
    m_hasFavoriteHasBeenSet(false),
    m_lifeCycleTimeHasBeenSet(false),
    m_storageSizeWithUnitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_technologyTypeHasBeenSet(false),
    m_tableNameEnHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_replicationFactorHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_dataModifyTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_hasAdminAuthorityHasBeenSet(false),
    m_datasourceDisplayNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_favoriteCountHasBeenSet(false),
    m_likeCountHasBeenSet(false),
    m_hasLikeHasBeenSet(false),
    m_tablePropertyScoreHasBeenSet(false),
    m_tableHeatHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_tableOwnerIdHasBeenSet(false),
    m_dataSourceCategoryHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_metaCrawlTypeHasBeenSet(false),
    m_isViewHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_isPartitionTableHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_partitionExpireDaysHasBeenSet(false),
    m_tablePropertiesHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_collectDatasourceListHasBeenSet(false),
    m_collectJobIdHasBeenSet(false),
    m_collectJobNameHasBeenSet(false),
    m_urnHasBeenSet(false),
    m_hasBizPermissionHasBeenSet(false),
    m_ownerByEngineHasBeenSet(false),
    m_errorTipsHasBeenSet(false),
    m_ifSupportCreateAndDDLHasBeenSet(false),
    m_dataFromTypeHasBeenSet(false),
    m_engineOwnerHasBeenSet(false),
    m_dataLayerUuidHasBeenSet(false),
    m_dataLayerNameHasBeenSet(false),
    m_columnCountHasBeenSet(false)
{
}

CoreInternalOutcome TableMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DatasourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetInt64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TablePath") && !value["TablePath"].IsNull())
    {
        if (!value["TablePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TablePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tablePath = string(value["TablePath"].GetString());
        m_tablePathHasBeenSet = true;
    }

    if (value.HasMember("TableNameCn") && !value["TableNameCn"].IsNull())
    {
        if (!value["TableNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNameCn = string(value["TableNameCn"].GetString());
        m_tableNameCnHasBeenSet = true;
    }

    if (value.HasMember("MetastoreId") && !value["MetastoreId"].IsNull())
    {
        if (!value["MetastoreId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.MetastoreId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreId = value["MetastoreId"].GetInt64();
        m_metastoreIdHasBeenSet = true;
    }

    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ColumnSeparator") && !value["ColumnSeparator"].IsNull())
    {
        if (!value["ColumnSeparator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ColumnSeparator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnSeparator = string(value["ColumnSeparator"].GetString());
        m_columnSeparatorHasBeenSet = true;
    }

    if (value.HasMember("StorageFormat") && !value["StorageFormat"].IsNull())
    {
        if (!value["StorageFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.StorageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageFormat = string(value["StorageFormat"].GetString());
        m_storageFormatHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("DdlModifyTime") && !value["DdlModifyTime"].IsNull())
    {
        if (!value["DdlModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DdlModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddlModifyTime = string(value["DdlModifyTime"].GetString());
        m_ddlModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogIds") && !value["BizCatalogIds"].IsNull())
    {
        if (!value["BizCatalogIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.BizCatalogIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BizCatalogIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizCatalogIds.push_back((*itr).GetString());
        }
        m_bizCatalogIdsHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogNames") && !value["BizCatalogNames"].IsNull())
    {
        if (!value["BizCatalogNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.BizCatalogNames` is not array type"));

        const rapidjson::Value &tmpValue = value["BizCatalogNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizCatalogNames.push_back((*itr).GetString());
        }
        m_bizCatalogNamesHasBeenSet = true;
    }

    if (value.HasMember("HasFavorite") && !value["HasFavorite"].IsNull())
    {
        if (!value["HasFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.HasFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasFavorite = value["HasFavorite"].GetBool();
        m_hasFavoriteHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleTime") && !value["LifeCycleTime"].IsNull())
    {
        if (!value["LifeCycleTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.LifeCycleTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleTime = value["LifeCycleTime"].GetInt64();
        m_lifeCycleTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageSizeWithUnit") && !value["StorageSizeWithUnit"].IsNull())
    {
        if (!value["StorageSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.StorageSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSizeWithUnit = string(value["StorageSizeWithUnit"].GetString());
        m_storageSizeWithUnitHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TechnologyType") && !value["TechnologyType"].IsNull())
    {
        if (!value["TechnologyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TechnologyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_technologyType = string(value["TechnologyType"].GetString());
        m_technologyTypeHasBeenSet = true;
    }

    if (value.HasMember("TableNameEn") && !value["TableNameEn"].IsNull())
    {
        if (!value["TableNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNameEn = string(value["TableNameEn"].GetString());
        m_tableNameEnHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Partitions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = string(value["Partitions"].GetString());
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("ReplicationFactor") && !value["ReplicationFactor"].IsNull())
    {
        if (!value["ReplicationFactor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ReplicationFactor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationFactor = string(value["ReplicationFactor"].GetString());
        m_replicationFactorHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("DataModifyTime") && !value["DataModifyTime"].IsNull())
    {
        if (!value["DataModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DataModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataModifyTime = string(value["DataModifyTime"].GetString());
        m_dataModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("HasAdminAuthority") && !value["HasAdminAuthority"].IsNull())
    {
        if (!value["HasAdminAuthority"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.HasAdminAuthority` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasAdminAuthority = value["HasAdminAuthority"].GetBool();
        m_hasAdminAuthorityHasBeenSet = true;
    }

    if (value.HasMember("DatasourceDisplayName") && !value["DatasourceDisplayName"].IsNull())
    {
        if (!value["DatasourceDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DatasourceDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceDisplayName = string(value["DatasourceDisplayName"].GetString());
        m_datasourceDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("FavoriteCount") && !value["FavoriteCount"].IsNull())
    {
        if (!value["FavoriteCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.FavoriteCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_favoriteCount = value["FavoriteCount"].GetInt64();
        m_favoriteCountHasBeenSet = true;
    }

    if (value.HasMember("LikeCount") && !value["LikeCount"].IsNull())
    {
        if (!value["LikeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.LikeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_likeCount = value["LikeCount"].GetInt64();
        m_likeCountHasBeenSet = true;
    }

    if (value.HasMember("HasLike") && !value["HasLike"].IsNull())
    {
        if (!value["HasLike"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.HasLike` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasLike = value["HasLike"].GetBool();
        m_hasLikeHasBeenSet = true;
    }

    if (value.HasMember("TablePropertyScore") && !value["TablePropertyScore"].IsNull())
    {
        if (!value["TablePropertyScore"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TablePropertyScore` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tablePropertyScore.Deserialize(value["TablePropertyScore"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tablePropertyScoreHasBeenSet = true;
    }

    if (value.HasMember("TableHeat") && !value["TableHeat"].IsNull())
    {
        if (!value["TableHeat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableHeat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableHeat.Deserialize(value["TableHeat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableHeatHasBeenSet = true;
    }

    if (value.HasMember("OwnerProjectId") && !value["OwnerProjectId"].IsNull())
    {
        if (!value["OwnerProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.OwnerProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerProjectId = string(value["OwnerProjectId"].GetString());
        m_ownerProjectIdHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerId") && !value["TableOwnerId"].IsNull())
    {
        if (!value["TableOwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableOwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerId = string(value["TableOwnerId"].GetString());
        m_tableOwnerIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceCategory") && !value["DataSourceCategory"].IsNull())
    {
        if (!value["DataSourceCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DataSourceCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceCategory = string(value["DataSourceCategory"].GetString());
        m_dataSourceCategoryHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchColumnDocVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("MetaCrawlType") && !value["MetaCrawlType"].IsNull())
    {
        if (!value["MetaCrawlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.MetaCrawlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaCrawlType = string(value["MetaCrawlType"].GetString());
        m_metaCrawlTypeHasBeenSet = true;
    }

    if (value.HasMember("IsView") && !value["IsView"].IsNull())
    {
        if (!value["IsView"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.IsView` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isView = value["IsView"].GetBool();
        m_isViewHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("IsPartitionTable") && !value["IsPartitionTable"].IsNull())
    {
        if (!value["IsPartitionTable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.IsPartitionTable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPartitionTable = value["IsPartitionTable"].GetInt64();
        m_isPartitionTableHasBeenSet = true;
    }

    if (value.HasMember("PartitionColumns") && !value["PartitionColumns"].IsNull())
    {
        if (!value["PartitionColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.PartitionColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partitionColumns.push_back((*itr).GetString());
        }
        m_partitionColumnsHasBeenSet = true;
    }

    if (value.HasMember("PartitionExpireDays") && !value["PartitionExpireDays"].IsNull())
    {
        if (!value["PartitionExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.PartitionExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionExpireDays = value["PartitionExpireDays"].GetInt64();
        m_partitionExpireDaysHasBeenSet = true;
    }

    if (value.HasMember("TableProperties") && !value["TableProperties"].IsNull())
    {
        if (!value["TableProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.TableProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["TableProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableMetaProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableProperties.push_back(item);
        }
        m_tablePropertiesHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("CollectDatasourceList") && !value["CollectDatasourceList"].IsNull())
    {
        if (!value["CollectDatasourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableMeta.CollectDatasourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectDatasourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GovDatasourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collectDatasourceList.push_back(item);
        }
        m_collectDatasourceListHasBeenSet = true;
    }

    if (value.HasMember("CollectJobId") && !value["CollectJobId"].IsNull())
    {
        if (!value["CollectJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.CollectJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectJobId = string(value["CollectJobId"].GetString());
        m_collectJobIdHasBeenSet = true;
    }

    if (value.HasMember("CollectJobName") && !value["CollectJobName"].IsNull())
    {
        if (!value["CollectJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.CollectJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectJobName = string(value["CollectJobName"].GetString());
        m_collectJobNameHasBeenSet = true;
    }

    if (value.HasMember("Urn") && !value["Urn"].IsNull())
    {
        if (!value["Urn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.Urn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urn = string(value["Urn"].GetString());
        m_urnHasBeenSet = true;
    }

    if (value.HasMember("HasBizPermission") && !value["HasBizPermission"].IsNull())
    {
        if (!value["HasBizPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.HasBizPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasBizPermission = value["HasBizPermission"].GetBool();
        m_hasBizPermissionHasBeenSet = true;
    }

    if (value.HasMember("OwnerByEngine") && !value["OwnerByEngine"].IsNull())
    {
        if (!value["OwnerByEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.OwnerByEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerByEngine = string(value["OwnerByEngine"].GetString());
        m_ownerByEngineHasBeenSet = true;
    }

    if (value.HasMember("ErrorTips") && !value["ErrorTips"].IsNull())
    {
        if (!value["ErrorTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ErrorTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTips = string(value["ErrorTips"].GetString());
        m_errorTipsHasBeenSet = true;
    }

    if (value.HasMember("IfSupportCreateAndDDL") && !value["IfSupportCreateAndDDL"].IsNull())
    {
        if (!value["IfSupportCreateAndDDL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.IfSupportCreateAndDDL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ifSupportCreateAndDDL.Deserialize(value["IfSupportCreateAndDDL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ifSupportCreateAndDDLHasBeenSet = true;
    }

    if (value.HasMember("DataFromType") && !value["DataFromType"].IsNull())
    {
        if (!value["DataFromType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DataFromType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFromType = string(value["DataFromType"].GetString());
        m_dataFromTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineOwner") && !value["EngineOwner"].IsNull())
    {
        if (!value["EngineOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.EngineOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineOwner = string(value["EngineOwner"].GetString());
        m_engineOwnerHasBeenSet = true;
    }

    if (value.HasMember("DataLayerUuid") && !value["DataLayerUuid"].IsNull())
    {
        if (!value["DataLayerUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DataLayerUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLayerUuid = string(value["DataLayerUuid"].GetString());
        m_dataLayerUuidHasBeenSet = true;
    }

    if (value.HasMember("DataLayerName") && !value["DataLayerName"].IsNull())
    {
        if (!value["DataLayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.DataLayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLayerName = string(value["DataLayerName"].GetString());
        m_dataLayerNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnCount") && !value["ColumnCount"].IsNull())
    {
        if (!value["ColumnCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta.ColumnCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnCount = value["ColumnCount"].GetInt64();
        m_columnCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tablePath.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_metastoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metastoreId, allocator);
    }

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_columnSeparatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnSeparator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnSeparator.c_str(), allocator).Move(), allocator);
    }

    if (m_storageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ddlModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ddlModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_bizCatalogIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizCatalogIds.begin(); itr != m_bizCatalogIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bizCatalogNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizCatalogNames.begin(); itr != m_bizCatalogNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasFavorite, allocator);
    }

    if (m_lifeCycleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeCycleTime, allocator);
    }

    if (m_storageSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSizeWithUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_technologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnologyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_technologyType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitions.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationFactorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationFactor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationFactor.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAdminAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAdminAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAdminAuthority, allocator);
    }

    if (m_datasourceDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_favoriteCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FavoriteCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_favoriteCount, allocator);
    }

    if (m_likeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_likeCount, allocator);
    }

    if (m_hasLikeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasLike";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasLike, allocator);
    }

    if (m_tablePropertyScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePropertyScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tablePropertyScore.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableHeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableHeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableHeat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ownerProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metaCrawlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaCrawlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaCrawlType.c_str(), allocator).Move(), allocator);
    }

    if (m_isViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isView, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_isPartitionTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartitionTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartitionTable, allocator);
    }

    if (m_partitionColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitionColumns.begin(); itr != m_partitionColumns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partitionExpireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionExpireDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionExpireDays, allocator);
    }

    if (m_tablePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableProperties.begin(); itr != m_tableProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_collectDatasourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectDatasourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectDatasourceList.begin(); itr != m_collectDatasourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_collectJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_urnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urn.c_str(), allocator).Move(), allocator);
    }

    if (m_hasBizPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasBizPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasBizPermission, allocator);
    }

    if (m_ownerByEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerByEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerByEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTips.c_str(), allocator).Move(), allocator);
    }

    if (m_ifSupportCreateAndDDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfSupportCreateAndDDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ifSupportCreateAndDDL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataFromTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFromType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFromType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLayerUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLayerUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataLayerUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLayerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataLayerName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnCount, allocator);
    }

}


string TableMeta::GetTableId() const
{
    return m_tableId;
}

void TableMeta::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableMeta::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableMeta::GetTableName() const
{
    return m_tableName;
}

void TableMeta::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableMeta::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableMeta::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void TableMeta::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool TableMeta::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

int64_t TableMeta::GetDatasourceId() const
{
    return m_datasourceId;
}

void TableMeta::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TableMeta::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TableMeta::GetClusterName() const
{
    return m_clusterName;
}

void TableMeta::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool TableMeta::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string TableMeta::GetDatasourceName() const
{
    return m_datasourceName;
}

void TableMeta::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool TableMeta::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string TableMeta::GetDatabaseName() const
{
    return m_databaseName;
}

void TableMeta::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableMeta::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableMeta::GetTablePath() const
{
    return m_tablePath;
}

void TableMeta::SetTablePath(const string& _tablePath)
{
    m_tablePath = _tablePath;
    m_tablePathHasBeenSet = true;
}

bool TableMeta::TablePathHasBeenSet() const
{
    return m_tablePathHasBeenSet;
}

string TableMeta::GetTableNameCn() const
{
    return m_tableNameCn;
}

void TableMeta::SetTableNameCn(const string& _tableNameCn)
{
    m_tableNameCn = _tableNameCn;
    m_tableNameCnHasBeenSet = true;
}

bool TableMeta::TableNameCnHasBeenSet() const
{
    return m_tableNameCnHasBeenSet;
}

int64_t TableMeta::GetMetastoreId() const
{
    return m_metastoreId;
}

void TableMeta::SetMetastoreId(const int64_t& _metastoreId)
{
    m_metastoreId = _metastoreId;
    m_metastoreIdHasBeenSet = true;
}

bool TableMeta::MetastoreIdHasBeenSet() const
{
    return m_metastoreIdHasBeenSet;
}

string TableMeta::GetMetastoreType() const
{
    return m_metastoreType;
}

void TableMeta::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool TableMeta::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string TableMeta::GetDescription() const
{
    return m_description;
}

void TableMeta::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableMeta::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TableMeta::GetColumnSeparator() const
{
    return m_columnSeparator;
}

void TableMeta::SetColumnSeparator(const string& _columnSeparator)
{
    m_columnSeparator = _columnSeparator;
    m_columnSeparatorHasBeenSet = true;
}

bool TableMeta::ColumnSeparatorHasBeenSet() const
{
    return m_columnSeparatorHasBeenSet;
}

string TableMeta::GetStorageFormat() const
{
    return m_storageFormat;
}

void TableMeta::SetStorageFormat(const string& _storageFormat)
{
    m_storageFormat = _storageFormat;
    m_storageFormatHasBeenSet = true;
}

bool TableMeta::StorageFormatHasBeenSet() const
{
    return m_storageFormatHasBeenSet;
}

int64_t TableMeta::GetStorageSize() const
{
    return m_storageSize;
}

void TableMeta::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool TableMeta::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string TableMeta::GetTableType() const
{
    return m_tableType;
}

void TableMeta::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableMeta::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableMeta::GetCreateTime() const
{
    return m_createTime;
}

void TableMeta::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableMeta::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableMeta::GetModifyTime() const
{
    return m_modifyTime;
}

void TableMeta::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool TableMeta::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string TableMeta::GetDdlModifyTime() const
{
    return m_ddlModifyTime;
}

void TableMeta::SetDdlModifyTime(const string& _ddlModifyTime)
{
    m_ddlModifyTime = _ddlModifyTime;
    m_ddlModifyTimeHasBeenSet = true;
}

bool TableMeta::DdlModifyTimeHasBeenSet() const
{
    return m_ddlModifyTimeHasBeenSet;
}

string TableMeta::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void TableMeta::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool TableMeta::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

string TableMeta::GetProjectName() const
{
    return m_projectName;
}

void TableMeta::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TableMeta::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

vector<string> TableMeta::GetBizCatalogIds() const
{
    return m_bizCatalogIds;
}

void TableMeta::SetBizCatalogIds(const vector<string>& _bizCatalogIds)
{
    m_bizCatalogIds = _bizCatalogIds;
    m_bizCatalogIdsHasBeenSet = true;
}

bool TableMeta::BizCatalogIdsHasBeenSet() const
{
    return m_bizCatalogIdsHasBeenSet;
}

vector<string> TableMeta::GetBizCatalogNames() const
{
    return m_bizCatalogNames;
}

void TableMeta::SetBizCatalogNames(const vector<string>& _bizCatalogNames)
{
    m_bizCatalogNames = _bizCatalogNames;
    m_bizCatalogNamesHasBeenSet = true;
}

bool TableMeta::BizCatalogNamesHasBeenSet() const
{
    return m_bizCatalogNamesHasBeenSet;
}

bool TableMeta::GetHasFavorite() const
{
    return m_hasFavorite;
}

void TableMeta::SetHasFavorite(const bool& _hasFavorite)
{
    m_hasFavorite = _hasFavorite;
    m_hasFavoriteHasBeenSet = true;
}

bool TableMeta::HasFavoriteHasBeenSet() const
{
    return m_hasFavoriteHasBeenSet;
}

int64_t TableMeta::GetLifeCycleTime() const
{
    return m_lifeCycleTime;
}

void TableMeta::SetLifeCycleTime(const int64_t& _lifeCycleTime)
{
    m_lifeCycleTime = _lifeCycleTime;
    m_lifeCycleTimeHasBeenSet = true;
}

bool TableMeta::LifeCycleTimeHasBeenSet() const
{
    return m_lifeCycleTimeHasBeenSet;
}

string TableMeta::GetStorageSizeWithUnit() const
{
    return m_storageSizeWithUnit;
}

void TableMeta::SetStorageSizeWithUnit(const string& _storageSizeWithUnit)
{
    m_storageSizeWithUnit = _storageSizeWithUnit;
    m_storageSizeWithUnitHasBeenSet = true;
}

bool TableMeta::StorageSizeWithUnitHasBeenSet() const
{
    return m_storageSizeWithUnitHasBeenSet;
}

string TableMeta::GetInstanceId() const
{
    return m_instanceId;
}

void TableMeta::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TableMeta::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TableMeta::GetTechnologyType() const
{
    return m_technologyType;
}

void TableMeta::SetTechnologyType(const string& _technologyType)
{
    m_technologyType = _technologyType;
    m_technologyTypeHasBeenSet = true;
}

bool TableMeta::TechnologyTypeHasBeenSet() const
{
    return m_technologyTypeHasBeenSet;
}

string TableMeta::GetTableNameEn() const
{
    return m_tableNameEn;
}

void TableMeta::SetTableNameEn(const string& _tableNameEn)
{
    m_tableNameEn = _tableNameEn;
    m_tableNameEnHasBeenSet = true;
}

bool TableMeta::TableNameEnHasBeenSet() const
{
    return m_tableNameEnHasBeenSet;
}

string TableMeta::GetProjectId() const
{
    return m_projectId;
}

void TableMeta::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TableMeta::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TableMeta::GetPartitions() const
{
    return m_partitions;
}

void TableMeta::SetPartitions(const string& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TableMeta::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string TableMeta::GetReplicationFactor() const
{
    return m_replicationFactor;
}

void TableMeta::SetReplicationFactor(const string& _replicationFactor)
{
    m_replicationFactor = _replicationFactor;
    m_replicationFactorHasBeenSet = true;
}

bool TableMeta::ReplicationFactorHasBeenSet() const
{
    return m_replicationFactorHasBeenSet;
}

string TableMeta::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void TableMeta::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool TableMeta::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string TableMeta::GetDataModifyTime() const
{
    return m_dataModifyTime;
}

void TableMeta::SetDataModifyTime(const string& _dataModifyTime)
{
    m_dataModifyTime = _dataModifyTime;
    m_dataModifyTimeHasBeenSet = true;
}

bool TableMeta::DataModifyTimeHasBeenSet() const
{
    return m_dataModifyTimeHasBeenSet;
}

string TableMeta::GetClusterId() const
{
    return m_clusterId;
}

void TableMeta::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TableMeta::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool TableMeta::GetHasAdminAuthority() const
{
    return m_hasAdminAuthority;
}

void TableMeta::SetHasAdminAuthority(const bool& _hasAdminAuthority)
{
    m_hasAdminAuthority = _hasAdminAuthority;
    m_hasAdminAuthorityHasBeenSet = true;
}

bool TableMeta::HasAdminAuthorityHasBeenSet() const
{
    return m_hasAdminAuthorityHasBeenSet;
}

string TableMeta::GetDatasourceDisplayName() const
{
    return m_datasourceDisplayName;
}

void TableMeta::SetDatasourceDisplayName(const string& _datasourceDisplayName)
{
    m_datasourceDisplayName = _datasourceDisplayName;
    m_datasourceDisplayNameHasBeenSet = true;
}

bool TableMeta::DatasourceDisplayNameHasBeenSet() const
{
    return m_datasourceDisplayNameHasBeenSet;
}

string TableMeta::GetDatabaseId() const
{
    return m_databaseId;
}

void TableMeta::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool TableMeta::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

int64_t TableMeta::GetFavoriteCount() const
{
    return m_favoriteCount;
}

void TableMeta::SetFavoriteCount(const int64_t& _favoriteCount)
{
    m_favoriteCount = _favoriteCount;
    m_favoriteCountHasBeenSet = true;
}

bool TableMeta::FavoriteCountHasBeenSet() const
{
    return m_favoriteCountHasBeenSet;
}

int64_t TableMeta::GetLikeCount() const
{
    return m_likeCount;
}

void TableMeta::SetLikeCount(const int64_t& _likeCount)
{
    m_likeCount = _likeCount;
    m_likeCountHasBeenSet = true;
}

bool TableMeta::LikeCountHasBeenSet() const
{
    return m_likeCountHasBeenSet;
}

bool TableMeta::GetHasLike() const
{
    return m_hasLike;
}

void TableMeta::SetHasLike(const bool& _hasLike)
{
    m_hasLike = _hasLike;
    m_hasLikeHasBeenSet = true;
}

bool TableMeta::HasLikeHasBeenSet() const
{
    return m_hasLikeHasBeenSet;
}

TablePropertyScore TableMeta::GetTablePropertyScore() const
{
    return m_tablePropertyScore;
}

void TableMeta::SetTablePropertyScore(const TablePropertyScore& _tablePropertyScore)
{
    m_tablePropertyScore = _tablePropertyScore;
    m_tablePropertyScoreHasBeenSet = true;
}

bool TableMeta::TablePropertyScoreHasBeenSet() const
{
    return m_tablePropertyScoreHasBeenSet;
}

TableHeat TableMeta::GetTableHeat() const
{
    return m_tableHeat;
}

void TableMeta::SetTableHeat(const TableHeat& _tableHeat)
{
    m_tableHeat = _tableHeat;
    m_tableHeatHasBeenSet = true;
}

bool TableMeta::TableHeatHasBeenSet() const
{
    return m_tableHeatHasBeenSet;
}

string TableMeta::GetOwnerProjectId() const
{
    return m_ownerProjectId;
}

void TableMeta::SetOwnerProjectId(const string& _ownerProjectId)
{
    m_ownerProjectId = _ownerProjectId;
    m_ownerProjectIdHasBeenSet = true;
}

bool TableMeta::OwnerProjectIdHasBeenSet() const
{
    return m_ownerProjectIdHasBeenSet;
}

string TableMeta::GetTableOwnerId() const
{
    return m_tableOwnerId;
}

void TableMeta::SetTableOwnerId(const string& _tableOwnerId)
{
    m_tableOwnerId = _tableOwnerId;
    m_tableOwnerIdHasBeenSet = true;
}

bool TableMeta::TableOwnerIdHasBeenSet() const
{
    return m_tableOwnerIdHasBeenSet;
}

string TableMeta::GetDataSourceCategory() const
{
    return m_dataSourceCategory;
}

void TableMeta::SetDataSourceCategory(const string& _dataSourceCategory)
{
    m_dataSourceCategory = _dataSourceCategory;
    m_dataSourceCategoryHasBeenSet = true;
}

bool TableMeta::DataSourceCategoryHasBeenSet() const
{
    return m_dataSourceCategoryHasBeenSet;
}

vector<SearchColumnDocVO> TableMeta::GetColumns() const
{
    return m_columns;
}

void TableMeta::SetColumns(const vector<SearchColumnDocVO>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TableMeta::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

string TableMeta::GetMetaCrawlType() const
{
    return m_metaCrawlType;
}

void TableMeta::SetMetaCrawlType(const string& _metaCrawlType)
{
    m_metaCrawlType = _metaCrawlType;
    m_metaCrawlTypeHasBeenSet = true;
}

bool TableMeta::MetaCrawlTypeHasBeenSet() const
{
    return m_metaCrawlTypeHasBeenSet;
}

bool TableMeta::GetIsView() const
{
    return m_isView;
}

void TableMeta::SetIsView(const bool& _isView)
{
    m_isView = _isView;
    m_isViewHasBeenSet = true;
}

bool TableMeta::IsViewHasBeenSet() const
{
    return m_isViewHasBeenSet;
}

string TableMeta::GetLocation() const
{
    return m_location;
}

void TableMeta::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TableMeta::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t TableMeta::GetIsPartitionTable() const
{
    return m_isPartitionTable;
}

void TableMeta::SetIsPartitionTable(const int64_t& _isPartitionTable)
{
    m_isPartitionTable = _isPartitionTable;
    m_isPartitionTableHasBeenSet = true;
}

bool TableMeta::IsPartitionTableHasBeenSet() const
{
    return m_isPartitionTableHasBeenSet;
}

vector<string> TableMeta::GetPartitionColumns() const
{
    return m_partitionColumns;
}

void TableMeta::SetPartitionColumns(const vector<string>& _partitionColumns)
{
    m_partitionColumns = _partitionColumns;
    m_partitionColumnsHasBeenSet = true;
}

bool TableMeta::PartitionColumnsHasBeenSet() const
{
    return m_partitionColumnsHasBeenSet;
}

int64_t TableMeta::GetPartitionExpireDays() const
{
    return m_partitionExpireDays;
}

void TableMeta::SetPartitionExpireDays(const int64_t& _partitionExpireDays)
{
    m_partitionExpireDays = _partitionExpireDays;
    m_partitionExpireDaysHasBeenSet = true;
}

bool TableMeta::PartitionExpireDaysHasBeenSet() const
{
    return m_partitionExpireDaysHasBeenSet;
}

vector<TableMetaProperty> TableMeta::GetTableProperties() const
{
    return m_tableProperties;
}

void TableMeta::SetTableProperties(const vector<TableMetaProperty>& _tableProperties)
{
    m_tableProperties = _tableProperties;
    m_tablePropertiesHasBeenSet = true;
}

bool TableMeta::TablePropertiesHasBeenSet() const
{
    return m_tablePropertiesHasBeenSet;
}

string TableMeta::GetEnvironment() const
{
    return m_environment;
}

void TableMeta::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool TableMeta::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string TableMeta::GetSchema() const
{
    return m_schema;
}

void TableMeta::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool TableMeta::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

vector<GovDatasourceInfo> TableMeta::GetCollectDatasourceList() const
{
    return m_collectDatasourceList;
}

void TableMeta::SetCollectDatasourceList(const vector<GovDatasourceInfo>& _collectDatasourceList)
{
    m_collectDatasourceList = _collectDatasourceList;
    m_collectDatasourceListHasBeenSet = true;
}

bool TableMeta::CollectDatasourceListHasBeenSet() const
{
    return m_collectDatasourceListHasBeenSet;
}

string TableMeta::GetCollectJobId() const
{
    return m_collectJobId;
}

void TableMeta::SetCollectJobId(const string& _collectJobId)
{
    m_collectJobId = _collectJobId;
    m_collectJobIdHasBeenSet = true;
}

bool TableMeta::CollectJobIdHasBeenSet() const
{
    return m_collectJobIdHasBeenSet;
}

string TableMeta::GetCollectJobName() const
{
    return m_collectJobName;
}

void TableMeta::SetCollectJobName(const string& _collectJobName)
{
    m_collectJobName = _collectJobName;
    m_collectJobNameHasBeenSet = true;
}

bool TableMeta::CollectJobNameHasBeenSet() const
{
    return m_collectJobNameHasBeenSet;
}

string TableMeta::GetUrn() const
{
    return m_urn;
}

void TableMeta::SetUrn(const string& _urn)
{
    m_urn = _urn;
    m_urnHasBeenSet = true;
}

bool TableMeta::UrnHasBeenSet() const
{
    return m_urnHasBeenSet;
}

bool TableMeta::GetHasBizPermission() const
{
    return m_hasBizPermission;
}

void TableMeta::SetHasBizPermission(const bool& _hasBizPermission)
{
    m_hasBizPermission = _hasBizPermission;
    m_hasBizPermissionHasBeenSet = true;
}

bool TableMeta::HasBizPermissionHasBeenSet() const
{
    return m_hasBizPermissionHasBeenSet;
}

string TableMeta::GetOwnerByEngine() const
{
    return m_ownerByEngine;
}

void TableMeta::SetOwnerByEngine(const string& _ownerByEngine)
{
    m_ownerByEngine = _ownerByEngine;
    m_ownerByEngineHasBeenSet = true;
}

bool TableMeta::OwnerByEngineHasBeenSet() const
{
    return m_ownerByEngineHasBeenSet;
}

string TableMeta::GetErrorTips() const
{
    return m_errorTips;
}

void TableMeta::SetErrorTips(const string& _errorTips)
{
    m_errorTips = _errorTips;
    m_errorTipsHasBeenSet = true;
}

bool TableMeta::ErrorTipsHasBeenSet() const
{
    return m_errorTipsHasBeenSet;
}

CreateAndDDLSupport TableMeta::GetIfSupportCreateAndDDL() const
{
    return m_ifSupportCreateAndDDL;
}

void TableMeta::SetIfSupportCreateAndDDL(const CreateAndDDLSupport& _ifSupportCreateAndDDL)
{
    m_ifSupportCreateAndDDL = _ifSupportCreateAndDDL;
    m_ifSupportCreateAndDDLHasBeenSet = true;
}

bool TableMeta::IfSupportCreateAndDDLHasBeenSet() const
{
    return m_ifSupportCreateAndDDLHasBeenSet;
}

string TableMeta::GetDataFromType() const
{
    return m_dataFromType;
}

void TableMeta::SetDataFromType(const string& _dataFromType)
{
    m_dataFromType = _dataFromType;
    m_dataFromTypeHasBeenSet = true;
}

bool TableMeta::DataFromTypeHasBeenSet() const
{
    return m_dataFromTypeHasBeenSet;
}

string TableMeta::GetEngineOwner() const
{
    return m_engineOwner;
}

void TableMeta::SetEngineOwner(const string& _engineOwner)
{
    m_engineOwner = _engineOwner;
    m_engineOwnerHasBeenSet = true;
}

bool TableMeta::EngineOwnerHasBeenSet() const
{
    return m_engineOwnerHasBeenSet;
}

string TableMeta::GetDataLayerUuid() const
{
    return m_dataLayerUuid;
}

void TableMeta::SetDataLayerUuid(const string& _dataLayerUuid)
{
    m_dataLayerUuid = _dataLayerUuid;
    m_dataLayerUuidHasBeenSet = true;
}

bool TableMeta::DataLayerUuidHasBeenSet() const
{
    return m_dataLayerUuidHasBeenSet;
}

string TableMeta::GetDataLayerName() const
{
    return m_dataLayerName;
}

void TableMeta::SetDataLayerName(const string& _dataLayerName)
{
    m_dataLayerName = _dataLayerName;
    m_dataLayerNameHasBeenSet = true;
}

bool TableMeta::DataLayerNameHasBeenSet() const
{
    return m_dataLayerNameHasBeenSet;
}

int64_t TableMeta::GetColumnCount() const
{
    return m_columnCount;
}

void TableMeta::SetColumnCount(const int64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool TableMeta::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

