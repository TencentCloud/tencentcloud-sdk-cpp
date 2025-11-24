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

#include <tencentcloud/mps/v20190612/model/ModifyBlindWatermarkTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyBlindWatermarkTemplateRequest::ModifyBlindWatermarkTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_textContentHasBeenSet(false)
{
}

string ModifyBlindWatermarkTemplateRequest::ToJsonString() const
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

    if (m_textContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBlindWatermarkTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyBlindWatermarkTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyBlindWatermarkTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyBlindWatermarkTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyBlindWatermarkTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyBlindWatermarkTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyBlindWatermarkTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyBlindWatermarkTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyBlindWatermarkTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifyBlindWatermarkTemplateRequest::GetTextContent() const
{
    return m_textContent;
}

void ModifyBlindWatermarkTemplateRequest::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool ModifyBlindWatermarkTemplateRequest::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}


