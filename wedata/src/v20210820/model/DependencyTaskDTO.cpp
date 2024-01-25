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

#include <tencentcloud/wedata/v20210820/model/DependencyTaskDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyTaskDTO::DependencyTaskDTO() :
    m_selectedTaskIdHasBeenSet(false),
    m_selectedTaskNameHasBeenSet(false),
    m_dependencyTaskIdHasBeenSet(false),
    m_dependencyTaskNameHasBeenSet(false),
    m_crossProjectHasBeenSet(false),
    m_dependencyProjectIdHasBeenSet(false),
    m_dependencyProjectNameHasBeenSet(false),
    m_dependencyTaskVirtualFlagHasBeenSet(false),
    m_linkDependencyHasBeenSet(false),
    m_selectedTaskVirtualFlagHasBeenSet(false),
    m_dependencyTaskWorkflowNameHasBeenSet(false)
{
}

CoreInternalOutcome DependencyTaskDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectedTaskId") && !value["SelectedTaskId"].IsNull())
    {
        if (!value["SelectedTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.SelectedTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectedTaskId = string(value["SelectedTaskId"].GetString());
        m_selectedTaskIdHasBeenSet = true;
    }

    if (value.HasMember("SelectedTaskName") && !value["SelectedTaskName"].IsNull())
    {
        if (!value["SelectedTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.SelectedTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selectedTaskName = string(value["SelectedTaskName"].GetString());
        m_selectedTaskNameHasBeenSet = true;
    }

    if (value.HasMember("DependencyTaskId") && !value["DependencyTaskId"].IsNull())
    {
        if (!value["DependencyTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyTaskId = string(value["DependencyTaskId"].GetString());
        m_dependencyTaskIdHasBeenSet = true;
    }

    if (value.HasMember("DependencyTaskName") && !value["DependencyTaskName"].IsNull())
    {
        if (!value["DependencyTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyTaskName = string(value["DependencyTaskName"].GetString());
        m_dependencyTaskNameHasBeenSet = true;
    }

    if (value.HasMember("CrossProject") && !value["CrossProject"].IsNull())
    {
        if (!value["CrossProject"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.CrossProject` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_crossProject = value["CrossProject"].GetBool();
        m_crossProjectHasBeenSet = true;
    }

    if (value.HasMember("DependencyProjectId") && !value["DependencyProjectId"].IsNull())
    {
        if (!value["DependencyProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyProjectId = string(value["DependencyProjectId"].GetString());
        m_dependencyProjectIdHasBeenSet = true;
    }

    if (value.HasMember("DependencyProjectName") && !value["DependencyProjectName"].IsNull())
    {
        if (!value["DependencyProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyProjectName = string(value["DependencyProjectName"].GetString());
        m_dependencyProjectNameHasBeenSet = true;
    }

    if (value.HasMember("DependencyTaskVirtualFlag") && !value["DependencyTaskVirtualFlag"].IsNull())
    {
        if (!value["DependencyTaskVirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyTaskVirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyTaskVirtualFlag = value["DependencyTaskVirtualFlag"].GetBool();
        m_dependencyTaskVirtualFlagHasBeenSet = true;
    }

    if (value.HasMember("LinkDependency") && !value["LinkDependency"].IsNull())
    {
        if (!value["LinkDependency"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.LinkDependency` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_linkDependency = value["LinkDependency"].GetBool();
        m_linkDependencyHasBeenSet = true;
    }

    if (value.HasMember("SelectedTaskVirtualFlag") && !value["SelectedTaskVirtualFlag"].IsNull())
    {
        if (!value["SelectedTaskVirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.SelectedTaskVirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selectedTaskVirtualFlag = value["SelectedTaskVirtualFlag"].GetBool();
        m_selectedTaskVirtualFlagHasBeenSet = true;
    }

    if (value.HasMember("DependencyTaskWorkflowName") && !value["DependencyTaskWorkflowName"].IsNull())
    {
        if (!value["DependencyTaskWorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyTaskDTO.DependencyTaskWorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyTaskWorkflowName = string(value["DependencyTaskWorkflowName"].GetString());
        m_dependencyTaskWorkflowNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyTaskDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selectedTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectedTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selectedTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyTaskName.c_str(), allocator).Move(), allocator);
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

    if (m_dependencyTaskVirtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyTaskVirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dependencyTaskVirtualFlag, allocator);
    }

    if (m_linkDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkDependency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linkDependency, allocator);
    }

    if (m_selectedTaskVirtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTaskVirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectedTaskVirtualFlag, allocator);
    }

    if (m_dependencyTaskWorkflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyTaskWorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyTaskWorkflowName.c_str(), allocator).Move(), allocator);
    }

}


string DependencyTaskDTO::GetSelectedTaskId() const
{
    return m_selectedTaskId;
}

void DependencyTaskDTO::SetSelectedTaskId(const string& _selectedTaskId)
{
    m_selectedTaskId = _selectedTaskId;
    m_selectedTaskIdHasBeenSet = true;
}

bool DependencyTaskDTO::SelectedTaskIdHasBeenSet() const
{
    return m_selectedTaskIdHasBeenSet;
}

string DependencyTaskDTO::GetSelectedTaskName() const
{
    return m_selectedTaskName;
}

void DependencyTaskDTO::SetSelectedTaskName(const string& _selectedTaskName)
{
    m_selectedTaskName = _selectedTaskName;
    m_selectedTaskNameHasBeenSet = true;
}

bool DependencyTaskDTO::SelectedTaskNameHasBeenSet() const
{
    return m_selectedTaskNameHasBeenSet;
}

string DependencyTaskDTO::GetDependencyTaskId() const
{
    return m_dependencyTaskId;
}

void DependencyTaskDTO::SetDependencyTaskId(const string& _dependencyTaskId)
{
    m_dependencyTaskId = _dependencyTaskId;
    m_dependencyTaskIdHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyTaskIdHasBeenSet() const
{
    return m_dependencyTaskIdHasBeenSet;
}

string DependencyTaskDTO::GetDependencyTaskName() const
{
    return m_dependencyTaskName;
}

void DependencyTaskDTO::SetDependencyTaskName(const string& _dependencyTaskName)
{
    m_dependencyTaskName = _dependencyTaskName;
    m_dependencyTaskNameHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyTaskNameHasBeenSet() const
{
    return m_dependencyTaskNameHasBeenSet;
}

bool DependencyTaskDTO::GetCrossProject() const
{
    return m_crossProject;
}

void DependencyTaskDTO::SetCrossProject(const bool& _crossProject)
{
    m_crossProject = _crossProject;
    m_crossProjectHasBeenSet = true;
}

bool DependencyTaskDTO::CrossProjectHasBeenSet() const
{
    return m_crossProjectHasBeenSet;
}

string DependencyTaskDTO::GetDependencyProjectId() const
{
    return m_dependencyProjectId;
}

void DependencyTaskDTO::SetDependencyProjectId(const string& _dependencyProjectId)
{
    m_dependencyProjectId = _dependencyProjectId;
    m_dependencyProjectIdHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyProjectIdHasBeenSet() const
{
    return m_dependencyProjectIdHasBeenSet;
}

string DependencyTaskDTO::GetDependencyProjectName() const
{
    return m_dependencyProjectName;
}

void DependencyTaskDTO::SetDependencyProjectName(const string& _dependencyProjectName)
{
    m_dependencyProjectName = _dependencyProjectName;
    m_dependencyProjectNameHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyProjectNameHasBeenSet() const
{
    return m_dependencyProjectNameHasBeenSet;
}

bool DependencyTaskDTO::GetDependencyTaskVirtualFlag() const
{
    return m_dependencyTaskVirtualFlag;
}

void DependencyTaskDTO::SetDependencyTaskVirtualFlag(const bool& _dependencyTaskVirtualFlag)
{
    m_dependencyTaskVirtualFlag = _dependencyTaskVirtualFlag;
    m_dependencyTaskVirtualFlagHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyTaskVirtualFlagHasBeenSet() const
{
    return m_dependencyTaskVirtualFlagHasBeenSet;
}

bool DependencyTaskDTO::GetLinkDependency() const
{
    return m_linkDependency;
}

void DependencyTaskDTO::SetLinkDependency(const bool& _linkDependency)
{
    m_linkDependency = _linkDependency;
    m_linkDependencyHasBeenSet = true;
}

bool DependencyTaskDTO::LinkDependencyHasBeenSet() const
{
    return m_linkDependencyHasBeenSet;
}

bool DependencyTaskDTO::GetSelectedTaskVirtualFlag() const
{
    return m_selectedTaskVirtualFlag;
}

void DependencyTaskDTO::SetSelectedTaskVirtualFlag(const bool& _selectedTaskVirtualFlag)
{
    m_selectedTaskVirtualFlag = _selectedTaskVirtualFlag;
    m_selectedTaskVirtualFlagHasBeenSet = true;
}

bool DependencyTaskDTO::SelectedTaskVirtualFlagHasBeenSet() const
{
    return m_selectedTaskVirtualFlagHasBeenSet;
}

string DependencyTaskDTO::GetDependencyTaskWorkflowName() const
{
    return m_dependencyTaskWorkflowName;
}

void DependencyTaskDTO::SetDependencyTaskWorkflowName(const string& _dependencyTaskWorkflowName)
{
    m_dependencyTaskWorkflowName = _dependencyTaskWorkflowName;
    m_dependencyTaskWorkflowNameHasBeenSet = true;
}

bool DependencyTaskDTO::DependencyTaskWorkflowNameHasBeenSet() const
{
    return m_dependencyTaskWorkflowNameHasBeenSet;
}

