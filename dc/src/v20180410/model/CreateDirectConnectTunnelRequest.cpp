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

#include <tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

CreateDirectConnectTunnelRequest::CreateDirectConnectTunnelRequest() :
    m_directConnectIdHasBeenSet(false),
    m_directConnectTunnelNameHasBeenSet(false),
    m_directConnectOwnerAccountHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_bgpPeerHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_tencentBackupAddressHasBeenSet(false)
{
}

string CreateDirectConnectTunnelRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectTunnelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectTunnelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectTunnelName.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectOwnerAccountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectOwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectOwnerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpPeerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BgpPeer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bgpPeer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_routeFilterPrefixesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteFilterPrefixes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeFilterPrefixes.begin(); itr != m_routeFilterPrefixes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vlanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDirectConnectTunnelRequest::GetDirectConnectId() const
{
    return m_directConnectId;
}

void CreateDirectConnectTunnelRequest::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetDirectConnectTunnelName() const
{
    return m_directConnectTunnelName;
}

void CreateDirectConnectTunnelRequest::SetDirectConnectTunnelName(const string& _directConnectTunnelName)
{
    m_directConnectTunnelName = _directConnectTunnelName;
    m_directConnectTunnelNameHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::DirectConnectTunnelNameHasBeenSet() const
{
    return m_directConnectTunnelNameHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetDirectConnectOwnerAccount() const
{
    return m_directConnectOwnerAccount;
}

void CreateDirectConnectTunnelRequest::SetDirectConnectOwnerAccount(const string& _directConnectOwnerAccount)
{
    m_directConnectOwnerAccount = _directConnectOwnerAccount;
    m_directConnectOwnerAccountHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::DirectConnectOwnerAccountHasBeenSet() const
{
    return m_directConnectOwnerAccountHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateDirectConnectTunnelRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetNetworkRegion() const
{
    return m_networkRegion;
}

void CreateDirectConnectTunnelRequest::SetNetworkRegion(const string& _networkRegion)
{
    m_networkRegion = _networkRegion;
    m_networkRegionHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::NetworkRegionHasBeenSet() const
{
    return m_networkRegionHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDirectConnectTunnelRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void CreateDirectConnectTunnelRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

int64_t CreateDirectConnectTunnelRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateDirectConnectTunnelRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetRouteType() const
{
    return m_routeType;
}

void CreateDirectConnectTunnelRequest::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

BgpPeer CreateDirectConnectTunnelRequest::GetBgpPeer() const
{
    return m_bgpPeer;
}

void CreateDirectConnectTunnelRequest::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

vector<RouteFilterPrefix> CreateDirectConnectTunnelRequest::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void CreateDirectConnectTunnelRequest::SetRouteFilterPrefixes(const vector<RouteFilterPrefix>& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

int64_t CreateDirectConnectTunnelRequest::GetVlan() const
{
    return m_vlan;
}

void CreateDirectConnectTunnelRequest::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetTencentAddress() const
{
    return m_tencentAddress;
}

void CreateDirectConnectTunnelRequest::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetCustomerAddress() const
{
    return m_customerAddress;
}

void CreateDirectConnectTunnelRequest::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string CreateDirectConnectTunnelRequest::GetTencentBackupAddress() const
{
    return m_tencentBackupAddress;
}

void CreateDirectConnectTunnelRequest::SetTencentBackupAddress(const string& _tencentBackupAddress)
{
    m_tencentBackupAddress = _tencentBackupAddress;
    m_tencentBackupAddressHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::TencentBackupAddressHasBeenSet() const
{
    return m_tencentBackupAddressHasBeenSet;
}


