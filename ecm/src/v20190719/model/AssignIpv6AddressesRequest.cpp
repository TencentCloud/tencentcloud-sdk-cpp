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

#include <tencentcloud/ecm/v20190719/model/AssignIpv6AddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

AssignIpv6AddressesRequest::AssignIpv6AddressesRequest() :
    m_ecmRegionHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false),
    m_iSPTypeHasBeenSet(false),
    m_skipCheckIPv6AddressHasBeenSet(false),
    m_skipAllocateBandwidthHasBeenSet(false),
    m_ipv6ISPHasBeenSet(false)
{
}

string AssignIpv6AddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

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

    if (m_iSPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iSPType.c_str(), allocator).Move(), allocator);
    }

    if (m_skipCheckIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipCheckIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipCheckIPv6Address, allocator);
    }

    if (m_skipAllocateBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipAllocateBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipAllocateBandwidth, allocator);
    }

    if (m_ipv6ISPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6ISP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipv6ISP.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssignIpv6AddressesRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void AssignIpv6AddressesRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
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

int64_t AssignIpv6AddressesRequest::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void AssignIpv6AddressesRequest::SetIpv6AddressCount(const int64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

string AssignIpv6AddressesRequest::GetISPType() const
{
    return m_iSPType;
}

void AssignIpv6AddressesRequest::SetISPType(const string& _iSPType)
{
    m_iSPType = _iSPType;
    m_iSPTypeHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::ISPTypeHasBeenSet() const
{
    return m_iSPTypeHasBeenSet;
}

bool AssignIpv6AddressesRequest::GetSkipCheckIPv6Address() const
{
    return m_skipCheckIPv6Address;
}

void AssignIpv6AddressesRequest::SetSkipCheckIPv6Address(const bool& _skipCheckIPv6Address)
{
    m_skipCheckIPv6Address = _skipCheckIPv6Address;
    m_skipCheckIPv6AddressHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::SkipCheckIPv6AddressHasBeenSet() const
{
    return m_skipCheckIPv6AddressHasBeenSet;
}

bool AssignIpv6AddressesRequest::GetSkipAllocateBandwidth() const
{
    return m_skipAllocateBandwidth;
}

void AssignIpv6AddressesRequest::SetSkipAllocateBandwidth(const bool& _skipAllocateBandwidth)
{
    m_skipAllocateBandwidth = _skipAllocateBandwidth;
    m_skipAllocateBandwidthHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::SkipAllocateBandwidthHasBeenSet() const
{
    return m_skipAllocateBandwidthHasBeenSet;
}

string AssignIpv6AddressesRequest::GetIpv6ISP() const
{
    return m_ipv6ISP;
}

void AssignIpv6AddressesRequest::SetIpv6ISP(const string& _ipv6ISP)
{
    m_ipv6ISP = _ipv6ISP;
    m_ipv6ISPHasBeenSet = true;
}

bool AssignIpv6AddressesRequest::Ipv6ISPHasBeenSet() const
{
    return m_ipv6ISPHasBeenSet;
}


