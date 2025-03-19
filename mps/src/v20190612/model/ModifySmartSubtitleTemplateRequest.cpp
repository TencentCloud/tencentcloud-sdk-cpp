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

#include <tencentcloud/mps/v20190612/model/ModifySmartSubtitleTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifySmartSubtitleTemplateRequest::ModifySmartSubtitleTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_translateSwitchHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_videoSrcLanguageHasBeenSet(false),
    m_subtitleFormatHasBeenSet(false),
    m_subtitleTypeHasBeenSet(false),
    m_asrHotWordsConfigureHasBeenSet(false),
    m_translateDstLanguageHasBeenSet(false)
{
}

string ModifySmartSubtitleTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_translateSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_translateSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_videoSrcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoSrcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subtitleFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subtitleType, allocator);
    }

    if (m_asrHotWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrHotWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrHotWordsConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_translateDstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateDstLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_translateDstLanguage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifySmartSubtitleTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifySmartSubtitleTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetTranslateSwitch() const
{
    return m_translateSwitch;
}

void ModifySmartSubtitleTemplateRequest::SetTranslateSwitch(const string& _translateSwitch)
{
    m_translateSwitch = _translateSwitch;
    m_translateSwitchHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::TranslateSwitchHasBeenSet() const
{
    return m_translateSwitchHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetName() const
{
    return m_name;
}

void ModifySmartSubtitleTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifySmartSubtitleTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetVideoSrcLanguage() const
{
    return m_videoSrcLanguage;
}

void ModifySmartSubtitleTemplateRequest::SetVideoSrcLanguage(const string& _videoSrcLanguage)
{
    m_videoSrcLanguage = _videoSrcLanguage;
    m_videoSrcLanguageHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::VideoSrcLanguageHasBeenSet() const
{
    return m_videoSrcLanguageHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetSubtitleFormat() const
{
    return m_subtitleFormat;
}

void ModifySmartSubtitleTemplateRequest::SetSubtitleFormat(const string& _subtitleFormat)
{
    m_subtitleFormat = _subtitleFormat;
    m_subtitleFormatHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::SubtitleFormatHasBeenSet() const
{
    return m_subtitleFormatHasBeenSet;
}

int64_t ModifySmartSubtitleTemplateRequest::GetSubtitleType() const
{
    return m_subtitleType;
}

void ModifySmartSubtitleTemplateRequest::SetSubtitleType(const int64_t& _subtitleType)
{
    m_subtitleType = _subtitleType;
    m_subtitleTypeHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::SubtitleTypeHasBeenSet() const
{
    return m_subtitleTypeHasBeenSet;
}

AsrHotWordsConfigure ModifySmartSubtitleTemplateRequest::GetAsrHotWordsConfigure() const
{
    return m_asrHotWordsConfigure;
}

void ModifySmartSubtitleTemplateRequest::SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure)
{
    m_asrHotWordsConfigure = _asrHotWordsConfigure;
    m_asrHotWordsConfigureHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::AsrHotWordsConfigureHasBeenSet() const
{
    return m_asrHotWordsConfigureHasBeenSet;
}

string ModifySmartSubtitleTemplateRequest::GetTranslateDstLanguage() const
{
    return m_translateDstLanguage;
}

void ModifySmartSubtitleTemplateRequest::SetTranslateDstLanguage(const string& _translateDstLanguage)
{
    m_translateDstLanguage = _translateDstLanguage;
    m_translateDstLanguageHasBeenSet = true;
}

bool ModifySmartSubtitleTemplateRequest::TranslateDstLanguageHasBeenSet() const
{
    return m_translateDstLanguageHasBeenSet;
}


