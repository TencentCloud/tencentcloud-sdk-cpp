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

#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneHostsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

DescribeCloudDedicatedZoneHostsRequest::DescribeCloudDedicatedZoneHostsRequest() :
    m_cloudDedicatedZoneIDHasBeenSet(false),
    m_hostUuidsHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeCloudDedicatedZoneHostsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudDedicatedZoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudDedicatedZoneID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudDedicatedZoneID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostUuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostUuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostUuids.begin(); itr != m_hostUuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string DescribeCloudDedicatedZoneHostsRequest::GetCloudDedicatedZoneID() const
{
    return m_cloudDedicatedZoneID;
}

void DescribeCloudDedicatedZoneHostsRequest::SetCloudDedicatedZoneID(const string& _cloudDedicatedZoneID)
{
    m_cloudDedicatedZoneID = _cloudDedicatedZoneID;
    m_cloudDedicatedZoneIDHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneHostsRequest::CloudDedicatedZoneIDHasBeenSet() const
{
    return m_cloudDedicatedZoneIDHasBeenSet;
}

vector<string> DescribeCloudDedicatedZoneHostsRequest::GetHostUuids() const
{
    return m_hostUuids;
}

void DescribeCloudDedicatedZoneHostsRequest::SetHostUuids(const vector<string>& _hostUuids)
{
    m_hostUuids = _hostUuids;
    m_hostUuidsHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneHostsRequest::HostUuidsHasBeenSet() const
{
    return m_hostUuidsHasBeenSet;
}

vector<string> DescribeCloudDedicatedZoneHostsRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeCloudDedicatedZoneHostsRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneHostsRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t DescribeCloudDedicatedZoneHostsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudDedicatedZoneHostsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneHostsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCloudDedicatedZoneHostsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudDedicatedZoneHostsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneHostsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


