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

#include <tencentcloud/wedata/v20210820/model/DescribeTableMetaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableMetaRequest::DescribeTableMetaRequest() :
    m_tableIdHasBeenSet(false),
    m_tableNameFilterHasBeenSet(false),
    m_tableFilterTypeHasBeenSet(false),
    m_searchNamesHasBeenSet(false)
{
}

string DescribeTableMetaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableNameFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tableFilterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableFilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tableFilterType, allocator);
    }

    if (m_searchNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchNames.begin(); itr != m_searchNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableMetaRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeTableMetaRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeTableMetaRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

TableNameFilter DescribeTableMetaRequest::GetTableNameFilter() const
{
    return m_tableNameFilter;
}

void DescribeTableMetaRequest::SetTableNameFilter(const TableNameFilter& _tableNameFilter)
{
    m_tableNameFilter = _tableNameFilter;
    m_tableNameFilterHasBeenSet = true;
}

bool DescribeTableMetaRequest::TableNameFilterHasBeenSet() const
{
    return m_tableNameFilterHasBeenSet;
}

uint64_t DescribeTableMetaRequest::GetTableFilterType() const
{
    return m_tableFilterType;
}

void DescribeTableMetaRequest::SetTableFilterType(const uint64_t& _tableFilterType)
{
    m_tableFilterType = _tableFilterType;
    m_tableFilterTypeHasBeenSet = true;
}

bool DescribeTableMetaRequest::TableFilterTypeHasBeenSet() const
{
    return m_tableFilterTypeHasBeenSet;
}

vector<string> DescribeTableMetaRequest::GetSearchNames() const
{
    return m_searchNames;
}

void DescribeTableMetaRequest::SetSearchNames(const vector<string>& _searchNames)
{
    m_searchNames = _searchNames;
    m_searchNamesHasBeenSet = true;
}

bool DescribeTableMetaRequest::SearchNamesHasBeenSet() const
{
    return m_searchNamesHasBeenSet;
}


