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

#include <tencentcloud/mps/v20190612/model/DocToVideoInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DocToVideoInput::DocToVideoInput() :
    m_fileUrlHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_referenceDurationHasBeenSet(false),
    m_enableTTSHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_pPTXFidelityHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_backgroundHasBeenSet(false),
    m_watermarkHasBeenSet(false),
    m_enableCaptionHasBeenSet(false)
{
}

CoreInternalOutcome DocToVideoInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.FileUrl` is not array type"));

        const rapidjson::Value &tmpValue = value["FileUrl"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileUrl.push_back((*itr).GetString());
        }
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("ReferenceDuration") && !value["ReferenceDuration"].IsNull())
    {
        if (!value["ReferenceDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.ReferenceDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceDuration = value["ReferenceDuration"].GetInt64();
        m_referenceDurationHasBeenSet = true;
    }

    if (value.HasMember("EnableTTS") && !value["EnableTTS"].IsNull())
    {
        if (!value["EnableTTS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.EnableTTS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTTS = value["EnableTTS"].GetBool();
        m_enableTTSHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("PPTXFidelity") && !value["PPTXFidelity"].IsNull())
    {
        if (!value["PPTXFidelity"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.PPTXFidelity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pPTXFidelity = value["PPTXFidelity"].GetBool();
        m_pPTXFidelityHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Background") && !value["Background"].IsNull())
    {
        if (!value["Background"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Background` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_background.Deserialize(value["Background"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundHasBeenSet = true;
    }

    if (value.HasMember("Watermark") && !value["Watermark"].IsNull())
    {
        if (!value["Watermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.Watermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_watermark.Deserialize(value["Watermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_watermarkHasBeenSet = true;
    }

    if (value.HasMember("EnableCaption") && !value["EnableCaption"].IsNull())
    {
        if (!value["EnableCaption"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoInput.EnableCaption` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCaption = value["EnableCaption"].GetBool();
        m_enableCaptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocToVideoInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileUrl.begin(); itr != m_fileUrl.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceDuration, allocator);
    }

    if (m_enableTTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTTS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTTS, allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pPTXFidelityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PPTXFidelity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pPTXFidelity, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Background";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_background.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_watermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Watermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_watermark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableCaptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCaption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCaption, allocator);
    }

}


vector<string> DocToVideoInput::GetFileUrl() const
{
    return m_fileUrl;
}

void DocToVideoInput::SetFileUrl(const vector<string>& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool DocToVideoInput::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string DocToVideoInput::GetPrompt() const
{
    return m_prompt;
}

void DocToVideoInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool DocToVideoInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string DocToVideoInput::GetModelName() const
{
    return m_modelName;
}

void DocToVideoInput::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DocToVideoInput::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string DocToVideoInput::GetModelVersion() const
{
    return m_modelVersion;
}

void DocToVideoInput::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool DocToVideoInput::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string DocToVideoInput::GetRatio() const
{
    return m_ratio;
}

void DocToVideoInput::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool DocToVideoInput::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string DocToVideoInput::GetLanguage() const
{
    return m_language;
}

void DocToVideoInput::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool DocToVideoInput::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

int64_t DocToVideoInput::GetReferenceDuration() const
{
    return m_referenceDuration;
}

void DocToVideoInput::SetReferenceDuration(const int64_t& _referenceDuration)
{
    m_referenceDuration = _referenceDuration;
    m_referenceDurationHasBeenSet = true;
}

bool DocToVideoInput::ReferenceDurationHasBeenSet() const
{
    return m_referenceDurationHasBeenSet;
}

bool DocToVideoInput::GetEnableTTS() const
{
    return m_enableTTS;
}

void DocToVideoInput::SetEnableTTS(const bool& _enableTTS)
{
    m_enableTTS = _enableTTS;
    m_enableTTSHasBeenSet = true;
}

bool DocToVideoInput::EnableTTSHasBeenSet() const
{
    return m_enableTTSHasBeenSet;
}

string DocToVideoInput::GetVoiceId() const
{
    return m_voiceId;
}

void DocToVideoInput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool DocToVideoInput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

bool DocToVideoInput::GetPPTXFidelity() const
{
    return m_pPTXFidelity;
}

void DocToVideoInput::SetPPTXFidelity(const bool& _pPTXFidelity)
{
    m_pPTXFidelity = _pPTXFidelity;
    m_pPTXFidelityHasBeenSet = true;
}

bool DocToVideoInput::PPTXFidelityHasBeenSet() const
{
    return m_pPTXFidelityHasBeenSet;
}

string DocToVideoInput::GetMode() const
{
    return m_mode;
}

void DocToVideoInput::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DocToVideoInput::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

DocToVideoBackgroundInfo DocToVideoInput::GetBackground() const
{
    return m_background;
}

void DocToVideoInput::SetBackground(const DocToVideoBackgroundInfo& _background)
{
    m_background = _background;
    m_backgroundHasBeenSet = true;
}

bool DocToVideoInput::BackgroundHasBeenSet() const
{
    return m_backgroundHasBeenSet;
}

DocToVideoWatermarkInfo DocToVideoInput::GetWatermark() const
{
    return m_watermark;
}

void DocToVideoInput::SetWatermark(const DocToVideoWatermarkInfo& _watermark)
{
    m_watermark = _watermark;
    m_watermarkHasBeenSet = true;
}

bool DocToVideoInput::WatermarkHasBeenSet() const
{
    return m_watermarkHasBeenSet;
}

bool DocToVideoInput::GetEnableCaption() const
{
    return m_enableCaption;
}

void DocToVideoInput::SetEnableCaption(const bool& _enableCaption)
{
    m_enableCaption = _enableCaption;
    m_enableCaptionHasBeenSet = true;
}

bool DocToVideoInput::EnableCaptionHasBeenSet() const
{
    return m_enableCaptionHasBeenSet;
}

