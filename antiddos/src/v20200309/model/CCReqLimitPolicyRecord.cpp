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

#include <tencentcloud/antiddos/v20200309/model/CCReqLimitPolicyRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CCReqLimitPolicyRecord::CCReqLimitPolicyRecord() :
    m_periodHasBeenSet(false),
    m_requestNumHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_executeDurationHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_cookieHasBeenSet(false)
{
}

CoreInternalOutcome CCReqLimitPolicyRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RequestNum") && !value["RequestNum"].IsNull())
    {
        if (!value["RequestNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.RequestNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestNum = value["RequestNum"].GetUint64();
        m_requestNumHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ExecuteDuration") && !value["ExecuteDuration"].IsNull())
    {
        if (!value["ExecuteDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.ExecuteDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executeDuration = value["ExecuteDuration"].GetUint64();
        m_executeDurationHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCReqLimitPolicyRecord.Cookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookie = string(value["Cookie"].GetString());
        m_cookieHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCReqLimitPolicyRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_requestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestNum, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_executeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeDuration, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
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

}


uint64_t CCReqLimitPolicyRecord::GetPeriod() const
{
    return m_period;
}

void CCReqLimitPolicyRecord::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CCReqLimitPolicyRecord::GetRequestNum() const
{
    return m_requestNum;
}

void CCReqLimitPolicyRecord::SetRequestNum(const uint64_t& _requestNum)
{
    m_requestNum = _requestNum;
    m_requestNumHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::RequestNumHasBeenSet() const
{
    return m_requestNumHasBeenSet;
}

string CCReqLimitPolicyRecord::GetAction() const
{
    return m_action;
}

void CCReqLimitPolicyRecord::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t CCReqLimitPolicyRecord::GetExecuteDuration() const
{
    return m_executeDuration;
}

void CCReqLimitPolicyRecord::SetExecuteDuration(const uint64_t& _executeDuration)
{
    m_executeDuration = _executeDuration;
    m_executeDurationHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::ExecuteDurationHasBeenSet() const
{
    return m_executeDurationHasBeenSet;
}

string CCReqLimitPolicyRecord::GetMode() const
{
    return m_mode;
}

void CCReqLimitPolicyRecord::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CCReqLimitPolicyRecord::GetUri() const
{
    return m_uri;
}

void CCReqLimitPolicyRecord::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string CCReqLimitPolicyRecord::GetUserAgent() const
{
    return m_userAgent;
}

void CCReqLimitPolicyRecord::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string CCReqLimitPolicyRecord::GetCookie() const
{
    return m_cookie;
}

void CCReqLimitPolicyRecord::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CCReqLimitPolicyRecord::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

