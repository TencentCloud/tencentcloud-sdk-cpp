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

#include <tencentcloud/privatedns/v20201028/model/DescribeAuditLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

DescribeAuditLogRequest::DescribeAuditLogRequest() :
    m_timeRangeBeginHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAuditLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeRangeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeRangeBegin.c_str(), allocator).Move(), allocator);
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

    if (m_timeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeRangeEnd.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAuditLogRequest::GetTimeRangeBegin() const
{
    return m_timeRangeBegin;
}

void DescribeAuditLogRequest::SetTimeRangeBegin(const string& _timeRangeBegin)
{
    m_timeRangeBegin = _timeRangeBegin;
    m_timeRangeBeginHasBeenSet = true;
}

bool DescribeAuditLogRequest::TimeRangeBeginHasBeenSet() const
{
    return m_timeRangeBeginHasBeenSet;
}

vector<Filter> DescribeAuditLogRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAuditLogRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAuditLogRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeAuditLogRequest::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

void DescribeAuditLogRequest::SetTimeRangeEnd(const string& _timeRangeEnd)
{
    m_timeRangeEnd = _timeRangeEnd;
    m_timeRangeEndHasBeenSet = true;
}

bool DescribeAuditLogRequest::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}

int64_t DescribeAuditLogRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAuditLogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAuditLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAuditLogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAuditLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAuditLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


