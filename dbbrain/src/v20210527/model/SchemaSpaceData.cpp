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

#include <tencentcloud/dbbrain/v20210527/model/SchemaSpaceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SchemaSpaceData::SchemaSpaceData() :
    m_tableSchemaHasBeenSet(false),
    m_dataLengthHasBeenSet(false),
    m_indexLengthHasBeenSet(false),
    m_dataFreeHasBeenSet(false),
    m_totalLengthHasBeenSet(false),
    m_fragRatioHasBeenSet(false),
    m_tableRowsHasBeenSet(false),
    m_physicalFileSizeHasBeenSet(false)
{
}

CoreInternalOutcome SchemaSpaceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("DataLength") && !value["DataLength"].IsNull())
    {
        if (!value["DataLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.DataLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataLength = value["DataLength"].GetDouble();
        m_dataLengthHasBeenSet = true;
    }

    if (value.HasMember("IndexLength") && !value["IndexLength"].IsNull())
    {
        if (!value["IndexLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.IndexLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexLength = value["IndexLength"].GetDouble();
        m_indexLengthHasBeenSet = true;
    }

    if (value.HasMember("DataFree") && !value["DataFree"].IsNull())
    {
        if (!value["DataFree"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.DataFree` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataFree = value["DataFree"].GetDouble();
        m_dataFreeHasBeenSet = true;
    }

    if (value.HasMember("TotalLength") && !value["TotalLength"].IsNull())
    {
        if (!value["TotalLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.TotalLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalLength = value["TotalLength"].GetDouble();
        m_totalLengthHasBeenSet = true;
    }

    if (value.HasMember("FragRatio") && !value["FragRatio"].IsNull())
    {
        if (!value["FragRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.FragRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fragRatio = value["FragRatio"].GetDouble();
        m_fragRatioHasBeenSet = true;
    }

    if (value.HasMember("TableRows") && !value["TableRows"].IsNull())
    {
        if (!value["TableRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.TableRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableRows = value["TableRows"].GetInt64();
        m_tableRowsHasBeenSet = true;
    }

    if (value.HasMember("PhysicalFileSize") && !value["PhysicalFileSize"].IsNull())
    {
        if (!value["PhysicalFileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaSpaceData.PhysicalFileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_physicalFileSize = value["PhysicalFileSize"].GetDouble();
        m_physicalFileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaSpaceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
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

    if (m_totalLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLength, allocator);
    }

    if (m_fragRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragRatio, allocator);
    }

    if (m_tableRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableRows, allocator);
    }

    if (m_physicalFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_physicalFileSize, allocator);
    }

}


string SchemaSpaceData::GetTableSchema() const
{
    return m_tableSchema;
}

void SchemaSpaceData::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool SchemaSpaceData::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

double SchemaSpaceData::GetDataLength() const
{
    return m_dataLength;
}

void SchemaSpaceData::SetDataLength(const double& _dataLength)
{
    m_dataLength = _dataLength;
    m_dataLengthHasBeenSet = true;
}

bool SchemaSpaceData::DataLengthHasBeenSet() const
{
    return m_dataLengthHasBeenSet;
}

double SchemaSpaceData::GetIndexLength() const
{
    return m_indexLength;
}

void SchemaSpaceData::SetIndexLength(const double& _indexLength)
{
    m_indexLength = _indexLength;
    m_indexLengthHasBeenSet = true;
}

bool SchemaSpaceData::IndexLengthHasBeenSet() const
{
    return m_indexLengthHasBeenSet;
}

double SchemaSpaceData::GetDataFree() const
{
    return m_dataFree;
}

void SchemaSpaceData::SetDataFree(const double& _dataFree)
{
    m_dataFree = _dataFree;
    m_dataFreeHasBeenSet = true;
}

bool SchemaSpaceData::DataFreeHasBeenSet() const
{
    return m_dataFreeHasBeenSet;
}

double SchemaSpaceData::GetTotalLength() const
{
    return m_totalLength;
}

void SchemaSpaceData::SetTotalLength(const double& _totalLength)
{
    m_totalLength = _totalLength;
    m_totalLengthHasBeenSet = true;
}

bool SchemaSpaceData::TotalLengthHasBeenSet() const
{
    return m_totalLengthHasBeenSet;
}

double SchemaSpaceData::GetFragRatio() const
{
    return m_fragRatio;
}

void SchemaSpaceData::SetFragRatio(const double& _fragRatio)
{
    m_fragRatio = _fragRatio;
    m_fragRatioHasBeenSet = true;
}

bool SchemaSpaceData::FragRatioHasBeenSet() const
{
    return m_fragRatioHasBeenSet;
}

int64_t SchemaSpaceData::GetTableRows() const
{
    return m_tableRows;
}

void SchemaSpaceData::SetTableRows(const int64_t& _tableRows)
{
    m_tableRows = _tableRows;
    m_tableRowsHasBeenSet = true;
}

bool SchemaSpaceData::TableRowsHasBeenSet() const
{
    return m_tableRowsHasBeenSet;
}

double SchemaSpaceData::GetPhysicalFileSize() const
{
    return m_physicalFileSize;
}

void SchemaSpaceData::SetPhysicalFileSize(const double& _physicalFileSize)
{
    m_physicalFileSize = _physicalFileSize;
    m_physicalFileSizeHasBeenSet = true;
}

bool SchemaSpaceData::PhysicalFileSizeHasBeenSet() const
{
    return m_physicalFileSizeHasBeenSet;
}

