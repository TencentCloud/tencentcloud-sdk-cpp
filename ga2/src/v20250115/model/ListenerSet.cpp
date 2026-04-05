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

#include <tencentcloud/ga2/v20250115/model/ListenerSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ListenerSet::ListenerSet() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_xForwardedForRealIpHasBeenSet(false),
    m_clientAffinityHasBeenSet(false),
    m_clientAffinityTimeHasBeenSet(false),
    m_certificationTypeHasBeenSet(false),
    m_serverCertificatesHasBeenSet(false),
    m_clientCaCertificatesHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false),
    m_httpVersionHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointGroupCountsHasBeenSet(false),
    m_getRealIpTypeHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome ListenerSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("PortRanges") && !value["PortRanges"].IsNull())
    {
        if (!value["PortRanges"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.PortRanges` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portRanges.Deserialize(value["PortRanges"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portRangesHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForRealIp") && !value["XForwardedForRealIp"].IsNull())
    {
        if (!value["XForwardedForRealIp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.XForwardedForRealIp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForRealIp = value["XForwardedForRealIp"].GetBool();
        m_xForwardedForRealIpHasBeenSet = true;
    }

    if (value.HasMember("ClientAffinity") && !value["ClientAffinity"].IsNull())
    {
        if (!value["ClientAffinity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ClientAffinity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAffinity = string(value["ClientAffinity"].GetString());
        m_clientAffinityHasBeenSet = true;
    }

    if (value.HasMember("ClientAffinityTime") && !value["ClientAffinityTime"].IsNull())
    {
        if (!value["ClientAffinityTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ClientAffinityTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientAffinityTime = value["ClientAffinityTime"].GetUint64();
        m_clientAffinityTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificationType") && !value["CertificationType"].IsNull())
    {
        if (!value["CertificationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.CertificationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificationType = string(value["CertificationType"].GetString());
        m_certificationTypeHasBeenSet = true;
    }

    if (value.HasMember("ServerCertificates") && !value["ServerCertificates"].IsNull())
    {
        if (!value["ServerCertificates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ServerCertificates` is not array type"));

        const rapidjson::Value &tmpValue = value["ServerCertificates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serverCertificates.push_back((*itr).GetString());
        }
        m_serverCertificatesHasBeenSet = true;
    }

    if (value.HasMember("ClientCaCertificates") && !value["ClientCaCertificates"].IsNull())
    {
        if (!value["ClientCaCertificates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ClientCaCertificates` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientCaCertificates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clientCaCertificates.push_back((*itr).GetString());
        }
        m_clientCaCertificatesHasBeenSet = true;
    }

    if (value.HasMember("CipherPolicyId") && !value["CipherPolicyId"].IsNull())
    {
        if (!value["CipherPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.CipherPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cipherPolicyId = string(value["CipherPolicyId"].GetString());
        m_cipherPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("HttpVersion") && !value["HttpVersion"].IsNull())
    {
        if (!value["HttpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.HttpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpVersion = string(value["HttpVersion"].GetString());
        m_httpVersionHasBeenSet = true;
    }

    if (value.HasMember("RequestTimeout") && !value["RequestTimeout"].IsNull())
    {
        if (!value["RequestTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.RequestTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestTimeout = value["RequestTimeout"].GetUint64();
        m_requestTimeoutHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ListenerType") && !value["ListenerType"].IsNull())
    {
        if (!value["ListenerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.ListenerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerType = string(value["ListenerType"].GetString());
        m_listenerTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EndpointGroupCounts") && !value["EndpointGroupCounts"].IsNull())
    {
        if (!value["EndpointGroupCounts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.EndpointGroupCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endpointGroupCounts = value["EndpointGroupCounts"].GetUint64();
        m_endpointGroupCountsHasBeenSet = true;
    }

    if (value.HasMember("GetRealIpType") && !value["GetRealIpType"].IsNull())
    {
        if (!value["GetRealIpType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.GetRealIpType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_getRealIpType = string(value["GetRealIpType"].GetString());
        m_getRealIpTypeHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeout") && !value["IdleTimeout"].IsNull())
    {
        if (!value["IdleTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerSet.IdleTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = value["IdleTimeout"].GetUint64();
        m_idleTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListenerSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portRanges.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_xForwardedForRealIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForRealIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForRealIp, allocator);
    }

    if (m_clientAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAffinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAffinity.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAffinityTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAffinityTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientAffinityTime, allocator);
    }

    if (m_certificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificationType.c_str(), allocator).Move(), allocator);
    }

    if (m_serverCertificatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCertificates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serverCertificates.begin(); itr != m_serverCertificates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientCaCertificatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCaCertificates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientCaCertificates.begin(); itr != m_clientCaCertificates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cipherPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cipherPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_httpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestTimeout, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointGroupCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointGroupCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endpointGroupCounts, allocator);
    }

    if (m_getRealIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetRealIpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_getRealIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeout, allocator);
    }

}


string ListenerSet::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ListenerSet::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ListenerSet::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ListenerSet::GetListenerId() const
{
    return m_listenerId;
}

void ListenerSet::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ListenerSet::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ListenerSet::GetName() const
{
    return m_name;
}

void ListenerSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListenerSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ListenerSet::GetDescription() const
{
    return m_description;
}

void ListenerSet::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ListenerSet::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ListenerSet::GetProtocol() const
{
    return m_protocol;
}

void ListenerSet::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ListenerSet::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

PortRanges ListenerSet::GetPortRanges() const
{
    return m_portRanges;
}

void ListenerSet::SetPortRanges(const PortRanges& _portRanges)
{
    m_portRanges = _portRanges;
    m_portRangesHasBeenSet = true;
}

bool ListenerSet::PortRangesHasBeenSet() const
{
    return m_portRangesHasBeenSet;
}

bool ListenerSet::GetXForwardedForRealIp() const
{
    return m_xForwardedForRealIp;
}

void ListenerSet::SetXForwardedForRealIp(const bool& _xForwardedForRealIp)
{
    m_xForwardedForRealIp = _xForwardedForRealIp;
    m_xForwardedForRealIpHasBeenSet = true;
}

bool ListenerSet::XForwardedForRealIpHasBeenSet() const
{
    return m_xForwardedForRealIpHasBeenSet;
}

string ListenerSet::GetClientAffinity() const
{
    return m_clientAffinity;
}

void ListenerSet::SetClientAffinity(const string& _clientAffinity)
{
    m_clientAffinity = _clientAffinity;
    m_clientAffinityHasBeenSet = true;
}

bool ListenerSet::ClientAffinityHasBeenSet() const
{
    return m_clientAffinityHasBeenSet;
}

uint64_t ListenerSet::GetClientAffinityTime() const
{
    return m_clientAffinityTime;
}

void ListenerSet::SetClientAffinityTime(const uint64_t& _clientAffinityTime)
{
    m_clientAffinityTime = _clientAffinityTime;
    m_clientAffinityTimeHasBeenSet = true;
}

bool ListenerSet::ClientAffinityTimeHasBeenSet() const
{
    return m_clientAffinityTimeHasBeenSet;
}

string ListenerSet::GetCertificationType() const
{
    return m_certificationType;
}

void ListenerSet::SetCertificationType(const string& _certificationType)
{
    m_certificationType = _certificationType;
    m_certificationTypeHasBeenSet = true;
}

bool ListenerSet::CertificationTypeHasBeenSet() const
{
    return m_certificationTypeHasBeenSet;
}

vector<string> ListenerSet::GetServerCertificates() const
{
    return m_serverCertificates;
}

void ListenerSet::SetServerCertificates(const vector<string>& _serverCertificates)
{
    m_serverCertificates = _serverCertificates;
    m_serverCertificatesHasBeenSet = true;
}

bool ListenerSet::ServerCertificatesHasBeenSet() const
{
    return m_serverCertificatesHasBeenSet;
}

vector<string> ListenerSet::GetClientCaCertificates() const
{
    return m_clientCaCertificates;
}

void ListenerSet::SetClientCaCertificates(const vector<string>& _clientCaCertificates)
{
    m_clientCaCertificates = _clientCaCertificates;
    m_clientCaCertificatesHasBeenSet = true;
}

bool ListenerSet::ClientCaCertificatesHasBeenSet() const
{
    return m_clientCaCertificatesHasBeenSet;
}

string ListenerSet::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void ListenerSet::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool ListenerSet::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}

string ListenerSet::GetHttpVersion() const
{
    return m_httpVersion;
}

void ListenerSet::SetHttpVersion(const string& _httpVersion)
{
    m_httpVersion = _httpVersion;
    m_httpVersionHasBeenSet = true;
}

bool ListenerSet::HttpVersionHasBeenSet() const
{
    return m_httpVersionHasBeenSet;
}

uint64_t ListenerSet::GetRequestTimeout() const
{
    return m_requestTimeout;
}

void ListenerSet::SetRequestTimeout(const uint64_t& _requestTimeout)
{
    m_requestTimeout = _requestTimeout;
    m_requestTimeoutHasBeenSet = true;
}

bool ListenerSet::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

string ListenerSet::GetCreateTime() const
{
    return m_createTime;
}

void ListenerSet::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListenerSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ListenerSet::GetListenerType() const
{
    return m_listenerType;
}

void ListenerSet::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool ListenerSet::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

string ListenerSet::GetStatus() const
{
    return m_status;
}

void ListenerSet::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListenerSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ListenerSet::GetEndpointGroupCounts() const
{
    return m_endpointGroupCounts;
}

void ListenerSet::SetEndpointGroupCounts(const uint64_t& _endpointGroupCounts)
{
    m_endpointGroupCounts = _endpointGroupCounts;
    m_endpointGroupCountsHasBeenSet = true;
}

bool ListenerSet::EndpointGroupCountsHasBeenSet() const
{
    return m_endpointGroupCountsHasBeenSet;
}

string ListenerSet::GetGetRealIpType() const
{
    return m_getRealIpType;
}

void ListenerSet::SetGetRealIpType(const string& _getRealIpType)
{
    m_getRealIpType = _getRealIpType;
    m_getRealIpTypeHasBeenSet = true;
}

bool ListenerSet::GetRealIpTypeHasBeenSet() const
{
    return m_getRealIpTypeHasBeenSet;
}

uint64_t ListenerSet::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void ListenerSet::SetIdleTimeout(const uint64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool ListenerSet::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

