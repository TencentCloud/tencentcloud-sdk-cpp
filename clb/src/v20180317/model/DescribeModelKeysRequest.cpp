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

#include <tencentcloud/clb/v20180317/model/DescribeModelKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeModelKeysRequest::DescribeModelKeysRequest() :
    m_accessTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_serviceProviderIdsHasBeenSet(false)
{
}

string DescribeModelKeysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
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

    if (m_serviceProviderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceProviderIds.begin(); itr != m_serviceProviderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeModelKeysRequest::GetAccessType() const
{
    return m_accessType;
}

void DescribeModelKeysRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeModelKeysRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<Filter> DescribeModelKeysRequest::GetFilters() const
{
    return m_filters;
}

void DescribeModelKeysRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeModelKeysRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeModelKeysRequest::GetLimit() const
{
    return m_limit;
}

void DescribeModelKeysRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeModelKeysRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeModelKeysRequest::GetOffset() const
{
    return m_offset;
}

void DescribeModelKeysRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeModelKeysRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeModelKeysRequest::GetServiceProviderIds() const
{
    return m_serviceProviderIds;
}

void DescribeModelKeysRequest::SetServiceProviderIds(const vector<string>& _serviceProviderIds)
{
    m_serviceProviderIds = _serviceProviderIds;
    m_serviceProviderIdsHasBeenSet = true;
}

bool DescribeModelKeysRequest::ServiceProviderIdsHasBeenSet() const
{
    return m_serviceProviderIdsHasBeenSet;
}


