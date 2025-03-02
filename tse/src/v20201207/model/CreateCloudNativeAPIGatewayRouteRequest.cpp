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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayRouteRequest::CreateCloudNativeAPIGatewayRouteRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
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

string CreateCloudNativeAPIGatewayRouteRequest::ToJsonString() const
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


string CreateCloudNativeAPIGatewayRouteRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayRouteRequest::GetServiceID() const
{
    return m_serviceID;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

string CreateCloudNativeAPIGatewayRouteRequest::GetRouteName() const
{
    return m_routeName;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayRouteRequest::GetMethods() const
{
    return m_methods;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayRouteRequest::GetHosts() const
{
    return m_hosts;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayRouteRequest::GetPaths() const
{
    return m_paths;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayRouteRequest::GetProtocols() const
{
    return m_protocols;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetProtocols(const vector<string>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GetPreserveHost() const
{
    return m_preserveHost;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetPreserveHost(const bool& _preserveHost)
{
    m_preserveHost = _preserveHost;
    m_preserveHostHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::PreserveHostHasBeenSet() const
{
    return m_preserveHostHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayRouteRequest::GetHttpsRedirectStatusCode() const
{
    return m_httpsRedirectStatusCode;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetHttpsRedirectStatusCode(const int64_t& _httpsRedirectStatusCode)
{
    m_httpsRedirectStatusCode = _httpsRedirectStatusCode;
    m_httpsRedirectStatusCodeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::HttpsRedirectStatusCodeHasBeenSet() const
{
    return m_httpsRedirectStatusCodeHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GetStripPath() const
{
    return m_stripPath;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetStripPath(const bool& _stripPath)
{
    m_stripPath = _stripPath;
    m_stripPathHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::StripPathHasBeenSet() const
{
    return m_stripPathHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GetForceHttps() const
{
    return m_forceHttps;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetForceHttps(const bool& _forceHttps)
{
    m_forceHttps = _forceHttps;
    m_forceHttpsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::ForceHttpsHasBeenSet() const
{
    return m_forceHttpsHasBeenSet;
}

vector<uint64_t> CreateCloudNativeAPIGatewayRouteRequest::GetDestinationPorts() const
{
    return m_destinationPorts;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetDestinationPorts(const vector<uint64_t>& _destinationPorts)
{
    m_destinationPorts = _destinationPorts;
    m_destinationPortsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::DestinationPortsHasBeenSet() const
{
    return m_destinationPortsHasBeenSet;
}

vector<KVMapping> CreateCloudNativeAPIGatewayRouteRequest::GetHeaders() const
{
    return m_headers;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetHeaders(const vector<KVMapping>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GetRequestBuffering() const
{
    return m_requestBuffering;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetRequestBuffering(const bool& _requestBuffering)
{
    m_requestBuffering = _requestBuffering;
    m_requestBufferingHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::RequestBufferingHasBeenSet() const
{
    return m_requestBufferingHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRouteRequest::GetResponseBuffering() const
{
    return m_responseBuffering;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetResponseBuffering(const bool& _responseBuffering)
{
    m_responseBuffering = _responseBuffering;
    m_responseBufferingHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::ResponseBufferingHasBeenSet() const
{
    return m_responseBufferingHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayRouteRequest::GetRegexPriority() const
{
    return m_regexPriority;
}

void CreateCloudNativeAPIGatewayRouteRequest::SetRegexPriority(const int64_t& _regexPriority)
{
    m_regexPriority = _regexPriority;
    m_regexPriorityHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRouteRequest::RegexPriorityHasBeenSet() const
{
    return m_regexPriorityHasBeenSet;
}


