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

#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeAMQPClustersRequest::DescribeAMQPClustersRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_idKeywordHasBeenSet(false),
    m_nameKeywordHasBeenSet(false),
    m_clusterIdListHasBeenSet(false),
    m_isTagFilterHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeAMQPClustersRequest::ToJsonString() const
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

    if (m_idKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_nameKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIdList.begin(); itr != m_clusterIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isTagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTagFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isTagFilter, allocator);
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


uint64_t DescribeAMQPClustersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAMQPClustersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAMQPClustersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAMQPClustersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAMQPClustersRequest::GetIdKeyword() const
{
    return m_idKeyword;
}

void DescribeAMQPClustersRequest::SetIdKeyword(const string& _idKeyword)
{
    m_idKeyword = _idKeyword;
    m_idKeywordHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::IdKeywordHasBeenSet() const
{
    return m_idKeywordHasBeenSet;
}

string DescribeAMQPClustersRequest::GetNameKeyword() const
{
    return m_nameKeyword;
}

void DescribeAMQPClustersRequest::SetNameKeyword(const string& _nameKeyword)
{
    m_nameKeyword = _nameKeyword;
    m_nameKeywordHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::NameKeywordHasBeenSet() const
{
    return m_nameKeywordHasBeenSet;
}

vector<string> DescribeAMQPClustersRequest::GetClusterIdList() const
{
    return m_clusterIdList;
}

void DescribeAMQPClustersRequest::SetClusterIdList(const vector<string>& _clusterIdList)
{
    m_clusterIdList = _clusterIdList;
    m_clusterIdListHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::ClusterIdListHasBeenSet() const
{
    return m_clusterIdListHasBeenSet;
}

bool DescribeAMQPClustersRequest::GetIsTagFilter() const
{
    return m_isTagFilter;
}

void DescribeAMQPClustersRequest::SetIsTagFilter(const bool& _isTagFilter)
{
    m_isTagFilter = _isTagFilter;
    m_isTagFilterHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::IsTagFilterHasBeenSet() const
{
    return m_isTagFilterHasBeenSet;
}

vector<Filter> DescribeAMQPClustersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAMQPClustersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAMQPClustersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


