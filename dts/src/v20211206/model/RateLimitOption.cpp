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
    m_hasUserSetRateLimitHasBeenSet(false),
    m_defaultDumpBpsHasBeenSet(false),
    m_currentSinkerRpsHasBeenSet(false),
    m_defaultSinkerRpsHasBeenSet(false),
    m_currentLoadBpsHasBeenSet(false),
    m_currentDstShardCountHasBeenSet(false),
    m_currentDumpBpsHasBeenSet(false),
    m_currentSinkerBpsHasBeenSet(false),
    m_defaultSinkerBpsHasBeenSet(false)
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

    if (value.HasMember("DefaultDumpBps") && !value["DefaultDumpBps"].IsNull())
    {
        if (!value["DefaultDumpBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultDumpBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDumpBps = value["DefaultDumpBps"].GetInt64();
        m_defaultDumpBpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentSinkerRps") && !value["CurrentSinkerRps"].IsNull())
    {
        if (!value["CurrentSinkerRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentSinkerRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSinkerRps = value["CurrentSinkerRps"].GetInt64();
        m_currentSinkerRpsHasBeenSet = true;
    }

    if (value.HasMember("DefaultSinkerRps") && !value["DefaultSinkerRps"].IsNull())
    {
        if (!value["DefaultSinkerRps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultSinkerRps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSinkerRps = value["DefaultSinkerRps"].GetInt64();
        m_defaultSinkerRpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentLoadBps") && !value["CurrentLoadBps"].IsNull())
    {
        if (!value["CurrentLoadBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentLoadBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentLoadBps = value["CurrentLoadBps"].GetInt64();
        m_currentLoadBpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentDstShardCount") && !value["CurrentDstShardCount"].IsNull())
    {
        if (!value["CurrentDstShardCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentDstShardCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDstShardCount = value["CurrentDstShardCount"].GetInt64();
        m_currentDstShardCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentDumpBps") && !value["CurrentDumpBps"].IsNull())
    {
        if (!value["CurrentDumpBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentDumpBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentDumpBps = value["CurrentDumpBps"].GetInt64();
        m_currentDumpBpsHasBeenSet = true;
    }

    if (value.HasMember("CurrentSinkerBps") && !value["CurrentSinkerBps"].IsNull())
    {
        if (!value["CurrentSinkerBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.CurrentSinkerBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSinkerBps = value["CurrentSinkerBps"].GetInt64();
        m_currentSinkerBpsHasBeenSet = true;
    }

    if (value.HasMember("DefaultSinkerBps") && !value["DefaultSinkerBps"].IsNull())
    {
        if (!value["DefaultSinkerBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitOption.DefaultSinkerBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSinkerBps = value["DefaultSinkerBps"].GetInt64();
        m_defaultSinkerBpsHasBeenSet = true;
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

    if (m_defaultDumpBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDumpBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDumpBps, allocator);
    }

    if (m_currentSinkerRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSinkerRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSinkerRps, allocator);
    }

    if (m_defaultSinkerRpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSinkerRps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSinkerRps, allocator);
    }

    if (m_currentLoadBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentLoadBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentLoadBps, allocator);
    }

    if (m_currentDstShardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDstShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDstShardCount, allocator);
    }

    if (m_currentDumpBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDumpBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentDumpBps, allocator);
    }

    if (m_currentSinkerBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSinkerBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSinkerBps, allocator);
    }

    if (m_defaultSinkerBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSinkerBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSinkerBps, allocator);
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

int64_t RateLimitOption::GetDefaultDumpBps() const
{
    return m_defaultDumpBps;
}

void RateLimitOption::SetDefaultDumpBps(const int64_t& _defaultDumpBps)
{
    m_defaultDumpBps = _defaultDumpBps;
    m_defaultDumpBpsHasBeenSet = true;
}

bool RateLimitOption::DefaultDumpBpsHasBeenSet() const
{
    return m_defaultDumpBpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentSinkerRps() const
{
    return m_currentSinkerRps;
}

void RateLimitOption::SetCurrentSinkerRps(const int64_t& _currentSinkerRps)
{
    m_currentSinkerRps = _currentSinkerRps;
    m_currentSinkerRpsHasBeenSet = true;
}

bool RateLimitOption::CurrentSinkerRpsHasBeenSet() const
{
    return m_currentSinkerRpsHasBeenSet;
}

int64_t RateLimitOption::GetDefaultSinkerRps() const
{
    return m_defaultSinkerRps;
}

void RateLimitOption::SetDefaultSinkerRps(const int64_t& _defaultSinkerRps)
{
    m_defaultSinkerRps = _defaultSinkerRps;
    m_defaultSinkerRpsHasBeenSet = true;
}

bool RateLimitOption::DefaultSinkerRpsHasBeenSet() const
{
    return m_defaultSinkerRpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentLoadBps() const
{
    return m_currentLoadBps;
}

void RateLimitOption::SetCurrentLoadBps(const int64_t& _currentLoadBps)
{
    m_currentLoadBps = _currentLoadBps;
    m_currentLoadBpsHasBeenSet = true;
}

bool RateLimitOption::CurrentLoadBpsHasBeenSet() const
{
    return m_currentLoadBpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentDstShardCount() const
{
    return m_currentDstShardCount;
}

void RateLimitOption::SetCurrentDstShardCount(const int64_t& _currentDstShardCount)
{
    m_currentDstShardCount = _currentDstShardCount;
    m_currentDstShardCountHasBeenSet = true;
}

bool RateLimitOption::CurrentDstShardCountHasBeenSet() const
{
    return m_currentDstShardCountHasBeenSet;
}

int64_t RateLimitOption::GetCurrentDumpBps() const
{
    return m_currentDumpBps;
}

void RateLimitOption::SetCurrentDumpBps(const int64_t& _currentDumpBps)
{
    m_currentDumpBps = _currentDumpBps;
    m_currentDumpBpsHasBeenSet = true;
}

bool RateLimitOption::CurrentDumpBpsHasBeenSet() const
{
    return m_currentDumpBpsHasBeenSet;
}

int64_t RateLimitOption::GetCurrentSinkerBps() const
{
    return m_currentSinkerBps;
}

void RateLimitOption::SetCurrentSinkerBps(const int64_t& _currentSinkerBps)
{
    m_currentSinkerBps = _currentSinkerBps;
    m_currentSinkerBpsHasBeenSet = true;
}

bool RateLimitOption::CurrentSinkerBpsHasBeenSet() const
{
    return m_currentSinkerBpsHasBeenSet;
}

int64_t RateLimitOption::GetDefaultSinkerBps() const
{
    return m_defaultSinkerBps;
}

void RateLimitOption::SetDefaultSinkerBps(const int64_t& _defaultSinkerBps)
{
    m_defaultSinkerBps = _defaultSinkerBps;
    m_defaultSinkerBpsHasBeenSet = true;
}

bool RateLimitOption::DefaultSinkerBpsHasBeenSet() const
{
    return m_defaultSinkerBpsHasBeenSet;
}

