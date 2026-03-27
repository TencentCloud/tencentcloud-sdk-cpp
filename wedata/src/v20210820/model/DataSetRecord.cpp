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

#include <tencentcloud/wedata/v20210820/model/DataSetRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataSetRecord::DataSetRecord() :
    m_assetIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableNameCnHasBeenSet(false),
    m_tableNameEnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_heatValueHasBeenSet(false),
    m_labelNamesHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_metaCrawlTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_isPartitionTableHasBeenSet(false),
    m_tableRecordFieldSetHasBeenSet(false),
    m_tablePropertyScoreHasBeenSet(false),
    m_msTypeHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_assetLevelHasBeenSet(false),
    m_assetStatusHasBeenSet(false),
    m_bizCatalogIdsHasBeenSet(false),
    m_bizCatalogNamesHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_operateOptionHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_isViewHasBeenSet(false),
    m_technologyTypeHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_storageSizeWithUnitHasBeenSet(false),
    m_collectDatasourceListHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_dataSourceCategoryHasBeenSet(false),
    m_collectIdHasBeenSet(false),
    m_urnHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetRunningStatusHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_executeTimeHasBeenSet(false),
    m_assetLogHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_levelRankHasBeenSet(false),
    m_levelNameHasBeenSet(false),
    m_assetCodeHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_ownerByEngineHasBeenSet(false),
    m_dataLayerUuidHasBeenSet(false),
    m_dataLayerNameHasBeenSet(false),
    m_columnCountHasBeenSet(false),
    m_searchHitColumnsHasBeenSet(false),
    m_labelTagListHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_isDeployedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metaFromHasBeenSet(false),
    m_engineOwnerHasBeenSet(false)
{
}

CoreInternalOutcome DataSetRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableNameCn") && !value["TableNameCn"].IsNull())
    {
        if (!value["TableNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TableNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNameCn = string(value["TableNameCn"].GetString());
        m_tableNameCnHasBeenSet = true;
    }

    if (value.HasMember("TableNameEn") && !value["TableNameEn"].IsNull())
    {
        if (!value["TableNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TableNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableNameEn = string(value["TableNameEn"].GetString());
        m_tableNameEnHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("HeatValue") && !value["HeatValue"].IsNull())
    {
        if (!value["HeatValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.HeatValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_heatValue = value["HeatValue"].GetDouble();
        m_heatValueHasBeenSet = true;
    }

    if (value.HasMember("LabelNames") && !value["LabelNames"].IsNull())
    {
        if (!value["LabelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LabelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelNames.push_back((*itr).GetString());
        }
        m_labelNamesHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("MetaCrawlType") && !value["MetaCrawlType"].IsNull())
    {
        if (!value["MetaCrawlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.MetaCrawlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaCrawlType = string(value["MetaCrawlType"].GetString());
        m_metaCrawlTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }

    if (value.HasMember("IsPartitionTable") && !value["IsPartitionTable"].IsNull())
    {
        if (!value["IsPartitionTable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.IsPartitionTable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPartitionTable = value["IsPartitionTable"].GetInt64();
        m_isPartitionTableHasBeenSet = true;
    }

    if (value.HasMember("TableRecordFieldSet") && !value["TableRecordFieldSet"].IsNull())
    {
        if (!value["TableRecordFieldSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TableRecordFieldSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TableRecordFieldSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchColumnDocVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableRecordFieldSet.push_back(item);
        }
        m_tableRecordFieldSetHasBeenSet = true;
    }

    if (value.HasMember("TablePropertyScore") && !value["TablePropertyScore"].IsNull())
    {
        if (!value["TablePropertyScore"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TablePropertyScore` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tablePropertyScore.Deserialize(value["TablePropertyScore"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tablePropertyScoreHasBeenSet = true;
    }

    if (value.HasMember("MsType") && !value["MsType"].IsNull())
    {
        if (!value["MsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.MsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msType = string(value["MsType"].GetString());
        m_msTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("AssetLevel") && !value["AssetLevel"].IsNull())
    {
        if (!value["AssetLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetLevel = value["AssetLevel"].GetInt64();
        m_assetLevelHasBeenSet = true;
    }

    if (value.HasMember("AssetStatus") && !value["AssetStatus"].IsNull())
    {
        if (!value["AssetStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatus = value["AssetStatus"].GetInt64();
        m_assetStatusHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogIds") && !value["BizCatalogIds"].IsNull())
    {
        if (!value["BizCatalogIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.BizCatalogIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.BizCatalogNames` is not array type"));

        const rapidjson::Value &tmpValue = value["BizCatalogNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizCatalogNames.push_back((*itr).GetString());
        }
        m_bizCatalogNamesHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DatasourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetInt64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("OperateOption") && !value["OperateOption"].IsNull())
    {
        if (!value["OperateOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.OperateOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operateOption.Deserialize(value["OperateOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operateOptionHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("IsView") && !value["IsView"].IsNull())
    {
        if (!value["IsView"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.IsView` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isView = value["IsView"].GetBool();
        m_isViewHasBeenSet = true;
    }

    if (value.HasMember("TechnologyType") && !value["TechnologyType"].IsNull())
    {
        if (!value["TechnologyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TechnologyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_technologyType = string(value["TechnologyType"].GetString());
        m_technologyTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StorageSizeWithUnit") && !value["StorageSizeWithUnit"].IsNull())
    {
        if (!value["StorageSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.StorageSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSizeWithUnit = string(value["StorageSizeWithUnit"].GetString());
        m_storageSizeWithUnitHasBeenSet = true;
    }

    if (value.HasMember("CollectDatasourceList") && !value["CollectDatasourceList"].IsNull())
    {
        if (!value["CollectDatasourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.CollectDatasourceList` is not array type"));

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

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("DataSourceCategory") && !value["DataSourceCategory"].IsNull())
    {
        if (!value["DataSourceCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DataSourceCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceCategory = string(value["DataSourceCategory"].GetString());
        m_dataSourceCategoryHasBeenSet = true;
    }

    if (value.HasMember("CollectId") && !value["CollectId"].IsNull())
    {
        if (!value["CollectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.CollectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_collectId = value["CollectId"].GetInt64();
        m_collectIdHasBeenSet = true;
    }

    if (value.HasMember("Urn") && !value["Urn"].IsNull())
    {
        if (!value["Urn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Urn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urn = string(value["Urn"].GetString());
        m_urnHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetRunningStatus") && !value["AssetRunningStatus"].IsNull())
    {
        if (!value["AssetRunningStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetRunningStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRunningStatus = string(value["AssetRunningStatus"].GetString());
        m_assetRunningStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.TaskTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetInt64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("ExecuteTime") && !value["ExecuteTime"].IsNull())
    {
        if (!value["ExecuteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ExecuteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeTime = string(value["ExecuteTime"].GetString());
        m_executeTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetLog") && !value["AssetLog"].IsNull())
    {
        if (!value["AssetLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetLog = string(value["AssetLog"].GetString());
        m_assetLogHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("LevelRank") && !value["LevelRank"].IsNull())
    {
        if (!value["LevelRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LevelRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRank = value["LevelRank"].GetInt64();
        m_levelRankHasBeenSet = true;
    }

    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("AssetCode") && !value["AssetCode"].IsNull())
    {
        if (!value["AssetCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.AssetCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCode = string(value["AssetCode"].GetString());
        m_assetCodeHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.OwnerAccount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = value["OwnerAccount"].GetInt64();
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerByEngine") && !value["OwnerByEngine"].IsNull())
    {
        if (!value["OwnerByEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.OwnerByEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerByEngine = string(value["OwnerByEngine"].GetString());
        m_ownerByEngineHasBeenSet = true;
    }

    if (value.HasMember("DataLayerUuid") && !value["DataLayerUuid"].IsNull())
    {
        if (!value["DataLayerUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DataLayerUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLayerUuid = string(value["DataLayerUuid"].GetString());
        m_dataLayerUuidHasBeenSet = true;
    }

    if (value.HasMember("DataLayerName") && !value["DataLayerName"].IsNull())
    {
        if (!value["DataLayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.DataLayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLayerName = string(value["DataLayerName"].GetString());
        m_dataLayerNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnCount") && !value["ColumnCount"].IsNull())
    {
        if (!value["ColumnCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ColumnCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnCount = value["ColumnCount"].GetInt64();
        m_columnCountHasBeenSet = true;
    }

    if (value.HasMember("SearchHitColumns") && !value["SearchHitColumns"].IsNull())
    {
        if (!value["SearchHitColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.SearchHitColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchHitColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchColumnDocVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_searchHitColumns.push_back(item);
        }
        m_searchHitColumnsHasBeenSet = true;
    }

    if (value.HasMember("LabelTagList") && !value["LabelTagList"].IsNull())
    {
        if (!value["LabelTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.LabelTagList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelTagList.push_back(item);
        }
        m_labelTagListHasBeenSet = true;
    }

    if (value.HasMember("Aliases") && !value["Aliases"].IsNull())
    {
        if (!value["Aliases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Aliases` is not array type"));

        const rapidjson::Value &tmpValue = value["Aliases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegisteredModelAlias item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aliases.push_back(item);
        }
        m_aliasesHasBeenSet = true;
    }

    if (value.HasMember("IsDeployed") && !value["IsDeployed"].IsNull())
    {
        if (!value["IsDeployed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.IsDeployed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeployed = value["IsDeployed"].GetBool();
        m_isDeployedHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegisteredModelTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MetaFrom") && !value["MetaFrom"].IsNull())
    {
        if (!value["MetaFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.MetaFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaFrom = string(value["MetaFrom"].GetString());
        m_metaFromHasBeenSet = true;
    }

    if (value.HasMember("EngineOwner") && !value["EngineOwner"].IsNull())
    {
        if (!value["EngineOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSetRecord.EngineOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineOwner = string(value["EngineOwner"].GetString());
        m_engineOwnerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSetRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
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

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_heatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heatValue, allocator);
    }

    if (m_labelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelNames.begin(); itr != m_labelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_metaCrawlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaCrawlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaCrawlType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_isPartitionTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartitionTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartitionTable, allocator);
    }

    if (m_tableRecordFieldSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRecordFieldSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableRecordFieldSet.begin(); itr != m_tableRecordFieldSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablePropertyScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePropertyScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tablePropertyScore.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_msTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_assetLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetLevel, allocator);
    }

    if (m_assetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetStatus, allocator);
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

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operateOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_isViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isView, allocator);
    }

    if (m_technologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnologyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_technologyType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSizeWithUnit.c_str(), allocator).Move(), allocator);
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_collectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectId, allocator);
    }

    if (m_urnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urn.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRunningStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRunningStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRunningStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_executeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetLog.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRank, allocator);
    }

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCode.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAccount, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerByEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerByEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerByEngine.c_str(), allocator).Move(), allocator);
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

    if (m_searchHitColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchHitColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchHitColumns.begin(); itr != m_searchHitColumns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelTagList.begin(); itr != m_labelTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDeployedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeployed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeployed, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metaFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_engineOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineOwner.c_str(), allocator).Move(), allocator);
    }

}


string DataSetRecord::GetAssetId() const
{
    return m_assetId;
}

void DataSetRecord::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DataSetRecord::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DataSetRecord::GetDatasourceName() const
{
    return m_datasourceName;
}

void DataSetRecord::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool DataSetRecord::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string DataSetRecord::GetDatabaseName() const
{
    return m_databaseName;
}

void DataSetRecord::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DataSetRecord::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DataSetRecord::GetTableName() const
{
    return m_tableName;
}

void DataSetRecord::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DataSetRecord::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DataSetRecord::GetTableNameCn() const
{
    return m_tableNameCn;
}

void DataSetRecord::SetTableNameCn(const string& _tableNameCn)
{
    m_tableNameCn = _tableNameCn;
    m_tableNameCnHasBeenSet = true;
}

bool DataSetRecord::TableNameCnHasBeenSet() const
{
    return m_tableNameCnHasBeenSet;
}

string DataSetRecord::GetTableNameEn() const
{
    return m_tableNameEn;
}

void DataSetRecord::SetTableNameEn(const string& _tableNameEn)
{
    m_tableNameEn = _tableNameEn;
    m_tableNameEnHasBeenSet = true;
}

bool DataSetRecord::TableNameEnHasBeenSet() const
{
    return m_tableNameEnHasBeenSet;
}

string DataSetRecord::GetDescription() const
{
    return m_description;
}

void DataSetRecord::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataSetRecord::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double DataSetRecord::GetHeatValue() const
{
    return m_heatValue;
}

void DataSetRecord::SetHeatValue(const double& _heatValue)
{
    m_heatValue = _heatValue;
    m_heatValueHasBeenSet = true;
}

bool DataSetRecord::HeatValueHasBeenSet() const
{
    return m_heatValueHasBeenSet;
}

vector<string> DataSetRecord::GetLabelNames() const
{
    return m_labelNames;
}

void DataSetRecord::SetLabelNames(const vector<string>& _labelNames)
{
    m_labelNames = _labelNames;
    m_labelNamesHasBeenSet = true;
}

bool DataSetRecord::LabelNamesHasBeenSet() const
{
    return m_labelNamesHasBeenSet;
}

string DataSetRecord::GetInCharge() const
{
    return m_inCharge;
}

void DataSetRecord::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DataSetRecord::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string DataSetRecord::GetMetaCrawlType() const
{
    return m_metaCrawlType;
}

void DataSetRecord::SetMetaCrawlType(const string& _metaCrawlType)
{
    m_metaCrawlType = _metaCrawlType;
    m_metaCrawlTypeHasBeenSet = true;
}

bool DataSetRecord::MetaCrawlTypeHasBeenSet() const
{
    return m_metaCrawlTypeHasBeenSet;
}

string DataSetRecord::GetProjectId() const
{
    return m_projectId;
}

void DataSetRecord::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DataSetRecord::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DataSetRecord::GetLifeTime() const
{
    return m_lifeTime;
}

void DataSetRecord::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool DataSetRecord::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

int64_t DataSetRecord::GetIsPartitionTable() const
{
    return m_isPartitionTable;
}

void DataSetRecord::SetIsPartitionTable(const int64_t& _isPartitionTable)
{
    m_isPartitionTable = _isPartitionTable;
    m_isPartitionTableHasBeenSet = true;
}

bool DataSetRecord::IsPartitionTableHasBeenSet() const
{
    return m_isPartitionTableHasBeenSet;
}

vector<SearchColumnDocVO> DataSetRecord::GetTableRecordFieldSet() const
{
    return m_tableRecordFieldSet;
}

void DataSetRecord::SetTableRecordFieldSet(const vector<SearchColumnDocVO>& _tableRecordFieldSet)
{
    m_tableRecordFieldSet = _tableRecordFieldSet;
    m_tableRecordFieldSetHasBeenSet = true;
}

bool DataSetRecord::TableRecordFieldSetHasBeenSet() const
{
    return m_tableRecordFieldSetHasBeenSet;
}

TablePropertyScore DataSetRecord::GetTablePropertyScore() const
{
    return m_tablePropertyScore;
}

void DataSetRecord::SetTablePropertyScore(const TablePropertyScore& _tablePropertyScore)
{
    m_tablePropertyScore = _tablePropertyScore;
    m_tablePropertyScoreHasBeenSet = true;
}

bool DataSetRecord::TablePropertyScoreHasBeenSet() const
{
    return m_tablePropertyScoreHasBeenSet;
}

string DataSetRecord::GetMsType() const
{
    return m_msType;
}

void DataSetRecord::SetMsType(const string& _msType)
{
    m_msType = _msType;
    m_msTypeHasBeenSet = true;
}

bool DataSetRecord::MsTypeHasBeenSet() const
{
    return m_msTypeHasBeenSet;
}

int64_t DataSetRecord::GetStorageSize() const
{
    return m_storageSize;
}

void DataSetRecord::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool DataSetRecord::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t DataSetRecord::GetAssetLevel() const
{
    return m_assetLevel;
}

void DataSetRecord::SetAssetLevel(const int64_t& _assetLevel)
{
    m_assetLevel = _assetLevel;
    m_assetLevelHasBeenSet = true;
}

bool DataSetRecord::AssetLevelHasBeenSet() const
{
    return m_assetLevelHasBeenSet;
}

int64_t DataSetRecord::GetAssetStatus() const
{
    return m_assetStatus;
}

void DataSetRecord::SetAssetStatus(const int64_t& _assetStatus)
{
    m_assetStatus = _assetStatus;
    m_assetStatusHasBeenSet = true;
}

bool DataSetRecord::AssetStatusHasBeenSet() const
{
    return m_assetStatusHasBeenSet;
}

vector<string> DataSetRecord::GetBizCatalogIds() const
{
    return m_bizCatalogIds;
}

void DataSetRecord::SetBizCatalogIds(const vector<string>& _bizCatalogIds)
{
    m_bizCatalogIds = _bizCatalogIds;
    m_bizCatalogIdsHasBeenSet = true;
}

bool DataSetRecord::BizCatalogIdsHasBeenSet() const
{
    return m_bizCatalogIdsHasBeenSet;
}

vector<string> DataSetRecord::GetBizCatalogNames() const
{
    return m_bizCatalogNames;
}

void DataSetRecord::SetBizCatalogNames(const vector<string>& _bizCatalogNames)
{
    m_bizCatalogNames = _bizCatalogNames;
    m_bizCatalogNamesHasBeenSet = true;
}

bool DataSetRecord::BizCatalogNamesHasBeenSet() const
{
    return m_bizCatalogNamesHasBeenSet;
}

int64_t DataSetRecord::GetDatasourceId() const
{
    return m_datasourceId;
}

void DataSetRecord::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DataSetRecord::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DataSetRecord::GetDatabaseId() const
{
    return m_databaseId;
}

void DataSetRecord::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool DataSetRecord::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string DataSetRecord::GetCreateTime() const
{
    return m_createTime;
}

void DataSetRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataSetRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataSetRecord::GetTableId() const
{
    return m_tableId;
}

void DataSetRecord::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DataSetRecord::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

DataAssetOption DataSetRecord::GetOperateOption() const
{
    return m_operateOption;
}

void DataSetRecord::SetOperateOption(const DataAssetOption& _operateOption)
{
    m_operateOption = _operateOption;
    m_operateOptionHasBeenSet = true;
}

bool DataSetRecord::OperateOptionHasBeenSet() const
{
    return m_operateOptionHasBeenSet;
}

string DataSetRecord::GetSchema() const
{
    return m_schema;
}

void DataSetRecord::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool DataSetRecord::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DataSetRecord::GetEnvironment() const
{
    return m_environment;
}

void DataSetRecord::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DataSetRecord::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

bool DataSetRecord::GetIsView() const
{
    return m_isView;
}

void DataSetRecord::SetIsView(const bool& _isView)
{
    m_isView = _isView;
    m_isViewHasBeenSet = true;
}

bool DataSetRecord::IsViewHasBeenSet() const
{
    return m_isViewHasBeenSet;
}

string DataSetRecord::GetTechnologyType() const
{
    return m_technologyType;
}

void DataSetRecord::SetTechnologyType(const string& _technologyType)
{
    m_technologyType = _technologyType;
    m_technologyTypeHasBeenSet = true;
}

bool DataSetRecord::TechnologyTypeHasBeenSet() const
{
    return m_technologyTypeHasBeenSet;
}

string DataSetRecord::GetProjectName() const
{
    return m_projectName;
}

void DataSetRecord::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DataSetRecord::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DataSetRecord::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void DataSetRecord::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool DataSetRecord::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string DataSetRecord::GetClusterId() const
{
    return m_clusterId;
}

void DataSetRecord::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DataSetRecord::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DataSetRecord::GetStorageSizeWithUnit() const
{
    return m_storageSizeWithUnit;
}

void DataSetRecord::SetStorageSizeWithUnit(const string& _storageSizeWithUnit)
{
    m_storageSizeWithUnit = _storageSizeWithUnit;
    m_storageSizeWithUnitHasBeenSet = true;
}

bool DataSetRecord::StorageSizeWithUnitHasBeenSet() const
{
    return m_storageSizeWithUnitHasBeenSet;
}

vector<GovDatasourceInfo> DataSetRecord::GetCollectDatasourceList() const
{
    return m_collectDatasourceList;
}

void DataSetRecord::SetCollectDatasourceList(const vector<GovDatasourceInfo>& _collectDatasourceList)
{
    m_collectDatasourceList = _collectDatasourceList;
    m_collectDatasourceListHasBeenSet = true;
}

bool DataSetRecord::CollectDatasourceListHasBeenSet() const
{
    return m_collectDatasourceListHasBeenSet;
}

string DataSetRecord::GetClusterName() const
{
    return m_clusterName;
}

void DataSetRecord::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DataSetRecord::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DataSetRecord::GetDataSourceCategory() const
{
    return m_dataSourceCategory;
}

void DataSetRecord::SetDataSourceCategory(const string& _dataSourceCategory)
{
    m_dataSourceCategory = _dataSourceCategory;
    m_dataSourceCategoryHasBeenSet = true;
}

bool DataSetRecord::DataSourceCategoryHasBeenSet() const
{
    return m_dataSourceCategoryHasBeenSet;
}

int64_t DataSetRecord::GetCollectId() const
{
    return m_collectId;
}

void DataSetRecord::SetCollectId(const int64_t& _collectId)
{
    m_collectId = _collectId;
    m_collectIdHasBeenSet = true;
}

bool DataSetRecord::CollectIdHasBeenSet() const
{
    return m_collectIdHasBeenSet;
}

string DataSetRecord::GetUrn() const
{
    return m_urn;
}

void DataSetRecord::SetUrn(const string& _urn)
{
    m_urn = _urn;
    m_urnHasBeenSet = true;
}

bool DataSetRecord::UrnHasBeenSet() const
{
    return m_urnHasBeenSet;
}

string DataSetRecord::GetAssetName() const
{
    return m_assetName;
}

void DataSetRecord::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DataSetRecord::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DataSetRecord::GetAssetRunningStatus() const
{
    return m_assetRunningStatus;
}

void DataSetRecord::SetAssetRunningStatus(const string& _assetRunningStatus)
{
    m_assetRunningStatus = _assetRunningStatus;
    m_assetRunningStatusHasBeenSet = true;
}

bool DataSetRecord::AssetRunningStatusHasBeenSet() const
{
    return m_assetRunningStatusHasBeenSet;
}

int64_t DataSetRecord::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void DataSetRecord::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool DataSetRecord::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string DataSetRecord::GetExecuteTime() const
{
    return m_executeTime;
}

void DataSetRecord::SetExecuteTime(const string& _executeTime)
{
    m_executeTime = _executeTime;
    m_executeTimeHasBeenSet = true;
}

bool DataSetRecord::ExecuteTimeHasBeenSet() const
{
    return m_executeTimeHasBeenSet;
}

string DataSetRecord::GetAssetLog() const
{
    return m_assetLog;
}

void DataSetRecord::SetAssetLog(const string& _assetLog)
{
    m_assetLog = _assetLog;
    m_assetLogHasBeenSet = true;
}

bool DataSetRecord::AssetLogHasBeenSet() const
{
    return m_assetLogHasBeenSet;
}

string DataSetRecord::GetAssetType() const
{
    return m_assetType;
}

void DataSetRecord::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DataSetRecord::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DataSetRecord::GetJobName() const
{
    return m_jobName;
}

void DataSetRecord::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DataSetRecord::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DataSetRecord::GetExpireTime() const
{
    return m_expireTime;
}

void DataSetRecord::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DataSetRecord::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t DataSetRecord::GetLevelRank() const
{
    return m_levelRank;
}

void DataSetRecord::SetLevelRank(const int64_t& _levelRank)
{
    m_levelRank = _levelRank;
    m_levelRankHasBeenSet = true;
}

bool DataSetRecord::LevelRankHasBeenSet() const
{
    return m_levelRankHasBeenSet;
}

string DataSetRecord::GetLevelName() const
{
    return m_levelName;
}

void DataSetRecord::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DataSetRecord::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

string DataSetRecord::GetAssetCode() const
{
    return m_assetCode;
}

void DataSetRecord::SetAssetCode(const string& _assetCode)
{
    m_assetCode = _assetCode;
    m_assetCodeHasBeenSet = true;
}

bool DataSetRecord::AssetCodeHasBeenSet() const
{
    return m_assetCodeHasBeenSet;
}

int64_t DataSetRecord::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DataSetRecord::SetOwnerAccount(const int64_t& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DataSetRecord::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string DataSetRecord::GetModifyTime() const
{
    return m_modifyTime;
}

void DataSetRecord::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DataSetRecord::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DataSetRecord::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void DataSetRecord::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool DataSetRecord::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

string DataSetRecord::GetOwnerByEngine() const
{
    return m_ownerByEngine;
}

void DataSetRecord::SetOwnerByEngine(const string& _ownerByEngine)
{
    m_ownerByEngine = _ownerByEngine;
    m_ownerByEngineHasBeenSet = true;
}

bool DataSetRecord::OwnerByEngineHasBeenSet() const
{
    return m_ownerByEngineHasBeenSet;
}

string DataSetRecord::GetDataLayerUuid() const
{
    return m_dataLayerUuid;
}

void DataSetRecord::SetDataLayerUuid(const string& _dataLayerUuid)
{
    m_dataLayerUuid = _dataLayerUuid;
    m_dataLayerUuidHasBeenSet = true;
}

bool DataSetRecord::DataLayerUuidHasBeenSet() const
{
    return m_dataLayerUuidHasBeenSet;
}

string DataSetRecord::GetDataLayerName() const
{
    return m_dataLayerName;
}

void DataSetRecord::SetDataLayerName(const string& _dataLayerName)
{
    m_dataLayerName = _dataLayerName;
    m_dataLayerNameHasBeenSet = true;
}

bool DataSetRecord::DataLayerNameHasBeenSet() const
{
    return m_dataLayerNameHasBeenSet;
}

int64_t DataSetRecord::GetColumnCount() const
{
    return m_columnCount;
}

void DataSetRecord::SetColumnCount(const int64_t& _columnCount)
{
    m_columnCount = _columnCount;
    m_columnCountHasBeenSet = true;
}

bool DataSetRecord::ColumnCountHasBeenSet() const
{
    return m_columnCountHasBeenSet;
}

vector<SearchColumnDocVO> DataSetRecord::GetSearchHitColumns() const
{
    return m_searchHitColumns;
}

void DataSetRecord::SetSearchHitColumns(const vector<SearchColumnDocVO>& _searchHitColumns)
{
    m_searchHitColumns = _searchHitColumns;
    m_searchHitColumnsHasBeenSet = true;
}

bool DataSetRecord::SearchHitColumnsHasBeenSet() const
{
    return m_searchHitColumnsHasBeenSet;
}

vector<LabelTag> DataSetRecord::GetLabelTagList() const
{
    return m_labelTagList;
}

void DataSetRecord::SetLabelTagList(const vector<LabelTag>& _labelTagList)
{
    m_labelTagList = _labelTagList;
    m_labelTagListHasBeenSet = true;
}

bool DataSetRecord::LabelTagListHasBeenSet() const
{
    return m_labelTagListHasBeenSet;
}

vector<RegisteredModelAlias> DataSetRecord::GetAliases() const
{
    return m_aliases;
}

void DataSetRecord::SetAliases(const vector<RegisteredModelAlias>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool DataSetRecord::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

bool DataSetRecord::GetIsDeployed() const
{
    return m_isDeployed;
}

void DataSetRecord::SetIsDeployed(const bool& _isDeployed)
{
    m_isDeployed = _isDeployed;
    m_isDeployedHasBeenSet = true;
}

bool DataSetRecord::IsDeployedHasBeenSet() const
{
    return m_isDeployedHasBeenSet;
}

vector<RegisteredModelTag> DataSetRecord::GetTags() const
{
    return m_tags;
}

void DataSetRecord::SetTags(const vector<RegisteredModelTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DataSetRecord::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DataSetRecord::GetModelType() const
{
    return m_modelType;
}

void DataSetRecord::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool DataSetRecord::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string DataSetRecord::GetFullName() const
{
    return m_fullName;
}

void DataSetRecord::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool DataSetRecord::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string DataSetRecord::GetNamespace() const
{
    return m_namespace;
}

void DataSetRecord::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DataSetRecord::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DataSetRecord::GetMetaFrom() const
{
    return m_metaFrom;
}

void DataSetRecord::SetMetaFrom(const string& _metaFrom)
{
    m_metaFrom = _metaFrom;
    m_metaFromHasBeenSet = true;
}

bool DataSetRecord::MetaFromHasBeenSet() const
{
    return m_metaFromHasBeenSet;
}

string DataSetRecord::GetEngineOwner() const
{
    return m_engineOwner;
}

void DataSetRecord::SetEngineOwner(const string& _engineOwner)
{
    m_engineOwner = _engineOwner;
    m_engineOwnerHasBeenSet = true;
}

bool DataSetRecord::EngineOwnerHasBeenSet() const
{
    return m_engineOwnerHasBeenSet;
}

