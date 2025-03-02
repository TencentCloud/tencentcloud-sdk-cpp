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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayRouteRequest::ModifyCloudNativeAPIGatewayRouteRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
    m_routeIDHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_preserveHostHasBeenSet(false),
    m_httpsRedirectStatusCodeHasBeenSet(false),
    m_stripPathHasBeenSet(false),
    m_forceHttpsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_requestBufferingHasBeenSet(false),
    m_responseBufferingHasBeenSet(false),
    m_regexPriorityHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeID.c_str(), allocator).Move(), allocator);
    }

    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preserveHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreserveHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preserveHost, allocator);
    }

    if (m_httpsRedirectStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRedirectStatusCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_httpsRedirectStatusCode, allocator);
    }

    if (m_stripPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StripPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stripPath, allocator);
    }

    if (m_forceHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceHttps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceHttps, allocator);
    }

    if (m_destinationPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationPorts.begin(); itr != m_destinationPorts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_requestBufferingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBuffering";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestBuffering, allocator);
    }

    if (m_responseBufferingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseBuffering";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_responseBuffering, allocator);
    }

    if (m_regexPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regexPriority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayRouteRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRouteRequest::GetServiceID() const
{
    return m_serviceID;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRouteRequest::GetRouteID() const
{
    return m_routeID;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetRouteID(const string& _routeID)
{
    m_routeID = _routeID;
    m_routeIDHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::RouteIDHasBeenSet() const
{
    return m_routeIDHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRouteRequest::GetRouteName() const
{
    return m_routeName;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayRouteRequest::GetMethods() const
{
    return m_methods;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayRouteRequest::GetHosts() const
{
    return m_hosts;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayRouteRequest::GetPaths() const
{
    return m_paths;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayRouteRequest::GetProtocols() const
{
    return m_protocols;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetProtocols(const vector<string>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GetPreserveHost() const
{
    return m_preserveHost;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetPreserveHost(const bool& _preserveHost)
{
    m_preserveHost = _preserveHost;
    m_preserveHostHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::PreserveHostHasBeenSet() const
{
    return m_preserveHostHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayRouteRequest::GetHttpsRedirectStatusCode() const
{
    return m_httpsRedirectStatusCode;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetHttpsRedirectStatusCode(const int64_t& _httpsRedirectStatusCode)
{
    m_httpsRedirectStatusCode = _httpsRedirectStatusCode;
    m_httpsRedirectStatusCodeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::HttpsRedirectStatusCodeHasBeenSet() const
{
    return m_httpsRedirectStatusCodeHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GetStripPath() const
{
    return m_stripPath;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetStripPath(const bool& _stripPath)
{
    m_stripPath = _stripPath;
    m_stripPathHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::StripPathHasBeenSet() const
{
    return m_stripPathHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GetForceHttps() const
{
    return m_forceHttps;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetForceHttps(const bool& _forceHttps)
{
    m_forceHttps = _forceHttps;
    m_forceHttpsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::ForceHttpsHasBeenSet() const
{
    return m_forceHttpsHasBeenSet;
}

vector<uint64_t> ModifyCloudNativeAPIGatewayRouteRequest::GetDestinationPorts() const
{
    return m_destinationPorts;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetDestinationPorts(const vector<uint64_t>& _destinationPorts)
{
    m_destinationPorts = _destinationPorts;
    m_destinationPortsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::DestinationPortsHasBeenSet() const
{
    return m_destinationPortsHasBeenSet;
}

vector<KVMapping> ModifyCloudNativeAPIGatewayRouteRequest::GetHeaders() const
{
    return m_headers;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetHeaders(const vector<KVMapping>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GetRequestBuffering() const
{
    return m_requestBuffering;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetRequestBuffering(const bool& _requestBuffering)
{
    m_requestBuffering = _requestBuffering;
    m_requestBufferingHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::RequestBufferingHasBeenSet() const
{
    return m_requestBufferingHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::GetResponseBuffering() const
{
    return m_responseBuffering;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetResponseBuffering(const bool& _responseBuffering)
{
    m_responseBuffering = _responseBuffering;
    m_responseBufferingHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::ResponseBufferingHasBeenSet() const
{
    return m_responseBufferingHasBeenSet;
}

int64_t ModifyCloudNativeAPIGatewayRouteRequest::GetRegexPriority() const
{
    return m_regexPriority;
}

void ModifyCloudNativeAPIGatewayRouteRequest::SetRegexPriority(const int64_t& _regexPriority)
{
    m_regexPriority = _regexPriority;
    m_regexPriorityHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRouteRequest::RegexPriorityHasBeenSet() const
{
    return m_regexPriorityHasBeenSet;
}


