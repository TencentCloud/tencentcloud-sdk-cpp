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

#include <tencentcloud/dts/v20211206/model/DifferenceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DifferenceItem::DifferenceItem() :
    m_dbHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_chunkHasBeenSet(false),
    m_srcItemHasBeenSet(false),
    m_dstItemHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_lowerBoundaryHasBeenSet(false),
    m_upperBoundaryHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_finishedAtHasBeenSet(false)
{
}

CoreInternalOutcome DifferenceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Chunk") && !value["Chunk"].IsNull())
    {
        if (!value["Chunk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.Chunk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chunk = value["Chunk"].GetInt64();
        m_chunkHasBeenSet = true;
    }

    if (value.HasMember("SrcItem") && !value["SrcItem"].IsNull())
    {
        if (!value["SrcItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.SrcItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcItem = string(value["SrcItem"].GetString());
        m_srcItemHasBeenSet = true;
    }

    if (value.HasMember("DstItem") && !value["DstItem"].IsNull())
    {
        if (!value["DstItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.DstItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstItem = string(value["DstItem"].GetString());
        m_dstItemHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("LowerBoundary") && !value["LowerBoundary"].IsNull())
    {
        if (!value["LowerBoundary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.LowerBoundary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lowerBoundary = string(value["LowerBoundary"].GetString());
        m_lowerBoundaryHasBeenSet = true;
    }

    if (value.HasMember("UpperBoundary") && !value["UpperBoundary"].IsNull())
    {
        if (!value["UpperBoundary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.UpperBoundary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upperBoundary = string(value["UpperBoundary"].GetString());
        m_upperBoundaryHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.CostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetDouble();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceItem.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DifferenceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_chunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chunk, allocator);
    }

    if (m_srcItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcItem.c_str(), allocator).Move(), allocator);
    }

    if (m_dstItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstItem.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_lowerBoundaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerBoundary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lowerBoundary.c_str(), allocator).Move(), allocator);
    }

    if (m_upperBoundaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperBoundary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upperBoundary.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

}


string DifferenceItem::GetDb() const
{
    return m_db;
}

void DifferenceItem::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool DifferenceItem::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string DifferenceItem::GetTable() const
{
    return m_table;
}

void DifferenceItem::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DifferenceItem::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

int64_t DifferenceItem::GetChunk() const
{
    return m_chunk;
}

void DifferenceItem::SetChunk(const int64_t& _chunk)
{
    m_chunk = _chunk;
    m_chunkHasBeenSet = true;
}

bool DifferenceItem::ChunkHasBeenSet() const
{
    return m_chunkHasBeenSet;
}

string DifferenceItem::GetSrcItem() const
{
    return m_srcItem;
}

void DifferenceItem::SetSrcItem(const string& _srcItem)
{
    m_srcItem = _srcItem;
    m_srcItemHasBeenSet = true;
}

bool DifferenceItem::SrcItemHasBeenSet() const
{
    return m_srcItemHasBeenSet;
}

string DifferenceItem::GetDstItem() const
{
    return m_dstItem;
}

void DifferenceItem::SetDstItem(const string& _dstItem)
{
    m_dstItem = _dstItem;
    m_dstItemHasBeenSet = true;
}

bool DifferenceItem::DstItemHasBeenSet() const
{
    return m_dstItemHasBeenSet;
}

string DifferenceItem::GetIndexName() const
{
    return m_indexName;
}

void DifferenceItem::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool DifferenceItem::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string DifferenceItem::GetLowerBoundary() const
{
    return m_lowerBoundary;
}

void DifferenceItem::SetLowerBoundary(const string& _lowerBoundary)
{
    m_lowerBoundary = _lowerBoundary;
    m_lowerBoundaryHasBeenSet = true;
}

bool DifferenceItem::LowerBoundaryHasBeenSet() const
{
    return m_lowerBoundaryHasBeenSet;
}

string DifferenceItem::GetUpperBoundary() const
{
    return m_upperBoundary;
}

void DifferenceItem::SetUpperBoundary(const string& _upperBoundary)
{
    m_upperBoundary = _upperBoundary;
    m_upperBoundaryHasBeenSet = true;
}

bool DifferenceItem::UpperBoundaryHasBeenSet() const
{
    return m_upperBoundaryHasBeenSet;
}

double DifferenceItem::GetCostTime() const
{
    return m_costTime;
}

void DifferenceItem::SetCostTime(const double& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool DifferenceItem::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string DifferenceItem::GetFinishedAt() const
{
    return m_finishedAt;
}

void DifferenceItem::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool DifferenceItem::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

