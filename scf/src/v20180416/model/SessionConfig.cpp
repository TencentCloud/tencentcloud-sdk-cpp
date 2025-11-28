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

#include <tencentcloud/scf/v20180416/model/SessionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

SessionConfig::SessionConfig() :
    m_sessionSourceHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_maximumConcurrencySessionPerInstanceHasBeenSet(false),
    m_maximumTTLInSecondsHasBeenSet(false),
    m_maximumIdleTimeInSecondsHasBeenSet(false),
    m_sessionPathHasBeenSet(false),
    m_idleTimeoutStrategyHasBeenSet(false)
{
}

CoreInternalOutcome SessionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionSource") && !value["SessionSource"].IsNull())
    {
        if (!value["SessionSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.SessionSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionSource = string(value["SessionSource"].GetString());
        m_sessionSourceHasBeenSet = true;
    }

    if (value.HasMember("SessionName") && !value["SessionName"].IsNull())
    {
        if (!value["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(value["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }

    if (value.HasMember("MaximumConcurrencySessionPerInstance") && !value["MaximumConcurrencySessionPerInstance"].IsNull())
    {
        if (!value["MaximumConcurrencySessionPerInstance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.MaximumConcurrencySessionPerInstance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumConcurrencySessionPerInstance = value["MaximumConcurrencySessionPerInstance"].GetUint64();
        m_maximumConcurrencySessionPerInstanceHasBeenSet = true;
    }

    if (value.HasMember("MaximumTTLInSeconds") && !value["MaximumTTLInSeconds"].IsNull())
    {
        if (!value["MaximumTTLInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.MaximumTTLInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumTTLInSeconds = value["MaximumTTLInSeconds"].GetUint64();
        m_maximumTTLInSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaximumIdleTimeInSeconds") && !value["MaximumIdleTimeInSeconds"].IsNull())
    {
        if (!value["MaximumIdleTimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.MaximumIdleTimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumIdleTimeInSeconds = value["MaximumIdleTimeInSeconds"].GetUint64();
        m_maximumIdleTimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("SessionPath") && !value["SessionPath"].IsNull())
    {
        if (!value["SessionPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.SessionPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPath = string(value["SessionPath"].GetString());
        m_sessionPathHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeoutStrategy") && !value["IdleTimeoutStrategy"].IsNull())
    {
        if (!value["IdleTimeoutStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionConfig.IdleTimeoutStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeoutStrategy = string(value["IdleTimeoutStrategy"].GetString());
        m_idleTimeoutStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionSource.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumConcurrencySessionPerInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumConcurrencySessionPerInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumConcurrencySessionPerInstance, allocator);
    }

    if (m_maximumTTLInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumTTLInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumTTLInSeconds, allocator);
    }

    if (m_maximumIdleTimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumIdleTimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumIdleTimeInSeconds, allocator);
    }

    if (m_sessionPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionPath.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeoutStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleTimeoutStrategy.c_str(), allocator).Move(), allocator);
    }

}


string SessionConfig::GetSessionSource() const
{
    return m_sessionSource;
}

void SessionConfig::SetSessionSource(const string& _sessionSource)
{
    m_sessionSource = _sessionSource;
    m_sessionSourceHasBeenSet = true;
}

bool SessionConfig::SessionSourceHasBeenSet() const
{
    return m_sessionSourceHasBeenSet;
}

string SessionConfig::GetSessionName() const
{
    return m_sessionName;
}

void SessionConfig::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool SessionConfig::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

uint64_t SessionConfig::GetMaximumConcurrencySessionPerInstance() const
{
    return m_maximumConcurrencySessionPerInstance;
}

void SessionConfig::SetMaximumConcurrencySessionPerInstance(const uint64_t& _maximumConcurrencySessionPerInstance)
{
    m_maximumConcurrencySessionPerInstance = _maximumConcurrencySessionPerInstance;
    m_maximumConcurrencySessionPerInstanceHasBeenSet = true;
}

bool SessionConfig::MaximumConcurrencySessionPerInstanceHasBeenSet() const
{
    return m_maximumConcurrencySessionPerInstanceHasBeenSet;
}

uint64_t SessionConfig::GetMaximumTTLInSeconds() const
{
    return m_maximumTTLInSeconds;
}

void SessionConfig::SetMaximumTTLInSeconds(const uint64_t& _maximumTTLInSeconds)
{
    m_maximumTTLInSeconds = _maximumTTLInSeconds;
    m_maximumTTLInSecondsHasBeenSet = true;
}

bool SessionConfig::MaximumTTLInSecondsHasBeenSet() const
{
    return m_maximumTTLInSecondsHasBeenSet;
}

uint64_t SessionConfig::GetMaximumIdleTimeInSeconds() const
{
    return m_maximumIdleTimeInSeconds;
}

void SessionConfig::SetMaximumIdleTimeInSeconds(const uint64_t& _maximumIdleTimeInSeconds)
{
    m_maximumIdleTimeInSeconds = _maximumIdleTimeInSeconds;
    m_maximumIdleTimeInSecondsHasBeenSet = true;
}

bool SessionConfig::MaximumIdleTimeInSecondsHasBeenSet() const
{
    return m_maximumIdleTimeInSecondsHasBeenSet;
}

string SessionConfig::GetSessionPath() const
{
    return m_sessionPath;
}

void SessionConfig::SetSessionPath(const string& _sessionPath)
{
    m_sessionPath = _sessionPath;
    m_sessionPathHasBeenSet = true;
}

bool SessionConfig::SessionPathHasBeenSet() const
{
    return m_sessionPathHasBeenSet;
}

string SessionConfig::GetIdleTimeoutStrategy() const
{
    return m_idleTimeoutStrategy;
}

void SessionConfig::SetIdleTimeoutStrategy(const string& _idleTimeoutStrategy)
{
    m_idleTimeoutStrategy = _idleTimeoutStrategy;
    m_idleTimeoutStrategyHasBeenSet = true;
}

bool SessionConfig::IdleTimeoutStrategyHasBeenSet() const
{
    return m_idleTimeoutStrategyHasBeenSet;
}

