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

#include <tencentcloud/asr/v20190614/model/VoicePrintUpdateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintUpdateRequest::VoicePrintUpdateRequest() :
    m_voiceFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_voicePrintIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_speakerNickHasBeenSet(false)
{
}

string VoicePrintUpdateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_voiceFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceFormat, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerNickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerNick";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_speakerNick.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t VoicePrintUpdateRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void VoicePrintUpdateRequest::SetVoiceFormat(const int64_t& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool VoicePrintUpdateRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

int64_t VoicePrintUpdateRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void VoicePrintUpdateRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool VoicePrintUpdateRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string VoicePrintUpdateRequest::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VoicePrintUpdateRequest::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VoicePrintUpdateRequest::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

string VoicePrintUpdateRequest::GetData() const
{
    return m_data;
}

void VoicePrintUpdateRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool VoicePrintUpdateRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string VoicePrintUpdateRequest::GetSpeakerNick() const
{
    return m_speakerNick;
}

void VoicePrintUpdateRequest::SetSpeakerNick(const string& _speakerNick)
{
    m_speakerNick = _speakerNick;
    m_speakerNickHasBeenSet = true;
}

bool VoicePrintUpdateRequest::SpeakerNickHasBeenSet() const
{
    return m_speakerNickHasBeenSet;
}


