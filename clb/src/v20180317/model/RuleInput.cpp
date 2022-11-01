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

#include <tencentcloud/clb/v20180317/model/RuleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RuleInput::RuleInput() :
    m_urlHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_forwardTypeHasBeenSet(false),
    m_defaultServerHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_trpcCalleeHasBeenSet(false),
    m_trpcFuncHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_multiCertInfoHasBeenSet(false)
{
}

CoreInternalOutcome RuleInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("ForwardType") && !value["ForwardType"].IsNull())
    {
        if (!value["ForwardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.ForwardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardType = string(value["ForwardType"].GetString());
        m_forwardTypeHasBeenSet = true;
    }

    if (value.HasMember("DefaultServer") && !value["DefaultServer"].IsNull())
    {
        if (!value["DefaultServer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.DefaultServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultServer = value["DefaultServer"].GetBool();
        m_defaultServerHasBeenSet = true;
    }

    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Http2` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_http2 = value["Http2"].GetBool();
        m_http2HasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TrpcCallee") && !value["TrpcCallee"].IsNull())
    {
        if (!value["TrpcCallee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.TrpcCallee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trpcCallee = string(value["TrpcCallee"].GetString());
        m_trpcCalleeHasBeenSet = true;
    }

    if (value.HasMember("TrpcFunc") && !value["TrpcFunc"].IsNull())
    {
        if (!value["TrpcFunc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.TrpcFunc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trpcFunc = string(value["TrpcFunc"].GetString());
        m_trpcFuncHasBeenSet = true;
    }

    if (value.HasMember("Quic") && !value["Quic"].IsNull())
    {
        if (!value["Quic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Quic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_quic = value["Quic"].GetBool();
        m_quicHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInput.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("MultiCertInfo") && !value["MultiCertInfo"].IsNull())
    {
        if (!value["MultiCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.MultiCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiCertInfo.Deserialize(value["MultiCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiCertInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardType.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultServer, allocator);
    }

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http2, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_trpcCalleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrpcCallee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trpcCallee.c_str(), allocator).Move(), allocator);
    }

    if (m_trpcFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrpcFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trpcFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quic, allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_multiCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RuleInput::GetUrl() const
{
    return m_url;
}

void RuleInput::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RuleInput::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string RuleInput::GetDomain() const
{
    return m_domain;
}

void RuleInput::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RuleInput::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t RuleInput::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void RuleInput::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool RuleInput::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

HealthCheck RuleInput::GetHealthCheck() const
{
    return m_healthCheck;
}

void RuleInput::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool RuleInput::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateInput RuleInput::GetCertificate() const
{
    return m_certificate;
}

void RuleInput::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool RuleInput::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string RuleInput::GetScheduler() const
{
    return m_scheduler;
}

void RuleInput::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool RuleInput::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string RuleInput::GetForwardType() const
{
    return m_forwardType;
}

void RuleInput::SetForwardType(const string& _forwardType)
{
    m_forwardType = _forwardType;
    m_forwardTypeHasBeenSet = true;
}

bool RuleInput::ForwardTypeHasBeenSet() const
{
    return m_forwardTypeHasBeenSet;
}

bool RuleInput::GetDefaultServer() const
{
    return m_defaultServer;
}

void RuleInput::SetDefaultServer(const bool& _defaultServer)
{
    m_defaultServer = _defaultServer;
    m_defaultServerHasBeenSet = true;
}

bool RuleInput::DefaultServerHasBeenSet() const
{
    return m_defaultServerHasBeenSet;
}

bool RuleInput::GetHttp2() const
{
    return m_http2;
}

void RuleInput::SetHttp2(const bool& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool RuleInput::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

string RuleInput::GetTargetType() const
{
    return m_targetType;
}

void RuleInput::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RuleInput::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RuleInput::GetTrpcCallee() const
{
    return m_trpcCallee;
}

void RuleInput::SetTrpcCallee(const string& _trpcCallee)
{
    m_trpcCallee = _trpcCallee;
    m_trpcCalleeHasBeenSet = true;
}

bool RuleInput::TrpcCalleeHasBeenSet() const
{
    return m_trpcCalleeHasBeenSet;
}

string RuleInput::GetTrpcFunc() const
{
    return m_trpcFunc;
}

void RuleInput::SetTrpcFunc(const string& _trpcFunc)
{
    m_trpcFunc = _trpcFunc;
    m_trpcFuncHasBeenSet = true;
}

bool RuleInput::TrpcFuncHasBeenSet() const
{
    return m_trpcFuncHasBeenSet;
}

bool RuleInput::GetQuic() const
{
    return m_quic;
}

void RuleInput::SetQuic(const bool& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool RuleInput::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

vector<string> RuleInput::GetDomains() const
{
    return m_domains;
}

void RuleInput::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool RuleInput::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

MultiCertInfo RuleInput::GetMultiCertInfo() const
{
    return m_multiCertInfo;
}

void RuleInput::SetMultiCertInfo(const MultiCertInfo& _multiCertInfo)
{
    m_multiCertInfo = _multiCertInfo;
    m_multiCertInfoHasBeenSet = true;
}

bool RuleInput::MultiCertInfoHasBeenSet() const
{
    return m_multiCertInfoHasBeenSet;
}

