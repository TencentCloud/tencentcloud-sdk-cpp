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

#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcCustomVoiceInput::CreateAigcCustomVoiceInput() :
    m_voiceNameHasBeenSet(false),
    m_voiceUrlHasBeenSet(false),
    m_videoIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcCustomVoiceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceName") && !value["VoiceName"].IsNull())
    {
        if (!value["VoiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceInput.VoiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceName = string(value["VoiceName"].GetString());
        m_voiceNameHasBeenSet = true;
    }

    if (value.HasMember("VoiceUrl") && !value["VoiceUrl"].IsNull())
    {
        if (!value["VoiceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceInput.VoiceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceUrl = string(value["VoiceUrl"].GetString());
        m_voiceUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoId") && !value["VideoId"].IsNull())
    {
        if (!value["VideoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcCustomVoiceInput.VideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoId = string(value["VideoId"].GetString());
        m_videoIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcCustomVoiceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoId.c_str(), allocator).Move(), allocator);
    }

}


string CreateAigcCustomVoiceInput::GetVoiceName() const
{
    return m_voiceName;
}

void CreateAigcCustomVoiceInput::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool CreateAigcCustomVoiceInput::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

string CreateAigcCustomVoiceInput::GetVoiceUrl() const
{
    return m_voiceUrl;
}

void CreateAigcCustomVoiceInput::SetVoiceUrl(const string& _voiceUrl)
{
    m_voiceUrl = _voiceUrl;
    m_voiceUrlHasBeenSet = true;
}

bool CreateAigcCustomVoiceInput::VoiceUrlHasBeenSet() const
{
    return m_voiceUrlHasBeenSet;
}

string CreateAigcCustomVoiceInput::GetVideoId() const
{
    return m_videoId;
}

void CreateAigcCustomVoiceInput::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceInput::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

