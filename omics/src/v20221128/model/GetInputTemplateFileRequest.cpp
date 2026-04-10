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

#include <tencentcloud/omics/v20221128/model/GetInputTemplateFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GetInputTemplateFileRequest::GetInputTemplateFileRequest() :
    m_inputTemplateIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_applicationVersionIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string GetInputTemplateFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetInputTemplateFileRequest::GetInputTemplateId() const
{
    return m_inputTemplateId;
}

void GetInputTemplateFileRequest::SetInputTemplateId(const string& _inputTemplateId)
{
    m_inputTemplateId = _inputTemplateId;
    m_inputTemplateIdHasBeenSet = true;
}

bool GetInputTemplateFileRequest::InputTemplateIdHasBeenSet() const
{
    return m_inputTemplateIdHasBeenSet;
}

string GetInputTemplateFileRequest::GetProjectId() const
{
    return m_projectId;
}

void GetInputTemplateFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetInputTemplateFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetInputTemplateFileRequest::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void GetInputTemplateFileRequest::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool GetInputTemplateFileRequest::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}

string GetInputTemplateFileRequest::GetApplicationId() const
{
    return m_applicationId;
}

void GetInputTemplateFileRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool GetInputTemplateFileRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}


