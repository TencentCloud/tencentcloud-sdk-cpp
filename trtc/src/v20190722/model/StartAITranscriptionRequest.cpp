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

#include <tencentcloud/trtc/v20190722/model/StartAITranscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartAITranscriptionRequest::StartAITranscriptionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_transcriptionParamsHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_recognizeConfigHasBeenSet(false)
{
}

string StartAITranscriptionRequest::ToJsonString() const
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

    if (m_transcriptionParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscriptionParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcriptionParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_recognizeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recognizeConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartAITranscriptionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartAITranscriptionRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartAITranscriptionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartAITranscriptionRequest::GetRoomId() const
{
    return m_roomId;
}

void StartAITranscriptionRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartAITranscriptionRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

TranscriptionParams StartAITranscriptionRequest::GetTranscriptionParams() const
{
    return m_transcriptionParams;
}

void StartAITranscriptionRequest::SetTranscriptionParams(const TranscriptionParams& _transcriptionParams)
{
    m_transcriptionParams = _transcriptionParams;
    m_transcriptionParamsHasBeenSet = true;
}

bool StartAITranscriptionRequest::TranscriptionParamsHasBeenSet() const
{
    return m_transcriptionParamsHasBeenSet;
}

string StartAITranscriptionRequest::GetSessionId() const
{
    return m_sessionId;
}

void StartAITranscriptionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool StartAITranscriptionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t StartAITranscriptionRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void StartAITranscriptionRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool StartAITranscriptionRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

RecognizeConfig StartAITranscriptionRequest::GetRecognizeConfig() const
{
    return m_recognizeConfig;
}

void StartAITranscriptionRequest::SetRecognizeConfig(const RecognizeConfig& _recognizeConfig)
{
    m_recognizeConfig = _recognizeConfig;
    m_recognizeConfigHasBeenSet = true;
}

bool StartAITranscriptionRequest::RecognizeConfigHasBeenSet() const
{
    return m_recognizeConfigHasBeenSet;
}


