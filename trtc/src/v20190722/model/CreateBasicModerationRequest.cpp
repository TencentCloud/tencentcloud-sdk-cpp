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

#include <tencentcloud/trtc/v20190722/model/CreateBasicModerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateBasicModerationRequest::CreateBasicModerationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_auditStorageParamsHasBeenSet(false)
{
}

string CreateBasicModerationRequest::ToJsonString() const
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

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_auditStorageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auditStorageParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateBasicModerationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateBasicModerationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateBasicModerationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateBasicModerationRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateBasicModerationRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateBasicModerationRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateBasicModerationRequest::GetUserId() const
{
    return m_userId;
}

void CreateBasicModerationRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateBasicModerationRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t CreateBasicModerationRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateBasicModerationRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateBasicModerationRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

AuditStorageParams CreateBasicModerationRequest::GetAuditStorageParams() const
{
    return m_auditStorageParams;
}

void CreateBasicModerationRequest::SetAuditStorageParams(const AuditStorageParams& _auditStorageParams)
{
    m_auditStorageParams = _auditStorageParams;
    m_auditStorageParamsHasBeenSet = true;
}

bool CreateBasicModerationRequest::AuditStorageParamsHasBeenSet() const
{
    return m_auditStorageParamsHasBeenSet;
}


