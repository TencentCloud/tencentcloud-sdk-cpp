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

#include <tencentcloud/ckafka/v20190819/model/IcebergParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

IcebergParam::IcebergParam() :
    m_resourceHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_schemeTypeHasBeenSet(false),
    m_enableFieldExtensionHasBeenSet(false),
    m_upsertModeHasBeenSet(false),
    m_primaryKeysHasBeenSet(false)
{
}

CoreInternalOutcome IcebergParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("SchemeType") && !value["SchemeType"].IsNull())
    {
        if (!value["SchemeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.SchemeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemeType = string(value["SchemeType"].GetString());
        m_schemeTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableFieldExtension") && !value["EnableFieldExtension"].IsNull())
    {
        if (!value["EnableFieldExtension"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.EnableFieldExtension` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFieldExtension = value["EnableFieldExtension"].GetBool();
        m_enableFieldExtensionHasBeenSet = true;
    }

    if (value.HasMember("UpsertMode") && !value["UpsertMode"].IsNull())
    {
        if (!value["UpsertMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.UpsertMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upsertMode = string(value["UpsertMode"].GetString());
        m_upsertModeHasBeenSet = true;
    }

    if (value.HasMember("PrimaryKeys") && !value["PrimaryKeys"].IsNull())
    {
        if (!value["PrimaryKeys"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergParam.PrimaryKeys` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryKeys = string(value["PrimaryKeys"].GetString());
        m_primaryKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IcebergParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemeType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFieldExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFieldExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFieldExtension, allocator);
    }

    if (m_upsertModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upsertMode.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryKeys.c_str(), allocator).Move(), allocator);
    }

}


string IcebergParam::GetResource() const
{
    return m_resource;
}

void IcebergParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool IcebergParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string IcebergParam::GetDatabase() const
{
    return m_database;
}

void IcebergParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool IcebergParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string IcebergParam::GetTableName() const
{
    return m_tableName;
}

void IcebergParam::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool IcebergParam::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string IcebergParam::GetSchemeType() const
{
    return m_schemeType;
}

void IcebergParam::SetSchemeType(const string& _schemeType)
{
    m_schemeType = _schemeType;
    m_schemeTypeHasBeenSet = true;
}

bool IcebergParam::SchemeTypeHasBeenSet() const
{
    return m_schemeTypeHasBeenSet;
}

bool IcebergParam::GetEnableFieldExtension() const
{
    return m_enableFieldExtension;
}

void IcebergParam::SetEnableFieldExtension(const bool& _enableFieldExtension)
{
    m_enableFieldExtension = _enableFieldExtension;
    m_enableFieldExtensionHasBeenSet = true;
}

bool IcebergParam::EnableFieldExtensionHasBeenSet() const
{
    return m_enableFieldExtensionHasBeenSet;
}

string IcebergParam::GetUpsertMode() const
{
    return m_upsertMode;
}

void IcebergParam::SetUpsertMode(const string& _upsertMode)
{
    m_upsertMode = _upsertMode;
    m_upsertModeHasBeenSet = true;
}

bool IcebergParam::UpsertModeHasBeenSet() const
{
    return m_upsertModeHasBeenSet;
}

string IcebergParam::GetPrimaryKeys() const
{
    return m_primaryKeys;
}

void IcebergParam::SetPrimaryKeys(const string& _primaryKeys)
{
    m_primaryKeys = _primaryKeys;
    m_primaryKeysHasBeenSet = true;
}

bool IcebergParam::PrimaryKeysHasBeenSet() const
{
    return m_primaryKeysHasBeenSet;
}

