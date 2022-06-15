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

#include <tencentcloud/teo/v20220106/model/WebLogs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

WebLogs::WebLogs() :
    m_attackContentHasBeenSet(false),
    m_attackIpHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_msuuidHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_requestUriHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_sipCountryCodeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_disposalMethodHasBeenSet(false),
    m_httpLogHasBeenSet(false),
    m_uaHasBeenSet(false),
    m_attackTimeHasBeenSet(false)
{
}

CoreInternalOutcome WebLogs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackContent") && !value["AttackContent"].IsNull())
    {
        if (!value["AttackContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.AttackContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackContent = string(value["AttackContent"].GetString());
        m_attackContentHasBeenSet = true;
    }

    if (value.HasMember("AttackIp") && !value["AttackIp"].IsNull())
    {
        if (!value["AttackIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.AttackIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackIp = string(value["AttackIp"].GetString());
        m_attackIpHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Msuuid") && !value["Msuuid"].IsNull())
    {
        if (!value["Msuuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.Msuuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msuuid = string(value["Msuuid"].GetString());
        m_msuuidHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.RequestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = string(value["RequestMethod"].GetString());
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("RequestUri") && !value["RequestUri"].IsNull())
    {
        if (!value["RequestUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.RequestUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUri = string(value["RequestUri"].GetString());
        m_requestUriHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("SipCountryCode") && !value["SipCountryCode"].IsNull())
    {
        if (!value["SipCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.SipCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipCountryCode = string(value["SipCountryCode"].GetString());
        m_sipCountryCodeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DisposalMethod") && !value["DisposalMethod"].IsNull())
    {
        if (!value["DisposalMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.DisposalMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalMethod = string(value["DisposalMethod"].GetString());
        m_disposalMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpLog") && !value["HttpLog"].IsNull())
    {
        if (!value["HttpLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.HttpLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpLog = string(value["HttpLog"].GetString());
        m_httpLogHasBeenSet = true;
    }

    if (value.HasMember("Ua") && !value["Ua"].IsNull())
    {
        if (!value["Ua"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.Ua` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ua = string(value["Ua"].GetString());
        m_uaHasBeenSet = true;
    }

    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.AttackTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = value["AttackTime"].GetUint64();
        m_attackTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebLogs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackContent.c_str(), allocator).Move(), allocator);
    }

    if (m_attackIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackIp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_msuuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msuuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msuuid.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_requestUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUri.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_sipCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipCountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sipCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_disposalMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disposalMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_httpLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpLog.c_str(), allocator).Move(), allocator);
    }

    if (m_uaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ua";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ua.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

}


string WebLogs::GetAttackContent() const
{
    return m_attackContent;
}

void WebLogs::SetAttackContent(const string& _attackContent)
{
    m_attackContent = _attackContent;
    m_attackContentHasBeenSet = true;
}

bool WebLogs::AttackContentHasBeenSet() const
{
    return m_attackContentHasBeenSet;
}

string WebLogs::GetAttackIp() const
{
    return m_attackIp;
}

void WebLogs::SetAttackIp(const string& _attackIp)
{
    m_attackIp = _attackIp;
    m_attackIpHasBeenSet = true;
}

bool WebLogs::AttackIpHasBeenSet() const
{
    return m_attackIpHasBeenSet;
}

string WebLogs::GetAttackType() const
{
    return m_attackType;
}

void WebLogs::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool WebLogs::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string WebLogs::GetDomain() const
{
    return m_domain;
}

void WebLogs::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool WebLogs::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string WebLogs::GetMsuuid() const
{
    return m_msuuid;
}

void WebLogs::SetMsuuid(const string& _msuuid)
{
    m_msuuid = _msuuid;
    m_msuuidHasBeenSet = true;
}

bool WebLogs::MsuuidHasBeenSet() const
{
    return m_msuuidHasBeenSet;
}

string WebLogs::GetRequestMethod() const
{
    return m_requestMethod;
}

void WebLogs::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool WebLogs::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

string WebLogs::GetRequestUri() const
{
    return m_requestUri;
}

void WebLogs::SetRequestUri(const string& _requestUri)
{
    m_requestUri = _requestUri;
    m_requestUriHasBeenSet = true;
}

bool WebLogs::RequestUriHasBeenSet() const
{
    return m_requestUriHasBeenSet;
}

string WebLogs::GetRiskLevel() const
{
    return m_riskLevel;
}

void WebLogs::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool WebLogs::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

uint64_t WebLogs::GetRuleId() const
{
    return m_ruleId;
}

void WebLogs::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool WebLogs::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string WebLogs::GetSipCountryCode() const
{
    return m_sipCountryCode;
}

void WebLogs::SetSipCountryCode(const string& _sipCountryCode)
{
    m_sipCountryCode = _sipCountryCode;
    m_sipCountryCodeHasBeenSet = true;
}

bool WebLogs::SipCountryCodeHasBeenSet() const
{
    return m_sipCountryCodeHasBeenSet;
}

string WebLogs::GetEventId() const
{
    return m_eventId;
}

void WebLogs::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool WebLogs::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string WebLogs::GetDisposalMethod() const
{
    return m_disposalMethod;
}

void WebLogs::SetDisposalMethod(const string& _disposalMethod)
{
    m_disposalMethod = _disposalMethod;
    m_disposalMethodHasBeenSet = true;
}

bool WebLogs::DisposalMethodHasBeenSet() const
{
    return m_disposalMethodHasBeenSet;
}

string WebLogs::GetHttpLog() const
{
    return m_httpLog;
}

void WebLogs::SetHttpLog(const string& _httpLog)
{
    m_httpLog = _httpLog;
    m_httpLogHasBeenSet = true;
}

bool WebLogs::HttpLogHasBeenSet() const
{
    return m_httpLogHasBeenSet;
}

string WebLogs::GetUa() const
{
    return m_ua;
}

void WebLogs::SetUa(const string& _ua)
{
    m_ua = _ua;
    m_uaHasBeenSet = true;
}

bool WebLogs::UaHasBeenSet() const
{
    return m_uaHasBeenSet;
}

uint64_t WebLogs::GetAttackTime() const
{
    return m_attackTime;
}

void WebLogs::SetAttackTime(const uint64_t& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool WebLogs::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

