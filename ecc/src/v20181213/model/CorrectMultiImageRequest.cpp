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

#include <tencentcloud/ecc/v20181213/model/CorrectMultiImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

CorrectMultiImageRequest::CorrectMultiImageRequest() :
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

string CorrectMultiImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_image.begin(); itr != m_image.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<string> CorrectMultiImageRequest::GetImage() const
{
    return m_image;
}

void CorrectMultiImageRequest::SetImage(const vector<string>& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CorrectMultiImageRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t CorrectMultiImageRequest::GetInputType() const
{
    return m_inputType;
}

void CorrectMultiImageRequest::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CorrectMultiImageRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CorrectMultiImageRequest::GetEccAppid() const
{
    return m_eccAppid;
}

void CorrectMultiImageRequest::SetEccAppid(const string& _eccAppid)
{
    m_eccAppid = _eccAppid;
    m_eccAppidHasBeenSet = true;
}

bool CorrectMultiImageRequest::EccAppidHasBeenSet() const
{
    return m_eccAppidHasBeenSet;
}

string CorrectMultiImageRequest::GetSessionId() const
{
    return m_sessionId;
}

void CorrectMultiImageRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CorrectMultiImageRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t CorrectMultiImageRequest::GetServerType() const
{
    return m_serverType;
}

void CorrectMultiImageRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool CorrectMultiImageRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string CorrectMultiImageRequest::GetTitle() const
{
    return m_title;
}

void CorrectMultiImageRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CorrectMultiImageRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string CorrectMultiImageRequest::GetGrade() const
{
    return m_grade;
}

void CorrectMultiImageRequest::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool CorrectMultiImageRequest::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string CorrectMultiImageRequest::GetRequirement() const
{
    return m_requirement;
}

void CorrectMultiImageRequest::SetRequirement(const string& _requirement)
{
    m_requirement = _requirement;
    m_requirementHasBeenSet = true;
}

bool CorrectMultiImageRequest::RequirementHasBeenSet() const
{
    return m_requirementHasBeenSet;
}

string CorrectMultiImageRequest::GetModelTitle() const
{
    return m_modelTitle;
}

void CorrectMultiImageRequest::SetModelTitle(const string& _modelTitle)
{
    m_modelTitle = _modelTitle;
    m_modelTitleHasBeenSet = true;
}

bool CorrectMultiImageRequest::ModelTitleHasBeenSet() const
{
    return m_modelTitleHasBeenSet;
}

string CorrectMultiImageRequest::GetModelContent() const
{
    return m_modelContent;
}

void CorrectMultiImageRequest::SetModelContent(const string& _modelContent)
{
    m_modelContent = _modelContent;
    m_modelContentHasBeenSet = true;
}

bool CorrectMultiImageRequest::ModelContentHasBeenSet() const
{
    return m_modelContentHasBeenSet;
}

int64_t CorrectMultiImageRequest::GetIsAsync() const
{
    return m_isAsync;
}

void CorrectMultiImageRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool CorrectMultiImageRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}


