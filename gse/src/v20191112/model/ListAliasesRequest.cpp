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

#include <tencentcloud/gse/v20191112/model/ListAliasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

ListAliasesRequest::ListAliasesRequest() :
    m_nameHasBeenSet(false),
    m_routingStrategyTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderWayHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ListAliasesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_routingStrategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingStrategyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routingStrategyType.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderWay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderWay.c_str(), allocator).Move(), allocator);
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


string ListAliasesRequest::GetName() const
{
    return m_name;
}

void ListAliasesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListAliasesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ListAliasesRequest::GetRoutingStrategyType() const
{
    return m_routingStrategyType;
}

void ListAliasesRequest::SetRoutingStrategyType(const string& _routingStrategyType)
{
    m_routingStrategyType = _routingStrategyType;
    m_routingStrategyTypeHasBeenSet = true;
}

bool ListAliasesRequest::RoutingStrategyTypeHasBeenSet() const
{
    return m_routingStrategyTypeHasBeenSet;
}

uint64_t ListAliasesRequest::GetLimit() const
{
    return m_limit;
}

void ListAliasesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListAliasesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListAliasesRequest::GetOffset() const
{
    return m_offset;
}

void ListAliasesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListAliasesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ListAliasesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void ListAliasesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool ListAliasesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string ListAliasesRequest::GetOrderWay() const
{
    return m_orderWay;
}

void ListAliasesRequest::SetOrderWay(const string& _orderWay)
{
    m_orderWay = _orderWay;
    m_orderWayHasBeenSet = true;
}

bool ListAliasesRequest::OrderWayHasBeenSet() const
{
    return m_orderWayHasBeenSet;
}

vector<Filter> ListAliasesRequest::GetFilters() const
{
    return m_filters;
}

void ListAliasesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListAliasesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


