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

#include <tencentcloud/solar/v20181011/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectBudgetHasBeenSet(false),
    m_projectOrgHasBeenSet(false),
    m_projectIntroductionHasBeenSet(false),
    m_projectOrgIdHasBeenSet(false)
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

    if (m_projectBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectBudget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectBudget.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOrg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIntroductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIntroduction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectIntroduction.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOrgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOrgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectOrgId.c_str(), allocator).Move(), allocator);
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

string ModifyProjectRequest::GetProjectBudget() const
{
    return m_projectBudget;
}

void ModifyProjectRequest::SetProjectBudget(const string& _projectBudget)
{
    m_projectBudget = _projectBudget;
    m_projectBudgetHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectBudgetHasBeenSet() const
{
    return m_projectBudgetHasBeenSet;
}

string ModifyProjectRequest::GetProjectOrg() const
{
    return m_projectOrg;
}

void ModifyProjectRequest::SetProjectOrg(const string& _projectOrg)
{
    m_projectOrg = _projectOrg;
    m_projectOrgHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectOrgHasBeenSet() const
{
    return m_projectOrgHasBeenSet;
}

string ModifyProjectRequest::GetProjectIntroduction() const
{
    return m_projectIntroduction;
}

void ModifyProjectRequest::SetProjectIntroduction(const string& _projectIntroduction)
{
    m_projectIntroduction = _projectIntroduction;
    m_projectIntroductionHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIntroductionHasBeenSet() const
{
    return m_projectIntroductionHasBeenSet;
}

string ModifyProjectRequest::GetProjectOrgId() const
{
    return m_projectOrgId;
}

void ModifyProjectRequest::SetProjectOrgId(const string& _projectOrgId)
{
    m_projectOrgId = _projectOrgId;
    m_projectOrgIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectOrgIdHasBeenSet() const
{
    return m_projectOrgIdHasBeenSet;
}


