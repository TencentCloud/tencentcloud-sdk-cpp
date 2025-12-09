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

#include <tencentcloud/wedata/v20210820/model/AssetDimTableColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AssetDimTableColumn::AssetDimTableColumn() :
    m_columnNameHasBeenSet(false),
    m_columnNameCnHasBeenSet(false),
    m_columnTypeHasBeenSet(false),
    m_columnDescriptionHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableGuidHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

CoreInternalOutcome AssetDimTableColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("ColumnNameCn") && !value["ColumnNameCn"].IsNull())
    {
        if (!value["ColumnNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.ColumnNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnNameCn = string(value["ColumnNameCn"].GetString());
        m_columnNameCnHasBeenSet = true;
    }

    if (value.HasMember("ColumnType") && !value["ColumnType"].IsNull())
    {
        if (!value["ColumnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.ColumnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnType = string(value["ColumnType"].GetString());
        m_columnTypeHasBeenSet = true;
    }

    if (value.HasMember("ColumnDescription") && !value["ColumnDescription"].IsNull())
    {
        if (!value["ColumnDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.ColumnDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnDescription = string(value["ColumnDescription"].GetString());
        m_columnDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableGuid") && !value["TableGuid"].IsNull())
    {
        if (!value["TableGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.TableGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGuid = string(value["TableGuid"].GetString());
        m_tableGuidHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimTableColumn.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDimTableColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_columnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnType.c_str(), allocator).Move(), allocator);
    }

    if (m_columnDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGuid.c_str(), allocator).Move(), allocator);
    }

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

}


string AssetDimTableColumn::GetColumnName() const
{
    return m_columnName;
}

void AssetDimTableColumn::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool AssetDimTableColumn::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string AssetDimTableColumn::GetColumnNameCn() const
{
    return m_columnNameCn;
}

void AssetDimTableColumn::SetColumnNameCn(const string& _columnNameCn)
{
    m_columnNameCn = _columnNameCn;
    m_columnNameCnHasBeenSet = true;
}

bool AssetDimTableColumn::ColumnNameCnHasBeenSet() const
{
    return m_columnNameCnHasBeenSet;
}

string AssetDimTableColumn::GetColumnType() const
{
    return m_columnType;
}

void AssetDimTableColumn::SetColumnType(const string& _columnType)
{
    m_columnType = _columnType;
    m_columnTypeHasBeenSet = true;
}

bool AssetDimTableColumn::ColumnTypeHasBeenSet() const
{
    return m_columnTypeHasBeenSet;
}

string AssetDimTableColumn::GetColumnDescription() const
{
    return m_columnDescription;
}

void AssetDimTableColumn::SetColumnDescription(const string& _columnDescription)
{
    m_columnDescription = _columnDescription;
    m_columnDescriptionHasBeenSet = true;
}

bool AssetDimTableColumn::ColumnDescriptionHasBeenSet() const
{
    return m_columnDescriptionHasBeenSet;
}

string AssetDimTableColumn::GetTableName() const
{
    return m_tableName;
}

void AssetDimTableColumn::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool AssetDimTableColumn::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string AssetDimTableColumn::GetTableGuid() const
{
    return m_tableGuid;
}

void AssetDimTableColumn::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool AssetDimTableColumn::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

string AssetDimTableColumn::GetDatabaseName() const
{
    return m_databaseName;
}

void AssetDimTableColumn::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool AssetDimTableColumn::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string AssetDimTableColumn::GetSchemaName() const
{
    return m_schemaName;
}

void AssetDimTableColumn::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool AssetDimTableColumn::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

