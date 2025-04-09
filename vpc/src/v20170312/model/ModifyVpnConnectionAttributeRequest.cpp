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

#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpnConnectionAttributeRequest::ModifyVpnConnectionAttributeRequest() :
    m_vpnConnectionIdHasBeenSet(false),
    m_vpnConnectionNameHasBeenSet(false),
    m_preShareKeyHasBeenSet(false),
    m_securityPolicyDatabasesHasBeenSet(false),
    m_iKEOptionsSpecificationHasBeenSet(false),
    m_iPSECOptionsSpecificationHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckLocalIpHasBeenSet(false),
    m_healthCheckRemoteIpHasBeenSet(false),
    m_negotiationTypeHasBeenSet(false),
    m_dpdEnableHasBeenSet(false),
    m_dpdTimeoutHasBeenSet(false),
    m_dpdActionHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_bgpConfigHasBeenSet(false)
{
}

string ModifyVpnConnectionAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpnConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnConnectionId.c_str(), allocator).Move(), allocator);
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

    if (m_customerGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bgpConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpnConnectionAttributeRequest::GetVpnConnectionId() const
{
    return m_vpnConnectionId;
}

void ModifyVpnConnectionAttributeRequest::SetVpnConnectionId(const string& _vpnConnectionId)
{
    m_vpnConnectionId = _vpnConnectionId;
    m_vpnConnectionIdHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::VpnConnectionIdHasBeenSet() const
{
    return m_vpnConnectionIdHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetVpnConnectionName() const
{
    return m_vpnConnectionName;
}

void ModifyVpnConnectionAttributeRequest::SetVpnConnectionName(const string& _vpnConnectionName)
{
    m_vpnConnectionName = _vpnConnectionName;
    m_vpnConnectionNameHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::VpnConnectionNameHasBeenSet() const
{
    return m_vpnConnectionNameHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetPreShareKey() const
{
    return m_preShareKey;
}

void ModifyVpnConnectionAttributeRequest::SetPreShareKey(const string& _preShareKey)
{
    m_preShareKey = _preShareKey;
    m_preShareKeyHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::PreShareKeyHasBeenSet() const
{
    return m_preShareKeyHasBeenSet;
}

vector<SecurityPolicyDatabase> ModifyVpnConnectionAttributeRequest::GetSecurityPolicyDatabases() const
{
    return m_securityPolicyDatabases;
}

void ModifyVpnConnectionAttributeRequest::SetSecurityPolicyDatabases(const vector<SecurityPolicyDatabase>& _securityPolicyDatabases)
{
    m_securityPolicyDatabases = _securityPolicyDatabases;
    m_securityPolicyDatabasesHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::SecurityPolicyDatabasesHasBeenSet() const
{
    return m_securityPolicyDatabasesHasBeenSet;
}

IKEOptionsSpecification ModifyVpnConnectionAttributeRequest::GetIKEOptionsSpecification() const
{
    return m_iKEOptionsSpecification;
}

void ModifyVpnConnectionAttributeRequest::SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification)
{
    m_iKEOptionsSpecification = _iKEOptionsSpecification;
    m_iKEOptionsSpecificationHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::IKEOptionsSpecificationHasBeenSet() const
{
    return m_iKEOptionsSpecificationHasBeenSet;
}

IPSECOptionsSpecification ModifyVpnConnectionAttributeRequest::GetIPSECOptionsSpecification() const
{
    return m_iPSECOptionsSpecification;
}

void ModifyVpnConnectionAttributeRequest::SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification)
{
    m_iPSECOptionsSpecification = _iPSECOptionsSpecification;
    m_iPSECOptionsSpecificationHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::IPSECOptionsSpecificationHasBeenSet() const
{
    return m_iPSECOptionsSpecificationHasBeenSet;
}

bool ModifyVpnConnectionAttributeRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void ModifyVpnConnectionAttributeRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetHealthCheckLocalIp() const
{
    return m_healthCheckLocalIp;
}

void ModifyVpnConnectionAttributeRequest::SetHealthCheckLocalIp(const string& _healthCheckLocalIp)
{
    m_healthCheckLocalIp = _healthCheckLocalIp;
    m_healthCheckLocalIpHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::HealthCheckLocalIpHasBeenSet() const
{
    return m_healthCheckLocalIpHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetHealthCheckRemoteIp() const
{
    return m_healthCheckRemoteIp;
}

void ModifyVpnConnectionAttributeRequest::SetHealthCheckRemoteIp(const string& _healthCheckRemoteIp)
{
    m_healthCheckRemoteIp = _healthCheckRemoteIp;
    m_healthCheckRemoteIpHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::HealthCheckRemoteIpHasBeenSet() const
{
    return m_healthCheckRemoteIpHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetNegotiationType() const
{
    return m_negotiationType;
}

void ModifyVpnConnectionAttributeRequest::SetNegotiationType(const string& _negotiationType)
{
    m_negotiationType = _negotiationType;
    m_negotiationTypeHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::NegotiationTypeHasBeenSet() const
{
    return m_negotiationTypeHasBeenSet;
}

int64_t ModifyVpnConnectionAttributeRequest::GetDpdEnable() const
{
    return m_dpdEnable;
}

void ModifyVpnConnectionAttributeRequest::SetDpdEnable(const int64_t& _dpdEnable)
{
    m_dpdEnable = _dpdEnable;
    m_dpdEnableHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::DpdEnableHasBeenSet() const
{
    return m_dpdEnableHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetDpdTimeout() const
{
    return m_dpdTimeout;
}

void ModifyVpnConnectionAttributeRequest::SetDpdTimeout(const string& _dpdTimeout)
{
    m_dpdTimeout = _dpdTimeout;
    m_dpdTimeoutHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::DpdTimeoutHasBeenSet() const
{
    return m_dpdTimeoutHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetDpdAction() const
{
    return m_dpdAction;
}

void ModifyVpnConnectionAttributeRequest::SetDpdAction(const string& _dpdAction)
{
    m_dpdAction = _dpdAction;
    m_dpdActionHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::DpdActionHasBeenSet() const
{
    return m_dpdActionHasBeenSet;
}

string ModifyVpnConnectionAttributeRequest::GetCustomerGatewayId() const
{
    return m_customerGatewayId;
}

void ModifyVpnConnectionAttributeRequest::SetCustomerGatewayId(const string& _customerGatewayId)
{
    m_customerGatewayId = _customerGatewayId;
    m_customerGatewayIdHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::CustomerGatewayIdHasBeenSet() const
{
    return m_customerGatewayIdHasBeenSet;
}

HealthCheckConfig ModifyVpnConnectionAttributeRequest::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void ModifyVpnConnectionAttributeRequest::SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

BgpConfig ModifyVpnConnectionAttributeRequest::GetBgpConfig() const
{
    return m_bgpConfig;
}

void ModifyVpnConnectionAttributeRequest::SetBgpConfig(const BgpConfig& _bgpConfig)
{
    m_bgpConfig = _bgpConfig;
    m_bgpConfigHasBeenSet = true;
}

bool ModifyVpnConnectionAttributeRequest::BgpConfigHasBeenSet() const
{
    return m_bgpConfigHasBeenSet;
}


