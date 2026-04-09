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

#include <tencentcloud/hai/v20230812/model/ProbeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ProbeInfo::ProbeInfo() :
    m_livenessProbeHasBeenSet(false),
    m_readinessProbeHasBeenSet(false),
    m_startupProbeHasBeenSet(false)
{
}

CoreInternalOutcome ProbeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LivenessProbe") && !value["LivenessProbe"].IsNull())
    {
        if (!value["LivenessProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeInfo.LivenessProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_livenessProbe.Deserialize(value["LivenessProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_livenessProbeHasBeenSet = true;
    }

    if (value.HasMember("ReadinessProbe") && !value["ReadinessProbe"].IsNull())
    {
        if (!value["ReadinessProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeInfo.ReadinessProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readinessProbe.Deserialize(value["ReadinessProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readinessProbeHasBeenSet = true;
    }

    if (value.HasMember("StartupProbe") && !value["StartupProbe"].IsNull())
    {
        if (!value["StartupProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeInfo.StartupProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_startupProbe.Deserialize(value["StartupProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_startupProbeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_livenessProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_livenessProbe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readinessProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadinessProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readinessProbe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startupProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupProbe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startupProbe.ToJsonObject(value[key.c_str()], allocator);
    }

}


ProbeConfig ProbeInfo::GetLivenessProbe() const
{
    return m_livenessProbe;
}

void ProbeInfo::SetLivenessProbe(const ProbeConfig& _livenessProbe)
{
    m_livenessProbe = _livenessProbe;
    m_livenessProbeHasBeenSet = true;
}

bool ProbeInfo::LivenessProbeHasBeenSet() const
{
    return m_livenessProbeHasBeenSet;
}

ProbeConfig ProbeInfo::GetReadinessProbe() const
{
    return m_readinessProbe;
}

void ProbeInfo::SetReadinessProbe(const ProbeConfig& _readinessProbe)
{
    m_readinessProbe = _readinessProbe;
    m_readinessProbeHasBeenSet = true;
}

bool ProbeInfo::ReadinessProbeHasBeenSet() const
{
    return m_readinessProbeHasBeenSet;
}

ProbeConfig ProbeInfo::GetStartupProbe() const
{
    return m_startupProbe;
}

void ProbeInfo::SetStartupProbe(const ProbeConfig& _startupProbe)
{
    m_startupProbe = _startupProbe;
    m_startupProbeHasBeenSet = true;
}

bool ProbeInfo::StartupProbeHasBeenSet() const
{
    return m_startupProbeHasBeenSet;
}

