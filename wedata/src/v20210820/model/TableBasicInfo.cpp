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

#include <tencentcloud/wedata/v20210820/model/TableBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableBasicInfo::TableBasicInfo() :
    m_tableIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDisplayNameHasBeenSet(false),
    m_tableOwnerIdHasBeenSet(false),
    m_tableOwnerNameHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isPartitionTableHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_storageFormatHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_storageSizeWithUnitHasBeenSet(false),
    m_totalSizeMbHasBeenSet(false),
    m_replicaCountHasBeenSet(false),
    m_fileCountHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_partitionFieldCountHasBeenSet(false),
    m_partitionExpireDaysHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome TableBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDisplayName") && !value["ProjectDisplayName"].IsNull())
    {
        if (!value["ProjectDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.ProjectDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDisplayName = string(value["ProjectDisplayName"].GetString());
        m_projectDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerId") && !value["TableOwnerId"].IsNull())
    {
        if (!value["TableOwnerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TableOwnerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerId = string(value["TableOwnerId"].GetString());
        m_tableOwnerIdHasBeenSet = true;
    }

    if (value.HasMember("TableOwnerName") && !value["TableOwnerName"].IsNull())
    {
        if (!value["TableOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TableOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableOwnerName = string(value["TableOwnerName"].GetString());
        m_tableOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("StorageLocation") && !value["StorageLocation"].IsNull())
    {
        if (!value["StorageLocation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.StorageLocation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLocation = value["StorageLocation"].GetInt64();
        m_storageLocationHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsPartitionTable") && !value["IsPartitionTable"].IsNull())
    {
        if (!value["IsPartitionTable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.IsPartitionTable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPartitionTable = value["IsPartitionTable"].GetInt64();
        m_isPartitionTableHasBeenSet = true;
    }

    if (value.HasMember("PartitionColumns") && !value["PartitionColumns"].IsNull())
    {
        if (!value["PartitionColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.PartitionColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partitionColumns.push_back((*itr).GetString());
        }
        m_partitionColumnsHasBeenSet = true;
    }

    if (value.HasMember("StorageFormat") && !value["StorageFormat"].IsNull())
    {
        if (!value["StorageFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.StorageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageFormat = string(value["StorageFormat"].GetString());
        m_storageFormatHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.StorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetUint64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageSizeWithUnit") && !value["StorageSizeWithUnit"].IsNull())
    {
        if (!value["StorageSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.StorageSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSizeWithUnit = string(value["StorageSizeWithUnit"].GetString());
        m_storageSizeWithUnitHasBeenSet = true;
    }

    if (value.HasMember("TotalSizeMb") && !value["TotalSizeMb"].IsNull())
    {
        if (!value["TotalSizeMb"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.TotalSizeMb` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSizeMb = value["TotalSizeMb"].GetUint64();
        m_totalSizeMbHasBeenSet = true;
    }

    if (value.HasMember("ReplicaCount") && !value["ReplicaCount"].IsNull())
    {
        if (!value["ReplicaCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.ReplicaCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaCount = value["ReplicaCount"].GetInt64();
        m_replicaCountHasBeenSet = true;
    }

    if (value.HasMember("FileCount") && !value["FileCount"].IsNull())
    {
        if (!value["FileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.FileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileCount = value["FileCount"].GetInt64();
        m_fileCountHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.PartitionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetInt64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("PartitionFieldCount") && !value["PartitionFieldCount"].IsNull())
    {
        if (!value["PartitionFieldCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.PartitionFieldCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionFieldCount = value["PartitionFieldCount"].GetInt64();
        m_partitionFieldCountHasBeenSet = true;
    }

    if (value.HasMember("PartitionExpireDays") && !value["PartitionExpireDays"].IsNull())
    {
        if (!value["PartitionExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.PartitionExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionExpireDays = value["PartitionExpireDays"].GetInt64();
        m_partitionExpireDaysHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableBasicInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
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

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_tableOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLocation, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_storageSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSizeWithUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeMbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSizeMb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSizeMb, allocator);
    }

    if (m_replicaCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaCount, allocator);
    }

    if (m_fileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileCount, allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_partitionFieldCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionFieldCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionFieldCount, allocator);
    }

    if (m_partitionExpireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionExpireDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionExpireDays, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

}


string TableBasicInfo::GetTableId() const
{
    return m_tableId;
}

void TableBasicInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableBasicInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableBasicInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void TableBasicInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TableBasicInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TableBasicInfo::GetDatasourceName() const
{
    return m_datasourceName;
}

void TableBasicInfo::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool TableBasicInfo::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string TableBasicInfo::GetDatabaseId() const
{
    return m_databaseId;
}

void TableBasicInfo::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool TableBasicInfo::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string TableBasicInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TableBasicInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableBasicInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableBasicInfo::GetTableName() const
{
    return m_tableName;
}

void TableBasicInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableBasicInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableBasicInfo::GetEngineType() const
{
    return m_engineType;
}

void TableBasicInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool TableBasicInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string TableBasicInfo::GetTableType() const
{
    return m_tableType;
}

void TableBasicInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableBasicInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableBasicInfo::GetProjectId() const
{
    return m_projectId;
}

void TableBasicInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TableBasicInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TableBasicInfo::GetProjectName() const
{
    return m_projectName;
}

void TableBasicInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TableBasicInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TableBasicInfo::GetProjectDisplayName() const
{
    return m_projectDisplayName;
}

void TableBasicInfo::SetProjectDisplayName(const string& _projectDisplayName)
{
    m_projectDisplayName = _projectDisplayName;
    m_projectDisplayNameHasBeenSet = true;
}

bool TableBasicInfo::ProjectDisplayNameHasBeenSet() const
{
    return m_projectDisplayNameHasBeenSet;
}

string TableBasicInfo::GetTableOwnerId() const
{
    return m_tableOwnerId;
}

void TableBasicInfo::SetTableOwnerId(const string& _tableOwnerId)
{
    m_tableOwnerId = _tableOwnerId;
    m_tableOwnerIdHasBeenSet = true;
}

bool TableBasicInfo::TableOwnerIdHasBeenSet() const
{
    return m_tableOwnerIdHasBeenSet;
}

string TableBasicInfo::GetTableOwnerName() const
{
    return m_tableOwnerName;
}

void TableBasicInfo::SetTableOwnerName(const string& _tableOwnerName)
{
    m_tableOwnerName = _tableOwnerName;
    m_tableOwnerNameHasBeenSet = true;
}

bool TableBasicInfo::TableOwnerNameHasBeenSet() const
{
    return m_tableOwnerNameHasBeenSet;
}

int64_t TableBasicInfo::GetStorageLocation() const
{
    return m_storageLocation;
}

void TableBasicInfo::SetStorageLocation(const int64_t& _storageLocation)
{
    m_storageLocation = _storageLocation;
    m_storageLocationHasBeenSet = true;
}

bool TableBasicInfo::StorageLocationHasBeenSet() const
{
    return m_storageLocationHasBeenSet;
}

string TableBasicInfo::GetDescription() const
{
    return m_description;
}

void TableBasicInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TableBasicInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TableBasicInfo::GetIsPartitionTable() const
{
    return m_isPartitionTable;
}

void TableBasicInfo::SetIsPartitionTable(const int64_t& _isPartitionTable)
{
    m_isPartitionTable = _isPartitionTable;
    m_isPartitionTableHasBeenSet = true;
}

bool TableBasicInfo::IsPartitionTableHasBeenSet() const
{
    return m_isPartitionTableHasBeenSet;
}

vector<string> TableBasicInfo::GetPartitionColumns() const
{
    return m_partitionColumns;
}

void TableBasicInfo::SetPartitionColumns(const vector<string>& _partitionColumns)
{
    m_partitionColumns = _partitionColumns;
    m_partitionColumnsHasBeenSet = true;
}

bool TableBasicInfo::PartitionColumnsHasBeenSet() const
{
    return m_partitionColumnsHasBeenSet;
}

string TableBasicInfo::GetStorageFormat() const
{
    return m_storageFormat;
}

void TableBasicInfo::SetStorageFormat(const string& _storageFormat)
{
    m_storageFormat = _storageFormat;
    m_storageFormatHasBeenSet = true;
}

bool TableBasicInfo::StorageFormatHasBeenSet() const
{
    return m_storageFormatHasBeenSet;
}

uint64_t TableBasicInfo::GetStorageSize() const
{
    return m_storageSize;
}

void TableBasicInfo::SetStorageSize(const uint64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool TableBasicInfo::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string TableBasicInfo::GetStorageSizeWithUnit() const
{
    return m_storageSizeWithUnit;
}

void TableBasicInfo::SetStorageSizeWithUnit(const string& _storageSizeWithUnit)
{
    m_storageSizeWithUnit = _storageSizeWithUnit;
    m_storageSizeWithUnitHasBeenSet = true;
}

bool TableBasicInfo::StorageSizeWithUnitHasBeenSet() const
{
    return m_storageSizeWithUnitHasBeenSet;
}

uint64_t TableBasicInfo::GetTotalSizeMb() const
{
    return m_totalSizeMb;
}

void TableBasicInfo::SetTotalSizeMb(const uint64_t& _totalSizeMb)
{
    m_totalSizeMb = _totalSizeMb;
    m_totalSizeMbHasBeenSet = true;
}

bool TableBasicInfo::TotalSizeMbHasBeenSet() const
{
    return m_totalSizeMbHasBeenSet;
}

int64_t TableBasicInfo::GetReplicaCount() const
{
    return m_replicaCount;
}

void TableBasicInfo::SetReplicaCount(const int64_t& _replicaCount)
{
    m_replicaCount = _replicaCount;
    m_replicaCountHasBeenSet = true;
}

bool TableBasicInfo::ReplicaCountHasBeenSet() const
{
    return m_replicaCountHasBeenSet;
}

int64_t TableBasicInfo::GetFileCount() const
{
    return m_fileCount;
}

void TableBasicInfo::SetFileCount(const int64_t& _fileCount)
{
    m_fileCount = _fileCount;
    m_fileCountHasBeenSet = true;
}

bool TableBasicInfo::FileCountHasBeenSet() const
{
    return m_fileCountHasBeenSet;
}

int64_t TableBasicInfo::GetPartitionCount() const
{
    return m_partitionCount;
}

void TableBasicInfo::SetPartitionCount(const int64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool TableBasicInfo::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

int64_t TableBasicInfo::GetPartitionFieldCount() const
{
    return m_partitionFieldCount;
}

void TableBasicInfo::SetPartitionFieldCount(const int64_t& _partitionFieldCount)
{
    m_partitionFieldCount = _partitionFieldCount;
    m_partitionFieldCountHasBeenSet = true;
}

bool TableBasicInfo::PartitionFieldCountHasBeenSet() const
{
    return m_partitionFieldCountHasBeenSet;
}

int64_t TableBasicInfo::GetPartitionExpireDays() const
{
    return m_partitionExpireDays;
}

void TableBasicInfo::SetPartitionExpireDays(const int64_t& _partitionExpireDays)
{
    m_partitionExpireDays = _partitionExpireDays;
    m_partitionExpireDaysHasBeenSet = true;
}

bool TableBasicInfo::PartitionExpireDaysHasBeenSet() const
{
    return m_partitionExpireDaysHasBeenSet;
}

string TableBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void TableBasicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableBasicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TableBasicInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TableBasicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TableBasicInfo::GetLocation() const
{
    return m_location;
}

void TableBasicInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TableBasicInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

