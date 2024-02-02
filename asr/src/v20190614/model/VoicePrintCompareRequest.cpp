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

#include <tencentcloud/asr/v20190614/model/VoicePrintCompareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintCompareRequest::VoicePrintCompareRequest() :
    m_voiceFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_srcAudioDataHasBeenSet(false),
    m_destAudioDataHasBeenSet(false)
{
}

string VoicePrintCompareRequest::ToJsonString() const
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

    if (m_srcAudioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcAudioData.c_str(), allocator).Move(), allocator);
    }

    if (m_destAudioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestAudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destAudioData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t VoicePrintCompareRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void VoicePrintCompareRequest::SetVoiceFormat(const int64_t& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool VoicePrintCompareRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

int64_t VoicePrintCompareRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void VoicePrintCompareRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool VoicePrintCompareRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string VoicePrintCompareRequest::GetSrcAudioData() const
{
    return m_srcAudioData;
}

void VoicePrintCompareRequest::SetSrcAudioData(const string& _srcAudioData)
{
    m_srcAudioData = _srcAudioData;
    m_srcAudioDataHasBeenSet = true;
}

bool VoicePrintCompareRequest::SrcAudioDataHasBeenSet() const
{
    return m_srcAudioDataHasBeenSet;
}

string VoicePrintCompareRequest::GetDestAudioData() const
{
    return m_destAudioData;
}

void VoicePrintCompareRequest::SetDestAudioData(const string& _destAudioData)
{
    m_destAudioData = _destAudioData;
    m_destAudioDataHasBeenSet = true;
}

bool VoicePrintCompareRequest::DestAudioDataHasBeenSet() const
{
    return m_destAudioDataHasBeenSet;
}


