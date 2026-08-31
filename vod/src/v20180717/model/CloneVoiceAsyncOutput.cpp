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

#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CloneVoiceAsyncOutput::CloneVoiceAsyncOutput() :
    m_voiceIdHasBeenSet(false),
    m_demoAudioHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome CloneVoiceAsyncOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncOutput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("DemoAudio") && !value["DemoAudio"].IsNull())
    {
        if (!value["DemoAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncOutput.DemoAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoAudio = string(value["DemoAudio"].GetString());
        m_demoAudioHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncOutput.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneVoiceAsyncOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_demoAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoAudio.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

}


string CloneVoiceAsyncOutput::GetVoiceId() const
{
    return m_voiceId;
}

void CloneVoiceAsyncOutput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CloneVoiceAsyncOutput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CloneVoiceAsyncOutput::GetDemoAudio() const
{
    return m_demoAudio;
}

void CloneVoiceAsyncOutput::SetDemoAudio(const string& _demoAudio)
{
    m_demoAudio = _demoAudio;
    m_demoAudioHasBeenSet = true;
}

bool CloneVoiceAsyncOutput::DemoAudioHasBeenSet() const
{
    return m_demoAudioHasBeenSet;
}

string CloneVoiceAsyncOutput::GetExtInfo() const
{
    return m_extInfo;
}

void CloneVoiceAsyncOutput::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool CloneVoiceAsyncOutput::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

