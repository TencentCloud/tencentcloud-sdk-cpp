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

#include <tencentcloud/tcb/v20180608/model/DescribePlatformHTTPServiceRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribePlatformHTTPServiceRouteRequest::DescribePlatformHTTPServiceRouteRequest() :
    m_platformIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribePlatformHTTPServiceRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
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


string DescribePlatformHTTPServiceRouteRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribePlatformHTTPServiceRouteRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribePlatformHTTPServiceRouteRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

vector<Filter> DescribePlatformHTTPServiceRouteRequest::GetFilters() const
{
    return m_filters;
}

void DescribePlatformHTTPServiceRouteRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribePlatformHTTPServiceRouteRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribePlatformHTTPServiceRouteRequest::GetOffset() const
{
    return m_offset;
}

void DescribePlatformHTTPServiceRouteRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePlatformHTTPServiceRouteRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePlatformHTTPServiceRouteRequest::GetLimit() const
{
    return m_limit;
}

void DescribePlatformHTTPServiceRouteRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePlatformHTTPServiceRouteRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


