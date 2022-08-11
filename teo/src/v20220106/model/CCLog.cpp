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

#include <tencentcloud/teo/v20220106/model/CCLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CCLog::CCLog() :
    m_attackTimeHasBeenSet(false),
    m_attackSipHasBeenSet(false),
    m_attackDomainHasBeenSet(false),
    m_requestUriHasBeenSet(false),
    m_hitCountHasBeenSet(false),
    m_sipCountryCodeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_disposalMethodHasBeenSet(false),
    m_httpLogHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_uaHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_ruleDetailListHasBeenSet(false)
{
}

CoreInternalOutcome CCLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.AttackTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = value["AttackTime"].GetUint64();
        m_attackTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackSip") && !value["AttackSip"].IsNull())
    {
        if (!value["AttackSip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.AttackSip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackSip = string(value["AttackSip"].GetString());
        m_attackSipHasBeenSet = true;
    }

    if (value.HasMember("AttackDomain") && !value["AttackDomain"].IsNull())
    {
        if (!value["AttackDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.AttackDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackDomain = string(value["AttackDomain"].GetString());
        m_attackDomainHasBeenSet = true;
    }

    if (value.HasMember("RequestUri") && !value["RequestUri"].IsNull())
    {
        if (!value["RequestUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.RequestUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUri = string(value["RequestUri"].GetString());
        m_requestUriHasBeenSet = true;
    }

    if (value.HasMember("HitCount") && !value["HitCount"].IsNull())
    {
        if (!value["HitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.HitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hitCount = value["HitCount"].GetUint64();
        m_hitCountHasBeenSet = true;
    }

    if (value.HasMember("SipCountryCode") && !value["SipCountryCode"].IsNull())
    {
        if (!value["SipCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.SipCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipCountryCode = string(value["SipCountryCode"].GetString());
        m_sipCountryCodeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DisposalMethod") && !value["DisposalMethod"].IsNull())
    {
        if (!value["DisposalMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.DisposalMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalMethod = string(value["DisposalMethod"].GetString());
        m_disposalMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpLog") && !value["HttpLog"].IsNull())
    {
        if (!value["HttpLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.HttpLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpLog = string(value["HttpLog"].GetString());
        m_httpLogHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Ua") && !value["Ua"].IsNull())
    {
        if (!value["Ua"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.Ua` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ua = string(value["Ua"].GetString());
        m_uaHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCLog.RequestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = string(value["RequestMethod"].GetString());
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("RuleDetailList") && !value["RuleDetailList"].IsNull())
    {
        if (!value["RuleDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCLog.RuleDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecRuleRelatedInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleDetailList.push_back(item);
        }
        m_ruleDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

    if (m_attackSipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackSip.c_str(), allocator).Move(), allocator);
    }

    if (m_attackDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_requestUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUri.c_str(), allocator).Move(), allocator);
    }

    if (m_hitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitCount, allocator);
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_uaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ua";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ua.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleDetailList.begin(); itr != m_ruleDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CCLog::GetAttackTime() const
{
    return m_attackTime;
}

void CCLog::SetAttackTime(const uint64_t& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool CCLog::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

string CCLog::GetAttackSip() const
{
    return m_attackSip;
}

void CCLog::SetAttackSip(const string& _attackSip)
{
    m_attackSip = _attackSip;
    m_attackSipHasBeenSet = true;
}

bool CCLog::AttackSipHasBeenSet() const
{
    return m_attackSipHasBeenSet;
}

string CCLog::GetAttackDomain() const
{
    return m_attackDomain;
}

void CCLog::SetAttackDomain(const string& _attackDomain)
{
    m_attackDomain = _attackDomain;
    m_attackDomainHasBeenSet = true;
}

bool CCLog::AttackDomainHasBeenSet() const
{
    return m_attackDomainHasBeenSet;
}

string CCLog::GetRequestUri() const
{
    return m_requestUri;
}

void CCLog::SetRequestUri(const string& _requestUri)
{
    m_requestUri = _requestUri;
    m_requestUriHasBeenSet = true;
}

bool CCLog::RequestUriHasBeenSet() const
{
    return m_requestUriHasBeenSet;
}

uint64_t CCLog::GetHitCount() const
{
    return m_hitCount;
}

void CCLog::SetHitCount(const uint64_t& _hitCount)
{
    m_hitCount = _hitCount;
    m_hitCountHasBeenSet = true;
}

bool CCLog::HitCountHasBeenSet() const
{
    return m_hitCountHasBeenSet;
}

string CCLog::GetSipCountryCode() const
{
    return m_sipCountryCode;
}

void CCLog::SetSipCountryCode(const string& _sipCountryCode)
{
    m_sipCountryCode = _sipCountryCode;
    m_sipCountryCodeHasBeenSet = true;
}

bool CCLog::SipCountryCodeHasBeenSet() const
{
    return m_sipCountryCodeHasBeenSet;
}

string CCLog::GetEventId() const
{
    return m_eventId;
}

void CCLog::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CCLog::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string CCLog::GetDisposalMethod() const
{
    return m_disposalMethod;
}

void CCLog::SetDisposalMethod(const string& _disposalMethod)
{
    m_disposalMethod = _disposalMethod;
    m_disposalMethodHasBeenSet = true;
}

bool CCLog::DisposalMethodHasBeenSet() const
{
    return m_disposalMethodHasBeenSet;
}

string CCLog::GetHttpLog() const
{
    return m_httpLog;
}

void CCLog::SetHttpLog(const string& _httpLog)
{
    m_httpLog = _httpLog;
    m_httpLogHasBeenSet = true;
}

bool CCLog::HttpLogHasBeenSet() const
{
    return m_httpLogHasBeenSet;
}

uint64_t CCLog::GetRuleId() const
{
    return m_ruleId;
}

void CCLog::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CCLog::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CCLog::GetRiskLevel() const
{
    return m_riskLevel;
}

void CCLog::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CCLog::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string CCLog::GetUa() const
{
    return m_ua;
}

void CCLog::SetUa(const string& _ua)
{
    m_ua = _ua;
    m_uaHasBeenSet = true;
}

bool CCLog::UaHasBeenSet() const
{
    return m_uaHasBeenSet;
}

string CCLog::GetRequestMethod() const
{
    return m_requestMethod;
}

void CCLog::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool CCLog::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

vector<SecRuleRelatedInfo> CCLog::GetRuleDetailList() const
{
    return m_ruleDetailList;
}

void CCLog::SetRuleDetailList(const vector<SecRuleRelatedInfo>& _ruleDetailList)
{
    m_ruleDetailList = _ruleDetailList;
    m_ruleDetailListHasBeenSet = true;
}

bool CCLog::RuleDetailListHasBeenSet() const
{
    return m_ruleDetailListHasBeenSet;
}

