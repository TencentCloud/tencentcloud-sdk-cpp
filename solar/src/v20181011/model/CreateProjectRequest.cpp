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

#include <tencentcloud/solar/v20181011/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_projectNameHasBeenSet(false),
    m_projectOrgHasBeenSet(false),
    m_projectBudgetHasBeenSet(false),
    m_projectIntroductionHasBeenSet(false),
    m_projectOrgIdHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOrg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_projectBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectBudget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectBudget.c_str(), allocator).Move(), allocator);
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


string CreateProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void CreateProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool CreateProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string CreateProjectRequest::GetProjectOrg() const
{
    return m_projectOrg;
}

void CreateProjectRequest::SetProjectOrg(const string& _projectOrg)
{
    m_projectOrg = _projectOrg;
    m_projectOrgHasBeenSet = true;
}

bool CreateProjectRequest::ProjectOrgHasBeenSet() const
{
    return m_projectOrgHasBeenSet;
}

string CreateProjectRequest::GetProjectBudget() const
{
    return m_projectBudget;
}

void CreateProjectRequest::SetProjectBudget(const string& _projectBudget)
{
    m_projectBudget = _projectBudget;
    m_projectBudgetHasBeenSet = true;
}

bool CreateProjectRequest::ProjectBudgetHasBeenSet() const
{
    return m_projectBudgetHasBeenSet;
}

string CreateProjectRequest::GetProjectIntroduction() const
{
    return m_projectIntroduction;
}

void CreateProjectRequest::SetProjectIntroduction(const string& _projectIntroduction)
{
    m_projectIntroduction = _projectIntroduction;
    m_projectIntroductionHasBeenSet = true;
}

bool CreateProjectRequest::ProjectIntroductionHasBeenSet() const
{
    return m_projectIntroductionHasBeenSet;
}

string CreateProjectRequest::GetProjectOrgId() const
{
    return m_projectOrgId;
}

void CreateProjectRequest::SetProjectOrgId(const string& _projectOrgId)
{
    m_projectOrgId = _projectOrgId;
    m_projectOrgIdHasBeenSet = true;
}

bool CreateProjectRequest::ProjectOrgIdHasBeenSet() const
{
    return m_projectOrgIdHasBeenSet;
}


