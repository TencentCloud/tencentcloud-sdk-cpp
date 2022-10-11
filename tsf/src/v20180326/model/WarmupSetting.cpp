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

#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

WarmupSetting::WarmupSetting() :
    m_enabledHasBeenSet(false),
    m_warmupTimeHasBeenSet(false),
    m_curvatureHasBeenSet(false),
    m_enabledProtectionHasBeenSet(false)
{
}

CoreInternalOutcome WarmupSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WarmupSetting.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("WarmupTime") && !value["WarmupTime"].IsNull())
    {
        if (!value["WarmupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarmupSetting.WarmupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warmupTime = value["WarmupTime"].GetUint64();
        m_warmupTimeHasBeenSet = true;
    }

    if (value.HasMember("Curvature") && !value["Curvature"].IsNull())
    {
        if (!value["Curvature"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WarmupSetting.Curvature` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_curvature = value["Curvature"].GetUint64();
        m_curvatureHasBeenSet = true;
    }

    if (value.HasMember("EnabledProtection") && !value["EnabledProtection"].IsNull())
    {
        if (!value["EnabledProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WarmupSetting.EnabledProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabledProtection = value["EnabledProtection"].GetBool();
        m_enabledProtectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WarmupSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_warmupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warmupTime, allocator);
    }

    if (m_curvatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Curvature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_curvature, allocator);
    }

    if (m_enabledProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabledProtection, allocator);
    }

}


bool WarmupSetting::GetEnabled() const
{
    return m_enabled;
}

void WarmupSetting::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool WarmupSetting::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t WarmupSetting::GetWarmupTime() const
{
    return m_warmupTime;
}

void WarmupSetting::SetWarmupTime(const uint64_t& _warmupTime)
{
    m_warmupTime = _warmupTime;
    m_warmupTimeHasBeenSet = true;
}

bool WarmupSetting::WarmupTimeHasBeenSet() const
{
    return m_warmupTimeHasBeenSet;
}

uint64_t WarmupSetting::GetCurvature() const
{
    return m_curvature;
}

void WarmupSetting::SetCurvature(const uint64_t& _curvature)
{
    m_curvature = _curvature;
    m_curvatureHasBeenSet = true;
}

bool WarmupSetting::CurvatureHasBeenSet() const
{
    return m_curvatureHasBeenSet;
}

bool WarmupSetting::GetEnabledProtection() const
{
    return m_enabledProtection;
}

void WarmupSetting::SetEnabledProtection(const bool& _enabledProtection)
{
    m_enabledProtection = _enabledProtection;
    m_enabledProtectionHasBeenSet = true;
}

bool WarmupSetting::EnabledProtectionHasBeenSet() const
{
    return m_enabledProtectionHasBeenSet;
}

