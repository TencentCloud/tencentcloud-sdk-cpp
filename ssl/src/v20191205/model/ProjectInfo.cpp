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

#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ProjectInfo::ProjectInfo() :
    m_projectNameHasBeenSet(false),
    m_projectCreatorUinHasBeenSet(false),
    m_projectCreateTimeHasBeenSet(false),
    m_projectResumeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome ProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectCreatorUin") && !value["ProjectCreatorUin"].IsNull())
    {
        if (!value["ProjectCreatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectCreatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectCreatorUin = value["ProjectCreatorUin"].GetUint64();
        m_projectCreatorUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectCreateTime") && !value["ProjectCreateTime"].IsNull())
    {
        if (!value["ProjectCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectCreateTime = string(value["ProjectCreateTime"].GetString());
        m_projectCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectResume") && !value["ProjectResume"].IsNull())
    {
        if (!value["ProjectResume"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectResume` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectResume = string(value["ProjectResume"].GetString());
        m_projectResumeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.OwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetUint64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectCreatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectCreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectCreatorUin, allocator);
    }

    if (m_projectCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectResumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectResume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectResume.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

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

uint64_t ProjectInfo::GetProjectCreatorUin() const
{
    return m_projectCreatorUin;
}

void ProjectInfo::SetProjectCreatorUin(const uint64_t& _projectCreatorUin)
{
    m_projectCreatorUin = _projectCreatorUin;
    m_projectCreatorUinHasBeenSet = true;
}

bool ProjectInfo::ProjectCreatorUinHasBeenSet() const
{
    return m_projectCreatorUinHasBeenSet;
}

string ProjectInfo::GetProjectCreateTime() const
{
    return m_projectCreateTime;
}

void ProjectInfo::SetProjectCreateTime(const string& _projectCreateTime)
{
    m_projectCreateTime = _projectCreateTime;
    m_projectCreateTimeHasBeenSet = true;
}

bool ProjectInfo::ProjectCreateTimeHasBeenSet() const
{
    return m_projectCreateTimeHasBeenSet;
}

string ProjectInfo::GetProjectResume() const
{
    return m_projectResume;
}

void ProjectInfo::SetProjectResume(const string& _projectResume)
{
    m_projectResume = _projectResume;
    m_projectResumeHasBeenSet = true;
}

bool ProjectInfo::ProjectResumeHasBeenSet() const
{
    return m_projectResumeHasBeenSet;
}

uint64_t ProjectInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ProjectInfo::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ProjectInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
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

