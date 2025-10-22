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

#include <tencentcloud/igtm/v20231024/model/CreateAddressPoolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

CreateAddressPoolRequest::CreateAddressPoolRequest() :
    m_poolNameHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false),
    m_addressSetHasBeenSet(false),
    m_monitorIdHasBeenSet(false)
{
}

string CreateAddressPoolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAddressPoolRequest::GetPoolName() const
{
    return m_poolName;
}

void CreateAddressPoolRequest::SetPoolName(const string& _poolName)
{
    m_poolName = _poolName;
    m_poolNameHasBeenSet = true;
}

bool CreateAddressPoolRequest::PoolNameHasBeenSet() const
{
    return m_poolNameHasBeenSet;
}

string CreateAddressPoolRequest::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void CreateAddressPoolRequest::SetTrafficStrategy(const string& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool CreateAddressPoolRequest::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

vector<Address> CreateAddressPoolRequest::GetAddressSet() const
{
    return m_addressSet;
}

void CreateAddressPoolRequest::SetAddressSet(const vector<Address>& _addressSet)
{
    m_addressSet = _addressSet;
    m_addressSetHasBeenSet = true;
}

bool CreateAddressPoolRequest::AddressSetHasBeenSet() const
{
    return m_addressSetHasBeenSet;
}

uint64_t CreateAddressPoolRequest::GetMonitorId() const
{
    return m_monitorId;
}

void CreateAddressPoolRequest::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool CreateAddressPoolRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}


