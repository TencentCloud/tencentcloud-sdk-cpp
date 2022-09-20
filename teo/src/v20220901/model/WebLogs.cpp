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

#include <tencentcloud/teo/v20220901/model/WebLogs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WebLogs::WebLogs() :
    m_eventIdHasBeenSet(false),
    m_attackIpHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_httpLogHasBeenSet(false),
    m_sipCountryCodeHasBeenSet(false),
    m_attackTimeHasBeenSet(false),
    m_requestUriHasBeenSet(false),
    m_attackContentHasBeenSet(false),
    m_ruleDetailListHasBeenSet(false),
    m_reqMethodHasBeenSet(false)
{
}

CoreInternalOutcome WebLogs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
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

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
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

    if (value.HasMember("SipCountryCode") && !value["SipCountryCode"].IsNull())
    {
        if (!value["SipCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.SipCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sipCountryCode = string(value["SipCountryCode"].GetString());
        m_sipCountryCodeHasBeenSet = true;
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

    if (value.HasMember("RequestUri") && !value["RequestUri"].IsNull())
    {
        if (!value["RequestUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.RequestUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestUri = string(value["RequestUri"].GetString());
        m_requestUriHasBeenSet = true;
    }

    if (value.HasMember("AttackContent") && !value["AttackContent"].IsNull())
    {
        if (!value["AttackContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.AttackContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackContent = string(value["AttackContent"].GetString());
        m_attackContentHasBeenSet = true;
    }

    if (value.HasMember("RuleDetailList") && !value["RuleDetailList"].IsNull())
    {
        if (!value["RuleDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebLogs.RuleDetailList` is not array type"));

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

    if (value.HasMember("ReqMethod") && !value["ReqMethod"].IsNull())
    {
        if (!value["ReqMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebLogs.ReqMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqMethod = string(value["ReqMethod"].GetString());
        m_reqMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebLogs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
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

    if (m_httpLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpLog.c_str(), allocator).Move(), allocator);
    }

    if (m_sipCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipCountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sipCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

    if (m_requestUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestUri.c_str(), allocator).Move(), allocator);
    }

    if (m_attackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackContent.c_str(), allocator).Move(), allocator);
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

    if (m_reqMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqMethod.c_str(), allocator).Move(), allocator);
    }

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

vector<SecRuleRelatedInfo> WebLogs::GetRuleDetailList() const
{
    return m_ruleDetailList;
}

void WebLogs::SetRuleDetailList(const vector<SecRuleRelatedInfo>& _ruleDetailList)
{
    m_ruleDetailList = _ruleDetailList;
    m_ruleDetailListHasBeenSet = true;
}

bool WebLogs::RuleDetailListHasBeenSet() const
{
    return m_ruleDetailListHasBeenSet;
}

string WebLogs::GetReqMethod() const
{
    return m_reqMethod;
}

void WebLogs::SetReqMethod(const string& _reqMethod)
{
    m_reqMethod = _reqMethod;
    m_reqMethodHasBeenSet = true;
}

bool WebLogs::ReqMethodHasBeenSet() const
{
    return m_reqMethodHasBeenSet;
}

