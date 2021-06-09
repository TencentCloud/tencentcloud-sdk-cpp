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

#include <tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyCCFrequencyRulesRequest::ModifyCCFrequencyRulesRequest() :
    m_businessHasBeenSet(false),
    m_cCFrequencyRuleIdHasBeenSet(false),
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

string ModifyCCFrequencyRulesRequest::ToJsonString() const
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

    if (m_cCFrequencyRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCFrequencyRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cCFrequencyRuleId.c_str(), allocator).Move(), allocator);
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


string ModifyCCFrequencyRulesRequest::GetBusiness() const
{
    return m_business;
}

void ModifyCCFrequencyRulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetCCFrequencyRuleId() const
{
    return m_cCFrequencyRuleId;
}

void ModifyCCFrequencyRulesRequest::SetCCFrequencyRuleId(const string& _cCFrequencyRuleId)
{
    m_cCFrequencyRuleId = _cCFrequencyRuleId;
    m_cCFrequencyRuleIdHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::CCFrequencyRuleIdHasBeenSet() const
{
    return m_cCFrequencyRuleIdHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetMode() const
{
    return m_mode;
}

void ModifyCCFrequencyRulesRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t ModifyCCFrequencyRulesRequest::GetPeriod() const
{
    return m_period;
}

void ModifyCCFrequencyRulesRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t ModifyCCFrequencyRulesRequest::GetReqNumber() const
{
    return m_reqNumber;
}

void ModifyCCFrequencyRulesRequest::SetReqNumber(const uint64_t& _reqNumber)
{
    m_reqNumber = _reqNumber;
    m_reqNumberHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::ReqNumberHasBeenSet() const
{
    return m_reqNumberHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetAct() const
{
    return m_act;
}

void ModifyCCFrequencyRulesRequest::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

uint64_t ModifyCCFrequencyRulesRequest::GetExeDuration() const
{
    return m_exeDuration;
}

void ModifyCCFrequencyRulesRequest::SetExeDuration(const uint64_t& _exeDuration)
{
    m_exeDuration = _exeDuration;
    m_exeDurationHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::ExeDurationHasBeenSet() const
{
    return m_exeDurationHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetUri() const
{
    return m_uri;
}

void ModifyCCFrequencyRulesRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetUserAgent() const
{
    return m_userAgent;
}

void ModifyCCFrequencyRulesRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string ModifyCCFrequencyRulesRequest::GetCookie() const
{
    return m_cookie;
}

void ModifyCCFrequencyRulesRequest::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool ModifyCCFrequencyRulesRequest::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}


