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

#include <tencentcloud/teo/v20220901/model/BotLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotLog::BotLog() :
    m_attackTimeHasBeenSet(false),
    m_attackIpHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_requestUriHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_attackContentHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_sipCountryCodeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_disposalMethodHasBeenSet(false),
    m_httpLogHasBeenSet(false),
    m_uaHasBeenSet(false),
    m_detectionMethodHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_maliciousnessHasBeenSet(false),
    m_ruleDetailListHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome BotLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.AttackTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = value["AttackTime"].GetUint64();
        m_attackTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackIp") && !value["AttackIp"].IsNull())
    {
        if (!value["AttackIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.AttackIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackIp = string(value["AttackIp"].GetString());
        m_attackIpHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("RequestUri") && !value["RequestUri"].IsNull())
    {
        if (!value["RequestUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.RequestUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUri = string(value["RequestUri"].GetString());
        m_requestUriHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.RequestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = string(value["RequestMethod"].GetString());
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("AttackContent") && !value["AttackContent"].IsNull())
    {
        if (!value["AttackContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.AttackContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackContent = string(value["AttackContent"].GetString());
        m_attackContentHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("SipCountryCode") && !value["SipCountryCode"].IsNull())
    {
        if (!value["SipCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.SipCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipCountryCode = string(value["SipCountryCode"].GetString());
        m_sipCountryCodeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("DisposalMethod") && !value["DisposalMethod"].IsNull())
    {
        if (!value["DisposalMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.DisposalMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disposalMethod = string(value["DisposalMethod"].GetString());
        m_disposalMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpLog") && !value["HttpLog"].IsNull())
    {
        if (!value["HttpLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.HttpLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpLog = string(value["HttpLog"].GetString());
        m_httpLogHasBeenSet = true;
    }

    if (value.HasMember("Ua") && !value["Ua"].IsNull())
    {
        if (!value["Ua"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.Ua` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ua = string(value["Ua"].GetString());
        m_uaHasBeenSet = true;
    }

    if (value.HasMember("DetectionMethod") && !value["DetectionMethod"].IsNull())
    {
        if (!value["DetectionMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.DetectionMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectionMethod = string(value["DetectionMethod"].GetString());
        m_detectionMethodHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.Confidence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = string(value["Confidence"].GetString());
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Maliciousness") && !value["Maliciousness"].IsNull())
    {
        if (!value["Maliciousness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.Maliciousness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maliciousness = string(value["Maliciousness"].GetString());
        m_maliciousnessHasBeenSet = true;
    }

    if (value.HasMember("RuleDetailList") && !value["RuleDetailList"].IsNull())
    {
        if (!value["RuleDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotLog.RuleDetailList` is not array type"));

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

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotLog.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

    if (m_attackIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackIp.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_requestUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUri.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_attackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackContent.c_str(), allocator).Move(), allocator);
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

    if (m_detectionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectionMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confidence.c_str(), allocator).Move(), allocator);
    }

    if (m_maliciousnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maliciousness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maliciousness.c_str(), allocator).Move(), allocator);
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

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BotLog::GetAttackTime() const
{
    return m_attackTime;
}

void BotLog::SetAttackTime(const uint64_t& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool BotLog::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

string BotLog::GetAttackIp() const
{
    return m_attackIp;
}

void BotLog::SetAttackIp(const string& _attackIp)
{
    m_attackIp = _attackIp;
    m_attackIpHasBeenSet = true;
}

bool BotLog::AttackIpHasBeenSet() const
{
    return m_attackIpHasBeenSet;
}

string BotLog::GetDomain() const
{
    return m_domain;
}

void BotLog::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BotLog::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string BotLog::GetRequestUri() const
{
    return m_requestUri;
}

void BotLog::SetRequestUri(const string& _requestUri)
{
    m_requestUri = _requestUri;
    m_requestUriHasBeenSet = true;
}

bool BotLog::RequestUriHasBeenSet() const
{
    return m_requestUriHasBeenSet;
}

string BotLog::GetAttackType() const
{
    return m_attackType;
}

void BotLog::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool BotLog::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string BotLog::GetRequestMethod() const
{
    return m_requestMethod;
}

void BotLog::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool BotLog::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

string BotLog::GetAttackContent() const
{
    return m_attackContent;
}

void BotLog::SetAttackContent(const string& _attackContent)
{
    m_attackContent = _attackContent;
    m_attackContentHasBeenSet = true;
}

bool BotLog::AttackContentHasBeenSet() const
{
    return m_attackContentHasBeenSet;
}

string BotLog::GetRiskLevel() const
{
    return m_riskLevel;
}

void BotLog::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool BotLog::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

uint64_t BotLog::GetRuleId() const
{
    return m_ruleId;
}

void BotLog::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BotLog::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BotLog::GetSipCountryCode() const
{
    return m_sipCountryCode;
}

void BotLog::SetSipCountryCode(const string& _sipCountryCode)
{
    m_sipCountryCode = _sipCountryCode;
    m_sipCountryCodeHasBeenSet = true;
}

bool BotLog::SipCountryCodeHasBeenSet() const
{
    return m_sipCountryCodeHasBeenSet;
}

string BotLog::GetEventId() const
{
    return m_eventId;
}

void BotLog::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool BotLog::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string BotLog::GetDisposalMethod() const
{
    return m_disposalMethod;
}

void BotLog::SetDisposalMethod(const string& _disposalMethod)
{
    m_disposalMethod = _disposalMethod;
    m_disposalMethodHasBeenSet = true;
}

bool BotLog::DisposalMethodHasBeenSet() const
{
    return m_disposalMethodHasBeenSet;
}

string BotLog::GetHttpLog() const
{
    return m_httpLog;
}

void BotLog::SetHttpLog(const string& _httpLog)
{
    m_httpLog = _httpLog;
    m_httpLogHasBeenSet = true;
}

bool BotLog::HttpLogHasBeenSet() const
{
    return m_httpLogHasBeenSet;
}

string BotLog::GetUa() const
{
    return m_ua;
}

void BotLog::SetUa(const string& _ua)
{
    m_ua = _ua;
    m_uaHasBeenSet = true;
}

bool BotLog::UaHasBeenSet() const
{
    return m_uaHasBeenSet;
}

string BotLog::GetDetectionMethod() const
{
    return m_detectionMethod;
}

void BotLog::SetDetectionMethod(const string& _detectionMethod)
{
    m_detectionMethod = _detectionMethod;
    m_detectionMethodHasBeenSet = true;
}

bool BotLog::DetectionMethodHasBeenSet() const
{
    return m_detectionMethodHasBeenSet;
}

string BotLog::GetConfidence() const
{
    return m_confidence;
}

void BotLog::SetConfidence(const string& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool BotLog::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string BotLog::GetMaliciousness() const
{
    return m_maliciousness;
}

void BotLog::SetMaliciousness(const string& _maliciousness)
{
    m_maliciousness = _maliciousness;
    m_maliciousnessHasBeenSet = true;
}

bool BotLog::MaliciousnessHasBeenSet() const
{
    return m_maliciousnessHasBeenSet;
}

vector<SecRuleRelatedInfo> BotLog::GetRuleDetailList() const
{
    return m_ruleDetailList;
}

void BotLog::SetRuleDetailList(const vector<SecRuleRelatedInfo>& _ruleDetailList)
{
    m_ruleDetailList = _ruleDetailList;
    m_ruleDetailListHasBeenSet = true;
}

bool BotLog::RuleDetailListHasBeenSet() const
{
    return m_ruleDetailListHasBeenSet;
}

string BotLog::GetLabel() const
{
    return m_label;
}

void BotLog::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BotLog::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

