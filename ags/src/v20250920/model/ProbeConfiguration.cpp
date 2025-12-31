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

#include <tencentcloud/ags/v20250920/model/ProbeConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ProbeConfiguration::ProbeConfiguration() :
    m_httpGetHasBeenSet(false),
    m_readyTimeoutMsHasBeenSet(false),
    m_probeTimeoutMsHasBeenSet(false),
    m_probePeriodMsHasBeenSet(false),
    m_successThresholdHasBeenSet(false),
    m_failureThresholdHasBeenSet(false)
{
}

CoreInternalOutcome ProbeConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpGet") && !value["HttpGet"].IsNull())
    {
        if (!value["HttpGet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.HttpGet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpGet.Deserialize(value["HttpGet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpGetHasBeenSet = true;
    }

    if (value.HasMember("ReadyTimeoutMs") && !value["ReadyTimeoutMs"].IsNull())
    {
        if (!value["ReadyTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.ReadyTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readyTimeoutMs = value["ReadyTimeoutMs"].GetInt64();
        m_readyTimeoutMsHasBeenSet = true;
    }

    if (value.HasMember("ProbeTimeoutMs") && !value["ProbeTimeoutMs"].IsNull())
    {
        if (!value["ProbeTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.ProbeTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeTimeoutMs = value["ProbeTimeoutMs"].GetInt64();
        m_probeTimeoutMsHasBeenSet = true;
    }

    if (value.HasMember("ProbePeriodMs") && !value["ProbePeriodMs"].IsNull())
    {
        if (!value["ProbePeriodMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.ProbePeriodMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probePeriodMs = value["ProbePeriodMs"].GetInt64();
        m_probePeriodMsHasBeenSet = true;
    }

    if (value.HasMember("SuccessThreshold") && !value["SuccessThreshold"].IsNull())
    {
        if (!value["SuccessThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.SuccessThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successThreshold = value["SuccessThreshold"].GetInt64();
        m_successThresholdHasBeenSet = true;
    }

    if (value.HasMember("FailureThreshold") && !value["FailureThreshold"].IsNull())
    {
        if (!value["FailureThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeConfiguration.FailureThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failureThreshold = value["FailureThreshold"].GetInt64();
        m_failureThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpGetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpGet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpGet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readyTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readyTimeoutMs, allocator);
    }

    if (m_probeTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeTimeoutMs, allocator);
    }

    if (m_probePeriodMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbePeriodMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probePeriodMs, allocator);
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


HttpGetAction ProbeConfiguration::GetHttpGet() const
{
    return m_httpGet;
}

void ProbeConfiguration::SetHttpGet(const HttpGetAction& _httpGet)
{
    m_httpGet = _httpGet;
    m_httpGetHasBeenSet = true;
}

bool ProbeConfiguration::HttpGetHasBeenSet() const
{
    return m_httpGetHasBeenSet;
}

int64_t ProbeConfiguration::GetReadyTimeoutMs() const
{
    return m_readyTimeoutMs;
}

void ProbeConfiguration::SetReadyTimeoutMs(const int64_t& _readyTimeoutMs)
{
    m_readyTimeoutMs = _readyTimeoutMs;
    m_readyTimeoutMsHasBeenSet = true;
}

bool ProbeConfiguration::ReadyTimeoutMsHasBeenSet() const
{
    return m_readyTimeoutMsHasBeenSet;
}

int64_t ProbeConfiguration::GetProbeTimeoutMs() const
{
    return m_probeTimeoutMs;
}

void ProbeConfiguration::SetProbeTimeoutMs(const int64_t& _probeTimeoutMs)
{
    m_probeTimeoutMs = _probeTimeoutMs;
    m_probeTimeoutMsHasBeenSet = true;
}

bool ProbeConfiguration::ProbeTimeoutMsHasBeenSet() const
{
    return m_probeTimeoutMsHasBeenSet;
}

int64_t ProbeConfiguration::GetProbePeriodMs() const
{
    return m_probePeriodMs;
}

void ProbeConfiguration::SetProbePeriodMs(const int64_t& _probePeriodMs)
{
    m_probePeriodMs = _probePeriodMs;
    m_probePeriodMsHasBeenSet = true;
}

bool ProbeConfiguration::ProbePeriodMsHasBeenSet() const
{
    return m_probePeriodMsHasBeenSet;
}

int64_t ProbeConfiguration::GetSuccessThreshold() const
{
    return m_successThreshold;
}

void ProbeConfiguration::SetSuccessThreshold(const int64_t& _successThreshold)
{
    m_successThreshold = _successThreshold;
    m_successThresholdHasBeenSet = true;
}

bool ProbeConfiguration::SuccessThresholdHasBeenSet() const
{
    return m_successThresholdHasBeenSet;
}

int64_t ProbeConfiguration::GetFailureThreshold() const
{
    return m_failureThreshold;
}

void ProbeConfiguration::SetFailureThreshold(const int64_t& _failureThreshold)
{
    m_failureThreshold = _failureThreshold;
    m_failureThresholdHasBeenSet = true;
}

bool ProbeConfiguration::FailureThresholdHasBeenSet() const
{
    return m_failureThresholdHasBeenSet;
}

