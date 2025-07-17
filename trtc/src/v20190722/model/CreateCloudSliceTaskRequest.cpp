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

#include <tencentcloud/trtc/v20190722/model/CreateCloudSliceTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateCloudSliceTaskRequest::CreateCloudSliceTaskRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_sliceParamsHasBeenSet(false),
    m_sliceStorageParamsHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_resourceExpiredHourHasBeenSet(false),
    m_privateMapKeyHasBeenSet(false)
{
}

string CreateCloudSliceTaskRequest::ToJsonString() const
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

    if (m_sliceParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sliceParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sliceStorageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SliceStorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sliceStorageParams.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_privateMapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateMapKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateMapKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCloudSliceTaskRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCloudSliceTaskRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCloudSliceTaskRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateCloudSliceTaskRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateCloudSliceTaskRequest::GetUserId() const
{
    return m_userId;
}

void CreateCloudSliceTaskRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateCloudSliceTaskRequest::GetUserSig() const
{
    return m_userSig;
}

void CreateCloudSliceTaskRequest::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

SliceParams CreateCloudSliceTaskRequest::GetSliceParams() const
{
    return m_sliceParams;
}

void CreateCloudSliceTaskRequest::SetSliceParams(const SliceParams& _sliceParams)
{
    m_sliceParams = _sliceParams;
    m_sliceParamsHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::SliceParamsHasBeenSet() const
{
    return m_sliceParamsHasBeenSet;
}

SliceStorageParams CreateCloudSliceTaskRequest::GetSliceStorageParams() const
{
    return m_sliceStorageParams;
}

void CreateCloudSliceTaskRequest::SetSliceStorageParams(const SliceStorageParams& _sliceStorageParams)
{
    m_sliceStorageParams = _sliceStorageParams;
    m_sliceStorageParamsHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::SliceStorageParamsHasBeenSet() const
{
    return m_sliceStorageParamsHasBeenSet;
}

uint64_t CreateCloudSliceTaskRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateCloudSliceTaskRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

uint64_t CreateCloudSliceTaskRequest::GetResourceExpiredHour() const
{
    return m_resourceExpiredHour;
}

void CreateCloudSliceTaskRequest::SetResourceExpiredHour(const uint64_t& _resourceExpiredHour)
{
    m_resourceExpiredHour = _resourceExpiredHour;
    m_resourceExpiredHourHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::ResourceExpiredHourHasBeenSet() const
{
    return m_resourceExpiredHourHasBeenSet;
}

string CreateCloudSliceTaskRequest::GetPrivateMapKey() const
{
    return m_privateMapKey;
}

void CreateCloudSliceTaskRequest::SetPrivateMapKey(const string& _privateMapKey)
{
    m_privateMapKey = _privateMapKey;
    m_privateMapKeyHasBeenSet = true;
}

bool CreateCloudSliceTaskRequest::PrivateMapKeyHasBeenSet() const
{
    return m_privateMapKeyHasBeenSet;
}


