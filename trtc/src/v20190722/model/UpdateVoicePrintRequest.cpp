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

#include <tencentcloud/trtc/v20190722/model/UpdateVoicePrintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

UpdateVoicePrintRequest::UpdateVoicePrintRequest() :
    m_voicePrintIdHasBeenSet(false),
    m_reqTimestampHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_audioMetaInfoHasBeenSet(false)
{
}

string UpdateVoicePrintRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reqTimestamp, allocator);
    }

    if (m_audioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioFormat, allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audio.c_str(), allocator).Move(), allocator);
    }

    if (m_audioMetaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioMetaInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioMetaInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateVoicePrintRequest::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void UpdateVoicePrintRequest::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool UpdateVoicePrintRequest::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

uint64_t UpdateVoicePrintRequest::GetReqTimestamp() const
{
    return m_reqTimestamp;
}

void UpdateVoicePrintRequest::SetReqTimestamp(const uint64_t& _reqTimestamp)
{
    m_reqTimestamp = _reqTimestamp;
    m_reqTimestampHasBeenSet = true;
}

bool UpdateVoicePrintRequest::ReqTimestampHasBeenSet() const
{
    return m_reqTimestampHasBeenSet;
}

uint64_t UpdateVoicePrintRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void UpdateVoicePrintRequest::SetAudioFormat(const uint64_t& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool UpdateVoicePrintRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string UpdateVoicePrintRequest::GetAudio() const
{
    return m_audio;
}

void UpdateVoicePrintRequest::SetAudio(const string& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool UpdateVoicePrintRequest::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string UpdateVoicePrintRequest::GetAudioMetaInfo() const
{
    return m_audioMetaInfo;
}

void UpdateVoicePrintRequest::SetAudioMetaInfo(const string& _audioMetaInfo)
{
    m_audioMetaInfo = _audioMetaInfo;
    m_audioMetaInfoHasBeenSet = true;
}

bool UpdateVoicePrintRequest::AudioMetaInfoHasBeenSet() const
{
    return m_audioMetaInfoHasBeenSet;
}


