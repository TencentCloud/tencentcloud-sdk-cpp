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

#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddSpartaProtectionRequest::AddSpartaProtectionRequest() :
    m_domainHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_isWebsocketHasBeenSet(false),
    m_loadBalanceHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_isKeepAliveHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ipHeadersHasBeenSet(false),
    m_upstreamSchemeHasBeenSet(false),
    m_httpsUpstreamPortHasBeenSet(false),
    m_isGrayHasBeenSet(false),
    m_grayAreasHasBeenSet(false),
    m_httpsRewriteHasBeenSet(false),
    m_upstreamDomainHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_isHttp2HasBeenSet(false),
    m_editionHasBeenSet(false),
    m_anycastHasBeenSet(false),
    m_weightsHasBeenSet(false),
    m_activeCheckHasBeenSet(false),
    m_tLSVersionHasBeenSet(false),
    m_cipherTemplateHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_proxyReadTimeoutHasBeenSet(false),
    m_proxySendTimeoutHasBeenSet(false),
    m_sniTypeHasBeenSet(false),
    m_sniHostHasBeenSet(false),
    m_xFFResetHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_upstreamHostHasBeenSet(false),
    m_proxyBufferHasBeenSet(false),
    m_probeStatusHasBeenSet(false),
    m_gmTypeHasBeenSet(false),
    m_gmCertTypeHasBeenSet(false),
    m_gmCertHasBeenSet(false),
    m_gmPrivateKeyHasBeenSet(false),
    m_gmEncCertHasBeenSet(false),
    m_gmEncPrivateKeyHasBeenSet(false),
    m_gmSSLIdHasBeenSet(false),
    m_upstreamPolicyHasBeenSet(false),
    m_upstreamRulesHasBeenSet(false)
{
}

string AddSpartaProtectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCdn, allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upstreamType, allocator);
    }

    if (m_isWebsocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebsocket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWebsocket, allocator);
    }

    if (m_loadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isKeepAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepAlive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isKeepAlive.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipHeaders.begin(); itr != m_ipHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_upstreamSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamScheme";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsUpstreamPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsUpstreamPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpsUpstreamPort.c_str(), allocator).Move(), allocator);
    }

    if (m_isGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGray";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGray, allocator);
    }

    if (m_grayAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayAreas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_grayAreas.begin(); itr != m_grayAreas.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_httpsRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRewrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_httpsRewrite, allocator);
    }

    if (m_upstreamDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_srcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcList.begin(); itr != m_srcList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHttp2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHttp2, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_anycastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Anycast";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anycast, allocator);
    }

    if (m_weightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weights";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weights.begin(); itr != m_weights.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_activeCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activeCheck, allocator);
    }

    if (m_tLSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tLSVersion, allocator);
    }

    if (m_cipherTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cipherTemplate, allocator);
    }

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_proxyReadTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyReadTimeout, allocator);
    }

    if (m_proxySendTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySendTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxySendTimeout, allocator);
    }

    if (m_sniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sniType, allocator);
    }

    if (m_sniHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sniHost.c_str(), allocator).Move(), allocator);
    }

    if (m_xFFResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XFFReset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_xFFReset, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamHost.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyBuffer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyBuffer, allocator);
    }

    if (m_probeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_probeStatus, allocator);
    }

    if (m_gmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gmType, allocator);
    }

    if (m_gmCertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gmCertType, allocator);
    }

    if (m_gmCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmEncCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmEncPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmSSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmSSLId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gmSSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upstreamPolicy, allocator);
    }

    if (m_upstreamRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upstreamRules.begin(); itr != m_upstreamRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddSpartaProtectionRequest::GetDomain() const
{
    return m_domain;
}

void AddSpartaProtectionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddSpartaProtectionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetCertType() const
{
    return m_certType;
}

void AddSpartaProtectionRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetIsCdn() const
{
    return m_isCdn;
}

void AddSpartaProtectionRequest::SetIsCdn(const int64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool AddSpartaProtectionRequest::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void AddSpartaProtectionRequest::SetUpstreamType(const int64_t& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetIsWebsocket() const
{
    return m_isWebsocket;
}

void AddSpartaProtectionRequest::SetIsWebsocket(const int64_t& _isWebsocket)
{
    m_isWebsocket = _isWebsocket;
    m_isWebsocketHasBeenSet = true;
}

bool AddSpartaProtectionRequest::IsWebsocketHasBeenSet() const
{
    return m_isWebsocketHasBeenSet;
}

string AddSpartaProtectionRequest::GetLoadBalance() const
{
    return m_loadBalance;
}

void AddSpartaProtectionRequest::SetLoadBalance(const string& _loadBalance)
{
    m_loadBalance = _loadBalance;
    m_loadBalanceHasBeenSet = true;
}

bool AddSpartaProtectionRequest::LoadBalanceHasBeenSet() const
{
    return m_loadBalanceHasBeenSet;
}

vector<PortItem> AddSpartaProtectionRequest::GetPorts() const
{
    return m_ports;
}

void AddSpartaProtectionRequest::SetPorts(const vector<PortItem>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool AddSpartaProtectionRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string AddSpartaProtectionRequest::GetIsKeepAlive() const
{
    return m_isKeepAlive;
}

void AddSpartaProtectionRequest::SetIsKeepAlive(const string& _isKeepAlive)
{
    m_isKeepAlive = _isKeepAlive;
    m_isKeepAliveHasBeenSet = true;
}

bool AddSpartaProtectionRequest::IsKeepAliveHasBeenSet() const
{
    return m_isKeepAliveHasBeenSet;
}

string AddSpartaProtectionRequest::GetInstanceID() const
{
    return m_instanceID;
}

void AddSpartaProtectionRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool AddSpartaProtectionRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string AddSpartaProtectionRequest::GetCert() const
{
    return m_cert;
}

void AddSpartaProtectionRequest::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool AddSpartaProtectionRequest::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string AddSpartaProtectionRequest::GetPrivateKey() const
{
    return m_privateKey;
}

void AddSpartaProtectionRequest::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool AddSpartaProtectionRequest::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string AddSpartaProtectionRequest::GetSSLId() const
{
    return m_sSLId;
}

void AddSpartaProtectionRequest::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool AddSpartaProtectionRequest::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string AddSpartaProtectionRequest::GetResourceId() const
{
    return m_resourceId;
}

void AddSpartaProtectionRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<string> AddSpartaProtectionRequest::GetIpHeaders() const
{
    return m_ipHeaders;
}

void AddSpartaProtectionRequest::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool AddSpartaProtectionRequest::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

string AddSpartaProtectionRequest::GetUpstreamScheme() const
{
    return m_upstreamScheme;
}

void AddSpartaProtectionRequest::SetUpstreamScheme(const string& _upstreamScheme)
{
    m_upstreamScheme = _upstreamScheme;
    m_upstreamSchemeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamSchemeHasBeenSet() const
{
    return m_upstreamSchemeHasBeenSet;
}

string AddSpartaProtectionRequest::GetHttpsUpstreamPort() const
{
    return m_httpsUpstreamPort;
}

void AddSpartaProtectionRequest::SetHttpsUpstreamPort(const string& _httpsUpstreamPort)
{
    m_httpsUpstreamPort = _httpsUpstreamPort;
    m_httpsUpstreamPortHasBeenSet = true;
}

bool AddSpartaProtectionRequest::HttpsUpstreamPortHasBeenSet() const
{
    return m_httpsUpstreamPortHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetIsGray() const
{
    return m_isGray;
}

void AddSpartaProtectionRequest::SetIsGray(const int64_t& _isGray)
{
    m_isGray = _isGray;
    m_isGrayHasBeenSet = true;
}

bool AddSpartaProtectionRequest::IsGrayHasBeenSet() const
{
    return m_isGrayHasBeenSet;
}

vector<string> AddSpartaProtectionRequest::GetGrayAreas() const
{
    return m_grayAreas;
}

void AddSpartaProtectionRequest::SetGrayAreas(const vector<string>& _grayAreas)
{
    m_grayAreas = _grayAreas;
    m_grayAreasHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GrayAreasHasBeenSet() const
{
    return m_grayAreasHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetHttpsRewrite() const
{
    return m_httpsRewrite;
}

void AddSpartaProtectionRequest::SetHttpsRewrite(const int64_t& _httpsRewrite)
{
    m_httpsRewrite = _httpsRewrite;
    m_httpsRewriteHasBeenSet = true;
}

bool AddSpartaProtectionRequest::HttpsRewriteHasBeenSet() const
{
    return m_httpsRewriteHasBeenSet;
}

string AddSpartaProtectionRequest::GetUpstreamDomain() const
{
    return m_upstreamDomain;
}

void AddSpartaProtectionRequest::SetUpstreamDomain(const string& _upstreamDomain)
{
    m_upstreamDomain = _upstreamDomain;
    m_upstreamDomainHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamDomainHasBeenSet() const
{
    return m_upstreamDomainHasBeenSet;
}

vector<string> AddSpartaProtectionRequest::GetSrcList() const
{
    return m_srcList;
}

void AddSpartaProtectionRequest::SetSrcList(const vector<string>& _srcList)
{
    m_srcList = _srcList;
    m_srcListHasBeenSet = true;
}

bool AddSpartaProtectionRequest::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetIsHttp2() const
{
    return m_isHttp2;
}

void AddSpartaProtectionRequest::SetIsHttp2(const int64_t& _isHttp2)
{
    m_isHttp2 = _isHttp2;
    m_isHttp2HasBeenSet = true;
}

bool AddSpartaProtectionRequest::IsHttp2HasBeenSet() const
{
    return m_isHttp2HasBeenSet;
}

string AddSpartaProtectionRequest::GetEdition() const
{
    return m_edition;
}

void AddSpartaProtectionRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool AddSpartaProtectionRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetAnycast() const
{
    return m_anycast;
}

void AddSpartaProtectionRequest::SetAnycast(const int64_t& _anycast)
{
    m_anycast = _anycast;
    m_anycastHasBeenSet = true;
}

bool AddSpartaProtectionRequest::AnycastHasBeenSet() const
{
    return m_anycastHasBeenSet;
}

vector<int64_t> AddSpartaProtectionRequest::GetWeights() const
{
    return m_weights;
}

void AddSpartaProtectionRequest::SetWeights(const vector<int64_t>& _weights)
{
    m_weights = _weights;
    m_weightsHasBeenSet = true;
}

bool AddSpartaProtectionRequest::WeightsHasBeenSet() const
{
    return m_weightsHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetActiveCheck() const
{
    return m_activeCheck;
}

void AddSpartaProtectionRequest::SetActiveCheck(const int64_t& _activeCheck)
{
    m_activeCheck = _activeCheck;
    m_activeCheckHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ActiveCheckHasBeenSet() const
{
    return m_activeCheckHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetTLSVersion() const
{
    return m_tLSVersion;
}

void AddSpartaProtectionRequest::SetTLSVersion(const int64_t& _tLSVersion)
{
    m_tLSVersion = _tLSVersion;
    m_tLSVersionHasBeenSet = true;
}

bool AddSpartaProtectionRequest::TLSVersionHasBeenSet() const
{
    return m_tLSVersionHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetCipherTemplate() const
{
    return m_cipherTemplate;
}

void AddSpartaProtectionRequest::SetCipherTemplate(const int64_t& _cipherTemplate)
{
    m_cipherTemplate = _cipherTemplate;
    m_cipherTemplateHasBeenSet = true;
}

bool AddSpartaProtectionRequest::CipherTemplateHasBeenSet() const
{
    return m_cipherTemplateHasBeenSet;
}

vector<int64_t> AddSpartaProtectionRequest::GetCiphers() const
{
    return m_ciphers;
}

void AddSpartaProtectionRequest::SetCiphers(const vector<int64_t>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool AddSpartaProtectionRequest::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetProxyReadTimeout() const
{
    return m_proxyReadTimeout;
}

void AddSpartaProtectionRequest::SetProxyReadTimeout(const int64_t& _proxyReadTimeout)
{
    m_proxyReadTimeout = _proxyReadTimeout;
    m_proxyReadTimeoutHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ProxyReadTimeoutHasBeenSet() const
{
    return m_proxyReadTimeoutHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetProxySendTimeout() const
{
    return m_proxySendTimeout;
}

void AddSpartaProtectionRequest::SetProxySendTimeout(const int64_t& _proxySendTimeout)
{
    m_proxySendTimeout = _proxySendTimeout;
    m_proxySendTimeoutHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ProxySendTimeoutHasBeenSet() const
{
    return m_proxySendTimeoutHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetSniType() const
{
    return m_sniType;
}

void AddSpartaProtectionRequest::SetSniType(const int64_t& _sniType)
{
    m_sniType = _sniType;
    m_sniTypeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::SniTypeHasBeenSet() const
{
    return m_sniTypeHasBeenSet;
}

string AddSpartaProtectionRequest::GetSniHost() const
{
    return m_sniHost;
}

void AddSpartaProtectionRequest::SetSniHost(const string& _sniHost)
{
    m_sniHost = _sniHost;
    m_sniHostHasBeenSet = true;
}

bool AddSpartaProtectionRequest::SniHostHasBeenSet() const
{
    return m_sniHostHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetXFFReset() const
{
    return m_xFFReset;
}

void AddSpartaProtectionRequest::SetXFFReset(const int64_t& _xFFReset)
{
    m_xFFReset = _xFFReset;
    m_xFFResetHasBeenSet = true;
}

bool AddSpartaProtectionRequest::XFFResetHasBeenSet() const
{
    return m_xFFResetHasBeenSet;
}

string AddSpartaProtectionRequest::GetNote() const
{
    return m_note;
}

void AddSpartaProtectionRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool AddSpartaProtectionRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string AddSpartaProtectionRequest::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void AddSpartaProtectionRequest::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetProxyBuffer() const
{
    return m_proxyBuffer;
}

void AddSpartaProtectionRequest::SetProxyBuffer(const int64_t& _proxyBuffer)
{
    m_proxyBuffer = _proxyBuffer;
    m_proxyBufferHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ProxyBufferHasBeenSet() const
{
    return m_proxyBufferHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetProbeStatus() const
{
    return m_probeStatus;
}

void AddSpartaProtectionRequest::SetProbeStatus(const int64_t& _probeStatus)
{
    m_probeStatus = _probeStatus;
    m_probeStatusHasBeenSet = true;
}

bool AddSpartaProtectionRequest::ProbeStatusHasBeenSet() const
{
    return m_probeStatusHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetGmType() const
{
    return m_gmType;
}

void AddSpartaProtectionRequest::SetGmType(const int64_t& _gmType)
{
    m_gmType = _gmType;
    m_gmTypeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmTypeHasBeenSet() const
{
    return m_gmTypeHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetGmCertType() const
{
    return m_gmCertType;
}

void AddSpartaProtectionRequest::SetGmCertType(const int64_t& _gmCertType)
{
    m_gmCertType = _gmCertType;
    m_gmCertTypeHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmCertTypeHasBeenSet() const
{
    return m_gmCertTypeHasBeenSet;
}

string AddSpartaProtectionRequest::GetGmCert() const
{
    return m_gmCert;
}

void AddSpartaProtectionRequest::SetGmCert(const string& _gmCert)
{
    m_gmCert = _gmCert;
    m_gmCertHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmCertHasBeenSet() const
{
    return m_gmCertHasBeenSet;
}

string AddSpartaProtectionRequest::GetGmPrivateKey() const
{
    return m_gmPrivateKey;
}

void AddSpartaProtectionRequest::SetGmPrivateKey(const string& _gmPrivateKey)
{
    m_gmPrivateKey = _gmPrivateKey;
    m_gmPrivateKeyHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmPrivateKeyHasBeenSet() const
{
    return m_gmPrivateKeyHasBeenSet;
}

string AddSpartaProtectionRequest::GetGmEncCert() const
{
    return m_gmEncCert;
}

void AddSpartaProtectionRequest::SetGmEncCert(const string& _gmEncCert)
{
    m_gmEncCert = _gmEncCert;
    m_gmEncCertHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmEncCertHasBeenSet() const
{
    return m_gmEncCertHasBeenSet;
}

string AddSpartaProtectionRequest::GetGmEncPrivateKey() const
{
    return m_gmEncPrivateKey;
}

void AddSpartaProtectionRequest::SetGmEncPrivateKey(const string& _gmEncPrivateKey)
{
    m_gmEncPrivateKey = _gmEncPrivateKey;
    m_gmEncPrivateKeyHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmEncPrivateKeyHasBeenSet() const
{
    return m_gmEncPrivateKeyHasBeenSet;
}

string AddSpartaProtectionRequest::GetGmSSLId() const
{
    return m_gmSSLId;
}

void AddSpartaProtectionRequest::SetGmSSLId(const string& _gmSSLId)
{
    m_gmSSLId = _gmSSLId;
    m_gmSSLIdHasBeenSet = true;
}

bool AddSpartaProtectionRequest::GmSSLIdHasBeenSet() const
{
    return m_gmSSLIdHasBeenSet;
}

int64_t AddSpartaProtectionRequest::GetUpstreamPolicy() const
{
    return m_upstreamPolicy;
}

void AddSpartaProtectionRequest::SetUpstreamPolicy(const int64_t& _upstreamPolicy)
{
    m_upstreamPolicy = _upstreamPolicy;
    m_upstreamPolicyHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamPolicyHasBeenSet() const
{
    return m_upstreamPolicyHasBeenSet;
}

vector<UpstreamRule> AddSpartaProtectionRequest::GetUpstreamRules() const
{
    return m_upstreamRules;
}

void AddSpartaProtectionRequest::SetUpstreamRules(const vector<UpstreamRule>& _upstreamRules)
{
    m_upstreamRules = _upstreamRules;
    m_upstreamRulesHasBeenSet = true;
}

bool AddSpartaProtectionRequest::UpstreamRulesHasBeenSet() const
{
    return m_upstreamRulesHasBeenSet;
}


