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

#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifySpartaProtectionRequest::ModifySpartaProtectionRequest() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_upstreamSchemeHasBeenSet(false),
    m_httpsUpstreamPortHasBeenSet(false),
    m_httpsRewriteHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_upstreamDomainHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_isHttp2HasBeenSet(false),
    m_isWebsocketHasBeenSet(false),
    m_loadBalanceHasBeenSet(false),
    m_isGrayHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_isKeepAliveHasBeenSet(false),
    m_anycastHasBeenSet(false),
    m_weightsHasBeenSet(false),
    m_activeCheckHasBeenSet(false),
    m_tLSVersionHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_cipherTemplateHasBeenSet(false),
    m_proxyReadTimeoutHasBeenSet(false),
    m_proxySendTimeoutHasBeenSet(false),
    m_sniTypeHasBeenSet(false),
    m_sniHostHasBeenSet(false),
    m_ipHeadersHasBeenSet(false),
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

string ModifySpartaProtectionRequest::ToJsonString() const
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

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
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

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCdn, allocator);
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

    if (m_httpsRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRewrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_httpsRewrite, allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upstreamType, allocator);
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
        d.AddMember(iKey, m_loadBalance, allocator);
    }

    if (m_isGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGray";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGray, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
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

    if (m_cipherTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cipherTemplate, allocator);
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


string ModifySpartaProtectionRequest::GetDomain() const
{
    return m_domain;
}

void ModifySpartaProtectionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifySpartaProtectionRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifySpartaProtectionRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string ModifySpartaProtectionRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifySpartaProtectionRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetCertType() const
{
    return m_certType;
}

void ModifySpartaProtectionRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string ModifySpartaProtectionRequest::GetCert() const
{
    return m_cert;
}

void ModifySpartaProtectionRequest::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string ModifySpartaProtectionRequest::GetPrivateKey() const
{
    return m_privateKey;
}

void ModifySpartaProtectionRequest::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string ModifySpartaProtectionRequest::GetSSLId() const
{
    return m_sSLId;
}

void ModifySpartaProtectionRequest::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetIsCdn() const
{
    return m_isCdn;
}

void ModifySpartaProtectionRequest::SetIsCdn(const int64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

string ModifySpartaProtectionRequest::GetUpstreamScheme() const
{
    return m_upstreamScheme;
}

void ModifySpartaProtectionRequest::SetUpstreamScheme(const string& _upstreamScheme)
{
    m_upstreamScheme = _upstreamScheme;
    m_upstreamSchemeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamSchemeHasBeenSet() const
{
    return m_upstreamSchemeHasBeenSet;
}

string ModifySpartaProtectionRequest::GetHttpsUpstreamPort() const
{
    return m_httpsUpstreamPort;
}

void ModifySpartaProtectionRequest::SetHttpsUpstreamPort(const string& _httpsUpstreamPort)
{
    m_httpsUpstreamPort = _httpsUpstreamPort;
    m_httpsUpstreamPortHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::HttpsUpstreamPortHasBeenSet() const
{
    return m_httpsUpstreamPortHasBeenSet;
}

uint64_t ModifySpartaProtectionRequest::GetHttpsRewrite() const
{
    return m_httpsRewrite;
}

void ModifySpartaProtectionRequest::SetHttpsRewrite(const uint64_t& _httpsRewrite)
{
    m_httpsRewrite = _httpsRewrite;
    m_httpsRewriteHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::HttpsRewriteHasBeenSet() const
{
    return m_httpsRewriteHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void ModifySpartaProtectionRequest::SetUpstreamType(const int64_t& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

string ModifySpartaProtectionRequest::GetUpstreamDomain() const
{
    return m_upstreamDomain;
}

void ModifySpartaProtectionRequest::SetUpstreamDomain(const string& _upstreamDomain)
{
    m_upstreamDomain = _upstreamDomain;
    m_upstreamDomainHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamDomainHasBeenSet() const
{
    return m_upstreamDomainHasBeenSet;
}

vector<string> ModifySpartaProtectionRequest::GetSrcList() const
{
    return m_srcList;
}

void ModifySpartaProtectionRequest::SetSrcList(const vector<string>& _srcList)
{
    m_srcList = _srcList;
    m_srcListHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetIsHttp2() const
{
    return m_isHttp2;
}

void ModifySpartaProtectionRequest::SetIsHttp2(const int64_t& _isHttp2)
{
    m_isHttp2 = _isHttp2;
    m_isHttp2HasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IsHttp2HasBeenSet() const
{
    return m_isHttp2HasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetIsWebsocket() const
{
    return m_isWebsocket;
}

void ModifySpartaProtectionRequest::SetIsWebsocket(const int64_t& _isWebsocket)
{
    m_isWebsocket = _isWebsocket;
    m_isWebsocketHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IsWebsocketHasBeenSet() const
{
    return m_isWebsocketHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetLoadBalance() const
{
    return m_loadBalance;
}

void ModifySpartaProtectionRequest::SetLoadBalance(const int64_t& _loadBalance)
{
    m_loadBalance = _loadBalance;
    m_loadBalanceHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::LoadBalanceHasBeenSet() const
{
    return m_loadBalanceHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetIsGray() const
{
    return m_isGray;
}

void ModifySpartaProtectionRequest::SetIsGray(const int64_t& _isGray)
{
    m_isGray = _isGray;
    m_isGrayHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IsGrayHasBeenSet() const
{
    return m_isGrayHasBeenSet;
}

string ModifySpartaProtectionRequest::GetEdition() const
{
    return m_edition;
}

void ModifySpartaProtectionRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

vector<SpartaProtectionPort> ModifySpartaProtectionRequest::GetPorts() const
{
    return m_ports;
}

void ModifySpartaProtectionRequest::SetPorts(const vector<SpartaProtectionPort>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string ModifySpartaProtectionRequest::GetIsKeepAlive() const
{
    return m_isKeepAlive;
}

void ModifySpartaProtectionRequest::SetIsKeepAlive(const string& _isKeepAlive)
{
    m_isKeepAlive = _isKeepAlive;
    m_isKeepAliveHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IsKeepAliveHasBeenSet() const
{
    return m_isKeepAliveHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetAnycast() const
{
    return m_anycast;
}

void ModifySpartaProtectionRequest::SetAnycast(const int64_t& _anycast)
{
    m_anycast = _anycast;
    m_anycastHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::AnycastHasBeenSet() const
{
    return m_anycastHasBeenSet;
}

vector<int64_t> ModifySpartaProtectionRequest::GetWeights() const
{
    return m_weights;
}

void ModifySpartaProtectionRequest::SetWeights(const vector<int64_t>& _weights)
{
    m_weights = _weights;
    m_weightsHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::WeightsHasBeenSet() const
{
    return m_weightsHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetActiveCheck() const
{
    return m_activeCheck;
}

void ModifySpartaProtectionRequest::SetActiveCheck(const int64_t& _activeCheck)
{
    m_activeCheck = _activeCheck;
    m_activeCheckHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::ActiveCheckHasBeenSet() const
{
    return m_activeCheckHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetTLSVersion() const
{
    return m_tLSVersion;
}

void ModifySpartaProtectionRequest::SetTLSVersion(const int64_t& _tLSVersion)
{
    m_tLSVersion = _tLSVersion;
    m_tLSVersionHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::TLSVersionHasBeenSet() const
{
    return m_tLSVersionHasBeenSet;
}

vector<int64_t> ModifySpartaProtectionRequest::GetCiphers() const
{
    return m_ciphers;
}

void ModifySpartaProtectionRequest::SetCiphers(const vector<int64_t>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetCipherTemplate() const
{
    return m_cipherTemplate;
}

void ModifySpartaProtectionRequest::SetCipherTemplate(const int64_t& _cipherTemplate)
{
    m_cipherTemplate = _cipherTemplate;
    m_cipherTemplateHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::CipherTemplateHasBeenSet() const
{
    return m_cipherTemplateHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetProxyReadTimeout() const
{
    return m_proxyReadTimeout;
}

void ModifySpartaProtectionRequest::SetProxyReadTimeout(const int64_t& _proxyReadTimeout)
{
    m_proxyReadTimeout = _proxyReadTimeout;
    m_proxyReadTimeoutHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::ProxyReadTimeoutHasBeenSet() const
{
    return m_proxyReadTimeoutHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetProxySendTimeout() const
{
    return m_proxySendTimeout;
}

void ModifySpartaProtectionRequest::SetProxySendTimeout(const int64_t& _proxySendTimeout)
{
    m_proxySendTimeout = _proxySendTimeout;
    m_proxySendTimeoutHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::ProxySendTimeoutHasBeenSet() const
{
    return m_proxySendTimeoutHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetSniType() const
{
    return m_sniType;
}

void ModifySpartaProtectionRequest::SetSniType(const int64_t& _sniType)
{
    m_sniType = _sniType;
    m_sniTypeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::SniTypeHasBeenSet() const
{
    return m_sniTypeHasBeenSet;
}

string ModifySpartaProtectionRequest::GetSniHost() const
{
    return m_sniHost;
}

void ModifySpartaProtectionRequest::SetSniHost(const string& _sniHost)
{
    m_sniHost = _sniHost;
    m_sniHostHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::SniHostHasBeenSet() const
{
    return m_sniHostHasBeenSet;
}

vector<string> ModifySpartaProtectionRequest::GetIpHeaders() const
{
    return m_ipHeaders;
}

void ModifySpartaProtectionRequest::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetXFFReset() const
{
    return m_xFFReset;
}

void ModifySpartaProtectionRequest::SetXFFReset(const int64_t& _xFFReset)
{
    m_xFFReset = _xFFReset;
    m_xFFResetHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::XFFResetHasBeenSet() const
{
    return m_xFFResetHasBeenSet;
}

string ModifySpartaProtectionRequest::GetNote() const
{
    return m_note;
}

void ModifySpartaProtectionRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string ModifySpartaProtectionRequest::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void ModifySpartaProtectionRequest::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetProxyBuffer() const
{
    return m_proxyBuffer;
}

void ModifySpartaProtectionRequest::SetProxyBuffer(const int64_t& _proxyBuffer)
{
    m_proxyBuffer = _proxyBuffer;
    m_proxyBufferHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::ProxyBufferHasBeenSet() const
{
    return m_proxyBufferHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetProbeStatus() const
{
    return m_probeStatus;
}

void ModifySpartaProtectionRequest::SetProbeStatus(const int64_t& _probeStatus)
{
    m_probeStatus = _probeStatus;
    m_probeStatusHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::ProbeStatusHasBeenSet() const
{
    return m_probeStatusHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetGmType() const
{
    return m_gmType;
}

void ModifySpartaProtectionRequest::SetGmType(const int64_t& _gmType)
{
    m_gmType = _gmType;
    m_gmTypeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmTypeHasBeenSet() const
{
    return m_gmTypeHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetGmCertType() const
{
    return m_gmCertType;
}

void ModifySpartaProtectionRequest::SetGmCertType(const int64_t& _gmCertType)
{
    m_gmCertType = _gmCertType;
    m_gmCertTypeHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmCertTypeHasBeenSet() const
{
    return m_gmCertTypeHasBeenSet;
}

string ModifySpartaProtectionRequest::GetGmCert() const
{
    return m_gmCert;
}

void ModifySpartaProtectionRequest::SetGmCert(const string& _gmCert)
{
    m_gmCert = _gmCert;
    m_gmCertHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmCertHasBeenSet() const
{
    return m_gmCertHasBeenSet;
}

string ModifySpartaProtectionRequest::GetGmPrivateKey() const
{
    return m_gmPrivateKey;
}

void ModifySpartaProtectionRequest::SetGmPrivateKey(const string& _gmPrivateKey)
{
    m_gmPrivateKey = _gmPrivateKey;
    m_gmPrivateKeyHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmPrivateKeyHasBeenSet() const
{
    return m_gmPrivateKeyHasBeenSet;
}

string ModifySpartaProtectionRequest::GetGmEncCert() const
{
    return m_gmEncCert;
}

void ModifySpartaProtectionRequest::SetGmEncCert(const string& _gmEncCert)
{
    m_gmEncCert = _gmEncCert;
    m_gmEncCertHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmEncCertHasBeenSet() const
{
    return m_gmEncCertHasBeenSet;
}

string ModifySpartaProtectionRequest::GetGmEncPrivateKey() const
{
    return m_gmEncPrivateKey;
}

void ModifySpartaProtectionRequest::SetGmEncPrivateKey(const string& _gmEncPrivateKey)
{
    m_gmEncPrivateKey = _gmEncPrivateKey;
    m_gmEncPrivateKeyHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmEncPrivateKeyHasBeenSet() const
{
    return m_gmEncPrivateKeyHasBeenSet;
}

string ModifySpartaProtectionRequest::GetGmSSLId() const
{
    return m_gmSSLId;
}

void ModifySpartaProtectionRequest::SetGmSSLId(const string& _gmSSLId)
{
    m_gmSSLId = _gmSSLId;
    m_gmSSLIdHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::GmSSLIdHasBeenSet() const
{
    return m_gmSSLIdHasBeenSet;
}

int64_t ModifySpartaProtectionRequest::GetUpstreamPolicy() const
{
    return m_upstreamPolicy;
}

void ModifySpartaProtectionRequest::SetUpstreamPolicy(const int64_t& _upstreamPolicy)
{
    m_upstreamPolicy = _upstreamPolicy;
    m_upstreamPolicyHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamPolicyHasBeenSet() const
{
    return m_upstreamPolicyHasBeenSet;
}

vector<UpstreamRule> ModifySpartaProtectionRequest::GetUpstreamRules() const
{
    return m_upstreamRules;
}

void ModifySpartaProtectionRequest::SetUpstreamRules(const vector<UpstreamRule>& _upstreamRules)
{
    m_upstreamRules = _upstreamRules;
    m_upstreamRulesHasBeenSet = true;
}

bool ModifySpartaProtectionRequest::UpstreamRulesHasBeenSet() const
{
    return m_upstreamRulesHasBeenSet;
}


