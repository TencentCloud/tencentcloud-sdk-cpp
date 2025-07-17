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

#include <tencentcloud/trtc/v20190722/model/CreateCloudModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateCloudModerationRequest::CreateCloudModerationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_moderationParamsHasBeenSet(false),
    m_moderationStorageParamsHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_resourceExpiredHourHasBeenSet(false)
{
}

string CreateCloudModerationRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_moderationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_moderationParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_moderationStorageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationStorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_moderationStorageParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_resourceExpiredHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceExpiredHour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceExpiredHour, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCloudModerationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCloudModerationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCloudModerationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCloudModerationRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateCloudModerationRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateCloudModerationRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateCloudModerationRequest::GetUserId() const
{
    return m_userId;
}

void CreateCloudModerationRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateCloudModerationRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateCloudModerationRequest::GetUserSig() const
{
    return m_userSig;
}

void CreateCloudModerationRequest::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool CreateCloudModerationRequest::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

ModerationParams CreateCloudModerationRequest::GetModerationParams() const
{
    return m_moderationParams;
}

void CreateCloudModerationRequest::SetModerationParams(const ModerationParams& _moderationParams)
{
    m_moderationParams = _moderationParams;
    m_moderationParamsHasBeenSet = true;
}

bool CreateCloudModerationRequest::ModerationParamsHasBeenSet() const
{
    return m_moderationParamsHasBeenSet;
}

ModerationStorageParams CreateCloudModerationRequest::GetModerationStorageParams() const
{
    return m_moderationStorageParams;
}

void CreateCloudModerationRequest::SetModerationStorageParams(const ModerationStorageParams& _moderationStorageParams)
{
    m_moderationStorageParams = _moderationStorageParams;
    m_moderationStorageParamsHasBeenSet = true;
}

bool CreateCloudModerationRequest::ModerationStorageParamsHasBeenSet() const
{
    return m_moderationStorageParamsHasBeenSet;
}

uint64_t CreateCloudModerationRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateCloudModerationRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateCloudModerationRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

uint64_t CreateCloudModerationRequest::GetResourceExpiredHour() const
{
    return m_resourceExpiredHour;
}

void CreateCloudModerationRequest::SetResourceExpiredHour(const uint64_t& _resourceExpiredHour)
{
    m_resourceExpiredHour = _resourceExpiredHour;
    m_resourceExpiredHourHasBeenSet = true;
}

bool CreateCloudModerationRequest::ResourceExpiredHourHasBeenSet() const
{
    return m_resourceExpiredHourHasBeenSet;
}


