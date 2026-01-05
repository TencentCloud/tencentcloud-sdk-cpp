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

#include <tencentcloud/waf/v20180125/model/BotIdStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BotIdStat::BotIdStat() :
    m_patternHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_monitorCountHasBeenSet(false),
    m_interceptCountHasBeenSet(false),
    m_redirectCountHasBeenSet(false),
    m_captchaCountHasBeenSet(false),
    m_protectLevelHasBeenSet(false),
    m_globalRedirectHasBeenSet(false),
    m_jsChallengeCountHasBeenSet(false)
{
}

CoreInternalOutcome BotIdStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("MonitorCount") && !value["MonitorCount"].IsNull())
    {
        if (!value["MonitorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.MonitorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorCount = value["MonitorCount"].GetInt64();
        m_monitorCountHasBeenSet = true;
    }

    if (value.HasMember("InterceptCount") && !value["InterceptCount"].IsNull())
    {
        if (!value["InterceptCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.InterceptCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interceptCount = value["InterceptCount"].GetInt64();
        m_interceptCountHasBeenSet = true;
    }

    if (value.HasMember("RedirectCount") && !value["RedirectCount"].IsNull())
    {
        if (!value["RedirectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.RedirectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectCount = value["RedirectCount"].GetInt64();
        m_redirectCountHasBeenSet = true;
    }

    if (value.HasMember("CaptchaCount") && !value["CaptchaCount"].IsNull())
    {
        if (!value["CaptchaCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.CaptchaCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCount = value["CaptchaCount"].GetInt64();
        m_captchaCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectLevel") && !value["ProtectLevel"].IsNull())
    {
        if (!value["ProtectLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.ProtectLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectLevel = string(value["ProtectLevel"].GetString());
        m_protectLevelHasBeenSet = true;
    }

    if (value.HasMember("GlobalRedirect") && !value["GlobalRedirect"].IsNull())
    {
        if (!value["GlobalRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.GlobalRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalRedirect = string(value["GlobalRedirect"].GetString());
        m_globalRedirectHasBeenSet = true;
    }

    if (value.HasMember("JsChallengeCount") && !value["JsChallengeCount"].IsNull())
    {
        if (!value["JsChallengeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotIdStat.JsChallengeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsChallengeCount = value["JsChallengeCount"].GetInt64();
        m_jsChallengeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotIdStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_monitorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorCount, allocator);
    }

    if (m_interceptCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interceptCount, allocator);
    }

    if (m_redirectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectCount, allocator);
    }

    if (m_captchaCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_captchaCount, allocator);
    }

    if (m_protectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_globalRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_jsChallengeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsChallengeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsChallengeCount, allocator);
    }

}


string BotIdStat::GetPattern() const
{
    return m_pattern;
}

void BotIdStat::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool BotIdStat::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

int64_t BotIdStat::GetTotalCount() const
{
    return m_totalCount;
}

void BotIdStat::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool BotIdStat::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t BotIdStat::GetMonitorCount() const
{
    return m_monitorCount;
}

void BotIdStat::SetMonitorCount(const int64_t& _monitorCount)
{
    m_monitorCount = _monitorCount;
    m_monitorCountHasBeenSet = true;
}

bool BotIdStat::MonitorCountHasBeenSet() const
{
    return m_monitorCountHasBeenSet;
}

int64_t BotIdStat::GetInterceptCount() const
{
    return m_interceptCount;
}

void BotIdStat::SetInterceptCount(const int64_t& _interceptCount)
{
    m_interceptCount = _interceptCount;
    m_interceptCountHasBeenSet = true;
}

bool BotIdStat::InterceptCountHasBeenSet() const
{
    return m_interceptCountHasBeenSet;
}

int64_t BotIdStat::GetRedirectCount() const
{
    return m_redirectCount;
}

void BotIdStat::SetRedirectCount(const int64_t& _redirectCount)
{
    m_redirectCount = _redirectCount;
    m_redirectCountHasBeenSet = true;
}

bool BotIdStat::RedirectCountHasBeenSet() const
{
    return m_redirectCountHasBeenSet;
}

int64_t BotIdStat::GetCaptchaCount() const
{
    return m_captchaCount;
}

void BotIdStat::SetCaptchaCount(const int64_t& _captchaCount)
{
    m_captchaCount = _captchaCount;
    m_captchaCountHasBeenSet = true;
}

bool BotIdStat::CaptchaCountHasBeenSet() const
{
    return m_captchaCountHasBeenSet;
}

string BotIdStat::GetProtectLevel() const
{
    return m_protectLevel;
}

void BotIdStat::SetProtectLevel(const string& _protectLevel)
{
    m_protectLevel = _protectLevel;
    m_protectLevelHasBeenSet = true;
}

bool BotIdStat::ProtectLevelHasBeenSet() const
{
    return m_protectLevelHasBeenSet;
}

string BotIdStat::GetGlobalRedirect() const
{
    return m_globalRedirect;
}

void BotIdStat::SetGlobalRedirect(const string& _globalRedirect)
{
    m_globalRedirect = _globalRedirect;
    m_globalRedirectHasBeenSet = true;
}

bool BotIdStat::GlobalRedirectHasBeenSet() const
{
    return m_globalRedirectHasBeenSet;
}

int64_t BotIdStat::GetJsChallengeCount() const
{
    return m_jsChallengeCount;
}

void BotIdStat::SetJsChallengeCount(const int64_t& _jsChallengeCount)
{
    m_jsChallengeCount = _jsChallengeCount;
    m_jsChallengeCountHasBeenSet = true;
}

bool BotIdStat::JsChallengeCountHasBeenSet() const
{
    return m_jsChallengeCountHasBeenSet;
}

