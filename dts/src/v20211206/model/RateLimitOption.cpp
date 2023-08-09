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

#include <tencentcloud/dts/v20211206/model/RateLimitOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

RateLimitOption::RateLimitOption() :
    m_currentDumpThreadHasBeenSet(false),
    m_defaultDumpThreadHasBeenSet(false),
    m_currentDumpRpsHasBeenSet(false),
    m_defaultDumpRpsHasBeenSet(false),
    m_currentLoadThreadHasBeenSet(false),
    m_defaultLoadThreadHasBeenSet(false),
    m_currentLoadRpsHasBeenSet(false),
    m_defaultLoadRpsHasBeenSet(false),
    m_currentSinkerThreadHasBeenSet(false),
    m_defaultSinkerThreadHasBeenSet(false),
    m_hasUserSetRateLimitHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentDumpThread") && !value["CurrentDumpThread"].IsNull())
    {
        if (!value["CurrentDumpThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentDumpThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDumpThread = value["CurrentDumpThread"].GetInt64();
        m_currentDumpThreadHasBeenSet = true;
    }

    if (value.HasMember("DefaultDumpThread") && !value["DefaultDumpThread"].IsNull())
    {
        if (!value["DefaultDumpThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultDumpThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDumpThread = value["DefaultDumpThread"].GetInt64();
        m_defaultDumpThreadHasBeenSet = true;
    }

    if (value.HasMember("CurrentDumpRps") && !value["CurrentDumpRps"].IsNull())
    {
        if (!value["CurrentDumpRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentDumpRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDumpRps = value["CurrentDumpRps"].GetInt64();
        m_currentDumpRpsHasBeenSet = true;
    }

    if (value.HasMember("DefaultDumpRps") && !value["DefaultDumpRps"].IsNull())
    {
        if (!value["DefaultDumpRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultDumpRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDumpRps = value["DefaultDumpRps"].GetInt64();
        m_defaultDumpRpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentLoadThread") && !value["CurrentLoadThread"].IsNull())
    {
        if (!value["CurrentLoadThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentLoadThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentLoadThread = value["CurrentLoadThread"].GetInt64();
        m_currentLoadThreadHasBeenSet = true;
    }

    if (value.HasMember("DefaultLoadThread") && !value["DefaultLoadThread"].IsNull())
    {
        if (!value["DefaultLoadThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultLoadThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLoadThread = value["DefaultLoadThread"].GetInt64();
        m_defaultLoadThreadHasBeenSet = true;
    }

    if (value.HasMember("CurrentLoadRps") && !value["CurrentLoadRps"].IsNull())
    {
        if (!value["CurrentLoadRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentLoadRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentLoadRps = value["CurrentLoadRps"].GetInt64();
        m_currentLoadRpsHasBeenSet = true;
    }

    if (value.HasMember("DefaultLoadRps") && !value["DefaultLoadRps"].IsNull())
    {
        if (!value["DefaultLoadRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultLoadRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultLoadRps = value["DefaultLoadRps"].GetInt64();
        m_defaultLoadRpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentSinkerThread") && !value["CurrentSinkerThread"].IsNull())
    {
        if (!value["CurrentSinkerThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentSinkerThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSinkerThread = value["CurrentSinkerThread"].GetInt64();
        m_currentSinkerThreadHasBeenSet = true;
    }

    if (value.HasMember("DefaultSinkerThread") && !value["DefaultSinkerThread"].IsNull())
    {
        if (!value["DefaultSinkerThread"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultSinkerThread` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSinkerThread = value["DefaultSinkerThread"].GetInt64();
        m_defaultSinkerThreadHasBeenSet = true;
    }

    if (value.HasMember("HasUserSetRateLimit") && !value["HasUserSetRateLimit"].IsNull())
    {
        if (!value["HasUserSetRateLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.HasUserSetRateLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasUserSetRateLimit = string(value["HasUserSetRateLimit"].GetString());
        m_hasUserSetRateLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentDumpThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDumpThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDumpThread, allocator);
    }

    if (m_defaultDumpThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDumpThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDumpThread, allocator);
    }

    if (m_currentDumpRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDumpRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDumpRps, allocator);
    }

    if (m_defaultDumpRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDumpRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDumpRps, allocator);
    }

    if (m_currentLoadThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentLoadThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentLoadThread, allocator);
    }

    if (m_defaultLoadThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultLoadThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultLoadThread, allocator);
    }

    if (m_currentLoadRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentLoadRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentLoadRps, allocator);
    }

    if (m_defaultLoadRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultLoadRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultLoadRps, allocator);
    }

    if (m_currentSinkerThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSinkerThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSinkerThread, allocator);
    }

    if (m_defaultSinkerThreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSinkerThread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSinkerThread, allocator);
    }

    if (m_hasUserSetRateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasUserSetRateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasUserSetRateLimit.c_str(), allocator).Move(), allocator);
    }

}


int64_t RateLimitOption::GetCurrentDumpThread() const
{
    return m_currentDumpThread;
}

void RateLimitOption::SetCurrentDumpThread(const int64_t& _currentDumpThread)
{
    m_currentDumpThread = _currentDumpThread;
    m_currentDumpThreadHasBeenSet = true;
}

bool RateLimitOption::CurrentDumpThreadHasBeenSet() const
{
    return m_currentDumpThreadHasBeenSet;
}

int64_t RateLimitOption::GetDefaultDumpThread() const
{
    return m_defaultDumpThread;
}

void RateLimitOption::SetDefaultDumpThread(const int64_t& _defaultDumpThread)
{
    m_defaultDumpThread = _defaultDumpThread;
    m_defaultDumpThreadHasBeenSet = true;
}

bool RateLimitOption::DefaultDumpThreadHasBeenSet() const
{
    return m_defaultDumpThreadHasBeenSet;
}

int64_t RateLimitOption::GetCurrentDumpRps() const
{
    return m_currentDumpRps;
}

void RateLimitOption::SetCurrentDumpRps(const int64_t& _currentDumpRps)
{
    m_currentDumpRps = _currentDumpRps;
    m_currentDumpRpsHasBeenSet = true;
}

bool RateLimitOption::CurrentDumpRpsHasBeenSet() const
{
    return m_currentDumpRpsHasBeenSet;
}

int64_t RateLimitOption::GetDefaultDumpRps() const
{
    return m_defaultDumpRps;
}

void RateLimitOption::SetDefaultDumpRps(const int64_t& _defaultDumpRps)
{
    m_defaultDumpRps = _defaultDumpRps;
    m_defaultDumpRpsHasBeenSet = true;
}

bool RateLimitOption::DefaultDumpRpsHasBeenSet() const
{
    return m_defaultDumpRpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentLoadThread() const
{
    return m_currentLoadThread;
}

void RateLimitOption::SetCurrentLoadThread(const int64_t& _currentLoadThread)
{
    m_currentLoadThread = _currentLoadThread;
    m_currentLoadThreadHasBeenSet = true;
}

bool RateLimitOption::CurrentLoadThreadHasBeenSet() const
{
    return m_currentLoadThreadHasBeenSet;
}

int64_t RateLimitOption::GetDefaultLoadThread() const
{
    return m_defaultLoadThread;
}

void RateLimitOption::SetDefaultLoadThread(const int64_t& _defaultLoadThread)
{
    m_defaultLoadThread = _defaultLoadThread;
    m_defaultLoadThreadHasBeenSet = true;
}

bool RateLimitOption::DefaultLoadThreadHasBeenSet() const
{
    return m_defaultLoadThreadHasBeenSet;
}

int64_t RateLimitOption::GetCurrentLoadRps() const
{
    return m_currentLoadRps;
}

void RateLimitOption::SetCurrentLoadRps(const int64_t& _currentLoadRps)
{
    m_currentLoadRps = _currentLoadRps;
    m_currentLoadRpsHasBeenSet = true;
}

bool RateLimitOption::CurrentLoadRpsHasBeenSet() const
{
    return m_currentLoadRpsHasBeenSet;
}

int64_t RateLimitOption::GetDefaultLoadRps() const
{
    return m_defaultLoadRps;
}

void RateLimitOption::SetDefaultLoadRps(const int64_t& _defaultLoadRps)
{
    m_defaultLoadRps = _defaultLoadRps;
    m_defaultLoadRpsHasBeenSet = true;
}

bool RateLimitOption::DefaultLoadRpsHasBeenSet() const
{
    return m_defaultLoadRpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentSinkerThread() const
{
    return m_currentSinkerThread;
}

void RateLimitOption::SetCurrentSinkerThread(const int64_t& _currentSinkerThread)
{
    m_currentSinkerThread = _currentSinkerThread;
    m_currentSinkerThreadHasBeenSet = true;
}

bool RateLimitOption::CurrentSinkerThreadHasBeenSet() const
{
    return m_currentSinkerThreadHasBeenSet;
}

int64_t RateLimitOption::GetDefaultSinkerThread() const
{
    return m_defaultSinkerThread;
}

void RateLimitOption::SetDefaultSinkerThread(const int64_t& _defaultSinkerThread)
{
    m_defaultSinkerThread = _defaultSinkerThread;
    m_defaultSinkerThreadHasBeenSet = true;
}

bool RateLimitOption::DefaultSinkerThreadHasBeenSet() const
{
    return m_defaultSinkerThreadHasBeenSet;
}

string RateLimitOption::GetHasUserSetRateLimit() const
{
    return m_hasUserSetRateLimit;
}

void RateLimitOption::SetHasUserSetRateLimit(const string& _hasUserSetRateLimit)
{
    m_hasUserSetRateLimit = _hasUserSetRateLimit;
    m_hasUserSetRateLimitHasBeenSet = true;
}

bool RateLimitOption::HasUserSetRateLimitHasBeenSet() const
{
    return m_hasUserSetRateLimitHasBeenSet;
}

