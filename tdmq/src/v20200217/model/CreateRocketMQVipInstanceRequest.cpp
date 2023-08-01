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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQVipInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQVipInstanceRequest::CreateRocketMQVipInstanceRequest() :
    m_nameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_timeSpanHasBeenSet(false)
{
}

string CreateRocketMQVipInstanceRequest::ToJsonString() const
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

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRocketMQVipInstanceRequest::GetName() const
{
    return m_name;
}

void CreateRocketMQVipInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRocketMQVipInstanceRequest::GetSpec() const
{
    return m_spec;
}

void CreateRocketMQVipInstanceRequest::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t CreateRocketMQVipInstanceRequest::GetNodeCount() const
{
    return m_nodeCount;
}

void CreateRocketMQVipInstanceRequest::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t CreateRocketMQVipInstanceRequest::GetStorageSize() const
{
    return m_storageSize;
}

void CreateRocketMQVipInstanceRequest::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

vector<string> CreateRocketMQVipInstanceRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void CreateRocketMQVipInstanceRequest::SetZoneIds(const vector<string>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

VpcInfo CreateRocketMQVipInstanceRequest::GetVpcInfo() const
{
    return m_vpcInfo;
}

void CreateRocketMQVipInstanceRequest::SetVpcInfo(const VpcInfo& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

int64_t CreateRocketMQVipInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateRocketMQVipInstanceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateRocketMQVipInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}


