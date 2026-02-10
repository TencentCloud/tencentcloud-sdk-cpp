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

#include <tencentcloud/lcic/v20220817/model/PlayRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

PlayRecord::PlayRecord() :
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_playBeginTimeHasBeenSet(false),
    m_playEndTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome PlayRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("PlayBeginTime") && !value["PlayBeginTime"].IsNull())
    {
        if (!value["PlayBeginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.PlayBeginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playBeginTime = value["PlayBeginTime"].GetUint64();
        m_playBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("PlayEndTime") && !value["PlayEndTime"].IsNull())
    {
        if (!value["PlayEndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.PlayEndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playEndTime = value["PlayEndTime"].GetUint64();
        m_playEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayRecord.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_playBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playBeginTime, allocator);
    }

    if (m_playEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playEndTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


uint64_t PlayRecord::GetRoomId() const
{
    return m_roomId;
}

void PlayRecord::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool PlayRecord::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string PlayRecord::GetUserId() const
{
    return m_userId;
}

void PlayRecord::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool PlayRecord::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string PlayRecord::GetSessionId() const
{
    return m_sessionId;
}

void PlayRecord::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool PlayRecord::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t PlayRecord::GetPlayBeginTime() const
{
    return m_playBeginTime;
}

void PlayRecord::SetPlayBeginTime(const uint64_t& _playBeginTime)
{
    m_playBeginTime = _playBeginTime;
    m_playBeginTimeHasBeenSet = true;
}

bool PlayRecord::PlayBeginTimeHasBeenSet() const
{
    return m_playBeginTimeHasBeenSet;
}

uint64_t PlayRecord::GetPlayEndTime() const
{
    return m_playEndTime;
}

void PlayRecord::SetPlayEndTime(const uint64_t& _playEndTime)
{
    m_playEndTime = _playEndTime;
    m_playEndTimeHasBeenSet = true;
}

bool PlayRecord::PlayEndTimeHasBeenSet() const
{
    return m_playEndTimeHasBeenSet;
}

uint64_t PlayRecord::GetDuration() const
{
    return m_duration;
}

void PlayRecord::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PlayRecord::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

