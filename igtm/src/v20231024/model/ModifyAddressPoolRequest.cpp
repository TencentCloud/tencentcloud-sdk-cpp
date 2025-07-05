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

#include <tencentcloud/igtm/v20231024/model/ModifyAddressPoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

ModifyAddressPoolRequest::ModifyAddressPoolRequest() :
    m_poolIdHasBeenSet(false),
    m_poolNameHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false),
    m_monitorIdHasBeenSet(false),
    m_addressSetHasBeenSet(false)
{
}

string ModifyAddressPoolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_poolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_poolId, allocator);
    }

    if (m_poolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_poolName.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_addressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressSet.begin(); itr != m_addressSet.end(); ++itr, ++i)
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


uint64_t ModifyAddressPoolRequest::GetPoolId() const
{
    return m_poolId;
}

void ModifyAddressPoolRequest::SetPoolId(const uint64_t& _poolId)
{
    m_poolId = _poolId;
    m_poolIdHasBeenSet = true;
}

bool ModifyAddressPoolRequest::PoolIdHasBeenSet() const
{
    return m_poolIdHasBeenSet;
}

string ModifyAddressPoolRequest::GetPoolName() const
{
    return m_poolName;
}

void ModifyAddressPoolRequest::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool ModifyAddressPoolRequest::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

string ModifyAddressPoolRequest::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void ModifyAddressPoolRequest::SetTrafficStrategy(const string& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool ModifyAddressPoolRequest::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

uint64_t ModifyAddressPoolRequest::GetMonitorId() const
{
    return m_monitorId;
}

void ModifyAddressPoolRequest::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool ModifyAddressPoolRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

vector<Address> ModifyAddressPoolRequest::GetAddressSet() const
{
    return m_addressSet;
}

void ModifyAddressPoolRequest::SetAddressSet(const vector<Address>& _addressSet)
{
    m_addressSet = _addressSet;
    m_addressSetHasBeenSet = true;
}

bool ModifyAddressPoolRequest::AddressSetHasBeenSet() const
{
    return m_addressSetHasBeenSet;
}


