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

#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DesignVoiceAsyncOutput::DesignVoiceAsyncOutput() :
    m_voiceIdHasBeenSet(false),
    m_trialAudioHasBeenSet(false)
{
}

CoreInternalOutcome DesignVoiceAsyncOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncOutput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("TrialAudio") && !value["TrialAudio"].IsNull())
    {
        if (!value["TrialAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncOutput.TrialAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trialAudio = string(value["TrialAudio"].GetString());
        m_trialAudioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DesignVoiceAsyncOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trialAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trialAudio.c_str(), allocator).Move(), allocator);
    }

}


string DesignVoiceAsyncOutput::GetVoiceId() const
{
    return m_voiceId;
}

void DesignVoiceAsyncOutput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool DesignVoiceAsyncOutput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string DesignVoiceAsyncOutput::GetTrialAudio() const
{
    return m_trialAudio;
}

void DesignVoiceAsyncOutput::SetTrialAudio(const string& _trialAudio)
{
    m_trialAudio = _trialAudio;
    m_trialAudioHasBeenSet = true;
}

bool DesignVoiceAsyncOutput::TrialAudioHasBeenSet() const
{
    return m_trialAudioHasBeenSet;
}

