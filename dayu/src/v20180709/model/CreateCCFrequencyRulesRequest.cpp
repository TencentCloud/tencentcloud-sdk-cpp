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

#include <tencentcloud/dayu/v20180709/model/CreateCCFrequencyRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateCCFrequencyRulesRequest::CreateCCFrequencyRulesRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_reqNumberHasBeenSet(false),
    m_actHasBeenSet(false),
    m_exeDurationHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_cookieHasBeenSet(false)
{
}

string CreateCCFrequencyRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_reqNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reqNumber, allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_act.c_str(), allocator).Move(), allocator);
    }

    if (m_exeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exeDuration, allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cookie.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCCFrequencyRulesRequest::GetBusiness() const
{
    return m_business;
}

void CreateCCFrequencyRulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetId() const
{
    return m_id;
}

void CreateCCFrequencyRulesRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateCCFrequencyRulesRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetMode() const
{
    return m_mode;
}

void CreateCCFrequencyRulesRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t CreateCCFrequencyRulesRequest::GetPeriod() const
{
    return m_period;
}

void CreateCCFrequencyRulesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CreateCCFrequencyRulesRequest::GetReqNumber() const
{
    return m_reqNumber;
}

void CreateCCFrequencyRulesRequest::SetReqNumber(const uint64_t& _reqNumber)
{
    m_reqNumber = _reqNumber;
    m_reqNumberHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::ReqNumberHasBeenSet() const
{
    return m_reqNumberHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetAct() const
{
    return m_act;
}

void CreateCCFrequencyRulesRequest::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

uint64_t CreateCCFrequencyRulesRequest::GetExeDuration() const
{
    return m_exeDuration;
}

void CreateCCFrequencyRulesRequest::SetExeDuration(const uint64_t& _exeDuration)
{
    m_exeDuration = _exeDuration;
    m_exeDurationHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::ExeDurationHasBeenSet() const
{
    return m_exeDurationHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetUri() const
{
    return m_uri;
}

void CreateCCFrequencyRulesRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetUserAgent() const
{
    return m_userAgent;
}

void CreateCCFrequencyRulesRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string CreateCCFrequencyRulesRequest::GetCookie() const
{
    return m_cookie;
}

void CreateCCFrequencyRulesRequest::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CreateCCFrequencyRulesRequest::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}


