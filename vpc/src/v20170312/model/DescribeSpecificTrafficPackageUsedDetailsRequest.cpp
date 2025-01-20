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

#include <tencentcloud/vpc/v20170312/model/DescribeSpecificTrafficPackageUsedDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeSpecificTrafficPackageUsedDetailsRequest::DescribeSpecificTrafficPackageUsedDetailsRequest() :
    m_trafficPackageIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeSpecificTrafficPackageUsedDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficPackageId.c_str(), allocator).Move(), allocator);
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

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSpecificTrafficPackageUsedDetailsRequest::GetTrafficPackageId() const
{
    return m_trafficPackageId;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetTrafficPackageId(const string& _trafficPackageId)
{
    m_trafficPackageId = _trafficPackageId;
    m_trafficPackageIdHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::TrafficPackageIdHasBeenSet() const
{
    return m_trafficPackageIdHasBeenSet;
}

vector<Filter> DescribeSpecificTrafficPackageUsedDetailsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeSpecificTrafficPackageUsedDetailsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

int64_t DescribeSpecificTrafficPackageUsedDetailsRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeSpecificTrafficPackageUsedDetailsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSpecificTrafficPackageUsedDetailsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeSpecificTrafficPackageUsedDetailsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSpecificTrafficPackageUsedDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSpecificTrafficPackageUsedDetailsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSpecificTrafficPackageUsedDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


