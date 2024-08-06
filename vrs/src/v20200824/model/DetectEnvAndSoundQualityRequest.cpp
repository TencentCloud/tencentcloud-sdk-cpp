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

#include <tencentcloud/vrs/v20200824/model/DetectEnvAndSoundQualityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

DetectEnvAndSoundQualityRequest::DetectEnvAndSoundQualityRequest() :
    m_textIdHasBeenSet(false),
    m_audioDataHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string DetectEnvAndSoundQualityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioData.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectEnvAndSoundQualityRequest::GetTextId() const
{
    return m_textId;
}

void DetectEnvAndSoundQualityRequest::SetTextId(const string& _textId)
{
    m_textId = _textId;
    m_textIdHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::TextIdHasBeenSet() const
{
    return m_textIdHasBeenSet;
}

string DetectEnvAndSoundQualityRequest::GetAudioData() const
{
    return m_audioData;
}

void DetectEnvAndSoundQualityRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

int64_t DetectEnvAndSoundQualityRequest::GetTypeId() const
{
    return m_typeId;
}

void DetectEnvAndSoundQualityRequest::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string DetectEnvAndSoundQualityRequest::GetCodec() const
{
    return m_codec;
}

void DetectEnvAndSoundQualityRequest::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t DetectEnvAndSoundQualityRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void DetectEnvAndSoundQualityRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t DetectEnvAndSoundQualityRequest::GetTaskType() const
{
    return m_taskType;
}

void DetectEnvAndSoundQualityRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DetectEnvAndSoundQualityRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


