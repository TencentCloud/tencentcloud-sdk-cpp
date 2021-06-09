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

#include <tencentcloud/ecc/v20181213/model/EHOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

EHOCRRequest::EHOCRRequest() :
    m_imageHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_eccAppidHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_requirementHasBeenSet(false),
    m_modelTitleHasBeenSet(false),
    m_modelContentHasBeenSet(false),
    m_isAsyncHasBeenSet(false)
{
}

string EHOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputType, allocator);
    }

    if (m_eccAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EccAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eccAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serverType, allocator);
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

    if (m_isAsyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsync, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EHOCRRequest::GetImage() const
{
    return m_image;
}

void EHOCRRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool EHOCRRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t EHOCRRequest::GetInputType() const
{
    return m_inputType;
}

void EHOCRRequest::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool EHOCRRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string EHOCRRequest::GetEccAppid() const
{
    return m_eccAppid;
}

void EHOCRRequest::SetEccAppid(const string& _eccAppid)
{
    m_eccAppid = _eccAppid;
    m_eccAppidHasBeenSet = true;
}

bool EHOCRRequest::EccAppidHasBeenSet() const
{
    return m_eccAppidHasBeenSet;
}

string EHOCRRequest::GetSessionId() const
{
    return m_sessionId;
}

void EHOCRRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EHOCRRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t EHOCRRequest::GetServerType() const
{
    return m_serverType;
}

void EHOCRRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool EHOCRRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string EHOCRRequest::GetTitle() const
{
    return m_title;
}

void EHOCRRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool EHOCRRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string EHOCRRequest::GetGrade() const
{
    return m_grade;
}

void EHOCRRequest::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool EHOCRRequest::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string EHOCRRequest::GetRequirement() const
{
    return m_requirement;
}

void EHOCRRequest::SetRequirement(const string& _requirement)
{
    m_requirement = _requirement;
    m_requirementHasBeenSet = true;
}

bool EHOCRRequest::RequirementHasBeenSet() const
{
    return m_requirementHasBeenSet;
}

string EHOCRRequest::GetModelTitle() const
{
    return m_modelTitle;
}

void EHOCRRequest::SetModelTitle(const string& _modelTitle)
{
    m_modelTitle = _modelTitle;
    m_modelTitleHasBeenSet = true;
}

bool EHOCRRequest::ModelTitleHasBeenSet() const
{
    return m_modelTitleHasBeenSet;
}

string EHOCRRequest::GetModelContent() const
{
    return m_modelContent;
}

void EHOCRRequest::SetModelContent(const string& _modelContent)
{
    m_modelContent = _modelContent;
    m_modelContentHasBeenSet = true;
}

bool EHOCRRequest::ModelContentHasBeenSet() const
{
    return m_modelContentHasBeenSet;
}

int64_t EHOCRRequest::GetIsAsync() const
{
    return m_isAsync;
}

void EHOCRRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool EHOCRRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}


