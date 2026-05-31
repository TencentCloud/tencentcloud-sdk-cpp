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

#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeTokenPlanApiKeyListRequest::DescribeTokenPlanApiKeyListRequest() :
    m_teamIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortsHasBeenSet(false)
{
}

string DescribeTokenPlanApiKeyListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
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

    if (m_sortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sorts.begin(); itr != m_sorts.end(); ++itr, ++i)
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


string DescribeTokenPlanApiKeyListRequest::GetTeamId() const
{
    return m_teamId;
}

void DescribeTokenPlanApiKeyListRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyListRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

int64_t DescribeTokenPlanApiKeyListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTokenPlanApiKeyListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTokenPlanApiKeyListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTokenPlanApiKeyListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<RequestFilter> DescribeTokenPlanApiKeyListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTokenPlanApiKeyListRequest::SetFilters(const vector<RequestFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<RequestSort> DescribeTokenPlanApiKeyListRequest::GetSorts() const
{
    return m_sorts;
}

void DescribeTokenPlanApiKeyListRequest::SetSorts(const vector<RequestSort>& _sorts)
{
    m_sorts = _sorts;
    m_sortsHasBeenSet = true;
}

bool DescribeTokenPlanApiKeyListRequest::SortsHasBeenSet() const
{
    return m_sortsHasBeenSet;
}


