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

#include <tencentcloud/ecc/v20181213/model/ECCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecc::V20181213::Model;
using namespace rapidjson;
using namespace std;

ECCRequest::ECCRequest() :
    m_contentHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_modelSubjectHasBeenSet(false),
    m_modelContentHasBeenSet(false)
{
}

string ECCRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSubjectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_modelSubject.c_str(), allocator).Move(), allocator);
    }

    if (m_modelContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_modelContent.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ECCRequest::GetContent() const
{
    return m_content;
}

void ECCRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ECCRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ECCRequest::GetTitle() const
{
    return m_title;
}

void ECCRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ECCRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ECCRequest::GetGrade() const
{
    return m_grade;
}

void ECCRequest::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool ECCRequest::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string ECCRequest::GetOutline() const
{
    return m_outline;
}

void ECCRequest::SetOutline(const string& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool ECCRequest::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

string ECCRequest::GetModelSubject() const
{
    return m_modelSubject;
}

void ECCRequest::SetModelSubject(const string& _modelSubject)
{
    m_modelSubject = _modelSubject;
    m_modelSubjectHasBeenSet = true;
}

bool ECCRequest::ModelSubjectHasBeenSet() const
{
    return m_modelSubjectHasBeenSet;
}

string ECCRequest::GetModelContent() const
{
    return m_modelContent;
}

void ECCRequest::SetModelContent(const string& _modelContent)
{
    m_modelContent = _modelContent;
    m_modelContentHasBeenSet = true;
}

bool ECCRequest::ModelContentHasBeenSet() const
{
    return m_modelContentHasBeenSet;
}


