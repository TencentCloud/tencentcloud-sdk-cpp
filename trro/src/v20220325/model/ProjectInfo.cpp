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

#include <tencentcloud/trro/v20220325/model/ProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

ProjectInfo::ProjectInfo() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_policyModeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
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

    if (value.HasMember("ProjectDescription") && !value["ProjectDescription"].IsNull())
    {
        if (!value["ProjectDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDescription = string(value["ProjectDescription"].GetString());
        m_projectDescriptionHasBeenSet = true;
    }

    if (value.HasMember("PolicyMode") && !value["PolicyMode"].IsNull())
    {
        if (!value["PolicyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.PolicyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyMode = string(value["PolicyMode"].GetString());
        m_policyModeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
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

    if (m_projectDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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

string ProjectInfo::GetProjectDescription() const
{
    return m_projectDescription;
}

void ProjectInfo::SetProjectDescription(const string& _projectDescription)
{
    m_projectDescription = _projectDescription;
    m_projectDescriptionHasBeenSet = true;
}

bool ProjectInfo::ProjectDescriptionHasBeenSet() const
{
    return m_projectDescriptionHasBeenSet;
}

string ProjectInfo::GetPolicyMode() const
{
    return m_policyMode;
}

void ProjectInfo::SetPolicyMode(const string& _policyMode)
{
    m_policyMode = _policyMode;
    m_policyModeHasBeenSet = true;
}

bool ProjectInfo::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}

string ProjectInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void ProjectInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ProjectInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

