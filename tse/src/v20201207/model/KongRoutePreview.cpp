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

#include <tencentcloud/tse/v20201207/model/KongRoutePreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongRoutePreview::KongRoutePreview() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_preserveHostHasBeenSet(false),
    m_httpsRedirectStatusCodeHasBeenSet(false),
    m_stripPathHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_forceHttpsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceIDHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_requestBufferingHasBeenSet(false),
    m_responseBufferingHasBeenSet(false),
    m_regexPriorityHasBeenSet(false)
{
}

CoreInternalOutcome KongRoutePreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Methods") && !value["Methods"].IsNull())
    {
        if (!value["Methods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Methods` is not array type"));

        const rapidjson::Value &tmpValue = value["Methods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methods.push_back((*itr).GetString());
        }
        m_methodsHasBeenSet = true;
    }

    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_paths.push_back((*itr).GetString());
        }
        m_pathsHasBeenSet = true;
    }

    if (value.HasMember("Hosts") && !value["Hosts"].IsNull())
    {
        if (!value["Hosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Hosts` is not array type"));

        const rapidjson::Value &tmpValue = value["Hosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hosts.push_back((*itr).GetString());
        }
        m_hostsHasBeenSet = true;
    }

    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Protocols` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_protocols.push_back((*itr).GetString());
        }
        m_protocolsHasBeenSet = true;
    }

    if (value.HasMember("PreserveHost") && !value["PreserveHost"].IsNull())
    {
        if (!value["PreserveHost"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.PreserveHost` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preserveHost = value["PreserveHost"].GetBool();
        m_preserveHostHasBeenSet = true;
    }

    if (value.HasMember("HttpsRedirectStatusCode") && !value["HttpsRedirectStatusCode"].IsNull())
    {
        if (!value["HttpsRedirectStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.HttpsRedirectStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsRedirectStatusCode = value["HttpsRedirectStatusCode"].GetInt64();
        m_httpsRedirectStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("StripPath") && !value["StripPath"].IsNull())
    {
        if (!value["StripPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.StripPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stripPath = value["StripPath"].GetBool();
        m_stripPathHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ForceHttps") && !value["ForceHttps"].IsNull())
    {
        if (!value["ForceHttps"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.ForceHttps` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forceHttps = value["ForceHttps"].GetBool();
        m_forceHttpsHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("DestinationPorts") && !value["DestinationPorts"].IsNull())
    {
        if (!value["DestinationPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.DestinationPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_destinationPorts.push_back((*itr).GetUint64());
        }
        m_destinationPortsHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("RequestBuffering") && !value["RequestBuffering"].IsNull())
    {
        if (!value["RequestBuffering"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.RequestBuffering` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requestBuffering = value["RequestBuffering"].GetBool();
        m_requestBufferingHasBeenSet = true;
    }

    if (value.HasMember("ResponseBuffering") && !value["ResponseBuffering"].IsNull())
    {
        if (!value["ResponseBuffering"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.ResponseBuffering` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_responseBuffering = value["ResponseBuffering"].GetBool();
        m_responseBufferingHasBeenSet = true;
    }

    if (value.HasMember("RegexPriority") && !value["RegexPriority"].IsNull())
    {
        if (!value["RegexPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongRoutePreview.RegexPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regexPriority = value["RegexPriority"].GetInt64();
        m_regexPriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongRoutePreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preserveHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreserveHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preserveHost, allocator);
    }

    if (m_httpsRedirectStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRedirectStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsRedirectStatusCode, allocator);
    }

    if (m_stripPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StripPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stripPath, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceHttps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forceHttps, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationPorts.begin(); itr != m_destinationPorts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestBufferingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBuffering";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestBuffering, allocator);
    }

    if (m_responseBufferingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseBuffering";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseBuffering, allocator);
    }

    if (m_regexPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regexPriority, allocator);
    }

}


string KongRoutePreview::GetID() const
{
    return m_iD;
}

void KongRoutePreview::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KongRoutePreview::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KongRoutePreview::GetName() const
{
    return m_name;
}

void KongRoutePreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KongRoutePreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> KongRoutePreview::GetMethods() const
{
    return m_methods;
}

void KongRoutePreview::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool KongRoutePreview::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

vector<string> KongRoutePreview::GetPaths() const
{
    return m_paths;
}

void KongRoutePreview::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool KongRoutePreview::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

vector<string> KongRoutePreview::GetHosts() const
{
    return m_hosts;
}

void KongRoutePreview::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool KongRoutePreview::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> KongRoutePreview::GetProtocols() const
{
    return m_protocols;
}

void KongRoutePreview::SetProtocols(const vector<string>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool KongRoutePreview::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

bool KongRoutePreview::GetPreserveHost() const
{
    return m_preserveHost;
}

void KongRoutePreview::SetPreserveHost(const bool& _preserveHost)
{
    m_preserveHost = _preserveHost;
    m_preserveHostHasBeenSet = true;
}

bool KongRoutePreview::PreserveHostHasBeenSet() const
{
    return m_preserveHostHasBeenSet;
}

int64_t KongRoutePreview::GetHttpsRedirectStatusCode() const
{
    return m_httpsRedirectStatusCode;
}

void KongRoutePreview::SetHttpsRedirectStatusCode(const int64_t& _httpsRedirectStatusCode)
{
    m_httpsRedirectStatusCode = _httpsRedirectStatusCode;
    m_httpsRedirectStatusCodeHasBeenSet = true;
}

bool KongRoutePreview::HttpsRedirectStatusCodeHasBeenSet() const
{
    return m_httpsRedirectStatusCodeHasBeenSet;
}

bool KongRoutePreview::GetStripPath() const
{
    return m_stripPath;
}

void KongRoutePreview::SetStripPath(const bool& _stripPath)
{
    m_stripPath = _stripPath;
    m_stripPathHasBeenSet = true;
}

bool KongRoutePreview::StripPathHasBeenSet() const
{
    return m_stripPathHasBeenSet;
}

string KongRoutePreview::GetCreatedTime() const
{
    return m_createdTime;
}

void KongRoutePreview::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KongRoutePreview::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

bool KongRoutePreview::GetForceHttps() const
{
    return m_forceHttps;
}

void KongRoutePreview::SetForceHttps(const bool& _forceHttps)
{
    m_forceHttps = _forceHttps;
    m_forceHttpsHasBeenSet = true;
}

bool KongRoutePreview::ForceHttpsHasBeenSet() const
{
    return m_forceHttpsHasBeenSet;
}

string KongRoutePreview::GetServiceName() const
{
    return m_serviceName;
}

void KongRoutePreview::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool KongRoutePreview::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string KongRoutePreview::GetServiceID() const
{
    return m_serviceID;
}

void KongRoutePreview::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool KongRoutePreview::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

vector<uint64_t> KongRoutePreview::GetDestinationPorts() const
{
    return m_destinationPorts;
}

void KongRoutePreview::SetDestinationPorts(const vector<uint64_t>& _destinationPorts)
{
    m_destinationPorts = _destinationPorts;
    m_destinationPortsHasBeenSet = true;
}

bool KongRoutePreview::DestinationPortsHasBeenSet() const
{
    return m_destinationPortsHasBeenSet;
}

vector<KVMapping> KongRoutePreview::GetHeaders() const
{
    return m_headers;
}

void KongRoutePreview::SetHeaders(const vector<KVMapping>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool KongRoutePreview::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

bool KongRoutePreview::GetRequestBuffering() const
{
    return m_requestBuffering;
}

void KongRoutePreview::SetRequestBuffering(const bool& _requestBuffering)
{
    m_requestBuffering = _requestBuffering;
    m_requestBufferingHasBeenSet = true;
}

bool KongRoutePreview::RequestBufferingHasBeenSet() const
{
    return m_requestBufferingHasBeenSet;
}

bool KongRoutePreview::GetResponseBuffering() const
{
    return m_responseBuffering;
}

void KongRoutePreview::SetResponseBuffering(const bool& _responseBuffering)
{
    m_responseBuffering = _responseBuffering;
    m_responseBufferingHasBeenSet = true;
}

bool KongRoutePreview::ResponseBufferingHasBeenSet() const
{
    return m_responseBufferingHasBeenSet;
}

int64_t KongRoutePreview::GetRegexPriority() const
{
    return m_regexPriority;
}

void KongRoutePreview::SetRegexPriority(const int64_t& _regexPriority)
{
    m_regexPriority = _regexPriority;
    m_regexPriorityHasBeenSet = true;
}

bool KongRoutePreview::RegexPriorityHasBeenSet() const
{
    return m_regexPriorityHasBeenSet;
}

