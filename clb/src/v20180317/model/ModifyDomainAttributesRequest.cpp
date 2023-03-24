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

#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyDomainAttributesRequest::ModifyDomainAttributesRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_newDomainHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_defaultServerHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_newDefaultServerDomainHasBeenSet(false),
    m_newDomainsHasBeenSet(false),
    m_multiCertInfoHasBeenSet(false)
{
}

string ModifyDomainAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_newDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http2, allocator);
    }

    if (m_defaultServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultServer, allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quic, allocator);
    }

    if (m_newDefaultServerDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDefaultServerDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDefaultServerDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_newDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_newDomains.begin(); itr != m_newDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_multiCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiCertInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiCertInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainAttributesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyDomainAttributesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyDomainAttributesRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyDomainAttributesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyDomainAttributesRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainAttributesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDomainAttributesRequest::GetNewDomain() const
{
    return m_newDomain;
}

void ModifyDomainAttributesRequest::SetNewDomain(const string& _newDomain)
{
    m_newDomain = _newDomain;
    m_newDomainHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::NewDomainHasBeenSet() const
{
    return m_newDomainHasBeenSet;
}

CertificateInput ModifyDomainAttributesRequest::GetCertificate() const
{
    return m_certificate;
}

void ModifyDomainAttributesRequest::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

bool ModifyDomainAttributesRequest::GetHttp2() const
{
    return m_http2;
}

void ModifyDomainAttributesRequest::SetHttp2(const bool& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool ModifyDomainAttributesRequest::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

bool ModifyDomainAttributesRequest::GetDefaultServer() const
{
    return m_defaultServer;
}

void ModifyDomainAttributesRequest::SetDefaultServer(const bool& _defaultServer)
{
    m_defaultServer = _defaultServer;
    m_defaultServerHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::DefaultServerHasBeenSet() const
{
    return m_defaultServerHasBeenSet;
}

bool ModifyDomainAttributesRequest::GetQuic() const
{
    return m_quic;
}

void ModifyDomainAttributesRequest::SetQuic(const bool& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

string ModifyDomainAttributesRequest::GetNewDefaultServerDomain() const
{
    return m_newDefaultServerDomain;
}

void ModifyDomainAttributesRequest::SetNewDefaultServerDomain(const string& _newDefaultServerDomain)
{
    m_newDefaultServerDomain = _newDefaultServerDomain;
    m_newDefaultServerDomainHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::NewDefaultServerDomainHasBeenSet() const
{
    return m_newDefaultServerDomainHasBeenSet;
}

vector<string> ModifyDomainAttributesRequest::GetNewDomains() const
{
    return m_newDomains;
}

void ModifyDomainAttributesRequest::SetNewDomains(const vector<string>& _newDomains)
{
    m_newDomains = _newDomains;
    m_newDomainsHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::NewDomainsHasBeenSet() const
{
    return m_newDomainsHasBeenSet;
}

MultiCertInfo ModifyDomainAttributesRequest::GetMultiCertInfo() const
{
    return m_multiCertInfo;
}

void ModifyDomainAttributesRequest::SetMultiCertInfo(const MultiCertInfo& _multiCertInfo)
{
    m_multiCertInfo = _multiCertInfo;
    m_multiCertInfoHasBeenSet = true;
}

bool ModifyDomainAttributesRequest::MultiCertInfoHasBeenSet() const
{
    return m_multiCertInfoHasBeenSet;
}


