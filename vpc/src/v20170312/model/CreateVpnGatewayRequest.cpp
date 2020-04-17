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
using namespace rapidjson;
using namespace std;

CreateVpnGatewayRequest::CreateVpnGatewayRequest() :
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CreateVpnGatewayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


