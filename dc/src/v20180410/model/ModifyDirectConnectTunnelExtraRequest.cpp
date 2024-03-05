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

#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelExtraRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

ModifyDirectConnectTunnelExtraRequest::ModifyDirectConnectTunnelExtraRequest() :
    m_directConnectTunnelIdHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_bgpPeerHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_tencentBackupAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_enableBGPCommunityHasBeenSet(false),
    m_bfdEnableHasBeenSet(false),
    m_nqaEnableHasBeenSet(false),
    m_bfdInfoHasBeenSet(false),
    m_nqaInfoHasBeenSet(false),
    m_iPv6EnableHasBeenSet(false),
    m_customerIDCRoutesHasBeenSet(false),
    m_jumboEnableHasBeenSet(false),
    m_tencentIPv6AddressHasBeenSet(false),
    m_tencentBackupIPv6AddressHasBeenSet(false),
    m_customerIPv6AddressHasBeenSet(false)
{
}

string ModifyDirectConnectTunnelExtraRequest::ToJsonString() const
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

    if (m_vlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vlan, allocator);
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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routeFilterPrefixes.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
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

    if (m_enableBGPCommunityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBGPCommunity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBGPCommunity, allocator);
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

    if (m_iPv6EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iPv6Enable, allocator);
    }

    if (m_customerIDCRoutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIDCRoutes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customerIDCRoutes.begin(); itr != m_customerIDCRoutes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_jumboEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumboEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jumboEnable, allocator);
    }

    if (m_tencentIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentIPv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tencentBackupIPv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_customerIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerIPv6Address.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDirectConnectTunnelExtraRequest::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void ModifyDirectConnectTunnelExtraRequest::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetVlan() const
{
    return m_vlan;
}

void ModifyDirectConnectTunnelExtraRequest::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

BgpPeer ModifyDirectConnectTunnelExtraRequest::GetBgpPeer() const
{
    return m_bgpPeer;
}

void ModifyDirectConnectTunnelExtraRequest::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

RouteFilterPrefix ModifyDirectConnectTunnelExtraRequest::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void ModifyDirectConnectTunnelExtraRequest::SetRouteFilterPrefixes(const RouteFilterPrefix& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetTencentAddress() const
{
    return m_tencentAddress;
}

void ModifyDirectConnectTunnelExtraRequest::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetTencentBackupAddress() const
{
    return m_tencentBackupAddress;
}

void ModifyDirectConnectTunnelExtraRequest::SetTencentBackupAddress(const string& _tencentBackupAddress)
{
    m_tencentBackupAddress = _tencentBackupAddress;
    m_tencentBackupAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::TencentBackupAddressHasBeenSet() const
{
    return m_tencentBackupAddressHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetCustomerAddress() const
{
    return m_customerAddress;
}

void ModifyDirectConnectTunnelExtraRequest::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyDirectConnectTunnelExtraRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

bool ModifyDirectConnectTunnelExtraRequest::GetEnableBGPCommunity() const
{
    return m_enableBGPCommunity;
}

void ModifyDirectConnectTunnelExtraRequest::SetEnableBGPCommunity(const bool& _enableBGPCommunity)
{
    m_enableBGPCommunity = _enableBGPCommunity;
    m_enableBGPCommunityHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::EnableBGPCommunityHasBeenSet() const
{
    return m_enableBGPCommunityHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetBfdEnable() const
{
    return m_bfdEnable;
}

void ModifyDirectConnectTunnelExtraRequest::SetBfdEnable(const int64_t& _bfdEnable)
{
    m_bfdEnable = _bfdEnable;
    m_bfdEnableHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::BfdEnableHasBeenSet() const
{
    return m_bfdEnableHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetNqaEnable() const
{
    return m_nqaEnable;
}

void ModifyDirectConnectTunnelExtraRequest::SetNqaEnable(const int64_t& _nqaEnable)
{
    m_nqaEnable = _nqaEnable;
    m_nqaEnableHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::NqaEnableHasBeenSet() const
{
    return m_nqaEnableHasBeenSet;
}

BFDInfo ModifyDirectConnectTunnelExtraRequest::GetBfdInfo() const
{
    return m_bfdInfo;
}

void ModifyDirectConnectTunnelExtraRequest::SetBfdInfo(const BFDInfo& _bfdInfo)
{
    m_bfdInfo = _bfdInfo;
    m_bfdInfoHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::BfdInfoHasBeenSet() const
{
    return m_bfdInfoHasBeenSet;
}

NQAInfo ModifyDirectConnectTunnelExtraRequest::GetNqaInfo() const
{
    return m_nqaInfo;
}

void ModifyDirectConnectTunnelExtraRequest::SetNqaInfo(const NQAInfo& _nqaInfo)
{
    m_nqaInfo = _nqaInfo;
    m_nqaInfoHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::NqaInfoHasBeenSet() const
{
    return m_nqaInfoHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetIPv6Enable() const
{
    return m_iPv6Enable;
}

void ModifyDirectConnectTunnelExtraRequest::SetIPv6Enable(const int64_t& _iPv6Enable)
{
    m_iPv6Enable = _iPv6Enable;
    m_iPv6EnableHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::IPv6EnableHasBeenSet() const
{
    return m_iPv6EnableHasBeenSet;
}

vector<RouteFilterPrefix> ModifyDirectConnectTunnelExtraRequest::GetCustomerIDCRoutes() const
{
    return m_customerIDCRoutes;
}

void ModifyDirectConnectTunnelExtraRequest::SetCustomerIDCRoutes(const vector<RouteFilterPrefix>& _customerIDCRoutes)
{
    m_customerIDCRoutes = _customerIDCRoutes;
    m_customerIDCRoutesHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::CustomerIDCRoutesHasBeenSet() const
{
    return m_customerIDCRoutesHasBeenSet;
}

int64_t ModifyDirectConnectTunnelExtraRequest::GetJumboEnable() const
{
    return m_jumboEnable;
}

void ModifyDirectConnectTunnelExtraRequest::SetJumboEnable(const int64_t& _jumboEnable)
{
    m_jumboEnable = _jumboEnable;
    m_jumboEnableHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::JumboEnableHasBeenSet() const
{
    return m_jumboEnableHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetTencentIPv6Address() const
{
    return m_tencentIPv6Address;
}

void ModifyDirectConnectTunnelExtraRequest::SetTencentIPv6Address(const string& _tencentIPv6Address)
{
    m_tencentIPv6Address = _tencentIPv6Address;
    m_tencentIPv6AddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::TencentIPv6AddressHasBeenSet() const
{
    return m_tencentIPv6AddressHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetTencentBackupIPv6Address() const
{
    return m_tencentBackupIPv6Address;
}

void ModifyDirectConnectTunnelExtraRequest::SetTencentBackupIPv6Address(const string& _tencentBackupIPv6Address)
{
    m_tencentBackupIPv6Address = _tencentBackupIPv6Address;
    m_tencentBackupIPv6AddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::TencentBackupIPv6AddressHasBeenSet() const
{
    return m_tencentBackupIPv6AddressHasBeenSet;
}

string ModifyDirectConnectTunnelExtraRequest::GetCustomerIPv6Address() const
{
    return m_customerIPv6Address;
}

void ModifyDirectConnectTunnelExtraRequest::SetCustomerIPv6Address(const string& _customerIPv6Address)
{
    m_customerIPv6Address = _customerIPv6Address;
    m_customerIPv6AddressHasBeenSet = true;
}

bool ModifyDirectConnectTunnelExtraRequest::CustomerIPv6AddressHasBeenSet() const
{
    return m_customerIPv6AddressHasBeenSet;
}


