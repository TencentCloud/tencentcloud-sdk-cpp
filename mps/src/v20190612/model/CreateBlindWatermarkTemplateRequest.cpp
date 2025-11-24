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

#include <tencentcloud/mps/v20190612/model/CreateBlindWatermarkTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateBlindWatermarkTemplateRequest::CreateBlindWatermarkTemplateRequest() :
    m_typeHasBeenSet(false),
    m_textContentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateBlindWatermarkTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textContent.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBlindWatermarkTemplateRequest::GetType() const
{
    return m_type;
}

void CreateBlindWatermarkTemplateRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateBlindWatermarkTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateBlindWatermarkTemplateRequest::GetTextContent() const
{
    return m_textContent;
}

void CreateBlindWatermarkTemplateRequest::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool CreateBlindWatermarkTemplateRequest::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}

string CreateBlindWatermarkTemplateRequest::GetName() const
{
    return m_name;
}

void CreateBlindWatermarkTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateBlindWatermarkTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateBlindWatermarkTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateBlindWatermarkTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateBlindWatermarkTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


