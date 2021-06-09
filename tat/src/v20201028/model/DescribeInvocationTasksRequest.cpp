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

#include <tencentcloud/tat/v20201028/model/DescribeInvocationTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

DescribeInvocationTasksRequest::DescribeInvocationTasksRequest() :
    m_invocationTaskIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_hideOutputHasBeenSet(false)
{
}

string DescribeInvocationTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invocationTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationTaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_invocationTaskIds.begin(); itr != m_invocationTaskIds.end(); ++itr)
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

    if (m_hideOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideOutput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hideOutput, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeInvocationTasksRequest::GetInvocationTaskIds() const
{
    return m_invocationTaskIds;
}

void DescribeInvocationTasksRequest::SetInvocationTaskIds(const vector<string>& _invocationTaskIds)
{
    m_invocationTaskIds = _invocationTaskIds;
    m_invocationTaskIdsHasBeenSet = true;
}

bool DescribeInvocationTasksRequest::InvocationTaskIdsHasBeenSet() const
{
    return m_invocationTaskIdsHasBeenSet;
}

vector<Filter> DescribeInvocationTasksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeInvocationTasksRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeInvocationTasksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeInvocationTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInvocationTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInvocationTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeInvocationTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInvocationTasksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInvocationTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeInvocationTasksRequest::GetHideOutput() const
{
    return m_hideOutput;
}

void DescribeInvocationTasksRequest::SetHideOutput(const bool& _hideOutput)
{
    m_hideOutput = _hideOutput;
    m_hideOutputHasBeenSet = true;
}

bool DescribeInvocationTasksRequest::HideOutputHasBeenSet() const
{
    return m_hideOutputHasBeenSet;
}


