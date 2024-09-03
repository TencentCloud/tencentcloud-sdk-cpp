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
    m_tencentBackupAddressHasBeenSet(false),
    m_cloudAttachIdHasBeenSet(false),
    m_bfdEnableHasBeenSet(false),
    m_nqaEnableHasBeenSet(false),
    m_bfdInfoHasBeenSet(false),
    m_nqaInfoHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDirectConnectTunnelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectTunnelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectTunnelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectTunnelName.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectOwnerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectOwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectOwnerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
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

    if (m_vlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vlan, allocator);
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

    if (m_tencentBackupAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAttachIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAttachId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudAttachId.c_str(), allocator).Move(), allocator);
    }

    if (m_bfdEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BfdEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bfdEnable, allocator);
    }

    if (m_nqaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NqaEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nqaEnable, allocator);
    }

    if (m_bfdInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BfdInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bfdInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nqaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NqaInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nqaInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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

string CreateDirectConnectTunnelRequest::GetCloudAttachId() const
{
    return m_cloudAttachId;
}

void CreateDirectConnectTunnelRequest::SetCloudAttachId(const string& _cloudAttachId)
{
    m_cloudAttachId = _cloudAttachId;
    m_cloudAttachIdHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::CloudAttachIdHasBeenSet() const
{
    return m_cloudAttachIdHasBeenSet;
}

int64_t CreateDirectConnectTunnelRequest::GetBfdEnable() const
{
    return m_bfdEnable;
}

void CreateDirectConnectTunnelRequest::SetBfdEnable(const int64_t& _bfdEnable)
{
    m_bfdEnable = _bfdEnable;
    m_bfdEnableHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::BfdEnableHasBeenSet() const
{
    return m_bfdEnableHasBeenSet;
}

int64_t CreateDirectConnectTunnelRequest::GetNqaEnable() const
{
    return m_nqaEnable;
}

void CreateDirectConnectTunnelRequest::SetNqaEnable(const int64_t& _nqaEnable)
{
    m_nqaEnable = _nqaEnable;
    m_nqaEnableHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::NqaEnableHasBeenSet() const
{
    return m_nqaEnableHasBeenSet;
}

BFDInfo CreateDirectConnectTunnelRequest::GetBfdInfo() const
{
    return m_bfdInfo;
}

void CreateDirectConnectTunnelRequest::SetBfdInfo(const BFDInfo& _bfdInfo)
{
    m_bfdInfo = _bfdInfo;
    m_bfdInfoHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::BfdInfoHasBeenSet() const
{
    return m_bfdInfoHasBeenSet;
}

NQAInfo CreateDirectConnectTunnelRequest::GetNqaInfo() const
{
    return m_nqaInfo;
}

void CreateDirectConnectTunnelRequest::SetNqaInfo(const NQAInfo& _nqaInfo)
{
    m_nqaInfo = _nqaInfo;
    m_nqaInfoHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::NqaInfoHasBeenSet() const
{
    return m_nqaInfoHasBeenSet;
}

vector<Tag> CreateDirectConnectTunnelRequest::GetTags() const
{
    return m_tags;
}

void CreateDirectConnectTunnelRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDirectConnectTunnelRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


