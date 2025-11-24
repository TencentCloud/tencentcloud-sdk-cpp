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

#include <tencentcloud/mps/v20190612/model/CreateProcessImageTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateProcessImageTemplateRequest::CreateProcessImageTemplateRequest() :
    m_processImageTemplateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateProcessImageTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_processImageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessImageTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processImageTemplate.ToJsonObject(d[key.c_str()], allocator);
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


ImageTaskInput CreateProcessImageTemplateRequest::GetProcessImageTemplate() const
{
    return m_processImageTemplate;
}

void CreateProcessImageTemplateRequest::SetProcessImageTemplate(const ImageTaskInput& _processImageTemplate)
{
    m_processImageTemplate = _processImageTemplate;
    m_processImageTemplateHasBeenSet = true;
}

bool CreateProcessImageTemplateRequest::ProcessImageTemplateHasBeenSet() const
{
    return m_processImageTemplateHasBeenSet;
}

string CreateProcessImageTemplateRequest::GetName() const
{
    return m_name;
}

void CreateProcessImageTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProcessImageTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateProcessImageTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateProcessImageTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateProcessImageTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


