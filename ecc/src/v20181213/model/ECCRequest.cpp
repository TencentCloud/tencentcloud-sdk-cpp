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
using namespace std;

ECCRequest::ECCRequest() :
    m_contentHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_requirementHasBeenSet(false),
    m_modelTitleHasBeenSet(false),
    m_modelContentHasBeenSet(false),
    m_eccAppidHasBeenSet(false),
    m_isAsyncHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string ECCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_requirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requirement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requirement.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_modelContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelContent.c_str(), allocator).Move(), allocator);
    }

    if (m_eccAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EccAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eccAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_isAsyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsync, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string ECCRequest::GetRequirement() const
{
    return m_requirement;
}

void ECCRequest::SetRequirement(const string& _requirement)
{
    m_requirement = _requirement;
    m_requirementHasBeenSet = true;
}

bool ECCRequest::RequirementHasBeenSet() const
{
    return m_requirementHasBeenSet;
}

string ECCRequest::GetModelTitle() const
{
    return m_modelTitle;
}

void ECCRequest::SetModelTitle(const string& _modelTitle)
{
    m_modelTitle = _modelTitle;
    m_modelTitleHasBeenSet = true;
}

bool ECCRequest::ModelTitleHasBeenSet() const
{
    return m_modelTitleHasBeenSet;
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

string ECCRequest::GetEccAppid() const
{
    return m_eccAppid;
}

void ECCRequest::SetEccAppid(const string& _eccAppid)
{
    m_eccAppid = _eccAppid;
    m_eccAppidHasBeenSet = true;
}

bool ECCRequest::EccAppidHasBeenSet() const
{
    return m_eccAppidHasBeenSet;
}

int64_t ECCRequest::GetIsAsync() const
{
    return m_isAsync;
}

void ECCRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool ECCRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}

string ECCRequest::GetSessionId() const
{
    return m_sessionId;
}

void ECCRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ECCRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


