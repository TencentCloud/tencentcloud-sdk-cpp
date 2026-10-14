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

#include <tencentcloud/adp/v20260520/model/ClawAgentChannelContextTimeoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ClawAgentChannelContextTimeoutConfig::ClawAgentChannelContextTimeoutConfig() :
    m_enabledHasBeenSet(false),
    m_timeoutHourHasBeenSet(false)
{
}

CoreInternalOutcome ClawAgentChannelContextTimeoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentChannelContextTimeoutConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("TimeoutHour") && !value["TimeoutHour"].IsNull())
    {
        if (!value["TimeoutHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentChannelContextTimeoutConfig.TimeoutHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutHour = value["TimeoutHour"].GetInt64();
        m_timeoutHourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClawAgentChannelContextTimeoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_timeoutHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutHour, allocator);
    }

}


bool ClawAgentChannelContextTimeoutConfig::GetEnabled() const
{
    return m_enabled;
}

void ClawAgentChannelContextTimeoutConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClawAgentChannelContextTimeoutConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t ClawAgentChannelContextTimeoutConfig::GetTimeoutHour() const
{
    return m_timeoutHour;
}

void ClawAgentChannelContextTimeoutConfig::SetTimeoutHour(const int64_t& _timeoutHour)
{
    m_timeoutHour = _timeoutHour;
    m_timeoutHourHasBeenSet = true;
}

bool ClawAgentChannelContextTimeoutConfig::TimeoutHourHasBeenSet() const
{
    return m_timeoutHourHasBeenSet;
}

