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

#include <tencentcloud/tcb/v20180608/model/AgentRuntimeSessionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AgentRuntimeSessionConfig::AgentRuntimeSessionConfig() :
    m_maxConcurrencyHasBeenSet(false),
    m_sessionSourceHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_maximumConcurrencySessionPerInstanceHasBeenSet(false),
    m_maximumTTLInSecondsHasBeenSet(false),
    m_maximumIdleTimeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome AgentRuntimeSessionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.MaxConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetInt64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("SessionSource") && !value["SessionSource"].IsNull())
    {
        if (!value["SessionSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.SessionSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionSource = string(value["SessionSource"].GetString());
        m_sessionSourceHasBeenSet = true;
    }

    if (value.HasMember("SessionName") && !value["SessionName"].IsNull())
    {
        if (!value["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(value["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }

    if (value.HasMember("MaximumConcurrencySessionPerInstance") && !value["MaximumConcurrencySessionPerInstance"].IsNull())
    {
        if (!value["MaximumConcurrencySessionPerInstance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.MaximumConcurrencySessionPerInstance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumConcurrencySessionPerInstance = value["MaximumConcurrencySessionPerInstance"].GetInt64();
        m_maximumConcurrencySessionPerInstanceHasBeenSet = true;
    }

    if (value.HasMember("MaximumTTLInSeconds") && !value["MaximumTTLInSeconds"].IsNull())
    {
        if (!value["MaximumTTLInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.MaximumTTLInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumTTLInSeconds = value["MaximumTTLInSeconds"].GetInt64();
        m_maximumTTLInSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaximumIdleTimeInSeconds") && !value["MaximumIdleTimeInSeconds"].IsNull())
    {
        if (!value["MaximumIdleTimeInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeSessionConfig.MaximumIdleTimeInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumIdleTimeInSeconds = value["MaximumIdleTimeInSeconds"].GetInt64();
        m_maximumIdleTimeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRuntimeSessionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

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

}


int64_t AgentRuntimeSessionConfig::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void AgentRuntimeSessionConfig::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

string AgentRuntimeSessionConfig::GetSessionSource() const
{
    return m_sessionSource;
}

void AgentRuntimeSessionConfig::SetSessionSource(const string& _sessionSource)
{
    m_sessionSource = _sessionSource;
    m_sessionSourceHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::SessionSourceHasBeenSet() const
{
    return m_sessionSourceHasBeenSet;
}

string AgentRuntimeSessionConfig::GetSessionName() const
{
    return m_sessionName;
}

void AgentRuntimeSessionConfig::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

int64_t AgentRuntimeSessionConfig::GetMaximumConcurrencySessionPerInstance() const
{
    return m_maximumConcurrencySessionPerInstance;
}

void AgentRuntimeSessionConfig::SetMaximumConcurrencySessionPerInstance(const int64_t& _maximumConcurrencySessionPerInstance)
{
    m_maximumConcurrencySessionPerInstance = _maximumConcurrencySessionPerInstance;
    m_maximumConcurrencySessionPerInstanceHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::MaximumConcurrencySessionPerInstanceHasBeenSet() const
{
    return m_maximumConcurrencySessionPerInstanceHasBeenSet;
}

int64_t AgentRuntimeSessionConfig::GetMaximumTTLInSeconds() const
{
    return m_maximumTTLInSeconds;
}

void AgentRuntimeSessionConfig::SetMaximumTTLInSeconds(const int64_t& _maximumTTLInSeconds)
{
    m_maximumTTLInSeconds = _maximumTTLInSeconds;
    m_maximumTTLInSecondsHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::MaximumTTLInSecondsHasBeenSet() const
{
    return m_maximumTTLInSecondsHasBeenSet;
}

int64_t AgentRuntimeSessionConfig::GetMaximumIdleTimeInSeconds() const
{
    return m_maximumIdleTimeInSeconds;
}

void AgentRuntimeSessionConfig::SetMaximumIdleTimeInSeconds(const int64_t& _maximumIdleTimeInSeconds)
{
    m_maximumIdleTimeInSeconds = _maximumIdleTimeInSeconds;
    m_maximumIdleTimeInSecondsHasBeenSet = true;
}

bool AgentRuntimeSessionConfig::MaximumIdleTimeInSecondsHasBeenSet() const
{
    return m_maximumIdleTimeInSecondsHasBeenSet;
}

