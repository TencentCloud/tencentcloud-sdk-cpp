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

#include <tencentcloud/trtc/v20190722/model/CreateCloudTranscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateCloudTranscriptionRequest::CreateCloudTranscriptionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_transcriptionParamHasBeenSet(false),
    m_asrParamHasBeenSet(false),
    m_translationParamHasBeenSet(false)
{
}

string CreateCloudTranscriptionRequest::ToJsonString() const
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

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_transcriptionParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscriptionParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcriptionParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_translationParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translationParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCloudTranscriptionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateCloudTranscriptionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateCloudTranscriptionRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateCloudTranscriptionRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t CreateCloudTranscriptionRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateCloudTranscriptionRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

TranscriptionParam CreateCloudTranscriptionRequest::GetTranscriptionParam() const
{
    return m_transcriptionParam;
}

void CreateCloudTranscriptionRequest::SetTranscriptionParam(const TranscriptionParam& _transcriptionParam)
{
    m_transcriptionParam = _transcriptionParam;
    m_transcriptionParamHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::TranscriptionParamHasBeenSet() const
{
    return m_transcriptionParamHasBeenSet;
}

AsrParam CreateCloudTranscriptionRequest::GetAsrParam() const
{
    return m_asrParam;
}

void CreateCloudTranscriptionRequest::SetAsrParam(const AsrParam& _asrParam)
{
    m_asrParam = _asrParam;
    m_asrParamHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::AsrParamHasBeenSet() const
{
    return m_asrParamHasBeenSet;
}

TranslationParam CreateCloudTranscriptionRequest::GetTranslationParam() const
{
    return m_translationParam;
}

void CreateCloudTranscriptionRequest::SetTranslationParam(const TranslationParam& _translationParam)
{
    m_translationParam = _translationParam;
    m_translationParamHasBeenSet = true;
}

bool CreateCloudTranscriptionRequest::TranslationParamHasBeenSet() const
{
    return m_translationParamHasBeenSet;
}


