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

#include <tencentcloud/dbbrain/v20210527/model/MysqlSpaceObjectItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MysqlSpaceObjectItem::MysqlSpaceObjectItem() :
    m_tableSchemaHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_tableRowsHasBeenSet(false),
    m_totalLengthHasBeenSet(false),
    m_dataLengthHasBeenSet(false),
    m_indexLengthHasBeenSet(false),
    m_dataFreeHasBeenSet(false),
    m_fragRatioHasBeenSet(false),
    m_physicalFileSizeHasBeenSet(false)
{
}

CoreInternalOutcome MysqlSpaceObjectItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("TableRows") && !value["TableRows"].IsNull())
    {
        if (!value["TableRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.TableRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableRows = value["TableRows"].GetInt64();
        m_tableRowsHasBeenSet = true;
    }

    if (value.HasMember("TotalLength") && !value["TotalLength"].IsNull())
    {
        if (!value["TotalLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.TotalLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalLength = value["TotalLength"].GetDouble();
        m_totalLengthHasBeenSet = true;
    }

    if (value.HasMember("DataLength") && !value["DataLength"].IsNull())
    {
        if (!value["DataLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.DataLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataLength = value["DataLength"].GetDouble();
        m_dataLengthHasBeenSet = true;
    }

    if (value.HasMember("IndexLength") && !value["IndexLength"].IsNull())
    {
        if (!value["IndexLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.IndexLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexLength = value["IndexLength"].GetDouble();
        m_indexLengthHasBeenSet = true;
    }

    if (value.HasMember("DataFree") && !value["DataFree"].IsNull())
    {
        if (!value["DataFree"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.DataFree` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataFree = value["DataFree"].GetDouble();
        m_dataFreeHasBeenSet = true;
    }

    if (value.HasMember("FragRatio") && !value["FragRatio"].IsNull())
    {
        if (!value["FragRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.FragRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fragRatio = value["FragRatio"].GetDouble();
        m_fragRatioHasBeenSet = true;
    }

    if (value.HasMember("PhysicalFileSize") && !value["PhysicalFileSize"].IsNull())
    {
        if (!value["PhysicalFileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MysqlSpaceObjectItem.PhysicalFileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_physicalFileSize = value["PhysicalFileSize"].GetDouble();
        m_physicalFileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MysqlSpaceObjectItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dataFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFree, allocator);
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


string MysqlSpaceObjectItem::GetTableSchema() const
{
    return m_tableSchema;
}

void MysqlSpaceObjectItem::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool MysqlSpaceObjectItem::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string MysqlSpaceObjectItem::GetTableName() const
{
    return m_tableName;
}

void MysqlSpaceObjectItem::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool MysqlSpaceObjectItem::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string MysqlSpaceObjectItem::GetEngine() const
{
    return m_engine;
}

void MysqlSpaceObjectItem::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool MysqlSpaceObjectItem::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t MysqlSpaceObjectItem::GetTableRows() const
{
    return m_tableRows;
}

void MysqlSpaceObjectItem::SetTableRows(const int64_t& _tableRows)
{
    m_tableRows = _tableRows;
    m_tableRowsHasBeenSet = true;
}

bool MysqlSpaceObjectItem::TableRowsHasBeenSet() const
{
    return m_tableRowsHasBeenSet;
}

double MysqlSpaceObjectItem::GetTotalLength() const
{
    return m_totalLength;
}

void MysqlSpaceObjectItem::SetTotalLength(const double& _totalLength)
{
    m_totalLength = _totalLength;
    m_totalLengthHasBeenSet = true;
}

bool MysqlSpaceObjectItem::TotalLengthHasBeenSet() const
{
    return m_totalLengthHasBeenSet;
}

double MysqlSpaceObjectItem::GetDataLength() const
{
    return m_dataLength;
}

void MysqlSpaceObjectItem::SetDataLength(const double& _dataLength)
{
    m_dataLength = _dataLength;
    m_dataLengthHasBeenSet = true;
}

bool MysqlSpaceObjectItem::DataLengthHasBeenSet() const
{
    return m_dataLengthHasBeenSet;
}

double MysqlSpaceObjectItem::GetIndexLength() const
{
    return m_indexLength;
}

void MysqlSpaceObjectItem::SetIndexLength(const double& _indexLength)
{
    m_indexLength = _indexLength;
    m_indexLengthHasBeenSet = true;
}

bool MysqlSpaceObjectItem::IndexLengthHasBeenSet() const
{
    return m_indexLengthHasBeenSet;
}

double MysqlSpaceObjectItem::GetDataFree() const
{
    return m_dataFree;
}

void MysqlSpaceObjectItem::SetDataFree(const double& _dataFree)
{
    m_dataFree = _dataFree;
    m_dataFreeHasBeenSet = true;
}

bool MysqlSpaceObjectItem::DataFreeHasBeenSet() const
{
    return m_dataFreeHasBeenSet;
}

double MysqlSpaceObjectItem::GetFragRatio() const
{
    return m_fragRatio;
}

void MysqlSpaceObjectItem::SetFragRatio(const double& _fragRatio)
{
    m_fragRatio = _fragRatio;
    m_fragRatioHasBeenSet = true;
}

bool MysqlSpaceObjectItem::FragRatioHasBeenSet() const
{
    return m_fragRatioHasBeenSet;
}

double MysqlSpaceObjectItem::GetPhysicalFileSize() const
{
    return m_physicalFileSize;
}

void MysqlSpaceObjectItem::SetPhysicalFileSize(const double& _physicalFileSize)
{
    m_physicalFileSize = _physicalFileSize;
    m_physicalFileSizeHasBeenSet = true;
}

bool MysqlSpaceObjectItem::PhysicalFileSizeHasBeenSet() const
{
    return m_physicalFileSizeHasBeenSet;
}

