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

#include <tencentcloud/vpc/v20170312/model/AssignIpv6AddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AssignIpv6AddressesRequest::AssignIpv6AddressesRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string AssignIpv6AddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6Addresses.begin(); itr != m_ipv6Addresses.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6AddressCount, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssignIpv6AddressesRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AssignIpv6AddressesRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

vector<Ipv6Address> AssignIpv6AddressesRequest::GetIpv6Addresses() const
{
    return m_ipv6Addresses;
}

void AssignIpv6AddressesRequest::SetIpv6Addresses(const vector<Ipv6Address>& _ipv6Addresses)
{
    m_ipv6Addresses = _ipv6Addresses;
    m_ipv6AddressesHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::Ipv6AddressesHasBeenSet() const
{
    return m_ipv6AddressesHasBeenSet;
}

uint64_t AssignIpv6AddressesRequest::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void AssignIpv6AddressesRequest::SetIpv6AddressCount(const uint64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

string AssignIpv6AddressesRequest::GetClientToken() const
{
    return m_clientToken;
}

void AssignIpv6AddressesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


