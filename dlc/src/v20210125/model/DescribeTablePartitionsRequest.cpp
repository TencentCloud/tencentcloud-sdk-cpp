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

#include <tencentcloud/dlc/v20210125/model/DescribeTablePartitionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeTablePartitionsRequest::DescribeTablePartitionsRequest() :
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_fuzzyPartitionHasBeenSet(false),
    m_sortsHasBeenSet(false),
    m_cursorHasBeenSet(false)
{
}

string DescribeTablePartitionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_fuzzyPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuzzyPartition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fuzzyPartition.c_str(), allocator).Move(), allocator);
    }

    if (m_sortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sorts.begin(); itr != m_sorts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTablePartitionsRequest::GetCatalog() const
{
    return m_catalog;
}

void DescribeTablePartitionsRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string DescribeTablePartitionsRequest::GetDatabase() const
{
    return m_database;
}

void DescribeTablePartitionsRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string DescribeTablePartitionsRequest::GetTable() const
{
    return m_table;
}

void DescribeTablePartitionsRequest::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

int64_t DescribeTablePartitionsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTablePartitionsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTablePartitionsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTablePartitionsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTablePartitionsRequest::GetFuzzyPartition() const
{
    return m_fuzzyPartition;
}

void DescribeTablePartitionsRequest::SetFuzzyPartition(const string& _fuzzyPartition)
{
    m_fuzzyPartition = _fuzzyPartition;
    m_fuzzyPartitionHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::FuzzyPartitionHasBeenSet() const
{
    return m_fuzzyPartitionHasBeenSet;
}

vector<Sort> DescribeTablePartitionsRequest::GetSorts() const
{
    return m_sorts;
}

void DescribeTablePartitionsRequest::SetSorts(const vector<Sort>& _sorts)
{
    m_sorts = _sorts;
    m_sortsHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::SortsHasBeenSet() const
{
    return m_sortsHasBeenSet;
}

string DescribeTablePartitionsRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeTablePartitionsRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeTablePartitionsRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}


