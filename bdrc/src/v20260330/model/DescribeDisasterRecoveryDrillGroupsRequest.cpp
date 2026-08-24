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

#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoveryDrillGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeDisasterRecoveryDrillGroupsRequest::DescribeDisasterRecoveryDrillGroupsRequest() :
    m_drillGroupTypeHasBeenSet(false),
    m_drillGroupIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false)
{
}

string DescribeDisasterRecoveryDrillGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drillGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_drillGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drillGroupIds.begin(); itr != m_drillGroupIds.end(); ++itr)
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDisasterRecoveryDrillGroupsRequest::GetDrillGroupType() const
{
    return m_drillGroupType;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetDrillGroupType(const string& _drillGroupType)
{
    m_drillGroupType = _drillGroupType;
    m_drillGroupTypeHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::DrillGroupTypeHasBeenSet() const
{
    return m_drillGroupTypeHasBeenSet;
}

vector<string> DescribeDisasterRecoveryDrillGroupsRequest::GetDrillGroupIds() const
{
    return m_drillGroupIds;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetDrillGroupIds(const vector<string>& _drillGroupIds)
{
    m_drillGroupIds = _drillGroupIds;
    m_drillGroupIdsHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::DrillGroupIdsHasBeenSet() const
{
    return m_drillGroupIdsHasBeenSet;
}

vector<FilterModel> DescribeDisasterRecoveryDrillGroupsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetFilters(const vector<FilterModel>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeDisasterRecoveryDrillGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDisasterRecoveryDrillGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDisasterRecoveryDrillGroupsRequest::GetOrder() const
{
    return m_order;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDisasterRecoveryDrillGroupsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDisasterRecoveryDrillGroupsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDisasterRecoveryDrillGroupsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}


