/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTemplateItem::SmartSubtitleTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_asrHotWordsConfigureHasBeenSet(false),
    m_asrHotWordsLibraryNameHasBeenSet(false),
    m_videoSrcLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_subtitleTypeHasBeenSet(false),
    m_translateSwitchHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AsrHotWordsConfigure") && !value["AsrHotWordsConfigure"].IsNull())
    {
        if (!value["AsrHotWordsConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.AsrHotWordsConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrHotWordsConfigure.Deserialize(value["AsrHotWordsConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrHotWordsConfigureHasBeenSet = true;
    }

    if (value.HasMember("AsrHotWordsLibraryName") && !value["AsrHotWordsLibraryName"].IsNull())
    {
        if (!value["AsrHotWordsLibraryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.AsrHotWordsLibraryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrHotWordsLibraryName = string(value["AsrHotWordsLibraryName"].GetString());
        m_asrHotWordsLibraryNameHasBeenSet = true;
    }

    if (value.HasMember("VideoSrcLanguage") && !value["VideoSrcLanguage"].IsNull())
    {
        if (!value["VideoSrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.VideoSrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoSrcLanguage = string(value["VideoSrcLanguage"].GetString());
        m_videoSrcLanguageHasBeenSet = true;
    }

    if (value.HasMember("SubtitleFormat") && !value["SubtitleFormat"].IsNull())
    {
        if (!value["SubtitleFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.SubtitleFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleFormat = string(value["SubtitleFormat"].GetString());
        m_subtitleFormatHasBeenSet = true;
    }

    if (value.HasMember("SubtitleType") && !value["SubtitleType"].IsNull())
    {
        if (!value["SubtitleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.SubtitleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleType = value["SubtitleType"].GetInt64();
        m_subtitleTypeHasBeenSet = true;
    }

    if (value.HasMember("TranslateSwitch") && !value["TranslateSwitch"].IsNull())
    {
        if (!value["TranslateSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.TranslateSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSwitch = string(value["TranslateSwitch"].GetString());
        m_translateSwitchHasBeenSet = true;
    }

    if (value.HasMember("TranslateDstLanguage") && !value["TranslateDstLanguage"].IsNull())
    {
        if (!value["TranslateDstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.TranslateDstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateDstLanguage = string(value["TranslateDstLanguage"].GetString());
        m_translateDstLanguageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTemplateItem.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_asrHotWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrHotWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrHotWordsConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrHotWordsLibraryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrHotWordsLibraryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrHotWordsLibraryName.c_str(), allocator).Move(), allocator);
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

    if (m_subtitleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleType, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

}


int64_t SmartSubtitleTemplateItem::GetDefinition() const
{
    return m_definition;
}

void SmartSubtitleTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string SmartSubtitleTemplateItem::GetName() const
{
    return m_name;
}

void SmartSubtitleTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SmartSubtitleTemplateItem::GetComment() const
{
    return m_comment;
}

void SmartSubtitleTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string SmartSubtitleTemplateItem::GetType() const
{
    return m_type;
}

void SmartSubtitleTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AsrHotWordsConfigure SmartSubtitleTemplateItem::GetAsrHotWordsConfigure() const
{
    return m_asrHotWordsConfigure;
}

void SmartSubtitleTemplateItem::SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure)
{
    m_asrHotWordsConfigure = _asrHotWordsConfigure;
    m_asrHotWordsConfigureHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::AsrHotWordsConfigureHasBeenSet() const
{
    return m_asrHotWordsConfigureHasBeenSet;
}

string SmartSubtitleTemplateItem::GetAsrHotWordsLibraryName() const
{
    return m_asrHotWordsLibraryName;
}

void SmartSubtitleTemplateItem::SetAsrHotWordsLibraryName(const string& _asrHotWordsLibraryName)
{
    m_asrHotWordsLibraryName = _asrHotWordsLibraryName;
    m_asrHotWordsLibraryNameHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::AsrHotWordsLibraryNameHasBeenSet() const
{
    return m_asrHotWordsLibraryNameHasBeenSet;
}

string SmartSubtitleTemplateItem::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void SmartSubtitleTemplateItem::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string SmartSubtitleTemplateItem::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void SmartSubtitleTemplateItem::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

int64_t SmartSubtitleTemplateItem::GetSubtitleType() const
{
    return m_subtitleType;
}

void SmartSubtitleTemplateItem::SetSubtitleType(const int64_t& _subtitleType)
{
    m_subtitleType = _subtitleType;
    m_subtitleTypeHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::SubtitleTypeHasBeenSet() const
{
    return m_subtitleTypeHasBeenSet;
}

string SmartSubtitleTemplateItem::GetTranslateSwitch() const
{
    return m_translateSwitch;
}

void SmartSubtitleTemplateItem::SetTranslateSwitch(const string& _translateSwitch)
{
    m_translateSwitch = _translateSwitch;
    m_translateSwitchHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::TranslateSwitchHasBeenSet() const
{
    return m_translateSwitchHasBeenSet;
}

string SmartSubtitleTemplateItem::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void SmartSubtitleTemplateItem::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}

string SmartSubtitleTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void SmartSubtitleTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SmartSubtitleTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SmartSubtitleTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SmartSubtitleTemplateItem::GetAliasName() const
{
    return m_aliasName;
}

void SmartSubtitleTemplateItem::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool SmartSubtitleTemplateItem::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

