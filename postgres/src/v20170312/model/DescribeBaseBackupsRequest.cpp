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

#include <tencentcloud/postgres/v20170312/model/DescribeBaseBackupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeBaseBackupsRequest::DescribeBaseBackupsRequest() :
    m_minFinishTimeHasBeenSet(false),
    m_maxFinishTimeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeBaseBackupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_minFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFinishTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFinishTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxFinishTime.c_str(), allocator).Move(), allocator);
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBaseBackupsRequest::GetMinFinishTime() const
{
    return m_minFinishTime;
}

void DescribeBaseBackupsRequest::SetMinFinishTime(const string& _minFinishTime)
{
    m_minFinishTime = _minFinishTime;
    m_minFinishTimeHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::MinFinishTimeHasBeenSet() const
{
    return m_minFinishTimeHasBeenSet;
}

string DescribeBaseBackupsRequest::GetMaxFinishTime() const
{
    return m_maxFinishTime;
}

void DescribeBaseBackupsRequest::SetMaxFinishTime(const string& _maxFinishTime)
{
    m_maxFinishTime = _maxFinishTime;
    m_maxFinishTimeHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::MaxFinishTimeHasBeenSet() const
{
    return m_maxFinishTimeHasBeenSet;
}

vector<Filter> DescribeBaseBackupsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBaseBackupsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeBaseBackupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaseBackupsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeBaseBackupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaseBackupsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBaseBackupsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeBaseBackupsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeBaseBackupsRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeBaseBackupsRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeBaseBackupsRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


