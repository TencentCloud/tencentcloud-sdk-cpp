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

#include <tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeComplianceAssetListRequest::DescribeComplianceAssetListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_idHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_searchHasBeenSet(false)
{
}

string DescribeComplianceAssetListRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_searchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Search";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_search.begin(); itr != m_search.end(); ++itr, ++i)
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


int64_t DescribeComplianceAssetListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeComplianceAssetListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeComplianceAssetListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeComplianceAssetListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeComplianceAssetListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeComplianceAssetListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeComplianceAssetListRequest::GetId() const
{
    return m_id;
}

void DescribeComplianceAssetListRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeComplianceAssetListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<Filter> DescribeComplianceAssetListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeComplianceAssetListRequest::SetFilter(const vector<Filter>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeComplianceAssetListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<Filter> DescribeComplianceAssetListRequest::GetSearch() const
{
    return m_search;
}

void DescribeComplianceAssetListRequest::SetSearch(const vector<Filter>& _search)
{
    m_search = _search;
    m_searchHasBeenSet = true;
}

bool DescribeComplianceAssetListRequest::SearchHasBeenSet() const
{
    return m_searchHasBeenSet;
}


