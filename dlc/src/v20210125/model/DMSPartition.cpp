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

#include <tencentcloud/dlc/v20210125/model/DMSPartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSPartition::DMSPartition() :
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_dataVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_sdsHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

CoreInternalOutcome DMSPartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("DataVersion") && !value["DataVersion"].IsNull())
    {
        if (!value["DataVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.DataVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataVersion = value["DataVersion"].GetInt64();
        m_dataVersionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSPartition.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSPartition.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Sds") && !value["Sds"].IsNull())
    {
        if (!value["Sds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.Sds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sds.Deserialize(value["Sds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sdsHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionName") && !value["DatasourceConnectionName"].IsNull())
    {
        if (!value["DatasourceConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSPartition.DatasourceConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionName = string(value["DatasourceConnectionName"].GetString());
        m_datasourceConnectionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSPartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataVersion, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

}


string DMSPartition::GetDatabaseName() const
{
    return m_databaseName;
}

void DMSPartition::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DMSPartition::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string DMSPartition::GetSchemaName() const
{
    return m_schemaName;
}

void DMSPartition::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DMSPartition::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DMSPartition::GetTableName() const
{
    return m_tableName;
}

void DMSPartition::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DMSPartition::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t DMSPartition::GetDataVersion() const
{
    return m_dataVersion;
}

void DMSPartition::SetDataVersion(const int64_t& _dataVersion)
{
    m_dataVersion = _dataVersion;
    m_dataVersionHasBeenSet = true;
}

bool DMSPartition::DataVersionHasBeenSet() const
{
    return m_dataVersionHasBeenSet;
}

string DMSPartition::GetName() const
{
    return m_name;
}

void DMSPartition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DMSPartition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DMSPartition::GetValues() const
{
    return m_values;
}

void DMSPartition::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DMSPartition::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

int64_t DMSPartition::GetStorageSize() const
{
    return m_storageSize;
}

void DMSPartition::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool DMSPartition::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t DMSPartition::GetRecordCount() const
{
    return m_recordCount;
}

void DMSPartition::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool DMSPartition::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string DMSPartition::GetCreateTime() const
{
    return m_createTime;
}

void DMSPartition::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DMSPartition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DMSPartition::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DMSPartition::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DMSPartition::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DMSPartition::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void DMSPartition::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool DMSPartition::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

vector<KVPair> DMSPartition::GetParams() const
{
    return m_params;
}

void DMSPartition::SetParams(const vector<KVPair>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DMSPartition::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

DMSSds DMSPartition::GetSds() const
{
    return m_sds;
}

void DMSPartition::SetSds(const DMSSds& _sds)
{
    m_sds = _sds;
    m_sdsHasBeenSet = true;
}

bool DMSPartition::SdsHasBeenSet() const
{
    return m_sdsHasBeenSet;
}

string DMSPartition::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DMSPartition::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DMSPartition::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

