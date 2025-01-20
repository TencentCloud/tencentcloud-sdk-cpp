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

#include <tencentcloud/vpc/v20170312/model/DescribeHighPriorityRouteTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeHighPriorityRouteTablesRequest::DescribeHighPriorityRouteTablesRequest() :
    m_filtersHasBeenSet(false),
    m_highPriorityRouteTableIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_needRouterInfoHasBeenSet(false)
{
}

string DescribeHighPriorityRouteTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_highPriorityRouteTableIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteTableIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_highPriorityRouteTableIds.begin(); itr != m_highPriorityRouteTableIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_needRouterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRouterInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRouterInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeHighPriorityRouteTablesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeHighPriorityRouteTablesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeHighPriorityRouteTablesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeHighPriorityRouteTablesRequest::GetHighPriorityRouteTableIds() const
{
    return m_highPriorityRouteTableIds;
}

void DescribeHighPriorityRouteTablesRequest::SetHighPriorityRouteTableIds(const vector<string>& _highPriorityRouteTableIds)
{
    m_highPriorityRouteTableIds = _highPriorityRouteTableIds;
    m_highPriorityRouteTableIdsHasBeenSet = true;
}

bool DescribeHighPriorityRouteTablesRequest::HighPriorityRouteTableIdsHasBeenSet() const
{
    return m_highPriorityRouteTableIdsHasBeenSet;
}

string DescribeHighPriorityRouteTablesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHighPriorityRouteTablesRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHighPriorityRouteTablesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeHighPriorityRouteTablesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHighPriorityRouteTablesRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHighPriorityRouteTablesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeHighPriorityRouteTablesRequest::GetNeedRouterInfo() const
{
    return m_needRouterInfo;
}

void DescribeHighPriorityRouteTablesRequest::SetNeedRouterInfo(const bool& _needRouterInfo)
{
    m_needRouterInfo = _needRouterInfo;
    m_needRouterInfoHasBeenSet = true;
}

bool DescribeHighPriorityRouteTablesRequest::NeedRouterInfoHasBeenSet() const
{
    return m_needRouterInfoHasBeenSet;
}


