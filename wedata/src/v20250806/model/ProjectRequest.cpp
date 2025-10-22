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

#include <tencentcloud/wedata/v20250806/model/ProjectRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ProjectRequest::ProjectRequest() :
    m_projectNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_projectModelHasBeenSet(false)
{
}

CoreInternalOutcome ProjectRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectRequest.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectRequest.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectModel") && !value["ProjectModel"].IsNull())
    {
        if (!value["ProjectModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectRequest.ProjectModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectModel = string(value["ProjectModel"].GetString());
        m_projectModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectModel.c_str(), allocator).Move(), allocator);
    }

}


string ProjectRequest::GetProjectName() const
{
    return m_projectName;
}

void ProjectRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ProjectRequest::GetDisplayName() const
{
    return m_displayName;
}

void ProjectRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ProjectRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ProjectRequest::GetProjectModel() const
{
    return m_projectModel;
}

void ProjectRequest::SetProjectModel(const string& _projectModel)
{
    m_projectModel = _projectModel;
    m_projectModelHasBeenSet = true;
}

bool ProjectRequest::ProjectModelHasBeenSet() const
{
    return m_projectModelHasBeenSet;
}

