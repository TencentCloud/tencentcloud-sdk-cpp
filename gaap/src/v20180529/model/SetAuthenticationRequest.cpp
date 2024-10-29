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

#include <tencentcloud/gaap/v20180529/model/SetAuthenticationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

SetAuthenticationRequest::SetAuthenticationRequest() :
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_basicAuthHasBeenSet(false),
    m_gaapAuthHasBeenSet(false),
    m_realServerAuthHasBeenSet(false),
    m_basicAuthConfIdHasBeenSet(false),
    m_gaapCertificateIdHasBeenSet(false),
    m_realServerCertificateIdHasBeenSet(false),
    m_realServerCertificateDomainHasBeenSet(false),
    m_polyRealServerCertificateIdsHasBeenSet(false),
    m_tLSSupportVersionHasBeenSet(false),
    m_tLSCiphersHasBeenSet(false)
{
}

string SetAuthenticationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_basicAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_basicAuth, allocator);
    }

    if (m_gaapAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GaapAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gaapAuth, allocator);
    }

    if (m_realServerAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_realServerAuth, allocator);
    }

    if (m_basicAuthConfIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicAuthConfId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicAuthConfId.c_str(), allocator).Move(), allocator);
    }

    if (m_gaapCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GaapCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gaapCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerCertificateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerCertificateDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerCertificateDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_polyRealServerCertificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolyRealServerCertificateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_polyRealServerCertificateIds.begin(); itr != m_polyRealServerCertificateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tLSSupportVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSSupportVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tLSSupportVersion.begin(); itr != m_tLSSupportVersion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tLSCiphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSCiphers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tLSCiphers.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetAuthenticationRequest::GetListenerId() const
{
    return m_listenerId;
}

void SetAuthenticationRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool SetAuthenticationRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string SetAuthenticationRequest::GetDomain() const
{
    return m_domain;
}

void SetAuthenticationRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SetAuthenticationRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t SetAuthenticationRequest::GetBasicAuth() const
{
    return m_basicAuth;
}

void SetAuthenticationRequest::SetBasicAuth(const int64_t& _basicAuth)
{
    m_basicAuth = _basicAuth;
    m_basicAuthHasBeenSet = true;
}

bool SetAuthenticationRequest::BasicAuthHasBeenSet() const
{
    return m_basicAuthHasBeenSet;
}

int64_t SetAuthenticationRequest::GetGaapAuth() const
{
    return m_gaapAuth;
}

void SetAuthenticationRequest::SetGaapAuth(const int64_t& _gaapAuth)
{
    m_gaapAuth = _gaapAuth;
    m_gaapAuthHasBeenSet = true;
}

bool SetAuthenticationRequest::GaapAuthHasBeenSet() const
{
    return m_gaapAuthHasBeenSet;
}

int64_t SetAuthenticationRequest::GetRealServerAuth() const
{
    return m_realServerAuth;
}

void SetAuthenticationRequest::SetRealServerAuth(const int64_t& _realServerAuth)
{
    m_realServerAuth = _realServerAuth;
    m_realServerAuthHasBeenSet = true;
}

bool SetAuthenticationRequest::RealServerAuthHasBeenSet() const
{
    return m_realServerAuthHasBeenSet;
}

string SetAuthenticationRequest::GetBasicAuthConfId() const
{
    return m_basicAuthConfId;
}

void SetAuthenticationRequest::SetBasicAuthConfId(const string& _basicAuthConfId)
{
    m_basicAuthConfId = _basicAuthConfId;
    m_basicAuthConfIdHasBeenSet = true;
}

bool SetAuthenticationRequest::BasicAuthConfIdHasBeenSet() const
{
    return m_basicAuthConfIdHasBeenSet;
}

string SetAuthenticationRequest::GetGaapCertificateId() const
{
    return m_gaapCertificateId;
}

void SetAuthenticationRequest::SetGaapCertificateId(const string& _gaapCertificateId)
{
    m_gaapCertificateId = _gaapCertificateId;
    m_gaapCertificateIdHasBeenSet = true;
}

bool SetAuthenticationRequest::GaapCertificateIdHasBeenSet() const
{
    return m_gaapCertificateIdHasBeenSet;
}

string SetAuthenticationRequest::GetRealServerCertificateId() const
{
    return m_realServerCertificateId;
}

void SetAuthenticationRequest::SetRealServerCertificateId(const string& _realServerCertificateId)
{
    m_realServerCertificateId = _realServerCertificateId;
    m_realServerCertificateIdHasBeenSet = true;
}

bool SetAuthenticationRequest::RealServerCertificateIdHasBeenSet() const
{
    return m_realServerCertificateIdHasBeenSet;
}

string SetAuthenticationRequest::GetRealServerCertificateDomain() const
{
    return m_realServerCertificateDomain;
}

void SetAuthenticationRequest::SetRealServerCertificateDomain(const string& _realServerCertificateDomain)
{
    m_realServerCertificateDomain = _realServerCertificateDomain;
    m_realServerCertificateDomainHasBeenSet = true;
}

bool SetAuthenticationRequest::RealServerCertificateDomainHasBeenSet() const
{
    return m_realServerCertificateDomainHasBeenSet;
}

vector<string> SetAuthenticationRequest::GetPolyRealServerCertificateIds() const
{
    return m_polyRealServerCertificateIds;
}

void SetAuthenticationRequest::SetPolyRealServerCertificateIds(const vector<string>& _polyRealServerCertificateIds)
{
    m_polyRealServerCertificateIds = _polyRealServerCertificateIds;
    m_polyRealServerCertificateIdsHasBeenSet = true;
}

bool SetAuthenticationRequest::PolyRealServerCertificateIdsHasBeenSet() const
{
    return m_polyRealServerCertificateIdsHasBeenSet;
}

vector<string> SetAuthenticationRequest::GetTLSSupportVersion() const
{
    return m_tLSSupportVersion;
}

void SetAuthenticationRequest::SetTLSSupportVersion(const vector<string>& _tLSSupportVersion)
{
    m_tLSSupportVersion = _tLSSupportVersion;
    m_tLSSupportVersionHasBeenSet = true;
}

bool SetAuthenticationRequest::TLSSupportVersionHasBeenSet() const
{
    return m_tLSSupportVersionHasBeenSet;
}

string SetAuthenticationRequest::GetTLSCiphers() const
{
    return m_tLSCiphers;
}

void SetAuthenticationRequest::SetTLSCiphers(const string& _tLSCiphers)
{
    m_tLSCiphers = _tLSCiphers;
    m_tLSCiphersHasBeenSet = true;
}

bool SetAuthenticationRequest::TLSCiphersHasBeenSet() const
{
    return m_tLSCiphersHasBeenSet;
}


