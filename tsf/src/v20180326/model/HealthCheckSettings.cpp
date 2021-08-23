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

#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

HealthCheckSettings::HealthCheckSettings() :
    m_livenessProbeHasBeenSet(false),
    m_readinessProbeHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LivenessProbe") && !value["LivenessProbe"].IsNull())
    {
        if (!value["LivenessProbe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSettings.LivenessProbe` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `HealthCheckSettings.ReadinessProbe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readinessProbe.Deserialize(value["ReadinessProbe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readinessProbeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


HealthCheckSetting HealthCheckSettings::GetLivenessProbe() const
{
    return m_livenessProbe;
}

void HealthCheckSettings::SetLivenessProbe(const HealthCheckSetting& _livenessProbe)
{
    m_livenessProbe = _livenessProbe;
    m_livenessProbeHasBeenSet = true;
}

bool HealthCheckSettings::LivenessProbeHasBeenSet() const
{
    return m_livenessProbeHasBeenSet;
}

HealthCheckSetting HealthCheckSettings::GetReadinessProbe() const
{
    return m_readinessProbe;
}

void HealthCheckSettings::SetReadinessProbe(const HealthCheckSetting& _readinessProbe)
{
    m_readinessProbe = _readinessProbe;
    m_readinessProbeHasBeenSet = true;
}

bool HealthCheckSettings::ReadinessProbeHasBeenSet() const
{
    return m_readinessProbeHasBeenSet;
}

