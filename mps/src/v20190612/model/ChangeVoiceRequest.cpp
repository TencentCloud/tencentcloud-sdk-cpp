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

#include <tencentcloud/mps/v20190612/model/ChangeVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ChangeVoiceRequest::ChangeVoiceRequest() :
    m_audioDataHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string ChangeVoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_audioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioData.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChangeVoiceRequest::GetAudioData() const
{
    return m_audioData;
}

void ChangeVoiceRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool ChangeVoiceRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

string ChangeVoiceRequest::GetAudioUrl() const
{
    return m_audioUrl;
}

void ChangeVoiceRequest::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool ChangeVoiceRequest::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string ChangeVoiceRequest::GetVoiceId() const
{
    return m_voiceId;
}

void ChangeVoiceRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool ChangeVoiceRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

SyncDubbingOutputOption ChangeVoiceRequest::GetOutput() const
{
    return m_output;
}

void ChangeVoiceRequest::SetOutput(const SyncDubbingOutputOption& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ChangeVoiceRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string ChangeVoiceRequest::GetExtParam() const
{
    return m_extParam;
}

void ChangeVoiceRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool ChangeVoiceRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


