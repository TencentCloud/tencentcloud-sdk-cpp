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

#include <tencentcloud/dbbrain/v20210527/model/TableStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

TableStatistics::TableStatistics() :
    m_tableNameHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_dataLengthHasBeenSet(false),
    m_indexLengthHasBeenSet(false),
    m_totalLengthHasBeenSet(false),
    m_usedLengthHasBeenSet(false),
    m_dataFreeHasBeenSet(false),
    m_tableRowsHasBeenSet(false),
    m_fragRatioHasBeenSet(false),
    m_physicalFileSizeHasBeenSet(false)
{
}

CoreInternalOutcome TableStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("DataLength") && !value["DataLength"].IsNull())
    {
        if (!value["DataLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.DataLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataLength = value["DataLength"].GetDouble();
        m_dataLengthHasBeenSet = true;
    }

    if (value.HasMember("IndexLength") && !value["IndexLength"].IsNull())
    {
        if (!value["IndexLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.IndexLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexLength = value["IndexLength"].GetDouble();
        m_indexLengthHasBeenSet = true;
    }

    if (value.HasMember("TotalLength") && !value["TotalLength"].IsNull())
    {
        if (!value["TotalLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.TotalLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalLength = value["TotalLength"].GetDouble();
        m_totalLengthHasBeenSet = true;
    }

    if (value.HasMember("UsedLength") && !value["UsedLength"].IsNull())
    {
        if (!value["UsedLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.UsedLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedLength = value["UsedLength"].GetDouble();
        m_usedLengthHasBeenSet = true;
    }

    if (value.HasMember("DataFree") && !value["DataFree"].IsNull())
    {
        if (!value["DataFree"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.DataFree` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataFree = value["DataFree"].GetDouble();
        m_dataFreeHasBeenSet = true;
    }

    if (value.HasMember("TableRows") && !value["TableRows"].IsNull())
    {
        if (!value["TableRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.TableRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableRows = value["TableRows"].GetInt64();
        m_tableRowsHasBeenSet = true;
    }

    if (value.HasMember("FragRatio") && !value["FragRatio"].IsNull())
    {
        if (!value["FragRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.FragRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fragRatio = value["FragRatio"].GetDouble();
        m_fragRatioHasBeenSet = true;
    }

    if (value.HasMember("PhysicalFileSize") && !value["PhysicalFileSize"].IsNull())
    {
        if (!value["PhysicalFileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TableStatistics.PhysicalFileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_physicalFileSize = value["PhysicalFileSize"].GetDouble();
        m_physicalFileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataLength, allocator);
    }

    if (m_indexLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexLength, allocator);
    }

    if (m_totalLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLength, allocator);
    }

    if (m_usedLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedLength, allocator);
    }

    if (m_dataFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFree, allocator);
    }

    if (m_tableRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableRows, allocator);
    }

    if (m_fragRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragRatio, allocator);
    }

    if (m_physicalFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_physicalFileSize, allocator);
    }

}


string TableStatistics::GetTableName() const
{
    return m_tableName;
}

void TableStatistics::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableStatistics::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableStatistics::GetTableSchema() const
{
    return m_tableSchema;
}

void TableStatistics::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool TableStatistics::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string TableStatistics::GetDatabaseName() const
{
    return m_databaseName;
}

void TableStatistics::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TableStatistics::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TableStatistics::GetEngine() const
{
    return m_engine;
}

void TableStatistics::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool TableStatistics::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

double TableStatistics::GetDataLength() const
{
    return m_dataLength;
}

void TableStatistics::SetDataLength(const double& _dataLength)
{
    m_dataLength = _dataLength;
    m_dataLengthHasBeenSet = true;
}

bool TableStatistics::DataLengthHasBeenSet() const
{
    return m_dataLengthHasBeenSet;
}

double TableStatistics::GetIndexLength() const
{
    return m_indexLength;
}

void TableStatistics::SetIndexLength(const double& _indexLength)
{
    m_indexLength = _indexLength;
    m_indexLengthHasBeenSet = true;
}

bool TableStatistics::IndexLengthHasBeenSet() const
{
    return m_indexLengthHasBeenSet;
}

double TableStatistics::GetTotalLength() const
{
    return m_totalLength;
}

void TableStatistics::SetTotalLength(const double& _totalLength)
{
    m_totalLength = _totalLength;
    m_totalLengthHasBeenSet = true;
}

bool TableStatistics::TotalLengthHasBeenSet() const
{
    return m_totalLengthHasBeenSet;
}

double TableStatistics::GetUsedLength() const
{
    return m_usedLength;
}

void TableStatistics::SetUsedLength(const double& _usedLength)
{
    m_usedLength = _usedLength;
    m_usedLengthHasBeenSet = true;
}

bool TableStatistics::UsedLengthHasBeenSet() const
{
    return m_usedLengthHasBeenSet;
}

double TableStatistics::GetDataFree() const
{
    return m_dataFree;
}

void TableStatistics::SetDataFree(const double& _dataFree)
{
    m_dataFree = _dataFree;
    m_dataFreeHasBeenSet = true;
}

bool TableStatistics::DataFreeHasBeenSet() const
{
    return m_dataFreeHasBeenSet;
}

int64_t TableStatistics::GetTableRows() const
{
    return m_tableRows;
}

void TableStatistics::SetTableRows(const int64_t& _tableRows)
{
    m_tableRows = _tableRows;
    m_tableRowsHasBeenSet = true;
}

bool TableStatistics::TableRowsHasBeenSet() const
{
    return m_tableRowsHasBeenSet;
}

double TableStatistics::GetFragRatio() const
{
    return m_fragRatio;
}

void TableStatistics::SetFragRatio(const double& _fragRatio)
{
    m_fragRatio = _fragRatio;
    m_fragRatioHasBeenSet = true;
}

bool TableStatistics::FragRatioHasBeenSet() const
{
    return m_fragRatioHasBeenSet;
}

double TableStatistics::GetPhysicalFileSize() const
{
    return m_physicalFileSize;
}

void TableStatistics::SetPhysicalFileSize(const double& _physicalFileSize)
{
    m_physicalFileSize = _physicalFileSize;
    m_physicalFileSizeHasBeenSet = true;
}

bool TableStatistics::PhysicalFileSizeHasBeenSet() const
{
    return m_physicalFileSizeHasBeenSet;
}

