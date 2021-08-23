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

#include <tencentcloud/dayu/v20180709/model/CCFrequencyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CCFrequencyRule::CCFrequencyRule() :
    m_cCFrequencyRuleIdHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_reqNumberHasBeenSet(false),
    m_actHasBeenSet(false),
    m_exeDurationHasBeenSet(false)
{
}

CoreInternalOutcome CCFrequencyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CCFrequencyRuleId") && !value["CCFrequencyRuleId"].IsNull())
    {
        if (!value["CCFrequencyRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.CCFrequencyRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cCFrequencyRuleId = string(value["CCFrequencyRuleId"].GetString());
        m_cCFrequencyRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.Cookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookie = string(value["Cookie"].GetString());
        m_cookieHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("ReqNumber") && !value["ReqNumber"].IsNull())
    {
        if (!value["ReqNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.ReqNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqNumber = value["ReqNumber"].GetUint64();
        m_reqNumberHasBeenSet = true;
    }

    if (value.HasMember("Act") && !value["Act"].IsNull())
    {
        if (!value["Act"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.Act` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_act = string(value["Act"].GetString());
        m_actHasBeenSet = true;
    }

    if (value.HasMember("ExeDuration") && !value["ExeDuration"].IsNull())
    {
        if (!value["ExeDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCFrequencyRule.ExeDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exeDuration = value["ExeDuration"].GetUint64();
        m_exeDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCFrequencyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cCFrequencyRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCFrequencyRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cCFrequencyRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cookie.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_reqNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqNumber, allocator);
    }

    if (m_actHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Act";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_act.c_str(), allocator).Move(), allocator);
    }

    if (m_exeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exeDuration, allocator);
    }

}


string CCFrequencyRule::GetCCFrequencyRuleId() const
{
    return m_cCFrequencyRuleId;
}

void CCFrequencyRule::SetCCFrequencyRuleId(const string& _cCFrequencyRuleId)
{
    m_cCFrequencyRuleId = _cCFrequencyRuleId;
    m_cCFrequencyRuleIdHasBeenSet = true;
}

bool CCFrequencyRule::CCFrequencyRuleIdHasBeenSet() const
{
    return m_cCFrequencyRuleIdHasBeenSet;
}

string CCFrequencyRule::GetUri() const
{
    return m_uri;
}

void CCFrequencyRule::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool CCFrequencyRule::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string CCFrequencyRule::GetUserAgent() const
{
    return m_userAgent;
}

void CCFrequencyRule::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool CCFrequencyRule::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string CCFrequencyRule::GetCookie() const
{
    return m_cookie;
}

void CCFrequencyRule::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CCFrequencyRule::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

string CCFrequencyRule::GetMode() const
{
    return m_mode;
}

void CCFrequencyRule::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CCFrequencyRule::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t CCFrequencyRule::GetPeriod() const
{
    return m_period;
}

void CCFrequencyRule::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CCFrequencyRule::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CCFrequencyRule::GetReqNumber() const
{
    return m_reqNumber;
}

void CCFrequencyRule::SetReqNumber(const uint64_t& _reqNumber)
{
    m_reqNumber = _reqNumber;
    m_reqNumberHasBeenSet = true;
}

bool CCFrequencyRule::ReqNumberHasBeenSet() const
{
    return m_reqNumberHasBeenSet;
}

string CCFrequencyRule::GetAct() const
{
    return m_act;
}

void CCFrequencyRule::SetAct(const string& _act)
{
    m_act = _act;
    m_actHasBeenSet = true;
}

bool CCFrequencyRule::ActHasBeenSet() const
{
    return m_actHasBeenSet;
}

uint64_t CCFrequencyRule::GetExeDuration() const
{
    return m_exeDuration;
}

void CCFrequencyRule::SetExeDuration(const uint64_t& _exeDuration)
{
    m_exeDuration = _exeDuration;
    m_exeDurationHasBeenSet = true;
}

bool CCFrequencyRule::ExeDurationHasBeenSet() const
{
    return m_exeDurationHasBeenSet;
}

