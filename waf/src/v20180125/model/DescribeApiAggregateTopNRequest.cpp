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

#include <tencentcloud/waf/v20180125/model/DescribeApiAggregateTopNRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiAggregateTopNRequest::DescribeApiAggregateTopNRequest() :
    m_domainHasBeenSet(false),
    m_topNHasBeenSet(false),
    m_startTsHasBeenSet(false),
    m_endTsHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_globalFlagHasBeenSet(false)
{
}

string DescribeApiAggregateTopNRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }

    if (m_startTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTs, allocator);
    }

    if (m_endTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTs, allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
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

    if (m_globalFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_globalFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiAggregateTopNRequest::GetDomain() const
{
    return m_domain;
}

void DescribeApiAggregateTopNRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeApiAggregateTopNRequest::GetTopN() const
{
    return m_topN;
}

void DescribeApiAggregateTopNRequest::SetTopN(const uint64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

uint64_t DescribeApiAggregateTopNRequest::GetStartTs() const
{
    return m_startTs;
}

void DescribeApiAggregateTopNRequest::SetStartTs(const uint64_t& _startTs)
{
    m_startTs = _startTs;
    m_startTsHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::StartTsHasBeenSet() const
{
    return m_startTsHasBeenSet;
}

uint64_t DescribeApiAggregateTopNRequest::GetEndTs() const
{
    return m_endTs;
}

void DescribeApiAggregateTopNRequest::SetEndTs(const uint64_t& _endTs)
{
    m_endTs = _endTs;
    m_endTsHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::EndTsHasBeenSet() const
{
    return m_endTsHasBeenSet;
}

string DescribeApiAggregateTopNRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeApiAggregateTopNRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

vector<BotDataFilter> DescribeApiAggregateTopNRequest::GetFilters() const
{
    return m_filters;
}

void DescribeApiAggregateTopNRequest::SetFilters(const vector<BotDataFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeApiAggregateTopNRequest::GetGlobalFlag() const
{
    return m_globalFlag;
}

void DescribeApiAggregateTopNRequest::SetGlobalFlag(const bool& _globalFlag)
{
    m_globalFlag = _globalFlag;
    m_globalFlagHasBeenSet = true;
}

bool DescribeApiAggregateTopNRequest::GlobalFlagHasBeenSet() const
{
    return m_globalFlagHasBeenSet;
}


