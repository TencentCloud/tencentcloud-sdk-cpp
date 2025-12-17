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

#include <tencentcloud/vpc/v20170312/model/DescribeRoutePoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeRoutePoliciesRequest::DescribeRoutePoliciesRequest() :
    m_routePolicyIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_needRoutePolicyEntryHasBeenSet(false)
{
}

string DescribeRoutePoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routePolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routePolicyIds.begin(); itr != m_routePolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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
        d.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_needRoutePolicyEntryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRoutePolicyEntry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRoutePolicyEntry, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeRoutePoliciesRequest::GetRoutePolicyIds() const
{
    return m_routePolicyIds;
}

void DescribeRoutePoliciesRequest::SetRoutePolicyIds(const vector<string>& _routePolicyIds)
{
    m_routePolicyIds = _routePolicyIds;
    m_routePolicyIdsHasBeenSet = true;
}

bool DescribeRoutePoliciesRequest::RoutePolicyIdsHasBeenSet() const
{
    return m_routePolicyIdsHasBeenSet;
}

vector<Filter> DescribeRoutePoliciesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRoutePoliciesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRoutePoliciesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeRoutePoliciesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRoutePoliciesRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRoutePoliciesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeRoutePoliciesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRoutePoliciesRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRoutePoliciesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeRoutePoliciesRequest::GetNeedRoutePolicyEntry() const
{
    return m_needRoutePolicyEntry;
}

void DescribeRoutePoliciesRequest::SetNeedRoutePolicyEntry(const bool& _needRoutePolicyEntry)
{
    m_needRoutePolicyEntry = _needRoutePolicyEntry;
    m_needRoutePolicyEntryHasBeenSet = true;
}

bool DescribeRoutePoliciesRequest::NeedRoutePolicyEntryHasBeenSet() const
{
    return m_needRoutePolicyEntryHasBeenSet;
}


