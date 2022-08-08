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

#include <tencentcloud/tag/v20180813/model/Project.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

Project::Project() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_projectInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Project::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetUint64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectInfo") && !value["ProjectInfo"].IsNull())
    {
        if (!value["ProjectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectInfo = string(value["ProjectInfo"].GetString());
        m_projectInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Project::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_projectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Project::GetProjectId() const
{
    return m_projectId;
}

void Project::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Project::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Project::GetProjectName() const
{
    return m_projectName;
}

void Project::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Project::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

uint64_t Project::GetCreatorUin() const
{
    return m_creatorUin;
}

void Project::SetCreatorUin(const uint64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool Project::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string Project::GetProjectInfo() const
{
    return m_projectInfo;
}

void Project::SetProjectInfo(const string& _projectInfo)
{
    m_projectInfo = _projectInfo;
    m_projectInfoHasBeenSet = true;
}

bool Project::ProjectInfoHasBeenSet() const
{
    return m_projectInfoHasBeenSet;
}

string Project::GetCreateTime() const
{
    return m_createTime;
}

void Project::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Project::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

