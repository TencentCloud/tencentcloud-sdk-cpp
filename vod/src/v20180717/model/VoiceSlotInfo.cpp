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

#include <tencentcloud/vod/v20180717/model/VoiceSlotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VoiceSlotInfo::VoiceSlotInfo() :
    m_limitHasBeenSet(false),
    m_remainingHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome VoiceSlotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceSlotInfo.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Remaining") && !value["Remaining"].IsNull())
    {
        if (!value["Remaining"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceSlotInfo.Remaining` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remaining = value["Remaining"].GetInt64();
        m_remainingHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceSlotInfo.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceSlotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_remainingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remaining";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remaining, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


int64_t VoiceSlotInfo::GetLimit() const
{
    return m_limit;
}

void VoiceSlotInfo::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool VoiceSlotInfo::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t VoiceSlotInfo::GetRemaining() const
{
    return m_remaining;
}

void VoiceSlotInfo::SetRemaining(const int64_t& _remaining)
{
    m_remaining = _remaining;
    m_remainingHasBeenSet = true;
}

bool VoiceSlotInfo::RemainingHasBeenSet() const
{
    return m_remainingHasBeenSet;
}

int64_t VoiceSlotInfo::GetUsed() const
{
    return m_used;
}

void VoiceSlotInfo::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool VoiceSlotInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

