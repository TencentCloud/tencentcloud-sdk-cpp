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

#include <tencentcloud/lke/v20231130/model/AudioTranscript.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AudioTranscript::AudioTranscript() :
    m_speakerHasBeenSet(false),
    m_transcriptHasBeenSet(false)
{
}

CoreInternalOutcome AudioTranscript::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Speaker") && !value["Speaker"].IsNull())
    {
        if (!value["Speaker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTranscript.Speaker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speaker = string(value["Speaker"].GetString());
        m_speakerHasBeenSet = true;
    }

    if (value.HasMember("Transcript") && !value["Transcript"].IsNull())
    {
        if (!value["Transcript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTranscript.Transcript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transcript = string(value["Transcript"].GetString());
        m_transcriptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTranscript::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_speakerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speaker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speaker.c_str(), allocator).Move(), allocator);
    }

    if (m_transcriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transcript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transcript.c_str(), allocator).Move(), allocator);
    }

}


string AudioTranscript::GetSpeaker() const
{
    return m_speaker;
}

void AudioTranscript::SetSpeaker(const string& _speaker)
{
    m_speaker = _speaker;
    m_speakerHasBeenSet = true;
}

bool AudioTranscript::SpeakerHasBeenSet() const
{
    return m_speakerHasBeenSet;
}

string AudioTranscript::GetTranscript() const
{
    return m_transcript;
}

void AudioTranscript::SetTranscript(const string& _transcript)
{
    m_transcript = _transcript;
    m_transcriptHasBeenSet = true;
}

bool AudioTranscript::TranscriptHasBeenSet() const
{
    return m_transcriptHasBeenSet;
}

