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

#include <tencentcloud/dbs/v20211108/model/BackupObjectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupObjectItem::BackupObjectItem() :
    m_dBNameHasBeenSet(false),
    m_newDBNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_newSchemaNameHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_tableModeHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
}

CoreInternalOutcome BackupObjectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("NewDBName") && !value["NewDBName"].IsNull())
    {
        if (!value["NewDBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.NewDBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newDBName = string(value["NewDBName"].GetString());
        m_newDBNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("NewSchemaName") && !value["NewSchemaName"].IsNull())
    {
        if (!value["NewSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.NewSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newSchemaName = string(value["NewSchemaName"].GetString());
        m_newSchemaNameHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("TableMode") && !value["TableMode"].IsNull())
    {
        if (!value["TableMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.TableMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableMode = string(value["TableMode"].GetString());
        m_tableModeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupObjectItem.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupTableItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupObjectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_newDBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newDBName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_newSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BackupObjectItem::GetDBName() const
{
    return m_dBName;
}

void BackupObjectItem::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool BackupObjectItem::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string BackupObjectItem::GetNewDBName() const
{
    return m_newDBName;
}

void BackupObjectItem::SetNewDBName(const string& _newDBName)
{
    m_newDBName = _newDBName;
    m_newDBNameHasBeenSet = true;
}

bool BackupObjectItem::NewDBNameHasBeenSet() const
{
    return m_newDBNameHasBeenSet;
}

string BackupObjectItem::GetSchemaName() const
{
    return m_schemaName;
}

void BackupObjectItem::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool BackupObjectItem::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string BackupObjectItem::GetNewSchemaName() const
{
    return m_newSchemaName;
}

void BackupObjectItem::SetNewSchemaName(const string& _newSchemaName)
{
    m_newSchemaName = _newSchemaName;
    m_newSchemaNameHasBeenSet = true;
}

bool BackupObjectItem::NewSchemaNameHasBeenSet() const
{
    return m_newSchemaNameHasBeenSet;
}

string BackupObjectItem::GetDbMode() const
{
    return m_dbMode;
}

void BackupObjectItem::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool BackupObjectItem::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string BackupObjectItem::GetTableMode() const
{
    return m_tableMode;
}

void BackupObjectItem::SetTableMode(const string& _tableMode)
{
    m_tableMode = _tableMode;
    m_tableModeHasBeenSet = true;
}

bool BackupObjectItem::TableModeHasBeenSet() const
{
    return m_tableModeHasBeenSet;
}

vector<BackupTableItem> BackupObjectItem::GetTables() const
{
    return m_tables;
}

void BackupObjectItem::SetTables(const vector<BackupTableItem>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool BackupObjectItem::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

