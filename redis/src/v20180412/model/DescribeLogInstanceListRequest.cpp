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

#include <tencentcloud/redis/v20180412/model/DescribeLogInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeLogInstanceListRequest::DescribeLogInstanceListRequest() :
    m_logTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_logSubTypeHasBeenSet(false),
    m_logSwitchHasBeenSet(false)
{
}

string DescribeLogInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
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

    if (m_logSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_logSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSwitch.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLogInstanceListRequest::GetLogType() const
{
    return m_logType;
}

void DescribeLogInstanceListRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t DescribeLogInstanceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLogInstanceListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeLogInstanceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLogInstanceListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeLogInstanceListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeLogInstanceListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeLogInstanceListRequest::GetLogSubType() const
{
    return m_logSubType;
}

void DescribeLogInstanceListRequest::SetLogSubType(const string& _logSubType)
{
    m_logSubType = _logSubType;
    m_logSubTypeHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::LogSubTypeHasBeenSet() const
{
    return m_logSubTypeHasBeenSet;
}

string DescribeLogInstanceListRequest::GetLogSwitch() const
{
    return m_logSwitch;
}

void DescribeLogInstanceListRequest::SetLogSwitch(const string& _logSwitch)
{
    m_logSwitch = _logSwitch;
    m_logSwitchHasBeenSet = true;
}

bool DescribeLogInstanceListRequest::LogSwitchHasBeenSet() const
{
    return m_logSwitchHasBeenSet;
}


