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

#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAudioCloneInput::CreateAigcAudioCloneInput() :
    m_audioFileInfoHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_promptAudioFileInfoHasBeenSet(false),
    m_promptTextHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcAudioCloneInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioFileInfo") && !value["AudioFileInfo"].IsNull())
    {
        if (!value["AudioFileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.AudioFileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioFileInfo.Deserialize(value["AudioFileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioFileInfoHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("PromptAudioFileInfo") && !value["PromptAudioFileInfo"].IsNull())
    {
        if (!value["PromptAudioFileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.PromptAudioFileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promptAudioFileInfo.Deserialize(value["PromptAudioFileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promptAudioFileInfoHasBeenSet = true;
    }

    if (value.HasMember("PromptText") && !value["PromptText"].IsNull())
    {
        if (!value["PromptText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.PromptText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptText = string(value["PromptText"].GetString());
        m_promptTextHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAudioCloneInput.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcAudioCloneInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioFileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_promptAudioFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptAudioFileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptAudioFileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_promptTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptText.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

}


AigcAudioCloneInputFileInfo CreateAigcAudioCloneInput::GetAudioFileInfo() const
{
    return m_audioFileInfo;
}

void CreateAigcAudioCloneInput::SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo)
{
    m_audioFileInfo = _audioFileInfo;
    m_audioFileInfoHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::AudioFileInfoHasBeenSet() const
{
    return m_audioFileInfoHasBeenSet;
}

string CreateAigcAudioCloneInput::GetVoiceId() const
{
    return m_voiceId;
}

void CreateAigcAudioCloneInput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CreateAigcAudioCloneInput::GetText() const
{
    return m_text;
}

void CreateAigcAudioCloneInput::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

AigcAudioCloneInputFileInfo CreateAigcAudioCloneInput::GetPromptAudioFileInfo() const
{
    return m_promptAudioFileInfo;
}

void CreateAigcAudioCloneInput::SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo)
{
    m_promptAudioFileInfo = _promptAudioFileInfo;
    m_promptAudioFileInfoHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::PromptAudioFileInfoHasBeenSet() const
{
    return m_promptAudioFileInfoHasBeenSet;
}

string CreateAigcAudioCloneInput::GetPromptText() const
{
    return m_promptText;
}

void CreateAigcAudioCloneInput::SetPromptText(const string& _promptText)
{
    m_promptText = _promptText;
    m_promptTextHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::PromptTextHasBeenSet() const
{
    return m_promptTextHasBeenSet;
}

string CreateAigcAudioCloneInput::GetPayload() const
{
    return m_payload;
}

void CreateAigcAudioCloneInput::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool CreateAigcAudioCloneInput::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

