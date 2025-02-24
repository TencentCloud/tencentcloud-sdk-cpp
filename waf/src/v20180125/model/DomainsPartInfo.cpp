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

#include <tencentcloud/waf/v20180125/model/DomainsPartInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DomainsPartInfo::DomainsPartInfo() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_certHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_httpsRewriteHasBeenSet(false),
    m_httpsUpstreamPortHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_isGrayHasBeenSet(false),
    m_isHttp2HasBeenSet(false),
    m_isWebsocketHasBeenSet(false),
    m_loadBalanceHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_upstreamDomainHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_upstreamSchemeHasBeenSet(false),
    m_clsHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_isKeepAliveHasBeenSet(false),
    m_activeCheckHasBeenSet(false),
    m_tLSVersionHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_cipherTemplateHasBeenSet(false),
    m_proxyReadTimeoutHasBeenSet(false),
    m_proxySendTimeoutHasBeenSet(false),
    m_sniTypeHasBeenSet(false),
    m_sniHostHasBeenSet(false),
    m_weightsHasBeenSet(false),
    m_ipHeadersHasBeenSet(false),
    m_xFFResetHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_upstreamHostHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_proxyBufferHasBeenSet(false),
    m_gmTypeHasBeenSet(false),
    m_gmCertTypeHasBeenSet(false),
    m_gmCertHasBeenSet(false),
    m_gmPrivateKeyHasBeenSet(false),
    m_gmEncCertHasBeenSet(false),
    m_gmEncPrivateKeyHasBeenSet(false),
    m_gmSSLIdHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_probeStatusHasBeenSet(false),
    m_upstreamPolicyHasBeenSet(false),
    m_upstreamRulesHasBeenSet(false)
{
}

CoreInternalOutcome DomainsPartInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Engine` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_engine = value["Engine"].GetUint64();
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("HttpsRewrite") && !value["HttpsRewrite"].IsNull())
    {
        if (!value["HttpsRewrite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.HttpsRewrite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsRewrite = value["HttpsRewrite"].GetUint64();
        m_httpsRewriteHasBeenSet = true;
    }

    if (value.HasMember("HttpsUpstreamPort") && !value["HttpsUpstreamPort"].IsNull())
    {
        if (!value["HttpsUpstreamPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.HttpsUpstreamPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsUpstreamPort = string(value["HttpsUpstreamPort"].GetString());
        m_httpsUpstreamPortHasBeenSet = true;
    }

    if (value.HasMember("IsCdn") && !value["IsCdn"].IsNull())
    {
        if (!value["IsCdn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsCdn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCdn = value["IsCdn"].GetUint64();
        m_isCdnHasBeenSet = true;
    }

    if (value.HasMember("IsGray") && !value["IsGray"].IsNull())
    {
        if (!value["IsGray"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsGray` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGray = value["IsGray"].GetUint64();
        m_isGrayHasBeenSet = true;
    }

    if (value.HasMember("IsHttp2") && !value["IsHttp2"].IsNull())
    {
        if (!value["IsHttp2"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsHttp2` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isHttp2 = value["IsHttp2"].GetUint64();
        m_isHttp2HasBeenSet = true;
    }

    if (value.HasMember("IsWebsocket") && !value["IsWebsocket"].IsNull())
    {
        if (!value["IsWebsocket"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsWebsocket` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isWebsocket = value["IsWebsocket"].GetUint64();
        m_isWebsocketHasBeenSet = true;
    }

    if (value.HasMember("LoadBalance") && !value["LoadBalance"].IsNull())
    {
        if (!value["LoadBalance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.LoadBalance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalance = value["LoadBalance"].GetUint64();
        m_loadBalanceHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDomain") && !value["UpstreamDomain"].IsNull())
    {
        if (!value["UpstreamDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamDomain = string(value["UpstreamDomain"].GetString());
        m_upstreamDomainHasBeenSet = true;
    }

    if (value.HasMember("UpstreamType") && !value["UpstreamType"].IsNull())
    {
        if (!value["UpstreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = value["UpstreamType"].GetUint64();
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcList") && !value["SrcList"].IsNull())
    {
        if (!value["SrcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SrcList` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcList.push_back((*itr).GetString());
        }
        m_srcListHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.CertType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetUint64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamScheme") && !value["UpstreamScheme"].IsNull())
    {
        if (!value["UpstreamScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamScheme = string(value["UpstreamScheme"].GetString());
        m_upstreamSchemeHasBeenSet = true;
    }

    if (value.HasMember("Cls") && !value["Cls"].IsNull())
    {
        if (!value["Cls"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Cls` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cls = value["Cls"].GetUint64();
        m_clsHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("IsKeepAlive") && !value["IsKeepAlive"].IsNull())
    {
        if (!value["IsKeepAlive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsKeepAlive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isKeepAlive = value["IsKeepAlive"].GetUint64();
        m_isKeepAliveHasBeenSet = true;
    }

    if (value.HasMember("ActiveCheck") && !value["ActiveCheck"].IsNull())
    {
        if (!value["ActiveCheck"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ActiveCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCheck = value["ActiveCheck"].GetUint64();
        m_activeCheckHasBeenSet = true;
    }

    if (value.HasMember("TLSVersion") && !value["TLSVersion"].IsNull())
    {
        if (!value["TLSVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.TLSVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tLSVersion = value["TLSVersion"].GetInt64();
        m_tLSVersionHasBeenSet = true;
    }

    if (value.HasMember("Ciphers") && !value["Ciphers"].IsNull())
    {
        if (!value["Ciphers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Ciphers` is not array type"));

        const rapidjson::Value &tmpValue = value["Ciphers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ciphers.push_back((*itr).GetInt64());
        }
        m_ciphersHasBeenSet = true;
    }

    if (value.HasMember("CipherTemplate") && !value["CipherTemplate"].IsNull())
    {
        if (!value["CipherTemplate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.CipherTemplate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cipherTemplate = value["CipherTemplate"].GetInt64();
        m_cipherTemplateHasBeenSet = true;
    }

    if (value.HasMember("ProxyReadTimeout") && !value["ProxyReadTimeout"].IsNull())
    {
        if (!value["ProxyReadTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProxyReadTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyReadTimeout = value["ProxyReadTimeout"].GetInt64();
        m_proxyReadTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ProxySendTimeout") && !value["ProxySendTimeout"].IsNull())
    {
        if (!value["ProxySendTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProxySendTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxySendTimeout = value["ProxySendTimeout"].GetInt64();
        m_proxySendTimeoutHasBeenSet = true;
    }

    if (value.HasMember("SniType") && !value["SniType"].IsNull())
    {
        if (!value["SniType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SniType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sniType = value["SniType"].GetInt64();
        m_sniTypeHasBeenSet = true;
    }

    if (value.HasMember("SniHost") && !value["SniHost"].IsNull())
    {
        if (!value["SniHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SniHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sniHost = string(value["SniHost"].GetString());
        m_sniHostHasBeenSet = true;
    }

    if (value.HasMember("Weights") && !value["Weights"].IsNull())
    {
        if (!value["Weights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Weights` is not array type"));

        const rapidjson::Value &tmpValue = value["Weights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weights.push_back((*itr).GetString());
        }
        m_weightsHasBeenSet = true;
    }

    if (value.HasMember("IpHeaders") && !value["IpHeaders"].IsNull())
    {
        if (!value["IpHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IpHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["IpHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipHeaders.push_back((*itr).GetString());
        }
        m_ipHeadersHasBeenSet = true;
    }

    if (value.HasMember("XFFReset") && !value["XFFReset"].IsNull())
    {
        if (!value["XFFReset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.XFFReset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xFFReset = value["XFFReset"].GetInt64();
        m_xFFResetHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHost") && !value["UpstreamHost"].IsNull())
    {
        if (!value["UpstreamHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamHost = string(value["UpstreamHost"].GetString());
        m_upstreamHostHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("ProxyBuffer") && !value["ProxyBuffer"].IsNull())
    {
        if (!value["ProxyBuffer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProxyBuffer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyBuffer = value["ProxyBuffer"].GetInt64();
        m_proxyBufferHasBeenSet = true;
    }

    if (value.HasMember("GmType") && !value["GmType"].IsNull())
    {
        if (!value["GmType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gmType = value["GmType"].GetInt64();
        m_gmTypeHasBeenSet = true;
    }

    if (value.HasMember("GmCertType") && !value["GmCertType"].IsNull())
    {
        if (!value["GmCertType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmCertType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gmCertType = value["GmCertType"].GetInt64();
        m_gmCertTypeHasBeenSet = true;
    }

    if (value.HasMember("GmCert") && !value["GmCert"].IsNull())
    {
        if (!value["GmCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gmCert = string(value["GmCert"].GetString());
        m_gmCertHasBeenSet = true;
    }

    if (value.HasMember("GmPrivateKey") && !value["GmPrivateKey"].IsNull())
    {
        if (!value["GmPrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmPrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gmPrivateKey = string(value["GmPrivateKey"].GetString());
        m_gmPrivateKeyHasBeenSet = true;
    }

    if (value.HasMember("GmEncCert") && !value["GmEncCert"].IsNull())
    {
        if (!value["GmEncCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmEncCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gmEncCert = string(value["GmEncCert"].GetString());
        m_gmEncCertHasBeenSet = true;
    }

    if (value.HasMember("GmEncPrivateKey") && !value["GmEncPrivateKey"].IsNull())
    {
        if (!value["GmEncPrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmEncPrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gmEncPrivateKey = string(value["GmEncPrivateKey"].GetString());
        m_gmEncPrivateKeyHasBeenSet = true;
    }

    if (value.HasMember("GmSSLId") && !value["GmSSLId"].IsNull())
    {
        if (!value["GmSSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.GmSSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gmSSLId = string(value["GmSSLId"].GetString());
        m_gmSSLIdHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("ProbeStatus") && !value["ProbeStatus"].IsNull())
    {
        if (!value["ProbeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProbeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeStatus = value["ProbeStatus"].GetInt64();
        m_probeStatusHasBeenSet = true;
    }

    if (value.HasMember("UpstreamPolicy") && !value["UpstreamPolicy"].IsNull())
    {
        if (!value["UpstreamPolicy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamPolicy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamPolicy = value["UpstreamPolicy"].GetInt64();
        m_upstreamPolicyHasBeenSet = true;
    }

    if (value.HasMember("UpstreamRules") && !value["UpstreamRules"].IsNull())
    {
        if (!value["UpstreamRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamRules` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpstreamRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_upstreamRules.push_back(item);
        }
        m_upstreamRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainsPartInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engine, allocator);
    }

    if (m_httpsRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsRewrite, allocator);
    }

    if (m_httpsUpstreamPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsUpstreamPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsUpstreamPort.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCdn, allocator);
    }

    if (m_isGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGray, allocator);
    }

    if (m_isHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHttp2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHttp2, allocator);
    }

    if (m_isWebsocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebsocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWebsocket, allocator);
    }

    if (m_loadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalance, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamType, allocator);
    }

    if (m_srcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcList.begin(); itr != m_srcList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_upstreamSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_clsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cls, allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_isKeepAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepAlive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeepAlive, allocator);
    }

    if (m_activeCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCheck, allocator);
    }

    if (m_tLSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tLSVersion, allocator);
    }

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cipherTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cipherTemplate, allocator);
    }

    if (m_proxyReadTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyReadTimeout, allocator);
    }

    if (m_proxySendTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySendTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxySendTimeout, allocator);
    }

    if (m_sniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniType, allocator);
    }

    if (m_sniHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sniHost.c_str(), allocator).Move(), allocator);
    }

    if (m_weightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weights.begin(); itr != m_weights.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipHeaders.begin(); itr != m_ipHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_xFFResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XFFReset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xFFReset, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamHost.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyBuffer, allocator);
    }

    if (m_gmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gmType, allocator);
    }

    if (m_gmCertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gmCertType, allocator);
    }

    if (m_gmCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gmCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gmPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gmEncCert.c_str(), allocator).Move(), allocator);
    }

    if (m_gmEncPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmEncPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gmEncPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_gmSSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GmSSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gmSSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_probeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeStatus, allocator);
    }

    if (m_upstreamPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamPolicy, allocator);
    }

    if (m_upstreamRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upstreamRules.begin(); itr != m_upstreamRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DomainsPartInfo::GetDomain() const
{
    return m_domain;
}

void DomainsPartInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainsPartInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainsPartInfo::GetDomainId() const
{
    return m_domainId;
}

void DomainsPartInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DomainsPartInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DomainsPartInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DomainsPartInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DomainsPartInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DomainsPartInfo::GetEdition() const
{
    return m_edition;
}

void DomainsPartInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DomainsPartInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string DomainsPartInfo::GetInstanceName() const
{
    return m_instanceName;
}

void DomainsPartInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DomainsPartInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DomainsPartInfo::GetCert() const
{
    return m_cert;
}

void DomainsPartInfo::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool DomainsPartInfo::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string DomainsPartInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainsPartInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainsPartInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DomainsPartInfo::GetEngine() const
{
    return m_engine;
}

void DomainsPartInfo::SetEngine(const uint64_t& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DomainsPartInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t DomainsPartInfo::GetHttpsRewrite() const
{
    return m_httpsRewrite;
}

void DomainsPartInfo::SetHttpsRewrite(const uint64_t& _httpsRewrite)
{
    m_httpsRewrite = _httpsRewrite;
    m_httpsRewriteHasBeenSet = true;
}

bool DomainsPartInfo::HttpsRewriteHasBeenSet() const
{
    return m_httpsRewriteHasBeenSet;
}

string DomainsPartInfo::GetHttpsUpstreamPort() const
{
    return m_httpsUpstreamPort;
}

void DomainsPartInfo::SetHttpsUpstreamPort(const string& _httpsUpstreamPort)
{
    m_httpsUpstreamPort = _httpsUpstreamPort;
    m_httpsUpstreamPortHasBeenSet = true;
}

bool DomainsPartInfo::HttpsUpstreamPortHasBeenSet() const
{
    return m_httpsUpstreamPortHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsCdn() const
{
    return m_isCdn;
}

void DomainsPartInfo::SetIsCdn(const uint64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool DomainsPartInfo::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsGray() const
{
    return m_isGray;
}

void DomainsPartInfo::SetIsGray(const uint64_t& _isGray)
{
    m_isGray = _isGray;
    m_isGrayHasBeenSet = true;
}

bool DomainsPartInfo::IsGrayHasBeenSet() const
{
    return m_isGrayHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsHttp2() const
{
    return m_isHttp2;
}

void DomainsPartInfo::SetIsHttp2(const uint64_t& _isHttp2)
{
    m_isHttp2 = _isHttp2;
    m_isHttp2HasBeenSet = true;
}

bool DomainsPartInfo::IsHttp2HasBeenSet() const
{
    return m_isHttp2HasBeenSet;
}

uint64_t DomainsPartInfo::GetIsWebsocket() const
{
    return m_isWebsocket;
}

void DomainsPartInfo::SetIsWebsocket(const uint64_t& _isWebsocket)
{
    m_isWebsocket = _isWebsocket;
    m_isWebsocketHasBeenSet = true;
}

bool DomainsPartInfo::IsWebsocketHasBeenSet() const
{
    return m_isWebsocketHasBeenSet;
}

uint64_t DomainsPartInfo::GetLoadBalance() const
{
    return m_loadBalance;
}

void DomainsPartInfo::SetLoadBalance(const uint64_t& _loadBalance)
{
    m_loadBalance = _loadBalance;
    m_loadBalanceHasBeenSet = true;
}

bool DomainsPartInfo::LoadBalanceHasBeenSet() const
{
    return m_loadBalanceHasBeenSet;
}

uint64_t DomainsPartInfo::GetMode() const
{
    return m_mode;
}

void DomainsPartInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DomainsPartInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DomainsPartInfo::GetPrivateKey() const
{
    return m_privateKey;
}

void DomainsPartInfo::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool DomainsPartInfo::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string DomainsPartInfo::GetSSLId() const
{
    return m_sSLId;
}

void DomainsPartInfo::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool DomainsPartInfo::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string DomainsPartInfo::GetUpstreamDomain() const
{
    return m_upstreamDomain;
}

void DomainsPartInfo::SetUpstreamDomain(const string& _upstreamDomain)
{
    m_upstreamDomain = _upstreamDomain;
    m_upstreamDomainHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamDomainHasBeenSet() const
{
    return m_upstreamDomainHasBeenSet;
}

uint64_t DomainsPartInfo::GetUpstreamType() const
{
    return m_upstreamType;
}

void DomainsPartInfo::SetUpstreamType(const uint64_t& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

vector<string> DomainsPartInfo::GetSrcList() const
{
    return m_srcList;
}

void DomainsPartInfo::SetSrcList(const vector<string>& _srcList)
{
    m_srcList = _srcList;
    m_srcListHasBeenSet = true;
}

bool DomainsPartInfo::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

vector<PortInfo> DomainsPartInfo::GetPorts() const
{
    return m_ports;
}

void DomainsPartInfo::SetPorts(const vector<PortInfo>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool DomainsPartInfo::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

uint64_t DomainsPartInfo::GetCertType() const
{
    return m_certType;
}

void DomainsPartInfo::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool DomainsPartInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DomainsPartInfo::GetUpstreamScheme() const
{
    return m_upstreamScheme;
}

void DomainsPartInfo::SetUpstreamScheme(const string& _upstreamScheme)
{
    m_upstreamScheme = _upstreamScheme;
    m_upstreamSchemeHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamSchemeHasBeenSet() const
{
    return m_upstreamSchemeHasBeenSet;
}

uint64_t DomainsPartInfo::GetCls() const
{
    return m_cls;
}

void DomainsPartInfo::SetCls(const uint64_t& _cls)
{
    m_cls = _cls;
    m_clsHasBeenSet = true;
}

bool DomainsPartInfo::ClsHasBeenSet() const
{
    return m_clsHasBeenSet;
}

string DomainsPartInfo::GetCname() const
{
    return m_cname;
}

void DomainsPartInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DomainsPartInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsKeepAlive() const
{
    return m_isKeepAlive;
}

void DomainsPartInfo::SetIsKeepAlive(const uint64_t& _isKeepAlive)
{
    m_isKeepAlive = _isKeepAlive;
    m_isKeepAliveHasBeenSet = true;
}

bool DomainsPartInfo::IsKeepAliveHasBeenSet() const
{
    return m_isKeepAliveHasBeenSet;
}

uint64_t DomainsPartInfo::GetActiveCheck() const
{
    return m_activeCheck;
}

void DomainsPartInfo::SetActiveCheck(const uint64_t& _activeCheck)
{
    m_activeCheck = _activeCheck;
    m_activeCheckHasBeenSet = true;
}

bool DomainsPartInfo::ActiveCheckHasBeenSet() const
{
    return m_activeCheckHasBeenSet;
}

int64_t DomainsPartInfo::GetTLSVersion() const
{
    return m_tLSVersion;
}

void DomainsPartInfo::SetTLSVersion(const int64_t& _tLSVersion)
{
    m_tLSVersion = _tLSVersion;
    m_tLSVersionHasBeenSet = true;
}

bool DomainsPartInfo::TLSVersionHasBeenSet() const
{
    return m_tLSVersionHasBeenSet;
}

vector<int64_t> DomainsPartInfo::GetCiphers() const
{
    return m_ciphers;
}

void DomainsPartInfo::SetCiphers(const vector<int64_t>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool DomainsPartInfo::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

int64_t DomainsPartInfo::GetCipherTemplate() const
{
    return m_cipherTemplate;
}

void DomainsPartInfo::SetCipherTemplate(const int64_t& _cipherTemplate)
{
    m_cipherTemplate = _cipherTemplate;
    m_cipherTemplateHasBeenSet = true;
}

bool DomainsPartInfo::CipherTemplateHasBeenSet() const
{
    return m_cipherTemplateHasBeenSet;
}

int64_t DomainsPartInfo::GetProxyReadTimeout() const
{
    return m_proxyReadTimeout;
}

void DomainsPartInfo::SetProxyReadTimeout(const int64_t& _proxyReadTimeout)
{
    m_proxyReadTimeout = _proxyReadTimeout;
    m_proxyReadTimeoutHasBeenSet = true;
}

bool DomainsPartInfo::ProxyReadTimeoutHasBeenSet() const
{
    return m_proxyReadTimeoutHasBeenSet;
}

int64_t DomainsPartInfo::GetProxySendTimeout() const
{
    return m_proxySendTimeout;
}

void DomainsPartInfo::SetProxySendTimeout(const int64_t& _proxySendTimeout)
{
    m_proxySendTimeout = _proxySendTimeout;
    m_proxySendTimeoutHasBeenSet = true;
}

bool DomainsPartInfo::ProxySendTimeoutHasBeenSet() const
{
    return m_proxySendTimeoutHasBeenSet;
}

int64_t DomainsPartInfo::GetSniType() const
{
    return m_sniType;
}

void DomainsPartInfo::SetSniType(const int64_t& _sniType)
{
    m_sniType = _sniType;
    m_sniTypeHasBeenSet = true;
}

bool DomainsPartInfo::SniTypeHasBeenSet() const
{
    return m_sniTypeHasBeenSet;
}

string DomainsPartInfo::GetSniHost() const
{
    return m_sniHost;
}

void DomainsPartInfo::SetSniHost(const string& _sniHost)
{
    m_sniHost = _sniHost;
    m_sniHostHasBeenSet = true;
}

bool DomainsPartInfo::SniHostHasBeenSet() const
{
    return m_sniHostHasBeenSet;
}

vector<string> DomainsPartInfo::GetWeights() const
{
    return m_weights;
}

void DomainsPartInfo::SetWeights(const vector<string>& _weights)
{
    m_weights = _weights;
    m_weightsHasBeenSet = true;
}

bool DomainsPartInfo::WeightsHasBeenSet() const
{
    return m_weightsHasBeenSet;
}

vector<string> DomainsPartInfo::GetIpHeaders() const
{
    return m_ipHeaders;
}

void DomainsPartInfo::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool DomainsPartInfo::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

int64_t DomainsPartInfo::GetXFFReset() const
{
    return m_xFFReset;
}

void DomainsPartInfo::SetXFFReset(const int64_t& _xFFReset)
{
    m_xFFReset = _xFFReset;
    m_xFFResetHasBeenSet = true;
}

bool DomainsPartInfo::XFFResetHasBeenSet() const
{
    return m_xFFResetHasBeenSet;
}

string DomainsPartInfo::GetNote() const
{
    return m_note;
}

void DomainsPartInfo::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool DomainsPartInfo::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string DomainsPartInfo::GetUpstreamHost() const
{
    return m_upstreamHost;
}

void DomainsPartInfo::SetUpstreamHost(const string& _upstreamHost)
{
    m_upstreamHost = _upstreamHost;
    m_upstreamHostHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamHostHasBeenSet() const
{
    return m_upstreamHostHasBeenSet;
}

string DomainsPartInfo::GetLevel() const
{
    return m_level;
}

void DomainsPartInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DomainsPartInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DomainsPartInfo::GetProxyBuffer() const
{
    return m_proxyBuffer;
}

void DomainsPartInfo::SetProxyBuffer(const int64_t& _proxyBuffer)
{
    m_proxyBuffer = _proxyBuffer;
    m_proxyBufferHasBeenSet = true;
}

bool DomainsPartInfo::ProxyBufferHasBeenSet() const
{
    return m_proxyBufferHasBeenSet;
}

int64_t DomainsPartInfo::GetGmType() const
{
    return m_gmType;
}

void DomainsPartInfo::SetGmType(const int64_t& _gmType)
{
    m_gmType = _gmType;
    m_gmTypeHasBeenSet = true;
}

bool DomainsPartInfo::GmTypeHasBeenSet() const
{
    return m_gmTypeHasBeenSet;
}

int64_t DomainsPartInfo::GetGmCertType() const
{
    return m_gmCertType;
}

void DomainsPartInfo::SetGmCertType(const int64_t& _gmCertType)
{
    m_gmCertType = _gmCertType;
    m_gmCertTypeHasBeenSet = true;
}

bool DomainsPartInfo::GmCertTypeHasBeenSet() const
{
    return m_gmCertTypeHasBeenSet;
}

string DomainsPartInfo::GetGmCert() const
{
    return m_gmCert;
}

void DomainsPartInfo::SetGmCert(const string& _gmCert)
{
    m_gmCert = _gmCert;
    m_gmCertHasBeenSet = true;
}

bool DomainsPartInfo::GmCertHasBeenSet() const
{
    return m_gmCertHasBeenSet;
}

string DomainsPartInfo::GetGmPrivateKey() const
{
    return m_gmPrivateKey;
}

void DomainsPartInfo::SetGmPrivateKey(const string& _gmPrivateKey)
{
    m_gmPrivateKey = _gmPrivateKey;
    m_gmPrivateKeyHasBeenSet = true;
}

bool DomainsPartInfo::GmPrivateKeyHasBeenSet() const
{
    return m_gmPrivateKeyHasBeenSet;
}

string DomainsPartInfo::GetGmEncCert() const
{
    return m_gmEncCert;
}

void DomainsPartInfo::SetGmEncCert(const string& _gmEncCert)
{
    m_gmEncCert = _gmEncCert;
    m_gmEncCertHasBeenSet = true;
}

bool DomainsPartInfo::GmEncCertHasBeenSet() const
{
    return m_gmEncCertHasBeenSet;
}

string DomainsPartInfo::GetGmEncPrivateKey() const
{
    return m_gmEncPrivateKey;
}

void DomainsPartInfo::SetGmEncPrivateKey(const string& _gmEncPrivateKey)
{
    m_gmEncPrivateKey = _gmEncPrivateKey;
    m_gmEncPrivateKeyHasBeenSet = true;
}

bool DomainsPartInfo::GmEncPrivateKeyHasBeenSet() const
{
    return m_gmEncPrivateKeyHasBeenSet;
}

string DomainsPartInfo::GetGmSSLId() const
{
    return m_gmSSLId;
}

void DomainsPartInfo::SetGmSSLId(const string& _gmSSLId)
{
    m_gmSSLId = _gmSSLId;
    m_gmSSLIdHasBeenSet = true;
}

bool DomainsPartInfo::GmSSLIdHasBeenSet() const
{
    return m_gmSSLIdHasBeenSet;
}

vector<string> DomainsPartInfo::GetLabels() const
{
    return m_labels;
}

void DomainsPartInfo::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DomainsPartInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

int64_t DomainsPartInfo::GetProbeStatus() const
{
    return m_probeStatus;
}

void DomainsPartInfo::SetProbeStatus(const int64_t& _probeStatus)
{
    m_probeStatus = _probeStatus;
    m_probeStatusHasBeenSet = true;
}

bool DomainsPartInfo::ProbeStatusHasBeenSet() const
{
    return m_probeStatusHasBeenSet;
}

int64_t DomainsPartInfo::GetUpstreamPolicy() const
{
    return m_upstreamPolicy;
}

void DomainsPartInfo::SetUpstreamPolicy(const int64_t& _upstreamPolicy)
{
    m_upstreamPolicy = _upstreamPolicy;
    m_upstreamPolicyHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamPolicyHasBeenSet() const
{
    return m_upstreamPolicyHasBeenSet;
}

vector<UpstreamRule> DomainsPartInfo::GetUpstreamRules() const
{
    return m_upstreamRules;
}

void DomainsPartInfo::SetUpstreamRules(const vector<UpstreamRule>& _upstreamRules)
{
    m_upstreamRules = _upstreamRules;
    m_upstreamRulesHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamRulesHasBeenSet() const
{
    return m_upstreamRulesHasBeenSet;
}

