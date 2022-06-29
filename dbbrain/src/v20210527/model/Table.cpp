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

#include <tencentcloud/dbbrain/v20210527/model/Table.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

Table::Table() :
    m_tableSchemaHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_tableRowsHasBeenSet(false),
    m_totalLengthHasBeenSet(false)
{
}

CoreInternalOutcome Table::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("TableRows") && !value["TableRows"].IsNull())
    {
        if (!value["TableRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TableRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableRows = value["TableRows"].GetInt64();
        m_tableRowsHasBeenSet = true;
    }

    if (value.HasMember("TotalLength") && !value["TotalLength"].IsNull())
    {
        if (!value["TotalLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Table.TotalLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalLength = value["TotalLength"].GetDouble();
        m_totalLengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Table::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_tableRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableRows, allocator);
    }

    if (m_totalLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLength, allocator);
    }

}


string Table::GetTableSchema() const
{
    return m_tableSchema;
}

void Table::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool Table::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string Table::GetTableName() const
{
    return m_tableName;
}

void Table::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool Table::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string Table::GetEngine() const
{
    return m_engine;
}

void Table::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool Table::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t Table::GetTableRows() const
{
    return m_tableRows;
}

void Table::SetTableRows(const int64_t& _tableRows)
{
    m_tableRows = _tableRows;
    m_tableRowsHasBeenSet = true;
}

bool Table::TableRowsHasBeenSet() const
{
    return m_tableRowsHasBeenSet;
}

double Table::GetTotalLength() const
{
    return m_totalLength;
}

void Table::SetTotalLength(const double& _totalLength)
{
    m_totalLength = _totalLength;
    m_totalLengthHasBeenSet = true;
}

bool Table::TotalLengthHasBeenSet() const
{
    return m_totalLengthHasBeenSet;
}

