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

#include <tencentcloud/es/v20180416/model/DescribeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeInstancesRequest::DescribeInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceNamesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByKeyHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_zoneListHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_cdcIdHasBeenSet(false)
{
}

string DescribeInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_instanceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceNames.begin(); itr != m_instanceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_orderByKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderByKey, allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderByType, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneList.begin(); itr != m_zoneList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthStatus.begin(); itr != m_healthStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstancesRequest::GetZone() const
{
    return m_zone;
}

void DescribeInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceNames() const
{
    return m_instanceNames;
}

void DescribeInstancesRequest::SetInstanceNames(const vector<string>& _instanceNames)
{
    m_instanceNames = _instanceNames;
    m_instanceNamesHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceNamesHasBeenSet() const
{
    return m_instanceNamesHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOrderByKey() const
{
    return m_orderByKey;
}

void DescribeInstancesRequest::SetOrderByKey(const uint64_t& _orderByKey)
{
    m_orderByKey = _orderByKey;
    m_orderByKeyHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByKeyHasBeenSet() const
{
    return m_orderByKeyHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeInstancesRequest::SetOrderByType(const uint64_t& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

vector<TagInfo> DescribeInstancesRequest::GetTagList() const
{
    return m_tagList;
}

void DescribeInstancesRequest::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DescribeInstancesRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetIpList() const
{
    return m_ipList;
}

void DescribeInstancesRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool DescribeInstancesRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetZoneList() const
{
    return m_zoneList;
}

void DescribeInstancesRequest::SetZoneList(const vector<string>& _zoneList)
{
    m_zoneList = _zoneList;
    m_zoneListHasBeenSet = true;
}

bool DescribeInstancesRequest::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetHealthStatus() const
{
    return m_healthStatus;
}

void DescribeInstancesRequest::SetHealthStatus(const vector<int64_t>& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool DescribeInstancesRequest::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeInstancesRequest::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

string DescribeInstancesRequest::GetCdcId() const
{
    return m_cdcId;
}

void DescribeInstancesRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool DescribeInstancesRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}


