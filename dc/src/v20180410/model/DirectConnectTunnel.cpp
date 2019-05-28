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

#include <tencentcloud/dc/v20180410/model/DirectConnectTunnel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

DirectConnectTunnel::DirectConnectTunnel() :
    m_directConnectTunnelIdHasBeenSet(false),
    m_directConnectIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_directConnectOwnerAccountHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_bgpPeerHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_directConnectTunnelNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_bandwidthHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectTunnel::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectTunnelId") && !value["DirectConnectTunnelId"].IsNull())
    {
        if (!value["DirectConnectTunnelId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.DirectConnectTunnelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelId = string(value["DirectConnectTunnelId"].GetString());
        m_directConnectTunnelIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectId") && !value["DirectConnectId"].IsNull())
    {
        if (!value["DirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.DirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectId = string(value["DirectConnectId"].GetString());
        m_directConnectIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectOwnerAccount") && !value["DirectConnectOwnerAccount"].IsNull())
    {
        if (!value["DirectConnectOwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.DirectConnectOwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectOwnerAccount = string(value["DirectConnectOwnerAccount"].GetString());
        m_directConnectOwnerAccountHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkRegion") && !value["NetworkRegion"].IsNull())
    {
        if (!value["NetworkRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.NetworkRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkRegion = string(value["NetworkRegion"].GetString());
        m_networkRegionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("BgpPeer") && !value["BgpPeer"].IsNull())
    {
        if (!value["BgpPeer"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.BgpPeer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bgpPeer.Deserialize(value["BgpPeer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bgpPeerHasBeenSet = true;
    }

    if (value.HasMember("RouteFilterPrefixes") && !value["RouteFilterPrefixes"].IsNull())
    {
        if (!value["RouteFilterPrefixes"].IsArray())
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.RouteFilterPrefixes` is not array type"));

        const Value &tmpValue = value["RouteFilterPrefixes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteFilterPrefix item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeFilterPrefixes.push_back(item);
        }
        m_routeFilterPrefixesHasBeenSet = true;
    }

    if (value.HasMember("Vlan") && !value["Vlan"].IsNull())
    {
        if (!value["Vlan"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.Vlan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vlan = value["Vlan"].GetInt64();
        m_vlanHasBeenSet = true;
    }

    if (value.HasMember("TencentAddress") && !value["TencentAddress"].IsNull())
    {
        if (!value["TencentAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.TencentAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAddress = string(value["TencentAddress"].GetString());
        m_tencentAddressHasBeenSet = true;
    }

    if (value.HasMember("CustomerAddress") && !value["CustomerAddress"].IsNull())
    {
        if (!value["CustomerAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.CustomerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAddress = string(value["CustomerAddress"].GetString());
        m_customerAddressHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectTunnelName") && !value["DirectConnectTunnelName"].IsNull())
    {
        if (!value["DirectConnectTunnelName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.DirectConnectTunnelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelName = string(value["DirectConnectTunnelName"].GetString());
        m_directConnectTunnelNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnel.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectTunnel::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_directConnectTunnelIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectTunnelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectTunnelId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectOwnerAccountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectOwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectOwnerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ownerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpPeerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BgpPeer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bgpPeer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routeFilterPrefixesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteFilterPrefixes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeFilterPrefixes.begin(); itr != m_routeFilterPrefixes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vlanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectTunnelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectTunnelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_directConnectTunnelName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

}


string DirectConnectTunnel::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void DirectConnectTunnel::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectId() const
{
    return m_directConnectId;
}

void DirectConnectTunnel::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string DirectConnectTunnel::GetState() const
{
    return m_state;
}

void DirectConnectTunnel::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DirectConnectTunnel::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectOwnerAccount() const
{
    return m_directConnectOwnerAccount;
}

void DirectConnectTunnel::SetDirectConnectOwnerAccount(const string& _directConnectOwnerAccount)
{
    m_directConnectOwnerAccount = _directConnectOwnerAccount;
    m_directConnectOwnerAccountHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectOwnerAccountHasBeenSet() const
{
    return m_directConnectOwnerAccountHasBeenSet;
}

string DirectConnectTunnel::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DirectConnectTunnel::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DirectConnectTunnel::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string DirectConnectTunnel::GetNetworkType() const
{
    return m_networkType;
}

void DirectConnectTunnel::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DirectConnectTunnel::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DirectConnectTunnel::GetNetworkRegion() const
{
    return m_networkRegion;
}

void DirectConnectTunnel::SetNetworkRegion(const string& _networkRegion)
{
    m_networkRegion = _networkRegion;
    m_networkRegionHasBeenSet = true;
}

bool DirectConnectTunnel::NetworkRegionHasBeenSet() const
{
    return m_networkRegionHasBeenSet;
}

string DirectConnectTunnel::GetVpcId() const
{
    return m_vpcId;
}

void DirectConnectTunnel::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DirectConnectTunnel::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectTunnel::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectTunnel::GetRouteType() const
{
    return m_routeType;
}

void DirectConnectTunnel::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool DirectConnectTunnel::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

BgpPeer DirectConnectTunnel::GetBgpPeer() const
{
    return m_bgpPeer;
}

void DirectConnectTunnel::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool DirectConnectTunnel::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

vector<RouteFilterPrefix> DirectConnectTunnel::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void DirectConnectTunnel::SetRouteFilterPrefixes(const vector<RouteFilterPrefix>& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool DirectConnectTunnel::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

int64_t DirectConnectTunnel::GetVlan() const
{
    return m_vlan;
}

void DirectConnectTunnel::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool DirectConnectTunnel::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string DirectConnectTunnel::GetTencentAddress() const
{
    return m_tencentAddress;
}

void DirectConnectTunnel::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool DirectConnectTunnel::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string DirectConnectTunnel::GetCustomerAddress() const
{
    return m_customerAddress;
}

void DirectConnectTunnel::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool DirectConnectTunnel::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectTunnelName() const
{
    return m_directConnectTunnelName;
}

void DirectConnectTunnel::SetDirectConnectTunnelName(const string& _directConnectTunnelName)
{
    m_directConnectTunnelName = _directConnectTunnelName;
    m_directConnectTunnelNameHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectTunnelNameHasBeenSet() const
{
    return m_directConnectTunnelNameHasBeenSet;
}

string DirectConnectTunnel::GetCreatedTime() const
{
    return m_createdTime;
}

void DirectConnectTunnel::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DirectConnectTunnel::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DirectConnectTunnel::GetBandwidth() const
{
    return m_bandwidth;
}

void DirectConnectTunnel::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool DirectConnectTunnel::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

