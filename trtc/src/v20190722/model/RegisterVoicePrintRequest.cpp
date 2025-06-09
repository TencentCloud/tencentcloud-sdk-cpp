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

#include <tencentcloud/trtc/v20190722/model/RegisterVoicePrintRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RegisterVoicePrintRequest::RegisterVoicePrintRequest() :
    m_audioHasBeenSet(false),
    m_reqTimestampHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_audioNameHasBeenSet(false),
    m_audioMetaInfoHasBeenSet(false)
{
}

string RegisterVoicePrintRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audio.c_str(), allocator).Move(), allocator);
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

    if (m_audioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioName.c_str(), allocator).Move(), allocator);
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


string RegisterVoicePrintRequest::GetAudio() const
{
    return m_audio;
}

void RegisterVoicePrintRequest::SetAudio(const string& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool RegisterVoicePrintRequest::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

uint64_t RegisterVoicePrintRequest::GetReqTimestamp() const
{
    return m_reqTimestamp;
}

void RegisterVoicePrintRequest::SetReqTimestamp(const uint64_t& _reqTimestamp)
{
    m_reqTimestamp = _reqTimestamp;
    m_reqTimestampHasBeenSet = true;
}

bool RegisterVoicePrintRequest::ReqTimestampHasBeenSet() const
{
    return m_reqTimestampHasBeenSet;
}

uint64_t RegisterVoicePrintRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void RegisterVoicePrintRequest::SetAudioFormat(const uint64_t& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool RegisterVoicePrintRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string RegisterVoicePrintRequest::GetAudioName() const
{
    return m_audioName;
}

void RegisterVoicePrintRequest::SetAudioName(const string& _audioName)
{
    m_audioName = _audioName;
    m_audioNameHasBeenSet = true;
}

bool RegisterVoicePrintRequest::AudioNameHasBeenSet() const
{
    return m_audioNameHasBeenSet;
}

string RegisterVoicePrintRequest::GetAudioMetaInfo() const
{
    return m_audioMetaInfo;
}

void RegisterVoicePrintRequest::SetAudioMetaInfo(const string& _audioMetaInfo)
{
    m_audioMetaInfo = _audioMetaInfo;
    m_audioMetaInfoHasBeenSet = true;
}

bool RegisterVoicePrintRequest::AudioMetaInfoHasBeenSet() const
{
    return m_audioMetaInfoHasBeenSet;
}


