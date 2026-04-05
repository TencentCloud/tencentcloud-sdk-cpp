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

#include <tencentcloud/ga2/v20250115/model/ModifyListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyListenerRequest::ModifyListenerRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false),
    m_clientAffinityHasBeenSet(false),
    m_clientAffinityTimeHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_xForwardedForRealIpHasBeenSet(false),
    m_certificationTypeHasBeenSet(false),
    m_cipherPolicyIdHasBeenSet(false),
    m_serverCertificatesHasBeenSet(false),
    m_clientCaCertificatesHasBeenSet(false),
    m_getRealIpTypeHasBeenSet(false)
{
}

string ModifyListenerRequest::ToJsonString() const
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

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idleTimeout, allocator);
    }

    if (m_clientAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAffinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientAffinity.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAffinityTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAffinityTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientAffinityTime, allocator);
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

    if (m_getRealIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetRealIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_getRealIpType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyListenerRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ModifyListenerRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ModifyListenerRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ModifyListenerRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyListenerRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyListenerRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyListenerRequest::GetName() const
{
    return m_name;
}

void ModifyListenerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyListenerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyListenerRequest::GetDescription() const
{
    return m_description;
}

void ModifyListenerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyListenerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ModifyListenerRequest::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void ModifyListenerRequest::SetIdleTimeout(const uint64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool ModifyListenerRequest::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string ModifyListenerRequest::GetClientAffinity() const
{
    return m_clientAffinity;
}

void ModifyListenerRequest::SetClientAffinity(const string& _clientAffinity)
{
    m_clientAffinity = _clientAffinity;
    m_clientAffinityHasBeenSet = true;
}

bool ModifyListenerRequest::ClientAffinityHasBeenSet() const
{
    return m_clientAffinityHasBeenSet;
}

uint64_t ModifyListenerRequest::GetClientAffinityTime() const
{
    return m_clientAffinityTime;
}

void ModifyListenerRequest::SetClientAffinityTime(const uint64_t& _clientAffinityTime)
{
    m_clientAffinityTime = _clientAffinityTime;
    m_clientAffinityTimeHasBeenSet = true;
}

bool ModifyListenerRequest::ClientAffinityTimeHasBeenSet() const
{
    return m_clientAffinityTimeHasBeenSet;
}

uint64_t ModifyListenerRequest::GetRequestTimeout() const
{
    return m_requestTimeout;
}

void ModifyListenerRequest::SetRequestTimeout(const uint64_t& _requestTimeout)
{
    m_requestTimeout = _requestTimeout;
    m_requestTimeoutHasBeenSet = true;
}

bool ModifyListenerRequest::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

bool ModifyListenerRequest::GetXForwardedForRealIp() const
{
    return m_xForwardedForRealIp;
}

void ModifyListenerRequest::SetXForwardedForRealIp(const bool& _xForwardedForRealIp)
{
    m_xForwardedForRealIp = _xForwardedForRealIp;
    m_xForwardedForRealIpHasBeenSet = true;
}

bool ModifyListenerRequest::XForwardedForRealIpHasBeenSet() const
{
    return m_xForwardedForRealIpHasBeenSet;
}

string ModifyListenerRequest::GetCertificationType() const
{
    return m_certificationType;
}

void ModifyListenerRequest::SetCertificationType(const string& _certificationType)
{
    m_certificationType = _certificationType;
    m_certificationTypeHasBeenSet = true;
}

bool ModifyListenerRequest::CertificationTypeHasBeenSet() const
{
    return m_certificationTypeHasBeenSet;
}

string ModifyListenerRequest::GetCipherPolicyId() const
{
    return m_cipherPolicyId;
}

void ModifyListenerRequest::SetCipherPolicyId(const string& _cipherPolicyId)
{
    m_cipherPolicyId = _cipherPolicyId;
    m_cipherPolicyIdHasBeenSet = true;
}

bool ModifyListenerRequest::CipherPolicyIdHasBeenSet() const
{
    return m_cipherPolicyIdHasBeenSet;
}

vector<string> ModifyListenerRequest::GetServerCertificates() const
{
    return m_serverCertificates;
}

void ModifyListenerRequest::SetServerCertificates(const vector<string>& _serverCertificates)
{
    m_serverCertificates = _serverCertificates;
    m_serverCertificatesHasBeenSet = true;
}

bool ModifyListenerRequest::ServerCertificatesHasBeenSet() const
{
    return m_serverCertificatesHasBeenSet;
}

vector<string> ModifyListenerRequest::GetClientCaCertificates() const
{
    return m_clientCaCertificates;
}

void ModifyListenerRequest::SetClientCaCertificates(const vector<string>& _clientCaCertificates)
{
    m_clientCaCertificates = _clientCaCertificates;
    m_clientCaCertificatesHasBeenSet = true;
}

bool ModifyListenerRequest::ClientCaCertificatesHasBeenSet() const
{
    return m_clientCaCertificatesHasBeenSet;
}

string ModifyListenerRequest::GetGetRealIpType() const
{
    return m_getRealIpType;
}

void ModifyListenerRequest::SetGetRealIpType(const string& _getRealIpType)
{
    m_getRealIpType = _getRealIpType;
    m_getRealIpTypeHasBeenSet = true;
}

bool ModifyListenerRequest::GetRealIpTypeHasBeenSet() const
{
    return m_getRealIpTypeHasBeenSet;
}


