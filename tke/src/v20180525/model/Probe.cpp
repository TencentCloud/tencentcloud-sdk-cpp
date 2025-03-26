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

#include <tencentcloud/tke/v20180525/model/Probe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Probe::Probe() :
    m_failureThresholdHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_periodSecondsHasBeenSet(false),
    m_successThresholdHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false)
{
}

CoreInternalOutcome Probe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailureThreshold") && !value["FailureThreshold"].IsNull())
    {
        if (!value["FailureThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Probe.FailureThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failureThreshold = value["FailureThreshold"].GetInt64();
        m_failureThresholdHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Probe.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("PeriodSeconds") && !value["PeriodSeconds"].IsNull())
    {
        if (!value["PeriodSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Probe.PeriodSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodSeconds = value["PeriodSeconds"].GetInt64();
        m_periodSecondsHasBeenSet = true;
    }

    if (value.HasMember("SuccessThreshold") && !value["SuccessThreshold"].IsNull())
    {
        if (!value["SuccessThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Probe.SuccessThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successThreshold = value["SuccessThreshold"].GetInt64();
        m_successThresholdHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Probe.TimeoutSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetInt64();
        m_timeoutSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Probe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureThreshold, allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_periodSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodSeconds, allocator);
    }

    if (m_successThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successThreshold, allocator);
    }

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

}


int64_t Probe::GetFailureThreshold() const
{
    return m_failureThreshold;
}

void Probe::SetFailureThreshold(const int64_t& _failureThreshold)
{
    m_failureThreshold = _failureThreshold;
    m_failureThresholdHasBeenSet = true;
}

bool Probe::FailureThresholdHasBeenSet() const
{
    return m_failureThresholdHasBeenSet;
}

int64_t Probe::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void Probe::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool Probe::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

int64_t Probe::GetPeriodSeconds() const
{
    return m_periodSeconds;
}

void Probe::SetPeriodSeconds(const int64_t& _periodSeconds)
{
    m_periodSeconds = _periodSeconds;
    m_periodSecondsHasBeenSet = true;
}

bool Probe::PeriodSecondsHasBeenSet() const
{
    return m_periodSecondsHasBeenSet;
}

int64_t Probe::GetSuccessThreshold() const
{
    return m_successThreshold;
}

void Probe::SetSuccessThreshold(const int64_t& _successThreshold)
{
    m_successThreshold = _successThreshold;
    m_successThresholdHasBeenSet = true;
}

bool Probe::SuccessThresholdHasBeenSet() const
{
    return m_successThresholdHasBeenSet;
}

int64_t Probe::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void Probe::SetTimeoutSeconds(const int64_t& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool Probe::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

