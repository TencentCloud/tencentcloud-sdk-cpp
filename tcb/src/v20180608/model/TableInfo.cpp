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

#include <tencentcloud/tcb/v20180608/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

TableInfo::TableInfo() :
    m_tableNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_indexCountHasBeenSet(false),
    m_indexSizeHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("IndexCount") && !value["IndexCount"].IsNull())
    {
        if (!value["IndexCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.IndexCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexCount = value["IndexCount"].GetInt64();
        m_indexCountHasBeenSet = true;
    }

    if (value.HasMember("IndexSize") && !value["IndexSize"].IsNull())
    {
        if (!value["IndexSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.IndexSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexSize = value["IndexSize"].GetInt64();
        m_indexSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_indexCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexCount, allocator);
    }

    if (m_indexSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexSize, allocator);
    }

}


string TableInfo::GetTableName() const
{
    return m_tableName;
}

void TableInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t TableInfo::GetCount() const
{
    return m_count;
}

void TableInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TableInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t TableInfo::GetSize() const
{
    return m_size;
}

void TableInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TableInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t TableInfo::GetIndexCount() const
{
    return m_indexCount;
}

void TableInfo::SetIndexCount(const int64_t& _indexCount)
{
    m_indexCount = _indexCount;
    m_indexCountHasBeenSet = true;
}

bool TableInfo::IndexCountHasBeenSet() const
{
    return m_indexCountHasBeenSet;
}

int64_t TableInfo::GetIndexSize() const
{
    return m_indexSize;
}

void TableInfo::SetIndexSize(const int64_t& _indexSize)
{
    m_indexSize = _indexSize;
    m_indexSizeHasBeenSet = true;
}

bool TableInfo::IndexSizeHasBeenSet() const
{
    return m_indexSizeHasBeenSet;
}

