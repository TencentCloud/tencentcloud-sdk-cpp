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

#include <tencentcloud/mps/v20190612/model/ModifySubtitleEmbedTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifySubtitleEmbedTemplateRequest::ModifySubtitleEmbedTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_subtitleEmbedConfigHasBeenSet(false)
{
}

string ModifySubtitleEmbedTemplateRequest::ToJsonString() const
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

    if (m_subtitleEmbedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleEmbedConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleEmbedConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifySubtitleEmbedTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifySubtitleEmbedTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifySubtitleEmbedTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifySubtitleEmbedTemplateRequest::GetName() const
{
    return m_name;
}

void ModifySubtitleEmbedTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySubtitleEmbedTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySubtitleEmbedTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifySubtitleEmbedTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifySubtitleEmbedTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

SubtitleEmbedConfig ModifySubtitleEmbedTemplateRequest::GetSubtitleEmbedConfig() const
{
    return m_subtitleEmbedConfig;
}

void ModifySubtitleEmbedTemplateRequest::SetSubtitleEmbedConfig(const SubtitleEmbedConfig& _subtitleEmbedConfig)
{
    m_subtitleEmbedConfig = _subtitleEmbedConfig;
    m_subtitleEmbedConfigHasBeenSet = true;
}

bool ModifySubtitleEmbedTemplateRequest::SubtitleEmbedConfigHasBeenSet() const
{
    return m_subtitleEmbedConfigHasBeenSet;
}


