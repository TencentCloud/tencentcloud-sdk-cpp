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

#include <tencentcloud/solar/v20181011/model/ProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ProjectInfo::ProjectInfo() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectOrgHasBeenSet(false),
    m_projectBudgetHasBeenSet(false),
    m_projectStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_projectIntroductionHasBeenSet(false),
    m_projectOrgIdHasBeenSet(false)
{
}

CoreInternalOutcome ProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectOrg") && !value["ProjectOrg"].IsNull())
    {
        if (!value["ProjectOrg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectOrg = string(value["ProjectOrg"].GetString());
        m_projectOrgHasBeenSet = true;
    }

    if (value.HasMember("ProjectBudget") && !value["ProjectBudget"].IsNull())
    {
        if (!value["ProjectBudget"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectBudget` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_projectBudget = value["ProjectBudget"].GetDouble();
        m_projectBudgetHasBeenSet = true;
    }

    if (value.HasMember("ProjectStatus") && !value["ProjectStatus"].IsNull())
    {
        if (!value["ProjectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectStatus = string(value["ProjectStatus"].GetString());
        m_projectStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectIntroduction") && !value["ProjectIntroduction"].IsNull())
    {
        if (!value["ProjectIntroduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectIntroduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIntroduction = string(value["ProjectIntroduction"].GetString());
        m_projectIntroductionHasBeenSet = true;
    }

    if (value.HasMember("ProjectOrgId") && !value["ProjectOrgId"].IsNull())
    {
        if (!value["ProjectOrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectOrgId = string(value["ProjectOrgId"].GetString());
        m_projectOrgIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_projectBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectBudget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectBudget, allocator);
    }

    if (m_projectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIntroductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIntroduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIntroduction.c_str(), allocator).Move(), allocator);
    }

    if (m_projectOrgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectOrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectOrgId.c_str(), allocator).Move(), allocator);
    }

}


string ProjectInfo::GetProjectId() const
{
    return m_projectId;
}

void ProjectInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectInfo::GetProjectName() const
{
    return m_projectName;
}

void ProjectInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ProjectInfo::GetProjectOrg() const
{
    return m_projectOrg;
}

void ProjectInfo::SetProjectOrg(const string& _projectOrg)
{
    m_projectOrg = _projectOrg;
    m_projectOrgHasBeenSet = true;
}

bool ProjectInfo::ProjectOrgHasBeenSet() const
{
    return m_projectOrgHasBeenSet;
}

double ProjectInfo::GetProjectBudget() const
{
    return m_projectBudget;
}

void ProjectInfo::SetProjectBudget(const double& _projectBudget)
{
    m_projectBudget = _projectBudget;
    m_projectBudgetHasBeenSet = true;
}

bool ProjectInfo::ProjectBudgetHasBeenSet() const
{
    return m_projectBudgetHasBeenSet;
}

string ProjectInfo::GetProjectStatus() const
{
    return m_projectStatus;
}

void ProjectInfo::SetProjectStatus(const string& _projectStatus)
{
    m_projectStatus = _projectStatus;
    m_projectStatusHasBeenSet = true;
}

bool ProjectInfo::ProjectStatusHasBeenSet() const
{
    return m_projectStatusHasBeenSet;
}

string ProjectInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProjectInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProjectInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProjectInfo::GetProjectIntroduction() const
{
    return m_projectIntroduction;
}

void ProjectInfo::SetProjectIntroduction(const string& _projectIntroduction)
{
    m_projectIntroduction = _projectIntroduction;
    m_projectIntroductionHasBeenSet = true;
}

bool ProjectInfo::ProjectIntroductionHasBeenSet() const
{
    return m_projectIntroductionHasBeenSet;
}

string ProjectInfo::GetProjectOrgId() const
{
    return m_projectOrgId;
}

void ProjectInfo::SetProjectOrgId(const string& _projectOrgId)
{
    m_projectOrgId = _projectOrgId;
    m_projectOrgIdHasBeenSet = true;
}

bool ProjectInfo::ProjectOrgIdHasBeenSet() const
{
    return m_projectOrgIdHasBeenSet;
}

