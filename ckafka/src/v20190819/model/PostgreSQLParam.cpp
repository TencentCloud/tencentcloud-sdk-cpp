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

#include <tencentcloud/ckafka/v20190819/model/PostgreSQLParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

PostgreSQLParam::PostgreSQLParam() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_snapshotModeHasBeenSet(false),
    m_dataFormatHasBeenSet(false),
    m_dataTargetInsertModeHasBeenSet(false),
    m_dataTargetPrimaryKeyFieldHasBeenSet(false),
    m_dataTargetRecordMappingHasBeenSet(false),
    m_dropInvalidMessageHasBeenSet(false),
    m_isTableRegularHasBeenSet(false),
    m_keyColumnsHasBeenSet(false),
    m_recordWithSchemaHasBeenSet(false)
{
}

CoreInternalOutcome PostgreSQLParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotMode") && !value["SnapshotMode"].IsNull())
    {
        if (!value["SnapshotMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.SnapshotMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotMode = string(value["SnapshotMode"].GetString());
        m_snapshotModeHasBeenSet = true;
    }

    if (value.HasMember("DataFormat") && !value["DataFormat"].IsNull())
    {
        if (!value["DataFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.DataFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFormat = string(value["DataFormat"].GetString());
        m_dataFormatHasBeenSet = true;
    }

    if (value.HasMember("DataTargetInsertMode") && !value["DataTargetInsertMode"].IsNull())
    {
        if (!value["DataTargetInsertMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.DataTargetInsertMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTargetInsertMode = string(value["DataTargetInsertMode"].GetString());
        m_dataTargetInsertModeHasBeenSet = true;
    }

    if (value.HasMember("DataTargetPrimaryKeyField") && !value["DataTargetPrimaryKeyField"].IsNull())
    {
        if (!value["DataTargetPrimaryKeyField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.DataTargetPrimaryKeyField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTargetPrimaryKeyField = string(value["DataTargetPrimaryKeyField"].GetString());
        m_dataTargetPrimaryKeyFieldHasBeenSet = true;
    }

    if (value.HasMember("DataTargetRecordMapping") && !value["DataTargetRecordMapping"].IsNull())
    {
        if (!value["DataTargetRecordMapping"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.DataTargetRecordMapping` is not array type"));

        const rapidjson::Value &tmpValue = value["DataTargetRecordMapping"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataTargetRecordMapping.push_back(item);
        }
        m_dataTargetRecordMappingHasBeenSet = true;
    }

    if (value.HasMember("DropInvalidMessage") && !value["DropInvalidMessage"].IsNull())
    {
        if (!value["DropInvalidMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.DropInvalidMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidMessage = value["DropInvalidMessage"].GetBool();
        m_dropInvalidMessageHasBeenSet = true;
    }

    if (value.HasMember("IsTableRegular") && !value["IsTableRegular"].IsNull())
    {
        if (!value["IsTableRegular"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.IsTableRegular` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTableRegular = value["IsTableRegular"].GetBool();
        m_isTableRegularHasBeenSet = true;
    }

    if (value.HasMember("KeyColumns") && !value["KeyColumns"].IsNull())
    {
        if (!value["KeyColumns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.KeyColumns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyColumns = string(value["KeyColumns"].GetString());
        m_keyColumnsHasBeenSet = true;
    }

    if (value.HasMember("RecordWithSchema") && !value["RecordWithSchema"].IsNull())
    {
        if (!value["RecordWithSchema"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PostgreSQLParam.RecordWithSchema` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recordWithSchema = value["RecordWithSchema"].GetBool();
        m_recordWithSchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostgreSQLParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetInsertModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetInsertMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTargetInsertMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetPrimaryKeyFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetPrimaryKeyField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTargetPrimaryKeyField.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetRecordMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetRecordMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTargetRecordMapping.begin(); itr != m_dataTargetRecordMapping.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dropInvalidMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidMessage, allocator);
    }

    if (m_isTableRegularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTableRegular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTableRegular, allocator);
    }

    if (m_keyColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyColumns.c_str(), allocator).Move(), allocator);
    }

    if (m_recordWithSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordWithSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordWithSchema, allocator);
    }

}


string PostgreSQLParam::GetDatabase() const
{
    return m_database;
}

void PostgreSQLParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool PostgreSQLParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string PostgreSQLParam::GetTable() const
{
    return m_table;
}

void PostgreSQLParam::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool PostgreSQLParam::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string PostgreSQLParam::GetResource() const
{
    return m_resource;
}

void PostgreSQLParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool PostgreSQLParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string PostgreSQLParam::GetPluginName() const
{
    return m_pluginName;
}

void PostgreSQLParam::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool PostgreSQLParam::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string PostgreSQLParam::GetSnapshotMode() const
{
    return m_snapshotMode;
}

void PostgreSQLParam::SetSnapshotMode(const string& _snapshotMode)
{
    m_snapshotMode = _snapshotMode;
    m_snapshotModeHasBeenSet = true;
}

bool PostgreSQLParam::SnapshotModeHasBeenSet() const
{
    return m_snapshotModeHasBeenSet;
}

string PostgreSQLParam::GetDataFormat() const
{
    return m_dataFormat;
}

void PostgreSQLParam::SetDataFormat(const string& _dataFormat)
{
    m_dataFormat = _dataFormat;
    m_dataFormatHasBeenSet = true;
}

bool PostgreSQLParam::DataFormatHasBeenSet() const
{
    return m_dataFormatHasBeenSet;
}

string PostgreSQLParam::GetDataTargetInsertMode() const
{
    return m_dataTargetInsertMode;
}

void PostgreSQLParam::SetDataTargetInsertMode(const string& _dataTargetInsertMode)
{
    m_dataTargetInsertMode = _dataTargetInsertMode;
    m_dataTargetInsertModeHasBeenSet = true;
}

bool PostgreSQLParam::DataTargetInsertModeHasBeenSet() const
{
    return m_dataTargetInsertModeHasBeenSet;
}

string PostgreSQLParam::GetDataTargetPrimaryKeyField() const
{
    return m_dataTargetPrimaryKeyField;
}

void PostgreSQLParam::SetDataTargetPrimaryKeyField(const string& _dataTargetPrimaryKeyField)
{
    m_dataTargetPrimaryKeyField = _dataTargetPrimaryKeyField;
    m_dataTargetPrimaryKeyFieldHasBeenSet = true;
}

bool PostgreSQLParam::DataTargetPrimaryKeyFieldHasBeenSet() const
{
    return m_dataTargetPrimaryKeyFieldHasBeenSet;
}

vector<RecordMapping> PostgreSQLParam::GetDataTargetRecordMapping() const
{
    return m_dataTargetRecordMapping;
}

void PostgreSQLParam::SetDataTargetRecordMapping(const vector<RecordMapping>& _dataTargetRecordMapping)
{
    m_dataTargetRecordMapping = _dataTargetRecordMapping;
    m_dataTargetRecordMappingHasBeenSet = true;
}

bool PostgreSQLParam::DataTargetRecordMappingHasBeenSet() const
{
    return m_dataTargetRecordMappingHasBeenSet;
}

bool PostgreSQLParam::GetDropInvalidMessage() const
{
    return m_dropInvalidMessage;
}

void PostgreSQLParam::SetDropInvalidMessage(const bool& _dropInvalidMessage)
{
    m_dropInvalidMessage = _dropInvalidMessage;
    m_dropInvalidMessageHasBeenSet = true;
}

bool PostgreSQLParam::DropInvalidMessageHasBeenSet() const
{
    return m_dropInvalidMessageHasBeenSet;
}

bool PostgreSQLParam::GetIsTableRegular() const
{
    return m_isTableRegular;
}

void PostgreSQLParam::SetIsTableRegular(const bool& _isTableRegular)
{
    m_isTableRegular = _isTableRegular;
    m_isTableRegularHasBeenSet = true;
}

bool PostgreSQLParam::IsTableRegularHasBeenSet() const
{
    return m_isTableRegularHasBeenSet;
}

string PostgreSQLParam::GetKeyColumns() const
{
    return m_keyColumns;
}

void PostgreSQLParam::SetKeyColumns(const string& _keyColumns)
{
    m_keyColumns = _keyColumns;
    m_keyColumnsHasBeenSet = true;
}

bool PostgreSQLParam::KeyColumnsHasBeenSet() const
{
    return m_keyColumnsHasBeenSet;
}

bool PostgreSQLParam::GetRecordWithSchema() const
{
    return m_recordWithSchema;
}

void PostgreSQLParam::SetRecordWithSchema(const bool& _recordWithSchema)
{
    m_recordWithSchema = _recordWithSchema;
    m_recordWithSchemaHasBeenSet = true;
}

bool PostgreSQLParam::RecordWithSchemaHasBeenSet() const
{
    return m_recordWithSchemaHasBeenSet;
}

