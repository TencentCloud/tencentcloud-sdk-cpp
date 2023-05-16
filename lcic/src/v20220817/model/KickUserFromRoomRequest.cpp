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

#include <tencentcloud/lcic/v20220817/model/KickUserFromRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

KickUserFromRoomRequest::KickUserFromRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_kickTypeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

string KickUserFromRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_kickTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KickType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kickType, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t KickUserFromRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void KickUserFromRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool KickUserFromRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t KickUserFromRoomRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void KickUserFromRoomRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool KickUserFromRoomRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string KickUserFromRoomRequest::GetUserId() const
{
    return m_userId;
}

void KickUserFromRoomRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool KickUserFromRoomRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t KickUserFromRoomRequest::GetKickType() const
{
    return m_kickType;
}

void KickUserFromRoomRequest::SetKickType(const uint64_t& _kickType)
{
    m_kickType = _kickType;
    m_kickTypeHasBeenSet = true;
}

bool KickUserFromRoomRequest::KickTypeHasBeenSet() const
{
    return m_kickTypeHasBeenSet;
}

uint64_t KickUserFromRoomRequest::GetDuration() const
{
    return m_duration;
}

void KickUserFromRoomRequest::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool KickUserFromRoomRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}


