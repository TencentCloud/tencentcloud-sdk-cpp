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

#include <tencentcloud/tione/v20211111/model/DescribeNotebooksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeNotebooksRequest::DescribeNotebooksRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeNotebooksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeNotebooksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNotebooksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNotebooksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeNotebooksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNotebooksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNotebooksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeNotebooksRequest::GetOrder() const
{
    return m_order;
}

void DescribeNotebooksRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeNotebooksRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeNotebooksRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeNotebooksRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeNotebooksRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

vector<Filter> DescribeNotebooksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeNotebooksRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeNotebooksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<TagFilter> DescribeNotebooksRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeNotebooksRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeNotebooksRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


