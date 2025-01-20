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

#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpnGatewayAttributeRequest::ModifyVpnGatewayAttributeRequest() :
    m_vpnGatewayIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_bgpAsnHasBeenSet(false),
    m_maxConnectionHasBeenSet(false)
{
}

string ModifyVpnGatewayAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgpAsn, allocator);
    }

    if (m_maxConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConnection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpnGatewayAttributeRequest::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void ModifyVpnGatewayAttributeRequest::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool ModifyVpnGatewayAttributeRequest::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string ModifyVpnGatewayAttributeRequest::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void ModifyVpnGatewayAttributeRequest::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool ModifyVpnGatewayAttributeRequest::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

string ModifyVpnGatewayAttributeRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void ModifyVpnGatewayAttributeRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool ModifyVpnGatewayAttributeRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t ModifyVpnGatewayAttributeRequest::GetBgpAsn() const
{
    return m_bgpAsn;
}

void ModifyVpnGatewayAttributeRequest::SetBgpAsn(const uint64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool ModifyVpnGatewayAttributeRequest::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}

uint64_t ModifyVpnGatewayAttributeRequest::GetMaxConnection() const
{
    return m_maxConnection;
}

void ModifyVpnGatewayAttributeRequest::SetMaxConnection(const uint64_t& _maxConnection)
{
    m_maxConnection = _maxConnection;
    m_maxConnectionHasBeenSet = true;
}

bool ModifyVpnGatewayAttributeRequest::MaxConnectionHasBeenSet() const
{
    return m_maxConnectionHasBeenSet;
}


