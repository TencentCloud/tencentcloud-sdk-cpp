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

#include <tencentcloud/rum/v20210622/model/DescribeTawInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTawInstancesRequest::DescribeTawInstancesRequest() :
    m_chargeStatusesHasBeenSet(false),
    m_chargeTypesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_areaIdsHasBeenSet(false),
    m_instanceStatusesHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_isDemoHasBeenSet(false)
{
}

string DescribeTawInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chargeStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chargeStatuses.begin(); itr != m_chargeStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_chargeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chargeTypes.begin(); itr != m_chargeTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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

    if (m_areaIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaIds.begin(); itr != m_areaIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceStatuses.begin(); itr != m_instanceStatuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
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

    if (m_isDemoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDemo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDemo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeTawInstancesRequest::GetChargeStatuses() const
{
    return m_chargeStatuses;
}

void DescribeTawInstancesRequest::SetChargeStatuses(const vector<int64_t>& _chargeStatuses)
{
    m_chargeStatuses = _chargeStatuses;
    m_chargeStatusesHasBeenSet = true;
}

bool DescribeTawInstancesRequest::ChargeStatusesHasBeenSet() const
{
    return m_chargeStatusesHasBeenSet;
}

vector<int64_t> DescribeTawInstancesRequest::GetChargeTypes() const
{
    return m_chargeTypes;
}

void DescribeTawInstancesRequest::SetChargeTypes(const vector<int64_t>& _chargeTypes)
{
    m_chargeTypes = _chargeTypes;
    m_chargeTypesHasBeenSet = true;
}

bool DescribeTawInstancesRequest::ChargeTypesHasBeenSet() const
{
    return m_chargeTypesHasBeenSet;
}

int64_t DescribeTawInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTawInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTawInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTawInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTawInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTawInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<int64_t> DescribeTawInstancesRequest::GetAreaIds() const
{
    return m_areaIds;
}

void DescribeTawInstancesRequest::SetAreaIds(const vector<int64_t>& _areaIds)
{
    m_areaIds = _areaIds;
    m_areaIdsHasBeenSet = true;
}

bool DescribeTawInstancesRequest::AreaIdsHasBeenSet() const
{
    return m_areaIdsHasBeenSet;
}

vector<int64_t> DescribeTawInstancesRequest::GetInstanceStatuses() const
{
    return m_instanceStatuses;
}

void DescribeTawInstancesRequest::SetInstanceStatuses(const vector<int64_t>& _instanceStatuses)
{
    m_instanceStatuses = _instanceStatuses;
    m_instanceStatusesHasBeenSet = true;
}

bool DescribeTawInstancesRequest::InstanceStatusesHasBeenSet() const
{
    return m_instanceStatusesHasBeenSet;
}

vector<string> DescribeTawInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeTawInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeTawInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<Filter> DescribeTawInstancesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTawInstancesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTawInstancesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeTawInstancesRequest::GetIsDemo() const
{
    return m_isDemo;
}

void DescribeTawInstancesRequest::SetIsDemo(const int64_t& _isDemo)
{
    m_isDemo = _isDemo;
    m_isDemoHasBeenSet = true;
}

bool DescribeTawInstancesRequest::IsDemoHasBeenSet() const
{
    return m_isDemoHasBeenSet;
}


