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

#include <tencentcloud/wedata/v20210820/model/DependencyWorkflowDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyWorkflowDTO::DependencyWorkflowDTO() :
    m_selectedWorkflowIdHasBeenSet(false),
    m_selectedWorkflowNameHasBeenSet(false),
    m_dependencyWorkflowIdHasBeenSet(false),
    m_dependencyWorkflowNameHasBeenSet(false),
    m_crossProjectHasBeenSet(false),
    m_dependencyProjectIdHasBeenSet(false),
    m_dependencyProjectNameHasBeenSet(false)
{
}

CoreInternalOutcome DependencyWorkflowDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectedWorkflowId") && !value["SelectedWorkflowId"].IsNull())
    {
        if (!value["SelectedWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.SelectedWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectedWorkflowId = string(value["SelectedWorkflowId"].GetString());
        m_selectedWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("SelectedWorkflowName") && !value["SelectedWorkflowName"].IsNull())
    {
        if (!value["SelectedWorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.SelectedWorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectedWorkflowName = string(value["SelectedWorkflowName"].GetString());
        m_selectedWorkflowNameHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflowId") && !value["DependencyWorkflowId"].IsNull())
    {
        if (!value["DependencyWorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.DependencyWorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflowId = string(value["DependencyWorkflowId"].GetString());
        m_dependencyWorkflowIdHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflowName") && !value["DependencyWorkflowName"].IsNull())
    {
        if (!value["DependencyWorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.DependencyWorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflowName = string(value["DependencyWorkflowName"].GetString());
        m_dependencyWorkflowNameHasBeenSet = true;
    }

    if (value.HasMember("CrossProject") && !value["CrossProject"].IsNull())
    {
        if (!value["CrossProject"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.CrossProject` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_crossProject = value["CrossProject"].GetBool();
        m_crossProjectHasBeenSet = true;
    }

    if (value.HasMember("DependencyProjectId") && !value["DependencyProjectId"].IsNull())
    {
        if (!value["DependencyProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.DependencyProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyProjectId = string(value["DependencyProjectId"].GetString());
        m_dependencyProjectIdHasBeenSet = true;
    }

    if (value.HasMember("DependencyProjectName") && !value["DependencyProjectName"].IsNull())
    {
        if (!value["DependencyProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyWorkflowDTO.DependencyProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyProjectName = string(value["DependencyProjectName"].GetString());
        m_dependencyProjectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyWorkflowDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selectedWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectedWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedWorkflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedWorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectedWorkflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_crossProjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossProject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crossProject, allocator);
    }

    if (m_dependencyProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyProjectName.c_str(), allocator).Move(), allocator);
    }

}


string DependencyWorkflowDTO::GetSelectedWorkflowId() const
{
    return m_selectedWorkflowId;
}

void DependencyWorkflowDTO::SetSelectedWorkflowId(const string& _selectedWorkflowId)
{
    m_selectedWorkflowId = _selectedWorkflowId;
    m_selectedWorkflowIdHasBeenSet = true;
}

bool DependencyWorkflowDTO::SelectedWorkflowIdHasBeenSet() const
{
    return m_selectedWorkflowIdHasBeenSet;
}

string DependencyWorkflowDTO::GetSelectedWorkflowName() const
{
    return m_selectedWorkflowName;
}

void DependencyWorkflowDTO::SetSelectedWorkflowName(const string& _selectedWorkflowName)
{
    m_selectedWorkflowName = _selectedWorkflowName;
    m_selectedWorkflowNameHasBeenSet = true;
}

bool DependencyWorkflowDTO::SelectedWorkflowNameHasBeenSet() const
{
    return m_selectedWorkflowNameHasBeenSet;
}

string DependencyWorkflowDTO::GetDependencyWorkflowId() const
{
    return m_dependencyWorkflowId;
}

void DependencyWorkflowDTO::SetDependencyWorkflowId(const string& _dependencyWorkflowId)
{
    m_dependencyWorkflowId = _dependencyWorkflowId;
    m_dependencyWorkflowIdHasBeenSet = true;
}

bool DependencyWorkflowDTO::DependencyWorkflowIdHasBeenSet() const
{
    return m_dependencyWorkflowIdHasBeenSet;
}

string DependencyWorkflowDTO::GetDependencyWorkflowName() const
{
    return m_dependencyWorkflowName;
}

void DependencyWorkflowDTO::SetDependencyWorkflowName(const string& _dependencyWorkflowName)
{
    m_dependencyWorkflowName = _dependencyWorkflowName;
    m_dependencyWorkflowNameHasBeenSet = true;
}

bool DependencyWorkflowDTO::DependencyWorkflowNameHasBeenSet() const
{
    return m_dependencyWorkflowNameHasBeenSet;
}

bool DependencyWorkflowDTO::GetCrossProject() const
{
    return m_crossProject;
}

void DependencyWorkflowDTO::SetCrossProject(const bool& _crossProject)
{
    m_crossProject = _crossProject;
    m_crossProjectHasBeenSet = true;
}

bool DependencyWorkflowDTO::CrossProjectHasBeenSet() const
{
    return m_crossProjectHasBeenSet;
}

string DependencyWorkflowDTO::GetDependencyProjectId() const
{
    return m_dependencyProjectId;
}

void DependencyWorkflowDTO::SetDependencyProjectId(const string& _dependencyProjectId)
{
    m_dependencyProjectId = _dependencyProjectId;
    m_dependencyProjectIdHasBeenSet = true;
}

bool DependencyWorkflowDTO::DependencyProjectIdHasBeenSet() const
{
    return m_dependencyProjectIdHasBeenSet;
}

string DependencyWorkflowDTO::GetDependencyProjectName() const
{
    return m_dependencyProjectName;
}

void DependencyWorkflowDTO::SetDependencyProjectName(const string& _dependencyProjectName)
{
    m_dependencyProjectName = _dependencyProjectName;
    m_dependencyProjectNameHasBeenSet = true;
}

bool DependencyWorkflowDTO::DependencyProjectNameHasBeenSet() const
{
    return m_dependencyProjectNameHasBeenSet;
}

