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

#include <tencentcloud/clb/v20180317/model/AvailableZoneAffinityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

AvailableZoneAffinityInfo::AvailableZoneAffinityInfo() :
    m_enableHasBeenSet(false),
    m_exitRatioHasBeenSet(false),
    m_reentryRatioHasBeenSet(false)
{
}

CoreInternalOutcome AvailableZoneAffinityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneAffinityInfo.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("ExitRatio") && !value["ExitRatio"].IsNull())
    {
        if (!value["ExitRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneAffinityInfo.ExitRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exitRatio = value["ExitRatio"].GetUint64();
        m_exitRatioHasBeenSet = true;
    }

    if (value.HasMember("ReentryRatio") && !value["ReentryRatio"].IsNull())
    {
        if (!value["ReentryRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableZoneAffinityInfo.ReentryRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reentryRatio = value["ReentryRatio"].GetUint64();
        m_reentryRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableZoneAffinityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_exitRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExitRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitRatio, allocator);
    }

    if (m_reentryRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReentryRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reentryRatio, allocator);
    }

}


bool AvailableZoneAffinityInfo::GetEnable() const
{
    return m_enable;
}

void AvailableZoneAffinityInfo::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AvailableZoneAffinityInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t AvailableZoneAffinityInfo::GetExitRatio() const
{
    return m_exitRatio;
}

void AvailableZoneAffinityInfo::SetExitRatio(const uint64_t& _exitRatio)
{
    m_exitRatio = _exitRatio;
    m_exitRatioHasBeenSet = true;
}

bool AvailableZoneAffinityInfo::ExitRatioHasBeenSet() const
{
    return m_exitRatioHasBeenSet;
}

uint64_t AvailableZoneAffinityInfo::GetReentryRatio() const
{
    return m_reentryRatio;
}

void AvailableZoneAffinityInfo::SetReentryRatio(const uint64_t& _reentryRatio)
{
    m_reentryRatio = _reentryRatio;
    m_reentryRatioHasBeenSet = true;
}

bool AvailableZoneAffinityInfo::ReentryRatioHasBeenSet() const
{
    return m_reentryRatioHasBeenSet;
}

