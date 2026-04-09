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

#include <tencentcloud/hai/v20230812/model/ProbeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ProbeConfig::ProbeConfig() :
    m_httpGetHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_periodSecondsHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false),
    m_successThresholdHasBeenSet(false),
    m_failureThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ProbeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpGet") && !value["HttpGet"].IsNull())
    {
        if (!value["HttpGet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.HttpGet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpGet.Deserialize(value["HttpGet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpGetHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("PeriodSeconds") && !value["PeriodSeconds"].IsNull())
    {
        if (!value["PeriodSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.PeriodSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodSeconds = value["PeriodSeconds"].GetInt64();
        m_periodSecondsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.TimeoutSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetInt64();
        m_timeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("SuccessThreshold") && !value["SuccessThreshold"].IsNull())
    {
        if (!value["SuccessThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.SuccessThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successThreshold = value["SuccessThreshold"].GetInt64();
        m_successThresholdHasBeenSet = true;
    }

    if (value.HasMember("FailureThreshold") && !value["FailureThreshold"].IsNull())
    {
        if (!value["FailureThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfig.FailureThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failureThreshold = value["FailureThreshold"].GetInt64();
        m_failureThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpGetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpGet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpGet.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

    if (m_successThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successThreshold, allocator);
    }

    if (m_failureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureThreshold, allocator);
    }

}


HttpConfig ProbeConfig::GetHttpGet() const
{
    return m_httpGet;
}

void ProbeConfig::SetHttpGet(const HttpConfig& _httpGet)
{
    m_httpGet = _httpGet;
    m_httpGetHasBeenSet = true;
}

bool ProbeConfig::HttpGetHasBeenSet() const
{
    return m_httpGetHasBeenSet;
}

int64_t ProbeConfig::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void ProbeConfig::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool ProbeConfig::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

int64_t ProbeConfig::GetPeriodSeconds() const
{
    return m_periodSeconds;
}

void ProbeConfig::SetPeriodSeconds(const int64_t& _periodSeconds)
{
    m_periodSeconds = _periodSeconds;
    m_periodSecondsHasBeenSet = true;
}

bool ProbeConfig::PeriodSecondsHasBeenSet() const
{
    return m_periodSecondsHasBeenSet;
}

int64_t ProbeConfig::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void ProbeConfig::SetTimeoutSeconds(const int64_t& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool ProbeConfig::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

int64_t ProbeConfig::GetSuccessThreshold() const
{
    return m_successThreshold;
}

void ProbeConfig::SetSuccessThreshold(const int64_t& _successThreshold)
{
    m_successThreshold = _successThreshold;
    m_successThresholdHasBeenSet = true;
}

bool ProbeConfig::SuccessThresholdHasBeenSet() const
{
    return m_successThresholdHasBeenSet;
}

int64_t ProbeConfig::GetFailureThreshold() const
{
    return m_failureThreshold;
}

void ProbeConfig::SetFailureThreshold(const int64_t& _failureThreshold)
{
    m_failureThreshold = _failureThreshold;
    m_failureThresholdHasBeenSet = true;
}

bool ProbeConfig::FailureThresholdHasBeenSet() const
{
    return m_failureThresholdHasBeenSet;
}

