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

#include <tencentcloud/wedata/v20210820/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableInfo::TableInfo() :
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_originDatabaseNameHasBeenSet(false),
    m_originSchemaNameHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginDatabaseName") && !value["OriginDatabaseName"].IsNull())
    {
        if (!value["OriginDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.OriginDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originDatabaseName = string(value["OriginDatabaseName"].GetString());
        m_originDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("OriginSchemaName") && !value["OriginSchemaName"].IsNull())
    {
        if (!value["OriginSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.OriginSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSchemaName = string(value["OriginSchemaName"].GetString());
        m_originSchemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_originDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_originSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSchemaName.c_str(), allocator).Move(), allocator);
    }

}


string TableInfo::GetTableId() const
{
    return m_tableId;
}

void TableInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool TableInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string TableInfo::GetTableName() const
{
    return m_tableName;
}

void TableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableInfo::GetTableType() const
{
    return m_tableType;
}

void TableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableInfo::GetOriginDatabaseName() const
{
    return m_originDatabaseName;
}

void TableInfo::SetOriginDatabaseName(const string& _originDatabaseName)
{
    m_originDatabaseName = _originDatabaseName;
    m_originDatabaseNameHasBeenSet = true;
}

bool TableInfo::OriginDatabaseNameHasBeenSet() const
{
    return m_originDatabaseNameHasBeenSet;
}

string TableInfo::GetOriginSchemaName() const
{
    return m_originSchemaName;
}

void TableInfo::SetOriginSchemaName(const string& _originSchemaName)
{
    m_originSchemaName = _originSchemaName;
    m_originSchemaNameHasBeenSet = true;
}

bool TableInfo::OriginSchemaNameHasBeenSet() const
{
    return m_originSchemaNameHasBeenSet;
}

