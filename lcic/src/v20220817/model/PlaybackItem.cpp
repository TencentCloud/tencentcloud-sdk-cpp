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

#include <tencentcloud/lcic/v20220817/model/PlaybackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

PlaybackItem::PlaybackItem() :
    m_roomIdHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome PlaybackItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackItem.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("PlaybackUrl") && !value["PlaybackUrl"].IsNull())
    {
        if (!value["PlaybackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackItem.PlaybackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playbackUrl = string(value["PlaybackUrl"].GetString());
        m_playbackUrlHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackItem.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlaybackItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlaybackItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_playbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


uint64_t PlaybackItem::GetRoomId() const
{
    return m_roomId;
}

void PlaybackItem::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool PlaybackItem::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string PlaybackItem::GetPlaybackUrl() const
{
    return m_playbackUrl;
}

void PlaybackItem::SetPlaybackUrl(const string& _playbackUrl)
{
    m_playbackUrl = _playbackUrl;
    m_playbackUrlHasBeenSet = true;
}

bool PlaybackItem::PlaybackUrlHasBeenSet() const
{
    return m_playbackUrlHasBeenSet;
}

uint64_t PlaybackItem::GetDuration() const
{
    return m_duration;
}

void PlaybackItem::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PlaybackItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t PlaybackItem::GetCreateTime() const
{
    return m_createTime;
}

void PlaybackItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PlaybackItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

