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

#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesOfferingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DescribeReservedInstancesOfferingsRequest::DescribeReservedInstancesOfferingsRequest() :
    m_dryRunHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_minDurationHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeReservedInstancesOfferingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
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

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
    }

    if (m_minDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minDuration, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeReservedInstancesOfferingsRequest::GetDryRun() const
{
    return m_dryRun;
}

void DescribeReservedInstancesOfferingsRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

int64_t DescribeReservedInstancesOfferingsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeReservedInstancesOfferingsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeReservedInstancesOfferingsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeReservedInstancesOfferingsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeReservedInstancesOfferingsRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void DescribeReservedInstancesOfferingsRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

int64_t DescribeReservedInstancesOfferingsRequest::GetMinDuration() const
{
    return m_minDuration;
}

void DescribeReservedInstancesOfferingsRequest::SetMinDuration(const int64_t& _minDuration)
{
    m_minDuration = _minDuration;
    m_minDurationHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::MinDurationHasBeenSet() const
{
    return m_minDurationHasBeenSet;
}

vector<Filter> DescribeReservedInstancesOfferingsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeReservedInstancesOfferingsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeReservedInstancesOfferingsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


