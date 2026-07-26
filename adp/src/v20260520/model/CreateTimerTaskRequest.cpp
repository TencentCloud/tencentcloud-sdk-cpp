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

#include <tencentcloud/adp/v20260520/model/CreateTimerTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateTimerTaskRequest::CreateTimerTaskRequest() :
    m_createSourceHasBeenSet(false),
    m_inputContextSnapshotHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_pushConfigHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_skillSnapshotHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_toolSnapshotHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false)
{
}

string CreateTimerTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_createSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createSource, allocator);
    }

    if (m_inputContextSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputContextSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputContextSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_pushConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pushConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skillSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolSnapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateTimerTaskRequest::GetCreateSource() const
{
    return m_createSource;
}

void CreateTimerTaskRequest::SetCreateSource(const int64_t& _createSource)
{
    m_createSource = _createSource;
    m_createSourceHasBeenSet = true;
}

bool CreateTimerTaskRequest::CreateSourceHasBeenSet() const
{
    return m_createSourceHasBeenSet;
}

string CreateTimerTaskRequest::GetInputContextSnapshot() const
{
    return m_inputContextSnapshot;
}

void CreateTimerTaskRequest::SetInputContextSnapshot(const string& _inputContextSnapshot)
{
    m_inputContextSnapshot = _inputContextSnapshot;
    m_inputContextSnapshotHasBeenSet = true;
}

bool CreateTimerTaskRequest::InputContextSnapshotHasBeenSet() const
{
    return m_inputContextSnapshotHasBeenSet;
}

string CreateTimerTaskRequest::GetModelId() const
{
    return m_modelId;
}

void CreateTimerTaskRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool CreateTimerTaskRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string CreateTimerTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateTimerTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateTimerTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

TimerPushConfig CreateTimerTaskRequest::GetPushConfig() const
{
    return m_pushConfig;
}

void CreateTimerTaskRequest::SetPushConfig(const TimerPushConfig& _pushConfig)
{
    m_pushConfig = _pushConfig;
    m_pushConfigHasBeenSet = true;
}

bool CreateTimerTaskRequest::PushConfigHasBeenSet() const
{
    return m_pushConfigHasBeenSet;
}

TimerScheduleConfig CreateTimerTaskRequest::GetSchedule() const
{
    return m_schedule;
}

void CreateTimerTaskRequest::SetSchedule(const TimerScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool CreateTimerTaskRequest::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

string CreateTimerTaskRequest::GetSkillSnapshot() const
{
    return m_skillSnapshot;
}

void CreateTimerTaskRequest::SetSkillSnapshot(const string& _skillSnapshot)
{
    m_skillSnapshot = _skillSnapshot;
    m_skillSnapshotHasBeenSet = true;
}

bool CreateTimerTaskRequest::SkillSnapshotHasBeenSet() const
{
    return m_skillSnapshotHasBeenSet;
}

string CreateTimerTaskRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateTimerTaskRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateTimerTaskRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreateTimerTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTimerTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTimerTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTimerTaskRequest::GetToolSnapshot() const
{
    return m_toolSnapshot;
}

void CreateTimerTaskRequest::SetToolSnapshot(const string& _toolSnapshot)
{
    m_toolSnapshot = _toolSnapshot;
    m_toolSnapshotHasBeenSet = true;
}

bool CreateTimerTaskRequest::ToolSnapshotHasBeenSet() const
{
    return m_toolSnapshotHasBeenSet;
}

string CreateTimerTaskRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateTimerTaskRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateTimerTaskRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateTimerTaskRequest::GetLoginUin() const
{
    return m_loginUin;
}

void CreateTimerTaskRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool CreateTimerTaskRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string CreateTimerTaskRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void CreateTimerTaskRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool CreateTimerTaskRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}


