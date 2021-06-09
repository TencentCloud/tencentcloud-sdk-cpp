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

#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

ModifyDirectConnectTunnelAttributeRequest::ModifyDirectConnectTunnelAttributeRequest() :
    m_directConnectTunnelIdHasBeenSet(false),
    m_directConnectTunnelNameHasBeenSet(false),
    m_bgpPeerHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_tencentBackupAddressHasBeenSet(false)
{
}

string ModifyDirectConnectTunnelAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectTunnelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectTunnelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectTunnelId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectTunnelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectTunnelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectTunnelName.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpPeerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpPeer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpPeer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_routeFilterPrefixesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteFilterPrefixes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeFilterPrefixes.begin(); itr != m_routeFilterPrefixes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tencentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_tencentBackupAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDirectConnectTunnelAttributeRequest::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void ModifyDirectConnectTunnelAttributeRequest::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

string ModifyDirectConnectTunnelAttributeRequest::GetDirectConnectTunnelName() const
{
    return m_directConnectTunnelName;
}

void ModifyDirectConnectTunnelAttributeRequest::SetDirectConnectTunnelName(const string& _directConnectTunnelName)
{
    m_directConnectTunnelName = _directConnectTunnelName;
    m_directConnectTunnelNameHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::DirectConnectTunnelNameHasBeenSet() const
{
    return m_directConnectTunnelNameHasBeenSet;
}

BgpPeer ModifyDirectConnectTunnelAttributeRequest::GetBgpPeer() const
{
    return m_bgpPeer;
}

void ModifyDirectConnectTunnelAttributeRequest::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

vector<RouteFilterPrefix> ModifyDirectConnectTunnelAttributeRequest::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void ModifyDirectConnectTunnelAttributeRequest::SetRouteFilterPrefixes(const vector<RouteFilterPrefix>& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

string ModifyDirectConnectTunnelAttributeRequest::GetTencentAddress() const
{
    return m_tencentAddress;
}

void ModifyDirectConnectTunnelAttributeRequest::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string ModifyDirectConnectTunnelAttributeRequest::GetCustomerAddress() const
{
    return m_customerAddress;
}

void ModifyDirectConnectTunnelAttributeRequest::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

int64_t ModifyDirectConnectTunnelAttributeRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyDirectConnectTunnelAttributeRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string ModifyDirectConnectTunnelAttributeRequest::GetTencentBackupAddress() const
{
    return m_tencentBackupAddress;
}

void ModifyDirectConnectTunnelAttributeRequest::SetTencentBackupAddress(const string& _tencentBackupAddress)
{
    m_tencentBackupAddress = _tencentBackupAddress;
    m_tencentBackupAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelAttributeRequest::TencentBackupAddressHasBeenSet() const
{
    return m_tencentBackupAddressHasBeenSet;
}


