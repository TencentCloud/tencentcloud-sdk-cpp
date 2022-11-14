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

#include <tencentcloud/wedata/v20210820/model/TableConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableConfig::TableConfig() :
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableKeyHasBeenSet(false),
    m_fieldConfigHasBeenSet(false)
{
}

CoreInternalOutcome TableConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableConfig.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableConfig.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableConfig.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableConfig.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableKey") && !value["TableKey"].IsNull())
    {
        if (!value["TableKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableConfig.TableKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableKey = string(value["TableKey"].GetString());
        m_tableKeyHasBeenSet = true;
    }

    if (value.HasMember("FieldConfig") && !value["FieldConfig"].IsNull())
    {
        if (!value["FieldConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableConfig.FieldConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldConfig.push_back(item);
        }
        m_fieldConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tableKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldConfig.begin(); itr != m_fieldConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TableConfig::GetDatabaseId() const
{
    return m_databaseId;
}

void TableConfig::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool TableConfig::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string TableConfig::GetDatabaseName() const
{
    return m_databaseName;
}

void TableConfig::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableConfig::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableConfig::GetTableId() const
{
    return m_tableId;
}

void TableConfig::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableConfig::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableConfig::GetTableName() const
{
    return m_tableName;
}

void TableConfig::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableConfig::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableConfig::GetTableKey() const
{
    return m_tableKey;
}

void TableConfig::SetTableKey(const string& _tableKey)
{
    m_tableKey = _tableKey;
    m_tableKeyHasBeenSet = true;
}

bool TableConfig::TableKeyHasBeenSet() const
{
    return m_tableKeyHasBeenSet;
}

vector<FieldConfig> TableConfig::GetFieldConfig() const
{
    return m_fieldConfig;
}

void TableConfig::SetFieldConfig(const vector<FieldConfig>& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool TableConfig::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

