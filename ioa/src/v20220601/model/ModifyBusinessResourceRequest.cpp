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

#include <tencentcloud/ioa/v20220601/model/ModifyBusinessResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyBusinessResourceRequest::ModifyBusinessResourceRequest() :
    m_areaIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_levelsHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceAddressHasBeenSet(false),
    m_directConnHasBeenSet(false),
    m_connectivityCheckSwitchHasBeenSet(false),
    m_connectivityCheckIntervalHasBeenSet(false),
    m_connectivityCheckIntervalUnitHasBeenSet(false),
    m_serviceNetworkHasBeenSet(false),
    m_wireGuardTunnelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_uRLAuditStateHasBeenSet(false),
    m_uRLAuditIdHasBeenSet(false),
    m_uRLPathHasBeenSet(false)
{
}

string ModifyBusinessResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_areaId, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protocol, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Levels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levels, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_servicePort.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_serviceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_directConn, allocator);
    }

    if (m_connectivityCheckSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectivityCheckSwitch, allocator);
    }

    if (m_connectivityCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectivityCheckInterval, allocator);
    }

    if (m_connectivityCheckIntervalUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckIntervalUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectivityCheckIntervalUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNetwork";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceNetwork, allocator);
    }

    if (m_wireGuardTunnelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WireGuardTunnel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wireGuardTunnel, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLAuditStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLAuditState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uRLAuditState, allocator);
    }

    if (m_uRLAuditIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLAuditId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRLAuditId.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRLPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBusinessResourceRequest::GetAreaId() const
{
    return m_areaId;
}

void ModifyBusinessResourceRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyBusinessResourceRequest::SetProtocol(const int64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyBusinessResourceRequest::GetServiceName() const
{
    return m_serviceName;
}

void ModifyBusinessResourceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetLevels() const
{
    return m_levels;
}

void ModifyBusinessResourceRequest::SetLevels(const int64_t& _levels)
{
    m_levels = _levels;
    m_levelsHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::LevelsHasBeenSet() const
{
    return m_levelsHasBeenSet;
}

string ModifyBusinessResourceRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyBusinessResourceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string ModifyBusinessResourceRequest::GetServicePort() const
{
    return m_servicePort;
}

void ModifyBusinessResourceRequest::SetServicePort(const string& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyBusinessResourceRequest::SetServiceId(const int64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ModifyBusinessResourceRequest::GetServiceAddress() const
{
    return m_serviceAddress;
}

void ModifyBusinessResourceRequest::SetServiceAddress(const string& _serviceAddress)
{
    m_serviceAddress = _serviceAddress;
    m_serviceAddressHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServiceAddressHasBeenSet() const
{
    return m_serviceAddressHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetDirectConn() const
{
    return m_directConn;
}

void ModifyBusinessResourceRequest::SetDirectConn(const int64_t& _directConn)
{
    m_directConn = _directConn;
    m_directConnHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::DirectConnHasBeenSet() const
{
    return m_directConnHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetConnectivityCheckSwitch() const
{
    return m_connectivityCheckSwitch;
}

void ModifyBusinessResourceRequest::SetConnectivityCheckSwitch(const int64_t& _connectivityCheckSwitch)
{
    m_connectivityCheckSwitch = _connectivityCheckSwitch;
    m_connectivityCheckSwitchHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ConnectivityCheckSwitchHasBeenSet() const
{
    return m_connectivityCheckSwitchHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetConnectivityCheckInterval() const
{
    return m_connectivityCheckInterval;
}

void ModifyBusinessResourceRequest::SetConnectivityCheckInterval(const int64_t& _connectivityCheckInterval)
{
    m_connectivityCheckInterval = _connectivityCheckInterval;
    m_connectivityCheckIntervalHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ConnectivityCheckIntervalHasBeenSet() const
{
    return m_connectivityCheckIntervalHasBeenSet;
}

string ModifyBusinessResourceRequest::GetConnectivityCheckIntervalUnit() const
{
    return m_connectivityCheckIntervalUnit;
}

void ModifyBusinessResourceRequest::SetConnectivityCheckIntervalUnit(const string& _connectivityCheckIntervalUnit)
{
    m_connectivityCheckIntervalUnit = _connectivityCheckIntervalUnit;
    m_connectivityCheckIntervalUnitHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ConnectivityCheckIntervalUnitHasBeenSet() const
{
    return m_connectivityCheckIntervalUnitHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetServiceNetwork() const
{
    return m_serviceNetwork;
}

void ModifyBusinessResourceRequest::SetServiceNetwork(const int64_t& _serviceNetwork)
{
    m_serviceNetwork = _serviceNetwork;
    m_serviceNetworkHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::ServiceNetworkHasBeenSet() const
{
    return m_serviceNetworkHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetWireGuardTunnel() const
{
    return m_wireGuardTunnel;
}

void ModifyBusinessResourceRequest::SetWireGuardTunnel(const int64_t& _wireGuardTunnel)
{
    m_wireGuardTunnel = _wireGuardTunnel;
    m_wireGuardTunnelHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::WireGuardTunnelHasBeenSet() const
{
    return m_wireGuardTunnelHasBeenSet;
}

string ModifyBusinessResourceRequest::GetDescription() const
{
    return m_description;
}

void ModifyBusinessResourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyBusinessResourceRequest::GetURLAuditState() const
{
    return m_uRLAuditState;
}

void ModifyBusinessResourceRequest::SetURLAuditState(const int64_t& _uRLAuditState)
{
    m_uRLAuditState = _uRLAuditState;
    m_uRLAuditStateHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::URLAuditStateHasBeenSet() const
{
    return m_uRLAuditStateHasBeenSet;
}

string ModifyBusinessResourceRequest::GetURLAuditId() const
{
    return m_uRLAuditId;
}

void ModifyBusinessResourceRequest::SetURLAuditId(const string& _uRLAuditId)
{
    m_uRLAuditId = _uRLAuditId;
    m_uRLAuditIdHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::URLAuditIdHasBeenSet() const
{
    return m_uRLAuditIdHasBeenSet;
}

string ModifyBusinessResourceRequest::GetURLPath() const
{
    return m_uRLPath;
}

void ModifyBusinessResourceRequest::SetURLPath(const string& _uRLPath)
{
    m_uRLPath = _uRLPath;
    m_uRLPathHasBeenSet = true;
}

bool ModifyBusinessResourceRequest::URLPathHasBeenSet() const
{
    return m_uRLPathHasBeenSet;
}


