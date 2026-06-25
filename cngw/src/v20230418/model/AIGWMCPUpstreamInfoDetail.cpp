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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPUpstreamInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPUpstreamInfoDetail::AIGWMCPUpstreamInfoDetail() :
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_mCPServerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceGroupHasBeenSet(false),
    m_mCPEndpointHasBeenSet(false),
    m_messageEndpointHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPUpstreamInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("MCPServerId") && !value["MCPServerId"].IsNull())
    {
        if (!value["MCPServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.MCPServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPServerId = string(value["MCPServerId"].GetString());
        m_mCPServerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceGroup") && !value["ServiceGroup"].IsNull())
    {
        if (!value["ServiceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.ServiceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroup = string(value["ServiceGroup"].GetString());
        m_serviceGroupHasBeenSet = true;
    }

    if (value.HasMember("MCPEndpoint") && !value["MCPEndpoint"].IsNull())
    {
        if (!value["MCPEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.MCPEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPEndpoint = string(value["MCPEndpoint"].GetString());
        m_mCPEndpointHasBeenSet = true;
    }

    if (value.HasMember("MessageEndpoint") && !value["MessageEndpoint"].IsNull())
    {
        if (!value["MessageEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPUpstreamInfoDetail.MessageEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageEndpoint = string(value["MessageEndpoint"].GetString());
        m_messageEndpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPUpstreamInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_messageEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageEndpoint.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPUpstreamInfoDetail::GetSourceId() const
{
    return m_sourceId;
}

void AIGWMCPUpstreamInfoDetail::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetSourceName() const
{
    return m_sourceName;
}

void AIGWMCPUpstreamInfoDetail::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetNamespace() const
{
    return m_namespace;
}

void AIGWMCPUpstreamInfoDetail::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetMCPServerId() const
{
    return m_mCPServerId;
}

void AIGWMCPUpstreamInfoDetail::SetMCPServerId(const string& _mCPServerId)
{
    m_mCPServerId = _mCPServerId;
    m_mCPServerIdHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::MCPServerIdHasBeenSet() const
{
    return m_mCPServerIdHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetProtocol() const
{
    return m_protocol;
}

void AIGWMCPUpstreamInfoDetail::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetHost() const
{
    return m_host;
}

void AIGWMCPUpstreamInfoDetail::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t AIGWMCPUpstreamInfoDetail::GetPort() const
{
    return m_port;
}

void AIGWMCPUpstreamInfoDetail::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetServiceId() const
{
    return m_serviceId;
}

void AIGWMCPUpstreamInfoDetail::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetServiceName() const
{
    return m_serviceName;
}

void AIGWMCPUpstreamInfoDetail::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetServiceGroup() const
{
    return m_serviceGroup;
}

void AIGWMCPUpstreamInfoDetail::SetServiceGroup(const string& _serviceGroup)
{
    m_serviceGroup = _serviceGroup;
    m_serviceGroupHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::ServiceGroupHasBeenSet() const
{
    return m_serviceGroupHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetMCPEndpoint() const
{
    return m_mCPEndpoint;
}

void AIGWMCPUpstreamInfoDetail::SetMCPEndpoint(const string& _mCPEndpoint)
{
    m_mCPEndpoint = _mCPEndpoint;
    m_mCPEndpointHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::MCPEndpointHasBeenSet() const
{
    return m_mCPEndpointHasBeenSet;
}

string AIGWMCPUpstreamInfoDetail::GetMessageEndpoint() const
{
    return m_messageEndpoint;
}

void AIGWMCPUpstreamInfoDetail::SetMessageEndpoint(const string& _messageEndpoint)
{
    m_messageEndpoint = _messageEndpoint;
    m_messageEndpointHasBeenSet = true;
}

bool AIGWMCPUpstreamInfoDetail::MessageEndpointHasBeenSet() const
{
    return m_messageEndpointHasBeenSet;
}

