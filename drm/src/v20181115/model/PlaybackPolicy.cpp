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

#include <tencentcloud/drm/v20181115/model/PlaybackPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

PlaybackPolicy::PlaybackPolicy() :
    m_licenseDurationSecondsHasBeenSet(false),
    m_playbackDurationSecondsHasBeenSet(false)
{
}

CoreInternalOutcome PlaybackPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseDurationSeconds") && !value["LicenseDurationSeconds"].IsNull())
    {
        if (!value["LicenseDurationSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackPolicy.LicenseDurationSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseDurationSeconds = value["LicenseDurationSeconds"].GetUint64();
        m_licenseDurationSecondsHasBeenSet = true;
    }

    if (value.HasMember("PlaybackDurationSeconds") && !value["PlaybackDurationSeconds"].IsNull())
    {
        if (!value["PlaybackDurationSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackPolicy.PlaybackDurationSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playbackDurationSeconds = value["PlaybackDurationSeconds"].GetUint64();
        m_playbackDurationSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlaybackPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseDurationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseDurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseDurationSeconds, allocator);
    }

    if (m_playbackDurationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackDurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playbackDurationSeconds, allocator);
    }

}


uint64_t PlaybackPolicy::GetLicenseDurationSeconds() const
{
    return m_licenseDurationSeconds;
}

void PlaybackPolicy::SetLicenseDurationSeconds(const uint64_t& _licenseDurationSeconds)
{
    m_licenseDurationSeconds = _licenseDurationSeconds;
    m_licenseDurationSecondsHasBeenSet = true;
}

bool PlaybackPolicy::LicenseDurationSecondsHasBeenSet() const
{
    return m_licenseDurationSecondsHasBeenSet;
}

uint64_t PlaybackPolicy::GetPlaybackDurationSeconds() const
{
    return m_playbackDurationSeconds;
}

void PlaybackPolicy::SetPlaybackDurationSeconds(const uint64_t& _playbackDurationSeconds)
{
    m_playbackDurationSeconds = _playbackDurationSeconds;
    m_playbackDurationSecondsHasBeenSet = true;
}

bool PlaybackPolicy::PlaybackDurationSecondsHasBeenSet() const
{
    return m_playbackDurationSecondsHasBeenSet;
}

