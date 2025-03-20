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

#include <tencentcloud/wedata/v20210820/model/DatabaseMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatabaseMeta::DatabaseMeta() :
    m_projectIdHasBeenSet(false),
    m_metastoreTypeHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_storageSizeWithUnitHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tableCountHasBeenSet(false),
    m_datasourceListHasBeenSet(false),
    m_collectJobIdHasBeenSet(false),
    m_collectJobNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_modifiedTimeByTablesHasBeenSet(false),
    m_lastAccessTimeByTablesHasBeenSet(false),
    m_databaseGuidHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatasourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = value["DatasourceId"].GetInt64();
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Instance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instance = string(value["Instance"].GetString());
        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageSizeWithUnit") && !value["StorageSizeWithUnit"].IsNull())
    {
        if (!value["StorageSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.StorageSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSizeWithUnit = string(value["StorageSizeWithUnit"].GetString());
        m_storageSizeWithUnitHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TableCount") && !value["TableCount"].IsNull())
    {
        if (!value["TableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.TableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableCount = value["TableCount"].GetInt64();
        m_tableCountHasBeenSet = true;
    }

    if (value.HasMember("DatasourceList") && !value["DatasourceList"].IsNull())
    {
        if (!value["DatasourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatasourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GovDatasourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasourceList.push_back(item);
        }
        m_datasourceListHasBeenSet = true;
    }

    if (value.HasMember("CollectJobId") && !value["CollectJobId"].IsNull())
    {
        if (!value["CollectJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.CollectJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectJobId = string(value["CollectJobId"].GetString());
        m_collectJobIdHasBeenSet = true;
    }

    if (value.HasMember("CollectJobName") && !value["CollectJobName"].IsNull())
    {
        if (!value["CollectJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.CollectJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectJobName = string(value["CollectJobName"].GetString());
        m_collectJobNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTimeByTables") && !value["ModifiedTimeByTables"].IsNull())
    {
        if (!value["ModifiedTimeByTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.ModifiedTimeByTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTimeByTables = value["ModifiedTimeByTables"].GetUint64();
        m_modifiedTimeByTablesHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTimeByTables") && !value["LastAccessTimeByTables"].IsNull())
    {
        if (!value["LastAccessTimeByTables"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.LastAccessTimeByTables` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTimeByTables = value["LastAccessTimeByTables"].GetUint64();
        m_lastAccessTimeByTablesHasBeenSet = true;
    }

    if (value.HasMember("DatabaseGuid") && !value["DatabaseGuid"].IsNull())
    {
        if (!value["DatabaseGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseMeta.DatabaseGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseGuid = string(value["DatabaseGuid"].GetString());
        m_databaseGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_storageSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSizeWithUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableCount, allocator);
    }

    if (m_datasourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasourceList.begin(); itr != m_datasourceList.end(); ++itr, ++i)
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeByTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTimeByTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifiedTimeByTables, allocator);
    }

    if (m_lastAccessTimeByTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTimeByTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastAccessTimeByTables, allocator);
    }

    if (m_databaseGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseGuid.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseMeta::GetProjectId() const
{
    return m_projectId;
}

void DatabaseMeta::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DatabaseMeta::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DatabaseMeta::GetMetastoreType() const
{
    return m_metastoreType;
}

void DatabaseMeta::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool DatabaseMeta::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string DatabaseMeta::GetDatasourceName() const
{
    return m_datasourceName;
}

void DatabaseMeta::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool DatabaseMeta::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

int64_t DatabaseMeta::GetDatasourceId() const
{
    return m_datasourceId;
}

void DatabaseMeta::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DatabaseMeta::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DatabaseMeta::GetProjectName() const
{
    return m_projectName;
}

void DatabaseMeta::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DatabaseMeta::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DatabaseMeta::GetCategory() const
{
    return m_category;
}

void DatabaseMeta::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DatabaseMeta::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DatabaseMeta::GetDescription() const
{
    return m_description;
}

void DatabaseMeta::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DatabaseMeta::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DatabaseMeta::GetInstance() const
{
    return m_instance;
}

void DatabaseMeta::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool DatabaseMeta::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string DatabaseMeta::GetRegion() const
{
    return m_region;
}

void DatabaseMeta::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DatabaseMeta::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DatabaseMeta::GetStatus() const
{
    return m_status;
}

void DatabaseMeta::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DatabaseMeta::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DatabaseMeta::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabaseMeta::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabaseMeta::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DatabaseMeta::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void DatabaseMeta::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool DatabaseMeta::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string DatabaseMeta::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void DatabaseMeta::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool DatabaseMeta::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string DatabaseMeta::GetDisplayName() const
{
    return m_displayName;
}

void DatabaseMeta::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool DatabaseMeta::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DatabaseMeta::GetDatabaseId() const
{
    return m_databaseId;
}

void DatabaseMeta::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool DatabaseMeta::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string DatabaseMeta::GetCatalog() const
{
    return m_catalog;
}

void DatabaseMeta::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DatabaseMeta::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

int64_t DatabaseMeta::GetStorageSize() const
{
    return m_storageSize;
}

void DatabaseMeta::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool DatabaseMeta::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string DatabaseMeta::GetStorageSizeWithUnit() const
{
    return m_storageSizeWithUnit;
}

void DatabaseMeta::SetStorageSizeWithUnit(const string& _storageSizeWithUnit)
{
    m_storageSizeWithUnit = _storageSizeWithUnit;
    m_storageSizeWithUnitHasBeenSet = true;
}

bool DatabaseMeta::StorageSizeWithUnitHasBeenSet() const
{
    return m_storageSizeWithUnitHasBeenSet;
}

string DatabaseMeta::GetCreateTime() const
{
    return m_createTime;
}

void DatabaseMeta::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatabaseMeta::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DatabaseMeta::GetTableCount() const
{
    return m_tableCount;
}

void DatabaseMeta::SetTableCount(const int64_t& _tableCount)
{
    m_tableCount = _tableCount;
    m_tableCountHasBeenSet = true;
}

bool DatabaseMeta::TableCountHasBeenSet() const
{
    return m_tableCountHasBeenSet;
}

vector<GovDatasourceInfo> DatabaseMeta::GetDatasourceList() const
{
    return m_datasourceList;
}

void DatabaseMeta::SetDatasourceList(const vector<GovDatasourceInfo>& _datasourceList)
{
    m_datasourceList = _datasourceList;
    m_datasourceListHasBeenSet = true;
}

bool DatabaseMeta::DatasourceListHasBeenSet() const
{
    return m_datasourceListHasBeenSet;
}

string DatabaseMeta::GetCollectJobId() const
{
    return m_collectJobId;
}

void DatabaseMeta::SetCollectJobId(const string& _collectJobId)
{
    m_collectJobId = _collectJobId;
    m_collectJobIdHasBeenSet = true;
}

bool DatabaseMeta::CollectJobIdHasBeenSet() const
{
    return m_collectJobIdHasBeenSet;
}

string DatabaseMeta::GetCollectJobName() const
{
    return m_collectJobName;
}

void DatabaseMeta::SetCollectJobName(const string& _collectJobName)
{
    m_collectJobName = _collectJobName;
    m_collectJobNameHasBeenSet = true;
}

bool DatabaseMeta::CollectJobNameHasBeenSet() const
{
    return m_collectJobNameHasBeenSet;
}

string DatabaseMeta::GetClusterId() const
{
    return m_clusterId;
}

void DatabaseMeta::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DatabaseMeta::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DatabaseMeta::GetClusterName() const
{
    return m_clusterName;
}

void DatabaseMeta::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DatabaseMeta::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t DatabaseMeta::GetModifiedTimeByTables() const
{
    return m_modifiedTimeByTables;
}

void DatabaseMeta::SetModifiedTimeByTables(const uint64_t& _modifiedTimeByTables)
{
    m_modifiedTimeByTables = _modifiedTimeByTables;
    m_modifiedTimeByTablesHasBeenSet = true;
}

bool DatabaseMeta::ModifiedTimeByTablesHasBeenSet() const
{
    return m_modifiedTimeByTablesHasBeenSet;
}

uint64_t DatabaseMeta::GetLastAccessTimeByTables() const
{
    return m_lastAccessTimeByTables;
}

void DatabaseMeta::SetLastAccessTimeByTables(const uint64_t& _lastAccessTimeByTables)
{
    m_lastAccessTimeByTables = _lastAccessTimeByTables;
    m_lastAccessTimeByTablesHasBeenSet = true;
}

bool DatabaseMeta::LastAccessTimeByTablesHasBeenSet() const
{
    return m_lastAccessTimeByTablesHasBeenSet;
}

string DatabaseMeta::GetDatabaseGuid() const
{
    return m_databaseGuid;
}

void DatabaseMeta::SetDatabaseGuid(const string& _databaseGuid)
{
    m_databaseGuid = _databaseGuid;
    m_databaseGuidHasBeenSet = true;
}

bool DatabaseMeta::DatabaseGuidHasBeenSet() const
{
    return m_databaseGuidHasBeenSet;
}

