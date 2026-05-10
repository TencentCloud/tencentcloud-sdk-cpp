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

#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitleTemplateForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSmartSubtitleTemplateForUpdate::MPSSmartSubtitleTemplateForUpdate() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_subtitleTypeHasBeenSet(false),
    m_videoSrcLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_translateSwitchHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_selectingSubtitleAreasConfigHasBeenSet(false),
    m_speakerModeHasBeenSet(false),
    m_speakerLabelHasBeenSet(false)
{
}

CoreInternalOutcome MPSSmartSubtitleTemplateForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("SubtitleType") && !value["SubtitleType"].IsNull())
    {
        if (!value["SubtitleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.SubtitleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleType = value["SubtitleType"].GetInt64();
        m_subtitleTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoSrcLanguage") && !value["VideoSrcLanguage"].IsNull())
    {
        if (!value["VideoSrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.VideoSrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSrcLanguage = string(value["VideoSrcLanguage"].GetString());
        m_videoSrcLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("TranslateSwitch") && !value["TranslateSwitch"].IsNull())
    {
        if (!value["TranslateSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.TranslateSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSwitch = string(value["TranslateSwitch"].GetString());
        m_translateSwitchHasBeenSet = true;
    }

    if (value.HasMember("TranslateDstLanguage") && !value["TranslateDstLanguage"].IsNull())
    {
        if (!value["TranslateDstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.TranslateDstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateDstLanguage = string(value["TranslateDstLanguage"].GetString());
        m_translateDstLanguageHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.ProcessType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processType = value["ProcessType"].GetUint64();
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("SelectingSubtitleAreasConfig") && !value["SelectingSubtitleAreasConfig"].IsNull())
    {
        if (!value["SelectingSubtitleAreasConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.SelectingSubtitleAreasConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectingSubtitleAreasConfig.Deserialize(value["SelectingSubtitleAreasConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectingSubtitleAreasConfigHasBeenSet = true;
    }

    if (value.HasMember("SpeakerMode") && !value["SpeakerMode"].IsNull())
    {
        if (!value["SpeakerMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.SpeakerMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_speakerMode = value["SpeakerMode"].GetInt64();
        m_speakerModeHasBeenSet = true;
    }

    if (value.HasMember("SpeakerLabel") && !value["SpeakerLabel"].IsNull())
    {
        if (!value["SpeakerLabel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitleTemplateForUpdate.SpeakerLabel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_speakerLabel = value["SpeakerLabel"].GetInt64();
        m_speakerLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSmartSubtitleTemplateForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleType, allocator);
    }

    if (m_videoSrcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoSrcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_translateSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_translateDstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateDstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateDstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processType, allocator);
    }

    if (m_selectingSubtitleAreasConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectingSubtitleAreasConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectingSubtitleAreasConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_speakerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speakerMode, allocator);
    }

    if (m_speakerLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speakerLabel, allocator);
    }

}


int64_t MPSSmartSubtitleTemplateForUpdate::GetDefinition() const
{
    return m_definition;
}

void MPSSmartSubtitleTemplateForUpdate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetName() const
{
    return m_name;
}

void MPSSmartSubtitleTemplateForUpdate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetComment() const
{
    return m_comment;
}

void MPSSmartSubtitleTemplateForUpdate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t MPSSmartSubtitleTemplateForUpdate::GetSubtitleType() const
{
    return m_subtitleType;
}

void MPSSmartSubtitleTemplateForUpdate::SetSubtitleType(const int64_t& _subtitleType)
{
    m_subtitleType = _subtitleType;
    m_subtitleTypeHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::SubtitleTypeHasBeenSet() const
{
    return m_subtitleTypeHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void MPSSmartSubtitleTemplateForUpdate::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void MPSSmartSubtitleTemplateForUpdate::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetTranslateSwitch() const
{
    return m_translateSwitch;
}

void MPSSmartSubtitleTemplateForUpdate::SetTranslateSwitch(const string& _translateSwitch)
{
    m_translateSwitch = _translateSwitch;
    m_translateSwitchHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::TranslateSwitchHasBeenSet() const
{
    return m_translateSwitchHasBeenSet;
}

string MPSSmartSubtitleTemplateForUpdate::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void MPSSmartSubtitleTemplateForUpdate::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}

uint64_t MPSSmartSubtitleTemplateForUpdate::GetProcessType() const
{
    return m_processType;
}

void MPSSmartSubtitleTemplateForUpdate::SetProcessType(const uint64_t& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

MPSSelectingSubtitleAreasConfig MPSSmartSubtitleTemplateForUpdate::GetSelectingSubtitleAreasConfig() const
{
    return m_selectingSubtitleAreasConfig;
}

void MPSSmartSubtitleTemplateForUpdate::SetSelectingSubtitleAreasConfig(const MPSSelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig)
{
    m_selectingSubtitleAreasConfig = _selectingSubtitleAreasConfig;
    m_selectingSubtitleAreasConfigHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::SelectingSubtitleAreasConfigHasBeenSet() const
{
    return m_selectingSubtitleAreasConfigHasBeenSet;
}

int64_t MPSSmartSubtitleTemplateForUpdate::GetSpeakerMode() const
{
    return m_speakerMode;
}

void MPSSmartSubtitleTemplateForUpdate::SetSpeakerMode(const int64_t& _speakerMode)
{
    m_speakerMode = _speakerMode;
    m_speakerModeHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::SpeakerModeHasBeenSet() const
{
    return m_speakerModeHasBeenSet;
}

int64_t MPSSmartSubtitleTemplateForUpdate::GetSpeakerLabel() const
{
    return m_speakerLabel;
}

void MPSSmartSubtitleTemplateForUpdate::SetSpeakerLabel(const int64_t& _speakerLabel)
{
    m_speakerLabel = _speakerLabel;
    m_speakerLabelHasBeenSet = true;
}

bool MPSSmartSubtitleTemplateForUpdate::SpeakerLabelHasBeenSet() const
{
    return m_speakerLabelHasBeenSet;
}

