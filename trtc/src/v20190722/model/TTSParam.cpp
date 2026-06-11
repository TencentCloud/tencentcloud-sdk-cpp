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

#include <tencentcloud/trtc/v20190722/model/TTSParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TTSParam::TTSParam() :
    m_modelHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_targetUserHasBeenSet(false),
    m_tTSRobotUserHasBeenSet(false),
    m_voiceHasBeenSet(false)
{
}

CoreInternalOutcome TTSParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TTSParam.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TTSParam.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("TargetUser") && !value["TargetUser"].IsNull())
    {
        if (!value["TargetUser"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TTSParam.TargetUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetUser.Deserialize(value["TargetUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetUserHasBeenSet = true;
    }

    if (value.HasMember("TTSRobotUser") && !value["TTSRobotUser"].IsNull())
    {
        if (!value["TTSRobotUser"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TTSParam.TTSRobotUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSRobotUser.Deserialize(value["TTSRobotUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSRobotUserHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TTSParam.Voice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voice.Deserialize(value["Voice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TTSParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tTSRobotUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSRobotUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSRobotUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voice.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TTSParam::GetModel() const
{
    return m_model;
}

void TTSParam::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TTSParam::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TTSParam::GetLanguage() const
{
    return m_language;
}

void TTSParam::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool TTSParam::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

TranscriptionUserInfoParams TTSParam::GetTargetUser() const
{
    return m_targetUser;
}

void TTSParam::SetTargetUser(const TranscriptionUserInfoParams& _targetUser)
{
    m_targetUser = _targetUser;
    m_targetUserHasBeenSet = true;
}

bool TTSParam::TargetUserHasBeenSet() const
{
    return m_targetUserHasBeenSet;
}

TranscriptionUserInfoParams TTSParam::GetTTSRobotUser() const
{
    return m_tTSRobotUser;
}

void TTSParam::SetTTSRobotUser(const TranscriptionUserInfoParams& _tTSRobotUser)
{
    m_tTSRobotUser = _tTSRobotUser;
    m_tTSRobotUserHasBeenSet = true;
}

bool TTSParam::TTSRobotUserHasBeenSet() const
{
    return m_tTSRobotUserHasBeenSet;
}

TTSVoice TTSParam::GetVoice() const
{
    return m_voice;
}

void TTSParam::SetVoice(const TTSVoice& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool TTSParam::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

