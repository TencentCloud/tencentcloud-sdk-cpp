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

#include <tencentcloud/ga2/v20250115/model/CreateListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

CreateListenerRequest::CreateListenerRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false),
    m_getRealIpTypeHasBeenSet(false),
    m_clientAffinityHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_xForwardedForRealIpHasBeenSet(false),
    m_certificationTypeHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false),
    m_serverCertificatesHasBeenSet(false),
    m_clientCaCertificatesHasBeenSet(false)
{
}

string CreateListenerRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRanges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portRanges.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idleTimeout, allocator);
    }

    if (m_getRealIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetRealIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_getRealIpType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAffinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientAffinity.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestTimeout, allocator);
    }

    if (m_xForwardedForRealIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForRealIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xForwardedForRealIp, allocator);
    }

    if (m_certificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificationType.c_str(), allocator).Move(), allocator);
    }

    if (m_cipherPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cipherPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverCertificatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerCertificates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serverCertificates.begin(); itr != m_serverCertificates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientCaCertificatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCaCertificates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientCaCertificates.begin(); itr != m_clientCaCertificates.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateListenerRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void CreateListenerRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool CreateListenerRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string CreateListenerRequest::GetName() const
{
    return m_name;
}

void CreateListenerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateListenerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PortRanges CreateListenerRequest::GetPortRanges() const
{
    return m_portRanges;
}

void CreateListenerRequest::SetPortRanges(const PortRanges& _portRanges)
{
    m_portRanges = _portRanges;
    m_portRangesHasBeenSet = true;
}

bool CreateListenerRequest::PortRangesHasBeenSet() const
{
    return m_portRangesHasBeenSet;
}

string CreateListenerRequest::GetDescription() const
{
    return m_description;
}

void CreateListenerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateListenerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateListenerRequest::GetListenerType() const
{
    return m_listenerType;
}

void CreateListenerRequest::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool CreateListenerRequest::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

string CreateListenerRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateListenerRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateListenerRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t CreateListenerRequest::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void CreateListenerRequest::SetIdleTimeout(const uint64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool CreateListenerRequest::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string CreateListenerRequest::GetGetRealIpType() const
{
    return m_getRealIpType;
}

void CreateListenerRequest::SetGetRealIpType(const string& _getRealIpType)
{
    m_getRealIpType = _getRealIpType;
    m_getRealIpTypeHasBeenSet = true;
}

bool CreateListenerRequest::GetRealIpTypeHasBeenSet() const
{
    return m_getRealIpTypeHasBeenSet;
}

string CreateListenerRequest::GetClientAffinity() const
{
    return m_clientAffinity;
}

void CreateListenerRequest::SetClientAffinity(const string& _clientAffinity)
{
    m_clientAffinity = _clientAffinity;
    m_clientAffinityHasBeenSet = true;
}

bool CreateListenerRequest::ClientAffinityHasBeenSet() const
{
    return m_clientAffinityHasBeenSet;
}

uint64_t CreateListenerRequest::GetRequestTimeout() const
{
    return m_requestTimeout;
}

void CreateListenerRequest::SetRequestTimeout(const uint64_t& _requestTimeout)
{
    m_requestTimeout = _requestTimeout;
    m_requestTimeoutHasBeenSet = true;
}

bool CreateListenerRequest::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

bool CreateListenerRequest::GetXForwardedForRealIp() const
{
    return m_xForwardedForRealIp;
}

void CreateListenerRequest::SetXForwardedForRealIp(const bool& _xForwardedForRealIp)
{
    m_xForwardedForRealIp = _xForwardedForRealIp;
    m_xForwardedForRealIpHasBeenSet = true;
}

bool CreateListenerRequest::XForwardedForRealIpHasBeenSet() const
{
    return m_xForwardedForRealIpHasBeenSet;
}

string CreateListenerRequest::GetCertificationType() const
{
    return m_certificationType;
}

void CreateListenerRequest::SetCertificationType(const string& _certificationType)
{
    m_certificationType = _certificationType;
    m_certificationTypeHasBeenSet = true;
}

bool CreateListenerRequest::CertificationTypeHasBeenSet() const
{
    return m_certificationTypeHasBeenSet;
}

string CreateListenerRequest::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void CreateListenerRequest::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool CreateListenerRequest::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}

vector<string> CreateListenerRequest::GetServerCertificates() const
{
    return m_serverCertificates;
}

void CreateListenerRequest::SetServerCertificates(const vector<string>& _serverCertificates)
{
    m_serverCertificates = _serverCertificates;
    m_serverCertificatesHasBeenSet = true;
}

bool CreateListenerRequest::ServerCertificatesHasBeenSet() const
{
    return m_serverCertificatesHasBeenSet;
}

vector<string> CreateListenerRequest::GetClientCaCertificates() const
{
    return m_clientCaCertificates;
}

void CreateListenerRequest::SetClientCaCertificates(const vector<string>& _clientCaCertificates)
{
    m_clientCaCertificates = _clientCaCertificates;
    m_clientCaCertificatesHasBeenSet = true;
}

bool CreateListenerRequest::ClientCaCertificatesHasBeenSet() const
{
    return m_clientCaCertificatesHasBeenSet;
}


