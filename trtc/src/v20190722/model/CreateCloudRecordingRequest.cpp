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

#include <tencentcloud/trtc/v20190722/model/CreateCloudRecordingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateCloudRecordingRequest::CreateCloudRecordingRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_recordParamsHasBeenSet(false),
    m_storageParamsHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_mixTranscodeParamsHasBeenSet(false),
    m_mixLayoutParamsHasBeenSet(false),
    m_resourceExpiredHourHasBeenSet(false),
    m_privateMapKeyHasBeenSet(false)
{
}

string CreateCloudRecordingRequest::ToJsonString() const
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

    if (m_recordParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recordParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_storageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_mixTranscodeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixTranscodeParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mixTranscodeParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mixLayoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixLayoutParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mixLayoutParams.ToJsonObject(d[key.c_str()], allocator);
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


uint64_t CreateCloudRecordingRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCloudRecordingRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCloudRecordingRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateCloudRecordingRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string CreateCloudRecordingRequest::GetUserId() const
{
    return m_userId;
}

void CreateCloudRecordingRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateCloudRecordingRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateCloudRecordingRequest::GetUserSig() const
{
    return m_userSig;
}

void CreateCloudRecordingRequest::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool CreateCloudRecordingRequest::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

RecordParams CreateCloudRecordingRequest::GetRecordParams() const
{
    return m_recordParams;
}

void CreateCloudRecordingRequest::SetRecordParams(const RecordParams& _recordParams)
{
    m_recordParams = _recordParams;
    m_recordParamsHasBeenSet = true;
}

bool CreateCloudRecordingRequest::RecordParamsHasBeenSet() const
{
    return m_recordParamsHasBeenSet;
}

StorageParams CreateCloudRecordingRequest::GetStorageParams() const
{
    return m_storageParams;
}

void CreateCloudRecordingRequest::SetStorageParams(const StorageParams& _storageParams)
{
    m_storageParams = _storageParams;
    m_storageParamsHasBeenSet = true;
}

bool CreateCloudRecordingRequest::StorageParamsHasBeenSet() const
{
    return m_storageParamsHasBeenSet;
}

uint64_t CreateCloudRecordingRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateCloudRecordingRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateCloudRecordingRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

MixTranscodeParams CreateCloudRecordingRequest::GetMixTranscodeParams() const
{
    return m_mixTranscodeParams;
}

void CreateCloudRecordingRequest::SetMixTranscodeParams(const MixTranscodeParams& _mixTranscodeParams)
{
    m_mixTranscodeParams = _mixTranscodeParams;
    m_mixTranscodeParamsHasBeenSet = true;
}

bool CreateCloudRecordingRequest::MixTranscodeParamsHasBeenSet() const
{
    return m_mixTranscodeParamsHasBeenSet;
}

MixLayoutParams CreateCloudRecordingRequest::GetMixLayoutParams() const
{
    return m_mixLayoutParams;
}

void CreateCloudRecordingRequest::SetMixLayoutParams(const MixLayoutParams& _mixLayoutParams)
{
    m_mixLayoutParams = _mixLayoutParams;
    m_mixLayoutParamsHasBeenSet = true;
}

bool CreateCloudRecordingRequest::MixLayoutParamsHasBeenSet() const
{
    return m_mixLayoutParamsHasBeenSet;
}

uint64_t CreateCloudRecordingRequest::GetResourceExpiredHour() const
{
    return m_resourceExpiredHour;
}

void CreateCloudRecordingRequest::SetResourceExpiredHour(const uint64_t& _resourceExpiredHour)
{
    m_resourceExpiredHour = _resourceExpiredHour;
    m_resourceExpiredHourHasBeenSet = true;
}

bool CreateCloudRecordingRequest::ResourceExpiredHourHasBeenSet() const
{
    return m_resourceExpiredHourHasBeenSet;
}

string CreateCloudRecordingRequest::GetPrivateMapKey() const
{
    return m_privateMapKey;
}

void CreateCloudRecordingRequest::SetPrivateMapKey(const string& _privateMapKey)
{
    m_privateMapKey = _privateMapKey;
    m_privateMapKeyHasBeenSet = true;
}

bool CreateCloudRecordingRequest::PrivateMapKeyHasBeenSet() const
{
    return m_privateMapKeyHasBeenSet;
}


