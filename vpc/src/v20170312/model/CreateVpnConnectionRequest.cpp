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

#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpnConnectionRequest::CreateVpnConnectionRequest() :
    m_vpnGatewayIdHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_vpnConnectionNameHasBeenSet(false),
    m_preShareKeyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_securityPolicyDatabasesHasBeenSet(false),
    m_iKEOptionsSpecificationHasBeenSet(false),
    m_iPSECOptionsSpecificationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckLocalIpHasBeenSet(false),
    m_healthCheckRemoteIpHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_negotiationTypeHasBeenSet(false),
    m_dpdEnableHasBeenSet(false),
    m_dpdTimeoutHasBeenSet(false),
    m_dpdActionHasBeenSet(false),
    m_routeHasBeenSet(false),
    m_bgpConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
}

string CreateVpnConnectionRequest::ToJsonString() const
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

    if (m_customerGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_preShareKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreShareKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_preShareKey.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityPolicyDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityPolicyDatabases.begin(); itr != m_securityPolicyDatabases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_iKEOptionsSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IKEOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iKEOptionsSpecification.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iPSECOptionsSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSECOptionsSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPSECOptionsSpecification.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_healthCheckLocalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckLocalIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckLocalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckRemoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckRemoteIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckRemoteIp.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_negotiationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegotiationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negotiationType.c_str(), allocator).Move(), allocator);
    }

    if (m_dpdEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DpdEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dpdEnable, allocator);
    }

    if (m_dpdTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DpdTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dpdTimeout.c_str(), allocator).Move(), allocator);
    }

    if (m_dpdActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DpdAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dpdAction.c_str(), allocator).Move(), allocator);
    }

    if (m_routeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Route";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_route.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bgpConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpnConnectionRequest::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void CreateVpnConnectionRequest::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string CreateVpnConnectionRequest::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void CreateVpnConnectionRequest::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

string CreateVpnConnectionRequest::GetVpnConnectionName() const
{
    return m_vpnConnectionName;
}

void CreateVpnConnectionRequest::SetVpnConnectionName(const string& _vpnConnectionName)
{
    m_vpnConnectionName = _vpnConnectionName;
    m_vpnConnectionNameHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpnConnectionNameHasBeenSet() const
{
    return m_vpnConnectionNameHasBeenSet;
}

string CreateVpnConnectionRequest::GetPreShareKey() const
{
    return m_preShareKey;
}

void CreateVpnConnectionRequest::SetPreShareKey(const string& _preShareKey)
{
    m_preShareKey = _preShareKey;
    m_preShareKeyHasBeenSet = true;
}

bool CreateVpnConnectionRequest::PreShareKeyHasBeenSet() const
{
    return m_preShareKeyHasBeenSet;
}

string CreateVpnConnectionRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpnConnectionRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpnConnectionRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<SecurityPolicyDatabase> CreateVpnConnectionRequest::GetSecurityPolicyDatabases() const
{
    return m_securityPolicyDatabases;
}

void CreateVpnConnectionRequest::SetSecurityPolicyDatabases(const vector<SecurityPolicyDatabase>& _securityPolicyDatabases)
{
    m_securityPolicyDatabases = _securityPolicyDatabases;
    m_securityPolicyDatabasesHasBeenSet = true;
}

bool CreateVpnConnectionRequest::SecurityPolicyDatabasesHasBeenSet() const
{
    return m_securityPolicyDatabasesHasBeenSet;
}

IKEOptionsSpecification CreateVpnConnectionRequest::GetIKEOptionsSpecification() const
{
    return m_iKEOptionsSpecification;
}

void CreateVpnConnectionRequest::SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification)
{
    m_iKEOptionsSpecification = _iKEOptionsSpecification;
    m_iKEOptionsSpecificationHasBeenSet = true;
}

bool CreateVpnConnectionRequest::IKEOptionsSpecificationHasBeenSet() const
{
    return m_iKEOptionsSpecificationHasBeenSet;
}

IPSECOptionsSpecification CreateVpnConnectionRequest::GetIPSECOptionsSpecification() const
{
    return m_iPSECOptionsSpecification;
}

void CreateVpnConnectionRequest::SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification)
{
    m_iPSECOptionsSpecification = _iPSECOptionsSpecification;
    m_iPSECOptionsSpecificationHasBeenSet = true;
}

bool CreateVpnConnectionRequest::IPSECOptionsSpecificationHasBeenSet() const
{
    return m_iPSECOptionsSpecificationHasBeenSet;
}

vector<Tag> CreateVpnConnectionRequest::GetTags() const
{
    return m_tags;
}

void CreateVpnConnectionRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateVpnConnectionRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateVpnConnectionRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void CreateVpnConnectionRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool CreateVpnConnectionRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

string CreateVpnConnectionRequest::GetHealthCheckLocalIp() const
{
    return m_healthCheckLocalIp;
}

void CreateVpnConnectionRequest::SetHealthCheckLocalIp(const string& _healthCheckLocalIp)
{
    m_healthCheckLocalIp = _healthCheckLocalIp;
    m_healthCheckLocalIpHasBeenSet = true;
}

bool CreateVpnConnectionRequest::HealthCheckLocalIpHasBeenSet() const
{
    return m_healthCheckLocalIpHasBeenSet;
}

string CreateVpnConnectionRequest::GetHealthCheckRemoteIp() const
{
    return m_healthCheckRemoteIp;
}

void CreateVpnConnectionRequest::SetHealthCheckRemoteIp(const string& _healthCheckRemoteIp)
{
    m_healthCheckRemoteIp = _healthCheckRemoteIp;
    m_healthCheckRemoteIpHasBeenSet = true;
}

bool CreateVpnConnectionRequest::HealthCheckRemoteIpHasBeenSet() const
{
    return m_healthCheckRemoteIpHasBeenSet;
}

string CreateVpnConnectionRequest::GetRouteType() const
{
    return m_routeType;
}

void CreateVpnConnectionRequest::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool CreateVpnConnectionRequest::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

string CreateVpnConnectionRequest::GetNegotiationType() const
{
    return m_negotiationType;
}

void CreateVpnConnectionRequest::SetNegotiationType(const string& _negotiationType)
{
    m_negotiationType = _negotiationType;
    m_negotiationTypeHasBeenSet = true;
}

bool CreateVpnConnectionRequest::NegotiationTypeHasBeenSet() const
{
    return m_negotiationTypeHasBeenSet;
}

int64_t CreateVpnConnectionRequest::GetDpdEnable() const
{
    return m_dpdEnable;
}

void CreateVpnConnectionRequest::SetDpdEnable(const int64_t& _dpdEnable)
{
    m_dpdEnable = _dpdEnable;
    m_dpdEnableHasBeenSet = true;
}

bool CreateVpnConnectionRequest::DpdEnableHasBeenSet() const
{
    return m_dpdEnableHasBeenSet;
}

string CreateVpnConnectionRequest::GetDpdTimeout() const
{
    return m_dpdTimeout;
}

void CreateVpnConnectionRequest::SetDpdTimeout(const string& _dpdTimeout)
{
    m_dpdTimeout = _dpdTimeout;
    m_dpdTimeoutHasBeenSet = true;
}

bool CreateVpnConnectionRequest::DpdTimeoutHasBeenSet() const
{
    return m_dpdTimeoutHasBeenSet;
}

string CreateVpnConnectionRequest::GetDpdAction() const
{
    return m_dpdAction;
}

void CreateVpnConnectionRequest::SetDpdAction(const string& _dpdAction)
{
    m_dpdAction = _dpdAction;
    m_dpdActionHasBeenSet = true;
}

bool CreateVpnConnectionRequest::DpdActionHasBeenSet() const
{
    return m_dpdActionHasBeenSet;
}

CreateVpnConnRoute CreateVpnConnectionRequest::GetRoute() const
{
    return m_route;
}

void CreateVpnConnectionRequest::SetRoute(const CreateVpnConnRoute& _route)
{
    m_route = _route;
    m_routeHasBeenSet = true;
}

bool CreateVpnConnectionRequest::RouteHasBeenSet() const
{
    return m_routeHasBeenSet;
}

BgpConfig CreateVpnConnectionRequest::GetBgpConfig() const
{
    return m_bgpConfig;
}

void CreateVpnConnectionRequest::SetBgpConfig(const BgpConfig& _bgpConfig)
{
    m_bgpConfig = _bgpConfig;
    m_bgpConfigHasBeenSet = true;
}

bool CreateVpnConnectionRequest::BgpConfigHasBeenSet() const
{
    return m_bgpConfigHasBeenSet;
}

HealthCheckConfig CreateVpnConnectionRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void CreateVpnConnectionRequest::SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool CreateVpnConnectionRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}


