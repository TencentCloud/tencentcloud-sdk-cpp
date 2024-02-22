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

#include <tencentcloud/dts/v20211206/model/DifferenceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DifferenceData::DifferenceData() :
    m_dbHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_srcChunkHasBeenSet(false),
    m_dstChunkHasBeenSet(false),
    m_srcItemHasBeenSet(false),
    m_dstItemHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome DifferenceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("SrcChunk") && !value["SrcChunk"].IsNull())
    {
        if (!value["SrcChunk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.SrcChunk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcChunk = string(value["SrcChunk"].GetString());
        m_srcChunkHasBeenSet = true;
    }

    if (value.HasMember("DstChunk") && !value["DstChunk"].IsNull())
    {
        if (!value["DstChunk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.DstChunk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstChunk = string(value["DstChunk"].GetString());
        m_dstChunkHasBeenSet = true;
    }

    if (value.HasMember("SrcItem") && !value["SrcItem"].IsNull())
    {
        if (!value["SrcItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.SrcItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcItem = string(value["SrcItem"].GetString());
        m_srcItemHasBeenSet = true;
    }

    if (value.HasMember("DstItem") && !value["DstItem"].IsNull())
    {
        if (!value["DstItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.DstItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstItem = string(value["DstItem"].GetString());
        m_dstItemHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferenceData.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DifferenceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_srcChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcChunk.c_str(), allocator).Move(), allocator);
    }

    if (m_dstChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstChunk.c_str(), allocator).Move(), allocator);
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

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string DifferenceData::GetDb() const
{
    return m_db;
}

void DifferenceData::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool DifferenceData::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string DifferenceData::GetTable() const
{
    return m_table;
}

void DifferenceData::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DifferenceData::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string DifferenceData::GetSrcChunk() const
{
    return m_srcChunk;
}

void DifferenceData::SetSrcChunk(const string& _srcChunk)
{
    m_srcChunk = _srcChunk;
    m_srcChunkHasBeenSet = true;
}

bool DifferenceData::SrcChunkHasBeenSet() const
{
    return m_srcChunkHasBeenSet;
}

string DifferenceData::GetDstChunk() const
{
    return m_dstChunk;
}

void DifferenceData::SetDstChunk(const string& _dstChunk)
{
    m_dstChunk = _dstChunk;
    m_dstChunkHasBeenSet = true;
}

bool DifferenceData::DstChunkHasBeenSet() const
{
    return m_dstChunkHasBeenSet;
}

string DifferenceData::GetSrcItem() const
{
    return m_srcItem;
}

void DifferenceData::SetSrcItem(const string& _srcItem)
{
    m_srcItem = _srcItem;
    m_srcItemHasBeenSet = true;
}

bool DifferenceData::SrcItemHasBeenSet() const
{
    return m_srcItemHasBeenSet;
}

string DifferenceData::GetDstItem() const
{
    return m_dstItem;
}

void DifferenceData::SetDstItem(const string& _dstItem)
{
    m_dstItem = _dstItem;
    m_dstItemHasBeenSet = true;
}

bool DifferenceData::DstItemHasBeenSet() const
{
    return m_dstItemHasBeenSet;
}

string DifferenceData::GetUpdatedAt() const
{
    return m_updatedAt;
}

void DifferenceData::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool DifferenceData::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

