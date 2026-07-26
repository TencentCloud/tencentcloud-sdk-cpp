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

#include <tencentcloud/adp/v20260520/model/TimerProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerProfile::TimerProfile() :
    m_createSourceHasBeenSet(false),
    m_inputContextSnapshotHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_skillSnapshotHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_toolSnapshotHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

CoreInternalOutcome TimerProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateSource") && !value["CreateSource"].IsNull())
    {
        if (!value["CreateSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.CreateSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createSource = value["CreateSource"].GetInt64();
        m_createSourceHasBeenSet = true;
    }

    if (value.HasMember("InputContextSnapshot") && !value["InputContextSnapshot"].IsNull())
    {
        if (!value["InputContextSnapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.InputContextSnapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputContextSnapshot = string(value["InputContextSnapshot"].GetString());
        m_inputContextSnapshotHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("SkillSnapshot") && !value["SkillSnapshot"].IsNull())
    {
        if (!value["SkillSnapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.SkillSnapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillSnapshot = string(value["SkillSnapshot"].GetString());
        m_skillSnapshotHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ToolSnapshot") && !value["ToolSnapshot"].IsNull())
    {
        if (!value["ToolSnapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.ToolSnapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolSnapshot = string(value["ToolSnapshot"].GetString());
        m_toolSnapshotHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerProfile.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createSource, allocator);
    }

    if (m_inputContextSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputContextSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputContextSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_skillSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolSnapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t TimerProfile::GetCreateSource() const
{
    return m_createSource;
}

void TimerProfile::SetCreateSource(const int64_t& _createSource)
{
    m_createSource = _createSource;
    m_createSourceHasBeenSet = true;
}

bool TimerProfile::CreateSourceHasBeenSet() const
{
    return m_createSourceHasBeenSet;
}

string TimerProfile::GetInputContextSnapshot() const
{
    return m_inputContextSnapshot;
}

void TimerProfile::SetInputContextSnapshot(const string& _inputContextSnapshot)
{
    m_inputContextSnapshot = _inputContextSnapshot;
    m_inputContextSnapshotHasBeenSet = true;
}

bool TimerProfile::InputContextSnapshotHasBeenSet() const
{
    return m_inputContextSnapshotHasBeenSet;
}

string TimerProfile::GetModelId() const
{
    return m_modelId;
}

void TimerProfile::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool TimerProfile::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string TimerProfile::GetPrompt() const
{
    return m_prompt;
}

void TimerProfile::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool TimerProfile::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string TimerProfile::GetSkillSnapshot() const
{
    return m_skillSnapshot;
}

void TimerProfile::SetSkillSnapshot(const string& _skillSnapshot)
{
    m_skillSnapshot = _skillSnapshot;
    m_skillSnapshotHasBeenSet = true;
}

bool TimerProfile::SkillSnapshotHasBeenSet() const
{
    return m_skillSnapshotHasBeenSet;
}

string TimerProfile::GetTaskName() const
{
    return m_taskName;
}

void TimerProfile::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TimerProfile::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TimerProfile::GetToolSnapshot() const
{
    return m_toolSnapshot;
}

void TimerProfile::SetToolSnapshot(const string& _toolSnapshot)
{
    m_toolSnapshot = _toolSnapshot;
    m_toolSnapshotHasBeenSet = true;
}

bool TimerProfile::ToolSnapshotHasBeenSet() const
{
    return m_toolSnapshotHasBeenSet;
}

string TimerProfile::GetWorkspaceId() const
{
    return m_workspaceId;
}

void TimerProfile::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool TimerProfile::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

