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

#include <tencentcloud/alb/v20251030/model/TargetGroupStickySession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetGroupStickySession::TargetGroupStickySession() :
    m_enabledHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupStickySession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupStickySession.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupStickySession.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupStickySession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


bool TargetGroupStickySession::GetEnabled() const
{
    return m_enabled;
}

void TargetGroupStickySession::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TargetGroupStickySession::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t TargetGroupStickySession::GetTimeout() const
{
    return m_timeout;
}

void TargetGroupStickySession::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool TargetGroupStickySession::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

