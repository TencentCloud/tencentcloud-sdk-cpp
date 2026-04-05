/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ga2/v20250115/model/ModifyEndpointGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyEndpointGroupRequest::ModifyEndpointGroupRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_endpointGroupIdHasBeenSet(false),
    m_endpointConfigurationsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthCheckIntervalHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_checkSendContextHasBeenSet(false),
    m_checkRecvContextHasBeenSet(false),
    m_checkDomainHasBeenSet(false),
    m_checkPathHasBeenSet(false),
    m_checkMethodHasBeenSet(false),
    m_statusMaskHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_portOverridesHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false)
{
}

string ModifyEndpointGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointConfigurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointConfigurations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointConfigurations.begin(); itr != m_endpointConfigurations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_healthCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheckInterval, allocator);
    }

    if (m_unhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unhealthyThreshold, allocator);
    }

    if (m_healthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthyThreshold, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkPort, allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkSendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSendContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkSendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_checkRecvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRecvContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkRecvContext.c_str(), allocator).Move(), allocator);
    }

    if (m_checkDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkPath.c_str(), allocator).Move(), allocator);
    }

    if (m_checkMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusMask.begin(); itr != m_statusMask.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortOverrides";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portOverrides.begin(); itr != m_portOverrides.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cipherPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cipherPolicyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEndpointGroupRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyEndpointGroupRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyEndpointGroupRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyEndpointGroupRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyEndpointGroupRequest::GetEndpointGroupId() const
{
    return m_endpointGroupId;
}

void ModifyEndpointGroupRequest::SetEndpointGroupId(const string& _endpointGroupId)
{
    m_endpointGroupId = _endpointGroupId;
    m_endpointGroupIdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::EndpointGroupIdHasBeenSet() const
{
    return m_endpointGroupIdHasBeenSet;
}

vector<EndpointConfigurations> ModifyEndpointGroupRequest::GetEndpointConfigurations() const
{
    return m_endpointConfigurations;
}

void ModifyEndpointGroupRequest::SetEndpointConfigurations(const vector<EndpointConfigurations>& _endpointConfigurations)
{
    m_endpointConfigurations = _endpointConfigurations;
    m_endpointConfigurationsHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::EndpointConfigurationsHasBeenSet() const
{
    return m_endpointConfigurationsHasBeenSet;
}

string ModifyEndpointGroupRequest::GetName() const
{
    return m_name;
}

void ModifyEndpointGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyEndpointGroupRequest::GetDescription() const
{
    return m_description;
}

void ModifyEndpointGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyEndpointGroupRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void ModifyEndpointGroupRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

uint64_t ModifyEndpointGroupRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void ModifyEndpointGroupRequest::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t ModifyEndpointGroupRequest::GetHealthCheckInterval() const
{
    return m_healthCheckInterval;
}

void ModifyEndpointGroupRequest::SetHealthCheckInterval(const uint64_t& _healthCheckInterval)
{
    m_healthCheckInterval = _healthCheckInterval;
    m_healthCheckIntervalHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::HealthCheckIntervalHasBeenSet() const
{
    return m_healthCheckIntervalHasBeenSet;
}

uint64_t ModifyEndpointGroupRequest::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void ModifyEndpointGroupRequest::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

uint64_t ModifyEndpointGroupRequest::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void ModifyEndpointGroupRequest::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckType() const
{
    return m_checkType;
}

void ModifyEndpointGroupRequest::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

uint64_t ModifyEndpointGroupRequest::GetCheckPort() const
{
    return m_checkPort;
}

void ModifyEndpointGroupRequest::SetCheckPort(const uint64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string ModifyEndpointGroupRequest::GetContextType() const
{
    return m_contextType;
}

void ModifyEndpointGroupRequest::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckSendContext() const
{
    return m_checkSendContext;
}

void ModifyEndpointGroupRequest::SetCheckSendContext(const string& _checkSendContext)
{
    m_checkSendContext = _checkSendContext;
    m_checkSendContextHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckSendContextHasBeenSet() const
{
    return m_checkSendContextHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckRecvContext() const
{
    return m_checkRecvContext;
}

void ModifyEndpointGroupRequest::SetCheckRecvContext(const string& _checkRecvContext)
{
    m_checkRecvContext = _checkRecvContext;
    m_checkRecvContextHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckRecvContextHasBeenSet() const
{
    return m_checkRecvContextHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckDomain() const
{
    return m_checkDomain;
}

void ModifyEndpointGroupRequest::SetCheckDomain(const string& _checkDomain)
{
    m_checkDomain = _checkDomain;
    m_checkDomainHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckDomainHasBeenSet() const
{
    return m_checkDomainHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckPath() const
{
    return m_checkPath;
}

void ModifyEndpointGroupRequest::SetCheckPath(const string& _checkPath)
{
    m_checkPath = _checkPath;
    m_checkPathHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckPathHasBeenSet() const
{
    return m_checkPathHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCheckMethod() const
{
    return m_checkMethod;
}

void ModifyEndpointGroupRequest::SetCheckMethod(const string& _checkMethod)
{
    m_checkMethod = _checkMethod;
    m_checkMethodHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CheckMethodHasBeenSet() const
{
    return m_checkMethodHasBeenSet;
}

vector<string> ModifyEndpointGroupRequest::GetStatusMask() const
{
    return m_statusMask;
}

void ModifyEndpointGroupRequest::SetStatusMask(const vector<string>& _statusMask)
{
    m_statusMask = _statusMask;
    m_statusMaskHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::StatusMaskHasBeenSet() const
{
    return m_statusMaskHasBeenSet;
}

string ModifyEndpointGroupRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void ModifyEndpointGroupRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

vector<PortOverride> ModifyEndpointGroupRequest::GetPortOverrides() const
{
    return m_portOverrides;
}

void ModifyEndpointGroupRequest::SetPortOverrides(const vector<PortOverride>& _portOverrides)
{
    m_portOverrides = _portOverrides;
    m_portOverridesHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::PortOverridesHasBeenSet() const
{
    return m_portOverridesHasBeenSet;
}

string ModifyEndpointGroupRequest::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void ModifyEndpointGroupRequest::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool ModifyEndpointGroupRequest::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}


