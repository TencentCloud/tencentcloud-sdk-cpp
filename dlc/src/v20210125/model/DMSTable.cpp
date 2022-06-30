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

#include <tencentcloud/dlc/v20210125/model/DMSTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSTable::DMSTable() :
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_retentionHasBeenSet(false),
    m_sdsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_dataUpdateTimeHasBeenSet(false),
    m_structUpdateTimeHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome DMSTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ViewOriginalText") && !value["ViewOriginalText"].IsNull())
    {
        if (!value["ViewOriginalText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.ViewOriginalText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewOriginalText = string(value["ViewOriginalText"].GetString());
        m_viewOriginalTextHasBeenSet = true;
    }

    if (value.HasMember("ViewExpandedText") && !value["ViewExpandedText"].IsNull())
    {
        if (!value["ViewExpandedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.ViewExpandedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewExpandedText = string(value["ViewExpandedText"].GetString());
        m_viewExpandedTextHasBeenSet = true;
    }

    if (value.HasMember("Retention") && !value["Retention"].IsNull())
    {
        if (!value["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = value["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (value.HasMember("Sds") && !value["Sds"].IsNull())
    {
        if (!value["Sds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.Sds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sds.Deserialize(value["Sds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sdsHasBeenSet = true;
    }

    if (value.HasMember("PartitionKeys") && !value["PartitionKeys"].IsNull())
    {
        if (!value["PartitionKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSTable.PartitionKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionKeys.push_back(item);
        }
        m_partitionKeysHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSTable.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSPartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("DataUpdateTime") && !value["DataUpdateTime"].IsNull())
    {
        if (!value["DataUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.DataUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataUpdateTime = string(value["DataUpdateTime"].GetString());
        m_dataUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("StructUpdateTime") && !value["StructUpdateTime"].IsNull())
    {
        if (!value["StructUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.StructUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_structUpdateTime = string(value["StructUpdateTime"].GetString());
        m_structUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSTable.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumn item;
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

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSTable.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewOriginalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewOriginalText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewOriginalText.c_str(), allocator).Move(), allocator);
    }

    if (m_viewExpandedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewExpandedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewExpandedText.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_sdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partitionKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionKeys.begin(); itr != m_partitionKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_structUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_structUpdateTime.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string DMSTable::GetViewOriginalText() const
{
    return m_viewOriginalText;
}

void DMSTable::SetViewOriginalText(const string& _viewOriginalText)
{
    m_viewOriginalText = _viewOriginalText;
    m_viewOriginalTextHasBeenSet = true;
}

bool DMSTable::ViewOriginalTextHasBeenSet() const
{
    return m_viewOriginalTextHasBeenSet;
}

string DMSTable::GetViewExpandedText() const
{
    return m_viewExpandedText;
}

void DMSTable::SetViewExpandedText(const string& _viewExpandedText)
{
    m_viewExpandedText = _viewExpandedText;
    m_viewExpandedTextHasBeenSet = true;
}

bool DMSTable::ViewExpandedTextHasBeenSet() const
{
    return m_viewExpandedTextHasBeenSet;
}

int64_t DMSTable::GetRetention() const
{
    return m_retention;
}

void DMSTable::SetRetention(const int64_t& _retention)
{
    m_retention = _retention;
    m_retentionHasBeenSet = true;
}

bool DMSTable::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

DMSSds DMSTable::GetSds() const
{
    return m_sds;
}

void DMSTable::SetSds(const DMSSds& _sds)
{
    m_sds = _sds;
    m_sdsHasBeenSet = true;
}

bool DMSTable::SdsHasBeenSet() const
{
    return m_sdsHasBeenSet;
}

vector<DMSColumn> DMSTable::GetPartitionKeys() const
{
    return m_partitionKeys;
}

void DMSTable::SetPartitionKeys(const vector<DMSColumn>& _partitionKeys)
{
    m_partitionKeys = _partitionKeys;
    m_partitionKeysHasBeenSet = true;
}

bool DMSTable::PartitionKeysHasBeenSet() const
{
    return m_partitionKeysHasBeenSet;
}

vector<DMSPartition> DMSTable::GetPartitions() const
{
    return m_partitions;
}

void DMSTable::SetPartitions(const vector<DMSPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool DMSTable::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string DMSTable::GetType() const
{
    return m_type;
}

void DMSTable::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DMSTable::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DMSTable::GetDbName() const
{
    return m_dbName;
}

void DMSTable::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DMSTable::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DMSTable::GetSchemaName() const
{
    return m_schemaName;
}

void DMSTable::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DMSTable::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

int64_t DMSTable::GetStorageSize() const
{
    return m_storageSize;
}

void DMSTable::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool DMSTable::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t DMSTable::GetRecordCount() const
{
    return m_recordCount;
}

void DMSTable::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool DMSTable::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

int64_t DMSTable::GetLifeTime() const
{
    return m_lifeTime;
}

void DMSTable::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool DMSTable::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

string DMSTable::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void DMSTable::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool DMSTable::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

string DMSTable::GetDataUpdateTime() const
{
    return m_dataUpdateTime;
}

void DMSTable::SetDataUpdateTime(const string& _dataUpdateTime)
{
    m_dataUpdateTime = _dataUpdateTime;
    m_dataUpdateTimeHasBeenSet = true;
}

bool DMSTable::DataUpdateTimeHasBeenSet() const
{
    return m_dataUpdateTimeHasBeenSet;
}

string DMSTable::GetStructUpdateTime() const
{
    return m_structUpdateTime;
}

void DMSTable::SetStructUpdateTime(const string& _structUpdateTime)
{
    m_structUpdateTime = _structUpdateTime;
    m_structUpdateTimeHasBeenSet = true;
}

bool DMSTable::StructUpdateTimeHasBeenSet() const
{
    return m_structUpdateTimeHasBeenSet;
}

vector<DMSColumn> DMSTable::GetColumns() const
{
    return m_columns;
}

void DMSTable::SetColumns(const vector<DMSColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool DMSTable::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

string DMSTable::GetName() const
{
    return m_name;
}

void DMSTable::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DMSTable::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

