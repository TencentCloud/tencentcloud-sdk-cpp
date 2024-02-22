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

#include <tencentcloud/dts/v20211206/model/RowsCountDifference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

RowsCountDifference::RowsCountDifference() :
    m_dbHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_srcCountHasBeenSet(false),
    m_dstCountHasBeenSet(false)
{
}

CoreInternalOutcome RowsCountDifference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowsCountDifference.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RowsCountDifference.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("SrcCount") && !value["SrcCount"].IsNull())
    {
        if (!value["SrcCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RowsCountDifference.SrcCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcCount = value["SrcCount"].GetInt64();
        m_srcCountHasBeenSet = true;
    }

    if (value.HasMember("DstCount") && !value["DstCount"].IsNull())
    {
        if (!value["DstCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RowsCountDifference.DstCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dstCount = value["DstCount"].GetInt64();
        m_dstCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RowsCountDifference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_srcCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcCount, allocator);
    }

    if (m_dstCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstCount, allocator);
    }

}


string RowsCountDifference::GetDb() const
{
    return m_db;
}

void RowsCountDifference::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool RowsCountDifference::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string RowsCountDifference::GetTable() const
{
    return m_table;
}

void RowsCountDifference::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool RowsCountDifference::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

int64_t RowsCountDifference::GetSrcCount() const
{
    return m_srcCount;
}

void RowsCountDifference::SetSrcCount(const int64_t& _srcCount)
{
    m_srcCount = _srcCount;
    m_srcCountHasBeenSet = true;
}

bool RowsCountDifference::SrcCountHasBeenSet() const
{
    return m_srcCountHasBeenSet;
}

int64_t RowsCountDifference::GetDstCount() const
{
    return m_dstCount;
}

void RowsCountDifference::SetDstCount(const int64_t& _dstCount)
{
    m_dstCount = _dstCount;
    m_dstCountHasBeenSet = true;
}

bool RowsCountDifference::DstCountHasBeenSet() const
{
    return m_dstCountHasBeenSet;
}

