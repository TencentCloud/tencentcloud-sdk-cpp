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

#include <tencentcloud/mps/v20190612/model/RecognizeAudioRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RecognizeAudioRequest::RecognizeAudioRequest() :
    m_audioDataHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_userExtParaHasBeenSet(false)
{
}

string RecognizeAudioRequest::ToJsonString() const
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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_userExtParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserExtPara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userExtPara.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeAudioRequest::GetAudioData() const
{
    return m_audioData;
}

void RecognizeAudioRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool RecognizeAudioRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

string RecognizeAudioRequest::GetSource() const
{
    return m_source;
}

void RecognizeAudioRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool RecognizeAudioRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string RecognizeAudioRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void RecognizeAudioRequest::SetAudioFormat(const string& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool RecognizeAudioRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

int64_t RecognizeAudioRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void RecognizeAudioRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool RecognizeAudioRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string RecognizeAudioRequest::GetUserExtPara() const
{
    return m_userExtPara;
}

void RecognizeAudioRequest::SetUserExtPara(const string& _userExtPara)
{
    m_userExtPara = _userExtPara;
    m_userExtParaHasBeenSet = true;
}

bool RecognizeAudioRequest::UserExtParaHasBeenSet() const
{
    return m_userExtParaHasBeenSet;
}


