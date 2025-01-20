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

#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

GetCcnRegionBandwidthLimitsRequest::GetCcnRegionBandwidthLimitsRequest() :
    m_ccnIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortedByHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

string GetCcnRegionBandwidthLimitsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
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

    if (m_sortedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortedBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortedBy.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetCcnRegionBandwidthLimitsRequest::GetCcnId() const
{
    return m_ccnId;
}

void GetCcnRegionBandwidthLimitsRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<Filter> GetCcnRegionBandwidthLimitsRequest::GetFilters() const
{
    return m_filters;
}

void GetCcnRegionBandwidthLimitsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string GetCcnRegionBandwidthLimitsRequest::GetSortedBy() const
{
    return m_sortedBy;
}

void GetCcnRegionBandwidthLimitsRequest::SetSortedBy(const string& _sortedBy)
{
    m_sortedBy = _sortedBy;
    m_sortedByHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::SortedByHasBeenSet() const
{
    return m_sortedByHasBeenSet;
}

uint64_t GetCcnRegionBandwidthLimitsRequest::GetOffset() const
{
    return m_offset;
}

void GetCcnRegionBandwidthLimitsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetCcnRegionBandwidthLimitsRequest::GetLimit() const
{
    return m_limit;
}

void GetCcnRegionBandwidthLimitsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetCcnRegionBandwidthLimitsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void GetCcnRegionBandwidthLimitsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool GetCcnRegionBandwidthLimitsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}


