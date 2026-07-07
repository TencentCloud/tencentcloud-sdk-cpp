/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/alb/v20251030/model/StickySessionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

StickySessionConfig::StickySessionConfig() :
    m_stickySessionEnabledHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_cookieTimeoutHasBeenSet(false),
    m_stickySessionTypeHasBeenSet(false)
{
}

CoreInternalOutcome StickySessionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StickySessionEnabled") && !value["StickySessionEnabled"].IsNull())
    {
        if (!value["StickySessionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StickySessionConfig.StickySessionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stickySessionEnabled = value["StickySessionEnabled"].GetBool();
        m_stickySessionEnabledHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StickySessionConfig.Cookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookie = string(value["Cookie"].GetString());
        m_cookieHasBeenSet = true;
    }

    if (value.HasMember("CookieTimeout") && !value["CookieTimeout"].IsNull())
    {
        if (!value["CookieTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StickySessionConfig.CookieTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cookieTimeout = value["CookieTimeout"].GetInt64();
        m_cookieTimeoutHasBeenSet = true;
    }

    if (value.HasMember("StickySessionType") && !value["StickySessionType"].IsNull())
    {
        if (!value["StickySessionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StickySessionConfig.StickySessionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stickySessionType = string(value["StickySessionType"].GetString());
        m_stickySessionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StickySessionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stickySessionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StickySessionEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stickySessionEnabled, allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cookie.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CookieTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cookieTimeout, allocator);
    }

    if (m_stickySessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StickySessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stickySessionType.c_str(), allocator).Move(), allocator);
    }

}


bool StickySessionConfig::GetStickySessionEnabled() const
{
    return m_stickySessionEnabled;
}

void StickySessionConfig::SetStickySessionEnabled(const bool& _stickySessionEnabled)
{
    m_stickySessionEnabled = _stickySessionEnabled;
    m_stickySessionEnabledHasBeenSet = true;
}

bool StickySessionConfig::StickySessionEnabledHasBeenSet() const
{
    return m_stickySessionEnabledHasBeenSet;
}

string StickySessionConfig::GetCookie() const
{
    return m_cookie;
}

void StickySessionConfig::SetCookie(const string& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool StickySessionConfig::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

int64_t StickySessionConfig::GetCookieTimeout() const
{
    return m_cookieTimeout;
}

void StickySessionConfig::SetCookieTimeout(const int64_t& _cookieTimeout)
{
    m_cookieTimeout = _cookieTimeout;
    m_cookieTimeoutHasBeenSet = true;
}

bool StickySessionConfig::CookieTimeoutHasBeenSet() const
{
    return m_cookieTimeoutHasBeenSet;
}

string StickySessionConfig::GetStickySessionType() const
{
    return m_stickySessionType;
}

void StickySessionConfig::SetStickySessionType(const string& _stickySessionType)
{
    m_stickySessionType = _stickySessionType;
    m_stickySessionTypeHasBeenSet = true;
}

bool StickySessionConfig::StickySessionTypeHasBeenSet() const
{
    return m_stickySessionTypeHasBeenSet;
}

