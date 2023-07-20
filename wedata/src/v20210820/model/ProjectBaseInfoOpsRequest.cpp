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

#include <tencentcloud/wedata/v20210820/model/ProjectBaseInfoOpsRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ProjectBaseInfoOpsRequest::ProjectBaseInfoOpsRequest() :
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_isAdminHasBeenSet(false)
{
}

CoreInternalOutcome ProjectBaseInfoOpsRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectBaseInfoOpsRequest.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectBaseInfoOpsRequest.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectBaseInfoOpsRequest.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("IsAdmin") && !value["IsAdmin"].IsNull())
    {
        if (!value["IsAdmin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectBaseInfoOpsRequest.IsAdmin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAdmin = value["IsAdmin"].GetBool();
        m_isAdminHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectBaseInfoOpsRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAdminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAdmin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAdmin, allocator);
    }

}


string ProjectBaseInfoOpsRequest::GetProjectId() const
{
    return m_projectId;
}

void ProjectBaseInfoOpsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectBaseInfoOpsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectBaseInfoOpsRequest::GetProjectIdent() const
{
    return m_projectIdent;
}

void ProjectBaseInfoOpsRequest::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool ProjectBaseInfoOpsRequest::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string ProjectBaseInfoOpsRequest::GetProjectName() const
{
    return m_projectName;
}

void ProjectBaseInfoOpsRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectBaseInfoOpsRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

bool ProjectBaseInfoOpsRequest::GetIsAdmin() const
{
    return m_isAdmin;
}

void ProjectBaseInfoOpsRequest::SetIsAdmin(const bool& _isAdmin)
{
    m_isAdmin = _isAdmin;
    m_isAdminHasBeenSet = true;
}

bool ProjectBaseInfoOpsRequest::IsAdminHasBeenSet() const
{
    return m_isAdminHasBeenSet;
}

