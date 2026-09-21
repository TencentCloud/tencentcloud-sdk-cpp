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

#include <tencentcloud/dbbrain/v20210527/model/PostgresSpaceObjectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

PostgresSpaceObjectItem::PostgresSpaceObjectItem() :
    m_tableCatalogHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_relationSizeHasBeenSet(false),
    m_tableSizeHasBeenSet(false),
    m_indexSizeHasBeenSet(false),
    m_totalRelationSizeHasBeenSet(false),
    m_tableBloatHasBeenSet(false),
    m_tableRowsHasBeenSet(false)
{
}

CoreInternalOutcome PostgresSpaceObjectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableCatalog") && !value["TableCatalog"].IsNull())
    {
        if (!value["TableCatalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableCatalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableCatalog = string(value["TableCatalog"].GetString());
        m_tableCatalogHasBeenSet = true;
    }

    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("RelationSize") && !value["RelationSize"].IsNull())
    {
        if (!value["RelationSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.RelationSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_relationSize = value["RelationSize"].GetDouble();
        m_relationSizeHasBeenSet = true;
    }

    if (value.HasMember("TableSize") && !value["TableSize"].IsNull())
    {
        if (!value["TableSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tableSize = value["TableSize"].GetDouble();
        m_tableSizeHasBeenSet = true;
    }

    if (value.HasMember("IndexSize") && !value["IndexSize"].IsNull())
    {
        if (!value["IndexSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.IndexSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexSize = value["IndexSize"].GetDouble();
        m_indexSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalRelationSize") && !value["TotalRelationSize"].IsNull())
    {
        if (!value["TotalRelationSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TotalRelationSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalRelationSize = value["TotalRelationSize"].GetDouble();
        m_totalRelationSizeHasBeenSet = true;
    }

    if (value.HasMember("TableBloat") && !value["TableBloat"].IsNull())
    {
        if (!value["TableBloat"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableBloat` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tableBloat = value["TableBloat"].GetDouble();
        m_tableBloatHasBeenSet = true;
    }

    if (value.HasMember("TableRows") && !value["TableRows"].IsNull())
    {
        if (!value["TableRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostgresSpaceObjectItem.TableRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableRows = value["TableRows"].GetInt64();
        m_tableRowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostgresSpaceObjectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableCatalog.c_str(), allocator).Move(), allocator);
    }

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

    if (m_relationSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relationSize, allocator);
    }

    if (m_tableSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableSize, allocator);
    }

    if (m_indexSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexSize, allocator);
    }

    if (m_totalRelationSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRelationSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRelationSize, allocator);
    }

    if (m_tableBloatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBloat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableBloat, allocator);
    }

    if (m_tableRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableRows, allocator);
    }

}


string PostgresSpaceObjectItem::GetTableCatalog() const
{
    return m_tableCatalog;
}

void PostgresSpaceObjectItem::SetTableCatalog(const string& _tableCatalog)
{
    m_tableCatalog = _tableCatalog;
    m_tableCatalogHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableCatalogHasBeenSet() const
{
    return m_tableCatalogHasBeenSet;
}

string PostgresSpaceObjectItem::GetTableSchema() const
{
    return m_tableSchema;
}

void PostgresSpaceObjectItem::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string PostgresSpaceObjectItem::GetTableName() const
{
    return m_tableName;
}

void PostgresSpaceObjectItem::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

double PostgresSpaceObjectItem::GetRelationSize() const
{
    return m_relationSize;
}

void PostgresSpaceObjectItem::SetRelationSize(const double& _relationSize)
{
    m_relationSize = _relationSize;
    m_relationSizeHasBeenSet = true;
}

bool PostgresSpaceObjectItem::RelationSizeHasBeenSet() const
{
    return m_relationSizeHasBeenSet;
}

double PostgresSpaceObjectItem::GetTableSize() const
{
    return m_tableSize;
}

void PostgresSpaceObjectItem::SetTableSize(const double& _tableSize)
{
    m_tableSize = _tableSize;
    m_tableSizeHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableSizeHasBeenSet() const
{
    return m_tableSizeHasBeenSet;
}

double PostgresSpaceObjectItem::GetIndexSize() const
{
    return m_indexSize;
}

void PostgresSpaceObjectItem::SetIndexSize(const double& _indexSize)
{
    m_indexSize = _indexSize;
    m_indexSizeHasBeenSet = true;
}

bool PostgresSpaceObjectItem::IndexSizeHasBeenSet() const
{
    return m_indexSizeHasBeenSet;
}

double PostgresSpaceObjectItem::GetTotalRelationSize() const
{
    return m_totalRelationSize;
}

void PostgresSpaceObjectItem::SetTotalRelationSize(const double& _totalRelationSize)
{
    m_totalRelationSize = _totalRelationSize;
    m_totalRelationSizeHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TotalRelationSizeHasBeenSet() const
{
    return m_totalRelationSizeHasBeenSet;
}

double PostgresSpaceObjectItem::GetTableBloat() const
{
    return m_tableBloat;
}

void PostgresSpaceObjectItem::SetTableBloat(const double& _tableBloat)
{
    m_tableBloat = _tableBloat;
    m_tableBloatHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableBloatHasBeenSet() const
{
    return m_tableBloatHasBeenSet;
}

int64_t PostgresSpaceObjectItem::GetTableRows() const
{
    return m_tableRows;
}

void PostgresSpaceObjectItem::SetTableRows(const int64_t& _tableRows)
{
    m_tableRows = _tableRows;
    m_tableRowsHasBeenSet = true;
}

bool PostgresSpaceObjectItem::TableRowsHasBeenSet() const
{
    return m_tableRowsHasBeenSet;
}

