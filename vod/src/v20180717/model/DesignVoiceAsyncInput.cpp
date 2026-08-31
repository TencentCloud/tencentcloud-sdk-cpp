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

#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DesignVoiceAsyncInput::DesignVoiceAsyncInput() :
    m_promptHasBeenSet(false),
    m_voiceSettingsHasBeenSet(false),
    m_previewTextHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

CoreInternalOutcome DesignVoiceAsyncInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("VoiceSettings") && !value["VoiceSettings"].IsNull())
    {
        if (!value["VoiceSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncInput.VoiceSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceSettings.Deserialize(value["VoiceSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceSettingsHasBeenSet = true;
    }

    if (value.HasMember("PreviewText") && !value["PreviewText"].IsNull())
    {
        if (!value["PreviewText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncInput.PreviewText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewText = string(value["PreviewText"].GetString());
        m_previewTextHasBeenSet = true;
    }

    if (value.HasMember("ExtParam") && !value["ExtParam"].IsNull())
    {
        if (!value["ExtParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesignVoiceAsyncInput.ExtParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extParam = string(value["ExtParam"].GetString());
        m_extParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DesignVoiceAsyncInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_previewTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewText.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }

}


string DesignVoiceAsyncInput::GetPrompt() const
{
    return m_prompt;
}

void DesignVoiceAsyncInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool DesignVoiceAsyncInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

VoiceSettings DesignVoiceAsyncInput::GetVoiceSettings() const
{
    return m_voiceSettings;
}

void DesignVoiceAsyncInput::SetVoiceSettings(const VoiceSettings& _voiceSettings)
{
    m_voiceSettings = _voiceSettings;
    m_voiceSettingsHasBeenSet = true;
}

bool DesignVoiceAsyncInput::VoiceSettingsHasBeenSet() const
{
    return m_voiceSettingsHasBeenSet;
}

string DesignVoiceAsyncInput::GetPreviewText() const
{
    return m_previewText;
}

void DesignVoiceAsyncInput::SetPreviewText(const string& _previewText)
{
    m_previewText = _previewText;
    m_previewTextHasBeenSet = true;
}

bool DesignVoiceAsyncInput::PreviewTextHasBeenSet() const
{
    return m_previewTextHasBeenSet;
}

string DesignVoiceAsyncInput::GetExtParam() const
{
    return m_extParam;
}

void DesignVoiceAsyncInput::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool DesignVoiceAsyncInput::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}

