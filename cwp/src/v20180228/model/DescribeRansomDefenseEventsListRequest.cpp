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

#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseEventsListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeRansomDefenseEventsListRequest::DescribeRansomDefenseEventsListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_createBeginTimeHasBeenSet(false),
    m_createEndTimeHasBeenSet(false)
{
}

string DescribeRansomDefenseEventsListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_createBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRansomDefenseEventsListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRansomDefenseEventsListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeRansomDefenseEventsListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRansomDefenseEventsListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filters> DescribeRansomDefenseEventsListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRansomDefenseEventsListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeRansomDefenseEventsListRequest::GetOrder() const
{
    return m_order;
}

void DescribeRansomDefenseEventsListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeRansomDefenseEventsListRequest::GetBy() const
{
    return m_by;
}

void DescribeRansomDefenseEventsListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeRansomDefenseEventsListRequest::GetCreateBeginTime() const
{
    return m_createBeginTime;
}

void DescribeRansomDefenseEventsListRequest::SetCreateBeginTime(const string& _createBeginTime)
{
    m_createBeginTime = _createBeginTime;
    m_createBeginTimeHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::CreateBeginTimeHasBeenSet() const
{
    return m_createBeginTimeHasBeenSet;
}

string DescribeRansomDefenseEventsListRequest::GetCreateEndTime() const
{
    return m_createEndTime;
}

void DescribeRansomDefenseEventsListRequest::SetCreateEndTime(const string& _createEndTime)
{
    m_createEndTime = _createEndTime;
    m_createEndTimeHasBeenSet = true;
}

bool DescribeRansomDefenseEventsListRequest::CreateEndTimeHasBeenSet() const
{
    return m_createEndTimeHasBeenSet;
}


