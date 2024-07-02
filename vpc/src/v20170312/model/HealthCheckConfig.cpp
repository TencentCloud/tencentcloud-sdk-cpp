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

#include <tencentcloud/vpc/v20170312/model/HealthCheckConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HealthCheckConfig::HealthCheckConfig() :
    m_probeTypeHasBeenSet(false),
    m_probeIntervalHasBeenSet(false),
    m_probeThresholdHasBeenSet(false),
    m_probeTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProbeType") && !value["ProbeType"].IsNull())
    {
        if (!value["ProbeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.ProbeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_probeType = string(value["ProbeType"].GetString());
        m_probeTypeHasBeenSet = true;
    }

    if (value.HasMember("ProbeInterval") && !value["ProbeInterval"].IsNull())
    {
        if (!value["ProbeInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.ProbeInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeInterval = value["ProbeInterval"].GetInt64();
        m_probeIntervalHasBeenSet = true;
    }

    if (value.HasMember("ProbeThreshold") && !value["ProbeThreshold"].IsNull())
    {
        if (!value["ProbeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.ProbeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeThreshold = value["ProbeThreshold"].GetInt64();
        m_probeThresholdHasBeenSet = true;
    }

    if (value.HasMember("ProbeTimeout") && !value["ProbeTimeout"].IsNull())
    {
        if (!value["ProbeTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.ProbeTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_probeTimeout = value["ProbeTimeout"].GetInt64();
        m_probeTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_probeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_probeType.c_str(), allocator).Move(), allocator);
    }

    if (m_probeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeInterval, allocator);
    }

    if (m_probeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeThreshold, allocator);
    }

    if (m_probeTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeTimeout, allocator);
    }

}


string HealthCheckConfig::GetProbeType() const
{
    return m_probeType;
}

void HealthCheckConfig::SetProbeType(const string& _probeType)
{
    m_probeType = _probeType;
    m_probeTypeHasBeenSet = true;
}

bool HealthCheckConfig::ProbeTypeHasBeenSet() const
{
    return m_probeTypeHasBeenSet;
}

int64_t HealthCheckConfig::GetProbeInterval() const
{
    return m_probeInterval;
}

void HealthCheckConfig::SetProbeInterval(const int64_t& _probeInterval)
{
    m_probeInterval = _probeInterval;
    m_probeIntervalHasBeenSet = true;
}

bool HealthCheckConfig::ProbeIntervalHasBeenSet() const
{
    return m_probeIntervalHasBeenSet;
}

int64_t HealthCheckConfig::GetProbeThreshold() const
{
    return m_probeThreshold;
}

void HealthCheckConfig::SetProbeThreshold(const int64_t& _probeThreshold)
{
    m_probeThreshold = _probeThreshold;
    m_probeThresholdHasBeenSet = true;
}

bool HealthCheckConfig::ProbeThresholdHasBeenSet() const
{
    return m_probeThresholdHasBeenSet;
}

int64_t HealthCheckConfig::GetProbeTimeout() const
{
    return m_probeTimeout;
}

void HealthCheckConfig::SetProbeTimeout(const int64_t& _probeTimeout)
{
    m_probeTimeout = _probeTimeout;
    m_probeTimeoutHasBeenSet = true;
}

bool HealthCheckConfig::ProbeTimeoutHasBeenSet() const
{
    return m_probeTimeoutHasBeenSet;
}

