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

#include <tencentcloud/trro/v20220325/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_policyModeHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void ModifyProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ModifyProjectRequest::GetProjectDescription() const
{
    return m_projectDescription;
}

void ModifyProjectRequest::SetProjectDescription(const string& _projectDescription)
{
    m_projectDescription = _projectDescription;
    m_projectDescriptionHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectDescriptionHasBeenSet() const
{
    return m_projectDescriptionHasBeenSet;
}

string ModifyProjectRequest::GetPolicyMode() const
{
    return m_policyMode;
}

void ModifyProjectRequest::SetPolicyMode(const string& _policyMode)
{
    m_policyMode = _policyMode;
    m_policyModeHasBeenSet = true;
}

bool ModifyProjectRequest::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}


