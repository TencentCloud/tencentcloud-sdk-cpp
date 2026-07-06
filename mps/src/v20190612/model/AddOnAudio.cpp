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

#include <tencentcloud/mps/v20190612/model/AddOnAudio.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AddOnAudio::AddOnAudio() :
    m_inputInfoHasBeenSet(false),
    m_audioNameHasBeenSet(false),
    m_audioLanguageHasBeenSet(false),
    m_defaultTrackHasBeenSet(false)
{
}

CoreInternalOutcome AddOnAudio::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputInfo") && !value["InputInfo"].IsNull())
    {
        if (!value["InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnAudio.InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInfo.Deserialize(value["InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInfoHasBeenSet = true;
    }

    if (value.HasMember("AudioName") && !value["AudioName"].IsNull())
    {
        if (!value["AudioName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnAudio.AudioName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioName = string(value["AudioName"].GetString());
        m_audioNameHasBeenSet = true;
    }

    if (value.HasMember("AudioLanguage") && !value["AudioLanguage"].IsNull())
    {
        if (!value["AudioLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnAudio.AudioLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioLanguage = string(value["AudioLanguage"].GetString());
        m_audioLanguageHasBeenSet = true;
    }

    if (value.HasMember("DefaultTrack") && !value["DefaultTrack"].IsNull())
    {
        if (!value["DefaultTrack"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnAudio.DefaultTrack` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultTrack = value["DefaultTrack"].GetBool();
        m_defaultTrackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddOnAudio::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioName.c_str(), allocator).Move(), allocator);
    }

    if (m_audioLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultTrackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTrack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultTrack, allocator);
    }

}


MediaInputInfo AddOnAudio::GetInputInfo() const
{
    return m_inputInfo;
}

void AddOnAudio::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool AddOnAudio::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string AddOnAudio::GetAudioName() const
{
    return m_audioName;
}

void AddOnAudio::SetAudioName(const string& _audioName)
{
    m_audioName = _audioName;
    m_audioNameHasBeenSet = true;
}

bool AddOnAudio::AudioNameHasBeenSet() const
{
    return m_audioNameHasBeenSet;
}

string AddOnAudio::GetAudioLanguage() const
{
    return m_audioLanguage;
}

void AddOnAudio::SetAudioLanguage(const string& _audioLanguage)
{
    m_audioLanguage = _audioLanguage;
    m_audioLanguageHasBeenSet = true;
}

bool AddOnAudio::AudioLanguageHasBeenSet() const
{
    return m_audioLanguageHasBeenSet;
}

bool AddOnAudio::GetDefaultTrack() const
{
    return m_defaultTrack;
}

void AddOnAudio::SetDefaultTrack(const bool& _defaultTrack)
{
    m_defaultTrack = _defaultTrack;
    m_defaultTrackHasBeenSet = true;
}

bool AddOnAudio::DefaultTrackHasBeenSet() const
{
    return m_defaultTrackHasBeenSet;
}

