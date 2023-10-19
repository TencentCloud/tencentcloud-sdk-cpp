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

#include <tencentcloud/waf/v20180125/model/DescribeSpartaProtectionInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeSpartaProtectionInfoResponse::DescribeSpartaProtectionInfoResponse() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_sslidHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_grayAreasHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_httpsRewriteHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_upstreamDomainHasBeenSet(false),
    m_upstreamSchemeHasBeenSet(false),
    m_isHttp2HasBeenSet(false),
    m_isWebsocketHasBeenSet(false),
    m_loadBalanceHasBeenSet(false),
    m_httpsUpstreamPortHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_isGrayHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_isKeepAliveHasBeenSet(false),
    m_anycastHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSpartaProtectionInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("DomainId") && !rsp["DomainId"].IsNull())
    {
        if (!rsp["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(rsp["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (rsp.HasMember("Cname") && !rsp["Cname"].IsNull())
    {
        if (!rsp["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(rsp["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SrcList") && !rsp["SrcList"].IsNull())
    {
        if (!rsp["SrcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SrcList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SrcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcList.push_back((*itr).GetString());
        }
        m_srcListHasBeenSet = true;
    }

    if (rsp.HasMember("CertType") && !rsp["CertType"].IsNull())
    {
        if (!rsp["CertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(rsp["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Cert") && !rsp["Cert"].IsNull())
    {
        if (!rsp["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(rsp["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateKey") && !rsp["PrivateKey"].IsNull())
    {
        if (!rsp["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(rsp["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Sslid") && !rsp["Sslid"].IsNull())
    {
        if (!rsp["Sslid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sslid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslid = string(rsp["Sslid"].GetString());
        m_sslidHasBeenSet = true;
    }

    if (rsp.HasMember("IsCdn") && !rsp["IsCdn"].IsNull())
    {
        if (!rsp["IsCdn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsCdn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isCdn = string(rsp["IsCdn"].GetString());
        m_isCdnHasBeenSet = true;
    }

    if (rsp.HasMember("GrayAreas") && !rsp["GrayAreas"].IsNull())
    {
        if (!rsp["GrayAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrayAreas` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GrayAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_grayAreas.push_back((*itr).GetString());
        }
        m_grayAreasHasBeenSet = true;
    }

    if (rsp.HasMember("Engine") && !rsp["Engine"].IsNull())
    {
        if (!rsp["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(rsp["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (rsp.HasMember("HttpsRewrite") && !rsp["HttpsRewrite"].IsNull())
    {
        if (!rsp["HttpsRewrite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsRewrite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsRewrite = string(rsp["HttpsRewrite"].GetString());
        m_httpsRewriteHasBeenSet = true;
    }

    if (rsp.HasMember("UpstreamType") && !rsp["UpstreamType"].IsNull())
    {
        if (!rsp["UpstreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(rsp["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (rsp.HasMember("UpstreamDomain") && !rsp["UpstreamDomain"].IsNull())
    {
        if (!rsp["UpstreamDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamDomain = string(rsp["UpstreamDomain"].GetString());
        m_upstreamDomainHasBeenSet = true;
    }

    if (rsp.HasMember("UpstreamScheme") && !rsp["UpstreamScheme"].IsNull())
    {
        if (!rsp["UpstreamScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamScheme = string(rsp["UpstreamScheme"].GetString());
        m_upstreamSchemeHasBeenSet = true;
    }

    if (rsp.HasMember("IsHttp2") && !rsp["IsHttp2"].IsNull())
    {
        if (!rsp["IsHttp2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsHttp2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isHttp2 = string(rsp["IsHttp2"].GetString());
        m_isHttp2HasBeenSet = true;
    }

    if (rsp.HasMember("IsWebsocket") && !rsp["IsWebsocket"].IsNull())
    {
        if (!rsp["IsWebsocket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsWebsocket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isWebsocket = string(rsp["IsWebsocket"].GetString());
        m_isWebsocketHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalance") && !rsp["LoadBalance"].IsNull())
    {
        if (!rsp["LoadBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalance = string(rsp["LoadBalance"].GetString());
        m_loadBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("HttpsUpstreamPort") && !rsp["HttpsUpstreamPort"].IsNull())
    {
        if (!rsp["HttpsUpstreamPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpsUpstreamPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsUpstreamPort = string(rsp["HttpsUpstreamPort"].GetString());
        m_httpsUpstreamPortHasBeenSet = true;
    }

    if (rsp.HasMember("Ports") && !rsp["Ports"].IsNull())
    {
        if (!rsp["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Ports` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortItem item;
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

    if (rsp.HasMember("IsGray") && !rsp["IsGray"].IsNull())
    {
        if (!rsp["IsGray"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsGray` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isGray = string(rsp["IsGray"].GetString());
        m_isGrayHasBeenSet = true;
    }

    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(rsp["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(rsp["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("IsKeepAlive") && !rsp["IsKeepAlive"].IsNull())
    {
        if (!rsp["IsKeepAlive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsKeepAlive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isKeepAlive = string(rsp["IsKeepAlive"].GetString());
        m_isKeepAliveHasBeenSet = true;
    }

    if (rsp.HasMember("Anycast") && !rsp["Anycast"].IsNull())
    {
        if (!rsp["Anycast"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Anycast` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anycast = string(rsp["Anycast"].GetString());
        m_anycastHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSpartaProtectionInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sslidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sslid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslid.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isCdn.c_str(), allocator).Move(), allocator);
    }

    if (m_grayAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_grayAreas.begin(); itr != m_grayAreas.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsRewrite.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_isHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHttp2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isHttp2.c_str(), allocator).Move(), allocator);
    }

    if (m_isWebsocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebsocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isWebsocket.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsUpstreamPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsUpstreamPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsUpstreamPort.c_str(), allocator).Move(), allocator);
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

    if (m_isGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isGray.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_isKeepAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepAlive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isKeepAlive.c_str(), allocator).Move(), allocator);
    }

    if (m_anycastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Anycast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anycast.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeSpartaProtectionInfoResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeSpartaProtectionInfoResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetDomainId() const
{
    return m_domainId;
}

bool DescribeSpartaProtectionInfoResponse::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetCname() const
{
    return m_cname;
}

bool DescribeSpartaProtectionInfoResponse::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSpartaProtectionInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeSpartaProtectionInfoResponse::GetSrcList() const
{
    return m_srcList;
}

bool DescribeSpartaProtectionInfoResponse::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetCertType() const
{
    return m_certType;
}

bool DescribeSpartaProtectionInfoResponse::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetCert() const
{
    return m_cert;
}

bool DescribeSpartaProtectionInfoResponse::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetPrivateKey() const
{
    return m_privateKey;
}

bool DescribeSpartaProtectionInfoResponse::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetSslid() const
{
    return m_sslid;
}

bool DescribeSpartaProtectionInfoResponse::SslidHasBeenSet() const
{
    return m_sslidHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetIsCdn() const
{
    return m_isCdn;
}

bool DescribeSpartaProtectionInfoResponse::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

vector<string> DescribeSpartaProtectionInfoResponse::GetGrayAreas() const
{
    return m_grayAreas;
}

bool DescribeSpartaProtectionInfoResponse::GrayAreasHasBeenSet() const
{
    return m_grayAreasHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetEngine() const
{
    return m_engine;
}

bool DescribeSpartaProtectionInfoResponse::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetHttpsRewrite() const
{
    return m_httpsRewrite;
}

bool DescribeSpartaProtectionInfoResponse::HttpsRewriteHasBeenSet() const
{
    return m_httpsRewriteHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetUpstreamType() const
{
    return m_upstreamType;
}

bool DescribeSpartaProtectionInfoResponse::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetUpstreamDomain() const
{
    return m_upstreamDomain;
}

bool DescribeSpartaProtectionInfoResponse::UpstreamDomainHasBeenSet() const
{
    return m_upstreamDomainHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetUpstreamScheme() const
{
    return m_upstreamScheme;
}

bool DescribeSpartaProtectionInfoResponse::UpstreamSchemeHasBeenSet() const
{
    return m_upstreamSchemeHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetIsHttp2() const
{
    return m_isHttp2;
}

bool DescribeSpartaProtectionInfoResponse::IsHttp2HasBeenSet() const
{
    return m_isHttp2HasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetIsWebsocket() const
{
    return m_isWebsocket;
}

bool DescribeSpartaProtectionInfoResponse::IsWebsocketHasBeenSet() const
{
    return m_isWebsocketHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetLoadBalance() const
{
    return m_loadBalance;
}

bool DescribeSpartaProtectionInfoResponse::LoadBalanceHasBeenSet() const
{
    return m_loadBalanceHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetHttpsUpstreamPort() const
{
    return m_httpsUpstreamPort;
}

bool DescribeSpartaProtectionInfoResponse::HttpsUpstreamPortHasBeenSet() const
{
    return m_httpsUpstreamPortHasBeenSet;
}

vector<PortItem> DescribeSpartaProtectionInfoResponse::GetPorts() const
{
    return m_ports;
}

bool DescribeSpartaProtectionInfoResponse::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetIsGray() const
{
    return m_isGray;
}

bool DescribeSpartaProtectionInfoResponse::IsGrayHasBeenSet() const
{
    return m_isGrayHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetMode() const
{
    return m_mode;
}

bool DescribeSpartaProtectionInfoResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetLevel() const
{
    return m_level;
}

bool DescribeSpartaProtectionInfoResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetIsKeepAlive() const
{
    return m_isKeepAlive;
}

bool DescribeSpartaProtectionInfoResponse::IsKeepAliveHasBeenSet() const
{
    return m_isKeepAliveHasBeenSet;
}

string DescribeSpartaProtectionInfoResponse::GetAnycast() const
{
    return m_anycast;
}

bool DescribeSpartaProtectionInfoResponse::AnycastHasBeenSet() const
{
    return m_anycastHasBeenSet;
}


