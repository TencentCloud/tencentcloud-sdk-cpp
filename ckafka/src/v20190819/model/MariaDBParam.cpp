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

#include <tencentcloud/ckafka/v20190819/model/MariaDBParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

MariaDBParam::MariaDBParam() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_snapshotModeHasBeenSet(false),
    m_keyColumnsHasBeenSet(false),
    m_isTablePrefixHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_includeContentChangesHasBeenSet(false),
    m_includeQueryHasBeenSet(false),
    m_recordWithSchemaHasBeenSet(false)
{
}

CoreInternalOutcome MariaDBParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("SnapshotMode") && !value["SnapshotMode"].IsNull())
    {
        if (!value["SnapshotMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.SnapshotMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotMode = string(value["SnapshotMode"].GetString());
        m_snapshotModeHasBeenSet = true;
    }

    if (value.HasMember("KeyColumns") && !value["KeyColumns"].IsNull())
    {
        if (!value["KeyColumns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.KeyColumns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyColumns = string(value["KeyColumns"].GetString());
        m_keyColumnsHasBeenSet = true;
    }

    if (value.HasMember("IsTablePrefix") && !value["IsTablePrefix"].IsNull())
    {
        if (!value["IsTablePrefix"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.IsTablePrefix` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTablePrefix = value["IsTablePrefix"].GetBool();
        m_isTablePrefixHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.OutputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = string(value["OutputFormat"].GetString());
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("IncludeContentChanges") && !value["IncludeContentChanges"].IsNull())
    {
        if (!value["IncludeContentChanges"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.IncludeContentChanges` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeContentChanges = string(value["IncludeContentChanges"].GetString());
        m_includeContentChangesHasBeenSet = true;
    }

    if (value.HasMember("IncludeQuery") && !value["IncludeQuery"].IsNull())
    {
        if (!value["IncludeQuery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.IncludeQuery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_includeQuery = value["IncludeQuery"].GetBool();
        m_includeQueryHasBeenSet = true;
    }

    if (value.HasMember("RecordWithSchema") && !value["RecordWithSchema"].IsNull())
    {
        if (!value["RecordWithSchema"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBParam.RecordWithSchema` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recordWithSchema = value["RecordWithSchema"].GetBool();
        m_recordWithSchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MariaDBParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_snapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotMode.c_str(), allocator).Move(), allocator);
    }

    if (m_keyColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyColumns.c_str(), allocator).Move(), allocator);
    }

    if (m_isTablePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTablePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTablePrefix, allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_includeContentChangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeContentChanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeContentChanges.c_str(), allocator).Move(), allocator);
    }

    if (m_includeQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_includeQuery, allocator);
    }

    if (m_recordWithSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordWithSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordWithSchema, allocator);
    }

}


string MariaDBParam::GetDatabase() const
{
    return m_database;
}

void MariaDBParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool MariaDBParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string MariaDBParam::GetTable() const
{
    return m_table;
}

void MariaDBParam::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool MariaDBParam::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string MariaDBParam::GetResource() const
{
    return m_resource;
}

void MariaDBParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MariaDBParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MariaDBParam::GetSnapshotMode() const
{
    return m_snapshotMode;
}

void MariaDBParam::SetSnapshotMode(const string& _snapshotMode)
{
    m_snapshotMode = _snapshotMode;
    m_snapshotModeHasBeenSet = true;
}

bool MariaDBParam::SnapshotModeHasBeenSet() const
{
    return m_snapshotModeHasBeenSet;
}

string MariaDBParam::GetKeyColumns() const
{
    return m_keyColumns;
}

void MariaDBParam::SetKeyColumns(const string& _keyColumns)
{
    m_keyColumns = _keyColumns;
    m_keyColumnsHasBeenSet = true;
}

bool MariaDBParam::KeyColumnsHasBeenSet() const
{
    return m_keyColumnsHasBeenSet;
}

bool MariaDBParam::GetIsTablePrefix() const
{
    return m_isTablePrefix;
}

void MariaDBParam::SetIsTablePrefix(const bool& _isTablePrefix)
{
    m_isTablePrefix = _isTablePrefix;
    m_isTablePrefixHasBeenSet = true;
}

bool MariaDBParam::IsTablePrefixHasBeenSet() const
{
    return m_isTablePrefixHasBeenSet;
}

string MariaDBParam::GetOutputFormat() const
{
    return m_outputFormat;
}

void MariaDBParam::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool MariaDBParam::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

string MariaDBParam::GetIncludeContentChanges() const
{
    return m_includeContentChanges;
}

void MariaDBParam::SetIncludeContentChanges(const string& _includeContentChanges)
{
    m_includeContentChanges = _includeContentChanges;
    m_includeContentChangesHasBeenSet = true;
}

bool MariaDBParam::IncludeContentChangesHasBeenSet() const
{
    return m_includeContentChangesHasBeenSet;
}

bool MariaDBParam::GetIncludeQuery() const
{
    return m_includeQuery;
}

void MariaDBParam::SetIncludeQuery(const bool& _includeQuery)
{
    m_includeQuery = _includeQuery;
    m_includeQueryHasBeenSet = true;
}

bool MariaDBParam::IncludeQueryHasBeenSet() const
{
    return m_includeQueryHasBeenSet;
}

bool MariaDBParam::GetRecordWithSchema() const
{
    return m_recordWithSchema;
}

void MariaDBParam::SetRecordWithSchema(const bool& _recordWithSchema)
{
    m_recordWithSchema = _recordWithSchema;
    m_recordWithSchemaHasBeenSet = true;
}

bool MariaDBParam::RecordWithSchemaHasBeenSet() const
{
    return m_recordWithSchemaHasBeenSet;
}

