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

#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeRouteTablesRequest::DescribeRouteTablesRequest() :
    m_filtersHasBeenSet(false),
    m_routeTableIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_needRouterInfoHasBeenSet(false)
{
}

string DescribeRouteTablesRequest::ToJsonString() const
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

    if (m_routeTableIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routeTableIds.begin(); itr != m_routeTableIds.end(); ++itr)
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


vector<Filter> DescribeRouteTablesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRouteTablesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRouteTablesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeRouteTablesRequest::GetRouteTableIds() const
{
    return m_routeTableIds;
}

void DescribeRouteTablesRequest::SetRouteTableIds(const vector<string>& _routeTableIds)
{
    m_routeTableIds = _routeTableIds;
    m_routeTableIdsHasBeenSet = true;
}

bool DescribeRouteTablesRequest::RouteTableIdsHasBeenSet() const
{
    return m_routeTableIdsHasBeenSet;
}

string DescribeRouteTablesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRouteTablesRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRouteTablesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeRouteTablesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRouteTablesRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRouteTablesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeRouteTablesRequest::GetNeedRouterInfo() const
{
    return m_needRouterInfo;
}

void DescribeRouteTablesRequest::SetNeedRouterInfo(const bool& _needRouterInfo)
{
    m_needRouterInfo = _needRouterInfo;
    m_needRouterInfoHasBeenSet = true;
}

bool DescribeRouteTablesRequest::NeedRouterInfoHasBeenSet() const
{
    return m_needRouterInfoHasBeenSet;
}


