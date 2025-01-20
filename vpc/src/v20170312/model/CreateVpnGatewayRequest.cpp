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

#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpnGatewayRequest::CreateVpnGatewayRequest() :
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_maxConnectionHasBeenSet(false),
    m_bgpAsnHasBeenSet(false)
{
}

string CreateVpnGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConnection, allocator);
    }

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgpAsn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpnGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpnGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpnGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateVpnGatewayRequest::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void CreateVpnGatewayRequest::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool CreateVpnGatewayRequest::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

uint64_t CreateVpnGatewayRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateVpnGatewayRequest::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateVpnGatewayRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string CreateVpnGatewayRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateVpnGatewayRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateVpnGatewayRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid CreateVpnGatewayRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateVpnGatewayRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateVpnGatewayRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string CreateVpnGatewayRequest::GetZone() const
{
    return m_zone;
}

void CreateVpnGatewayRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateVpnGatewayRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateVpnGatewayRequest::GetType() const
{
    return m_type;
}

void CreateVpnGatewayRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVpnGatewayRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Tag> CreateVpnGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreateVpnGatewayRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpnGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateVpnGatewayRequest::GetCdcId() const
{
    return m_cdcId;
}

void CreateVpnGatewayRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool CreateVpnGatewayRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

uint64_t CreateVpnGatewayRequest::GetMaxConnection() const
{
    return m_maxConnection;
}

void CreateVpnGatewayRequest::SetMaxConnection(const uint64_t& _maxConnection)
{
    m_maxConnection = _maxConnection;
    m_maxConnectionHasBeenSet = true;
}

bool CreateVpnGatewayRequest::MaxConnectionHasBeenSet() const
{
    return m_maxConnectionHasBeenSet;
}

uint64_t CreateVpnGatewayRequest::GetBgpAsn() const
{
    return m_bgpAsn;
}

void CreateVpnGatewayRequest::SetBgpAsn(const uint64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool CreateVpnGatewayRequest::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}


