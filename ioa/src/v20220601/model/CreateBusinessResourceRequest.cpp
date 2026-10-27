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

#include <tencentcloud/ioa/v20220601/model/CreateBusinessResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateBusinessResourceRequest::CreateBusinessResourceRequest() :
    m_areaIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_levelsHasBeenSet(false),
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
    m_uRLPathHasBeenSet(false),
    m_sSLCertIdHasBeenSet(false)
{
}

string CreateBusinessResourceRequest::ToJsonString() const
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

    if (m_levelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Levels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levels, allocator);
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

    if (m_sSLCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLCertId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBusinessResourceRequest::GetAreaId() const
{
    return m_areaId;
}

void CreateBusinessResourceRequest::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool CreateBusinessResourceRequest::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateBusinessResourceRequest::SetProtocol(const int64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateBusinessResourceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateBusinessResourceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CreateBusinessResourceRequest::GetServicePort() const
{
    return m_servicePort;
}

void CreateBusinessResourceRequest::SetServicePort(const string& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetLevels() const
{
    return m_levels;
}

void CreateBusinessResourceRequest::SetLevels(const int64_t& _levels)
{
    m_levels = _levels;
    m_levelsHasBeenSet = true;
}

bool CreateBusinessResourceRequest::LevelsHasBeenSet() const
{
    return m_levelsHasBeenSet;
}

string CreateBusinessResourceRequest::GetServiceAddress() const
{
    return m_serviceAddress;
}

void CreateBusinessResourceRequest::SetServiceAddress(const string& _serviceAddress)
{
    m_serviceAddress = _serviceAddress;
    m_serviceAddressHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceAddressHasBeenSet() const
{
    return m_serviceAddressHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetDirectConn() const
{
    return m_directConn;
}

void CreateBusinessResourceRequest::SetDirectConn(const int64_t& _directConn)
{
    m_directConn = _directConn;
    m_directConnHasBeenSet = true;
}

bool CreateBusinessResourceRequest::DirectConnHasBeenSet() const
{
    return m_directConnHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetConnectivityCheckSwitch() const
{
    return m_connectivityCheckSwitch;
}

void CreateBusinessResourceRequest::SetConnectivityCheckSwitch(const int64_t& _connectivityCheckSwitch)
{
    m_connectivityCheckSwitch = _connectivityCheckSwitch;
    m_connectivityCheckSwitchHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ConnectivityCheckSwitchHasBeenSet() const
{
    return m_connectivityCheckSwitchHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetConnectivityCheckInterval() const
{
    return m_connectivityCheckInterval;
}

void CreateBusinessResourceRequest::SetConnectivityCheckInterval(const int64_t& _connectivityCheckInterval)
{
    m_connectivityCheckInterval = _connectivityCheckInterval;
    m_connectivityCheckIntervalHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ConnectivityCheckIntervalHasBeenSet() const
{
    return m_connectivityCheckIntervalHasBeenSet;
}

string CreateBusinessResourceRequest::GetConnectivityCheckIntervalUnit() const
{
    return m_connectivityCheckIntervalUnit;
}

void CreateBusinessResourceRequest::SetConnectivityCheckIntervalUnit(const string& _connectivityCheckIntervalUnit)
{
    m_connectivityCheckIntervalUnit = _connectivityCheckIntervalUnit;
    m_connectivityCheckIntervalUnitHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ConnectivityCheckIntervalUnitHasBeenSet() const
{
    return m_connectivityCheckIntervalUnitHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetServiceNetwork() const
{
    return m_serviceNetwork;
}

void CreateBusinessResourceRequest::SetServiceNetwork(const int64_t& _serviceNetwork)
{
    m_serviceNetwork = _serviceNetwork;
    m_serviceNetworkHasBeenSet = true;
}

bool CreateBusinessResourceRequest::ServiceNetworkHasBeenSet() const
{
    return m_serviceNetworkHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetWireGuardTunnel() const
{
    return m_wireGuardTunnel;
}

void CreateBusinessResourceRequest::SetWireGuardTunnel(const int64_t& _wireGuardTunnel)
{
    m_wireGuardTunnel = _wireGuardTunnel;
    m_wireGuardTunnelHasBeenSet = true;
}

bool CreateBusinessResourceRequest::WireGuardTunnelHasBeenSet() const
{
    return m_wireGuardTunnelHasBeenSet;
}

string CreateBusinessResourceRequest::GetDescription() const
{
    return m_description;
}

void CreateBusinessResourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateBusinessResourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateBusinessResourceRequest::GetURLAuditState() const
{
    return m_uRLAuditState;
}

void CreateBusinessResourceRequest::SetURLAuditState(const int64_t& _uRLAuditState)
{
    m_uRLAuditState = _uRLAuditState;
    m_uRLAuditStateHasBeenSet = true;
}

bool CreateBusinessResourceRequest::URLAuditStateHasBeenSet() const
{
    return m_uRLAuditStateHasBeenSet;
}

string CreateBusinessResourceRequest::GetURLAuditId() const
{
    return m_uRLAuditId;
}

void CreateBusinessResourceRequest::SetURLAuditId(const string& _uRLAuditId)
{
    m_uRLAuditId = _uRLAuditId;
    m_uRLAuditIdHasBeenSet = true;
}

bool CreateBusinessResourceRequest::URLAuditIdHasBeenSet() const
{
    return m_uRLAuditIdHasBeenSet;
}

string CreateBusinessResourceRequest::GetURLPath() const
{
    return m_uRLPath;
}

void CreateBusinessResourceRequest::SetURLPath(const string& _uRLPath)
{
    m_uRLPath = _uRLPath;
    m_uRLPathHasBeenSet = true;
}

bool CreateBusinessResourceRequest::URLPathHasBeenSet() const
{
    return m_uRLPathHasBeenSet;
}

string CreateBusinessResourceRequest::GetSSLCertId() const
{
    return m_sSLCertId;
}

void CreateBusinessResourceRequest::SetSSLCertId(const string& _sSLCertId)
{
    m_sSLCertId = _sSLCertId;
    m_sSLCertIdHasBeenSet = true;
}

bool CreateBusinessResourceRequest::SSLCertIdHasBeenSet() const
{
    return m_sSLCertIdHasBeenSet;
}


