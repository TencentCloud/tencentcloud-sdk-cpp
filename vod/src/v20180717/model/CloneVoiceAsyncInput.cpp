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

#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CloneVoiceAsyncInput::CloneVoiceAsyncInput() :
    m_audioUrlHasBeenSet(false),
    m_audioFileIdHasBeenSet(false),
    m_languageBoostHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

CoreInternalOutcome CloneVoiceAsyncInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncInput.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (value.HasMember("AudioFileId") && !value["AudioFileId"].IsNull())
    {
        if (!value["AudioFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncInput.AudioFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioFileId = string(value["AudioFileId"].GetString());
        m_audioFileIdHasBeenSet = true;
    }

    if (value.HasMember("LanguageBoost") && !value["LanguageBoost"].IsNull())
    {
        if (!value["LanguageBoost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncInput.LanguageBoost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageBoost = string(value["LanguageBoost"].GetString());
        m_languageBoostHasBeenSet = true;
    }

    if (value.HasMember("ExtParam") && !value["ExtParam"].IsNull())
    {
        if (!value["ExtParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneVoiceAsyncInput.ExtParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extParam = string(value["ExtParam"].GetString());
        m_extParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneVoiceAsyncInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_languageBoostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageBoost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageBoost.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }

}


string CloneVoiceAsyncInput::GetAudioUrl() const
{
    return m_audioUrl;
}

void CloneVoiceAsyncInput::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool CloneVoiceAsyncInput::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string CloneVoiceAsyncInput::GetAudioFileId() const
{
    return m_audioFileId;
}

void CloneVoiceAsyncInput::SetAudioFileId(const string& _audioFileId)
{
    m_audioFileId = _audioFileId;
    m_audioFileIdHasBeenSet = true;
}

bool CloneVoiceAsyncInput::AudioFileIdHasBeenSet() const
{
    return m_audioFileIdHasBeenSet;
}

string CloneVoiceAsyncInput::GetLanguageBoost() const
{
    return m_languageBoost;
}

void CloneVoiceAsyncInput::SetLanguageBoost(const string& _languageBoost)
{
    m_languageBoost = _languageBoost;
    m_languageBoostHasBeenSet = true;
}

bool CloneVoiceAsyncInput::LanguageBoostHasBeenSet() const
{
    return m_languageBoostHasBeenSet;
}

string CloneVoiceAsyncInput::GetExtParam() const
{
    return m_extParam;
}

void CloneVoiceAsyncInput::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool CloneVoiceAsyncInput::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}

