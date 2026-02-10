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

#include <tencentcloud/lcic/v20220817/model/GetPlaybackTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

GetPlaybackTokenRequest::GetPlaybackTokenRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_expireSecondsHasBeenSet(false)
{
}

string GetPlaybackTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetPlaybackTokenRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void GetPlaybackTokenRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool GetPlaybackTokenRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t GetPlaybackTokenRequest::GetRoomId() const
{
    return m_roomId;
}

void GetPlaybackTokenRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool GetPlaybackTokenRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string GetPlaybackTokenRequest::GetUserId() const
{
    return m_userId;
}

void GetPlaybackTokenRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GetPlaybackTokenRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t GetPlaybackTokenRequest::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void GetPlaybackTokenRequest::SetExpireSeconds(const uint64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool GetPlaybackTokenRequest::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}


