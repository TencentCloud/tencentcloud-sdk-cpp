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

#include <tencentcloud/teo/v20220901/model/InferenceResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceResourceConfig::InferenceResourceConfig() :
    m_scalingModeHasBeenSet(false),
    m_hardwareSpecHasBeenSet(false),
    m_autoScalingConfigHasBeenSet(false),
    m_manualInstanceConfigHasBeenSet(false),
    m_concurrencyHasBeenSet(false)
{
}

CoreInternalOutcome InferenceResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScalingMode") && !value["ScalingMode"].IsNull())
    {
        if (!value["ScalingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceResourceConfig.ScalingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingMode = string(value["ScalingMode"].GetString());
        m_scalingModeHasBeenSet = true;
    }

    if (value.HasMember("HardwareSpec") && !value["HardwareSpec"].IsNull())
    {
        if (!value["HardwareSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceResourceConfig.HardwareSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareSpec = string(value["HardwareSpec"].GetString());
        m_hardwareSpecHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingConfig") && !value["AutoScalingConfig"].IsNull())
    {
        if (!value["AutoScalingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceResourceConfig.AutoScalingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoScalingConfig.Deserialize(value["AutoScalingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoScalingConfigHasBeenSet = true;
    }

    if (value.HasMember("ManualInstanceConfig") && !value["ManualInstanceConfig"].IsNull())
    {
        if (!value["ManualInstanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceResourceConfig.ManualInstanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manualInstanceConfig.Deserialize(value["ManualInstanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manualInstanceConfigHasBeenSet = true;
    }

    if (value.HasMember("Concurrency") && !value["Concurrency"].IsNull())
    {
        if (!value["Concurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceResourceConfig.Concurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrency = value["Concurrency"].GetInt64();
        m_concurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scalingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scalingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScalingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_manualInstanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualInstanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manualInstanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrency, allocator);
    }

}


string InferenceResourceConfig::GetScalingMode() const
{
    return m_scalingMode;
}

void InferenceResourceConfig::SetScalingMode(const string& _scalingMode)
{
    m_scalingMode = _scalingMode;
    m_scalingModeHasBeenSet = true;
}

bool InferenceResourceConfig::ScalingModeHasBeenSet() const
{
    return m_scalingModeHasBeenSet;
}

string InferenceResourceConfig::GetHardwareSpec() const
{
    return m_hardwareSpec;
}

void InferenceResourceConfig::SetHardwareSpec(const string& _hardwareSpec)
{
    m_hardwareSpec = _hardwareSpec;
    m_hardwareSpecHasBeenSet = true;
}

bool InferenceResourceConfig::HardwareSpecHasBeenSet() const
{
    return m_hardwareSpecHasBeenSet;
}

InferenceAutoScalingConfig InferenceResourceConfig::GetAutoScalingConfig() const
{
    return m_autoScalingConfig;
}

void InferenceResourceConfig::SetAutoScalingConfig(const InferenceAutoScalingConfig& _autoScalingConfig)
{
    m_autoScalingConfig = _autoScalingConfig;
    m_autoScalingConfigHasBeenSet = true;
}

bool InferenceResourceConfig::AutoScalingConfigHasBeenSet() const
{
    return m_autoScalingConfigHasBeenSet;
}

InferenceManualInstanceConfig InferenceResourceConfig::GetManualInstanceConfig() const
{
    return m_manualInstanceConfig;
}

void InferenceResourceConfig::SetManualInstanceConfig(const InferenceManualInstanceConfig& _manualInstanceConfig)
{
    m_manualInstanceConfig = _manualInstanceConfig;
    m_manualInstanceConfigHasBeenSet = true;
}

bool InferenceResourceConfig::ManualInstanceConfigHasBeenSet() const
{
    return m_manualInstanceConfigHasBeenSet;
}

int64_t InferenceResourceConfig::GetConcurrency() const
{
    return m_concurrency;
}

void InferenceResourceConfig::SetConcurrency(const int64_t& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool InferenceResourceConfig::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

