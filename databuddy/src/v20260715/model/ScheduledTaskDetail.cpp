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

#include <tencentcloud/databuddy/v20260715/model/ScheduledTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ScheduledTaskDetail::ScheduledTaskDetail() :
    m_scheduledTaskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_analysisSpaceIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_mCPIdsHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledTaskId") && !value["ScheduledTaskId"].IsNull())
    {
        if (!value["ScheduledTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.ScheduledTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTaskId = string(value["ScheduledTaskId"].GetString());
        m_scheduledTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.Schedule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedule = string(value["Schedule"].GetString());
        m_scheduleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SessionType") && !value["SessionType"].IsNull())
    {
        if (!value["SessionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.SessionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionType = value["SessionType"].GetInt64();
        m_sessionTypeHasBeenSet = true;
    }

    if (value.HasMember("AnalysisSpaceId") && !value["AnalysisSpaceId"].IsNull())
    {
        if (!value["AnalysisSpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.AnalysisSpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisSpaceId = string(value["AnalysisSpaceId"].GetString());
        m_analysisSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SkillIds") && !value["SkillIds"].IsNull())
    {
        if (!value["SkillIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.SkillIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillIds = string(value["SkillIds"].GetString());
        m_skillIdsHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduleType") && !value["ScheduleType"].IsNull())
    {
        if (!value["ScheduleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.ScheduleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleType = value["ScheduleType"].GetInt64();
        m_scheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("MCPIds") && !value["MCPIds"].IsNull())
    {
        if (!value["MCPIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskDetail.MCPIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPIds = string(value["MCPIds"].GetString());
        m_mCPIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedule.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionType, allocator);
    }

    if (m_analysisSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillIds.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleType, allocator);
    }

    if (m_updateUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPIds.c_str(), allocator).Move(), allocator);
    }

}


string ScheduledTaskDetail::GetScheduledTaskId() const
{
    return m_scheduledTaskId;
}

void ScheduledTaskDetail::SetScheduledTaskId(const string& _scheduledTaskId)
{
    m_scheduledTaskId = _scheduledTaskId;
    m_scheduledTaskIdHasBeenSet = true;
}

bool ScheduledTaskDetail::ScheduledTaskIdHasBeenSet() const
{
    return m_scheduledTaskIdHasBeenSet;
}

string ScheduledTaskDetail::GetName() const
{
    return m_name;
}

void ScheduledTaskDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScheduledTaskDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ScheduledTaskDetail::GetPrompt() const
{
    return m_prompt;
}

void ScheduledTaskDetail::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool ScheduledTaskDetail::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string ScheduledTaskDetail::GetSchedule() const
{
    return m_schedule;
}

void ScheduledTaskDetail::SetSchedule(const string& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool ScheduledTaskDetail::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

int64_t ScheduledTaskDetail::GetStatus() const
{
    return m_status;
}

void ScheduledTaskDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScheduledTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ScheduledTaskDetail::GetSessionType() const
{
    return m_sessionType;
}

void ScheduledTaskDetail::SetSessionType(const int64_t& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool ScheduledTaskDetail::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

string ScheduledTaskDetail::GetAnalysisSpaceId() const
{
    return m_analysisSpaceId;
}

void ScheduledTaskDetail::SetAnalysisSpaceId(const string& _analysisSpaceId)
{
    m_analysisSpaceId = _analysisSpaceId;
    m_analysisSpaceIdHasBeenSet = true;
}

bool ScheduledTaskDetail::AnalysisSpaceIdHasBeenSet() const
{
    return m_analysisSpaceIdHasBeenSet;
}

string ScheduledTaskDetail::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ScheduledTaskDetail::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ScheduledTaskDetail::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ScheduledTaskDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ScheduledTaskDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ScheduledTaskDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string ScheduledTaskDetail::GetCreateTime() const
{
    return m_createTime;
}

void ScheduledTaskDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScheduledTaskDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScheduledTaskDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void ScheduledTaskDetail::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ScheduledTaskDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ScheduledTaskDetail::GetStartTime() const
{
    return m_startTime;
}

void ScheduledTaskDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScheduledTaskDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScheduledTaskDetail::GetEndTime() const
{
    return m_endTime;
}

void ScheduledTaskDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScheduledTaskDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ScheduledTaskDetail::GetSkillIds() const
{
    return m_skillIds;
}

void ScheduledTaskDetail::SetSkillIds(const string& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool ScheduledTaskDetail::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

string ScheduledTaskDetail::GetModelId() const
{
    return m_modelId;
}

void ScheduledTaskDetail::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ScheduledTaskDetail::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t ScheduledTaskDetail::GetScheduleType() const
{
    return m_scheduleType;
}

void ScheduledTaskDetail::SetScheduleType(const int64_t& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool ScheduledTaskDetail::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

string ScheduledTaskDetail::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void ScheduledTaskDetail::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool ScheduledTaskDetail::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string ScheduledTaskDetail::GetMCPIds() const
{
    return m_mCPIds;
}

void ScheduledTaskDetail::SetMCPIds(const string& _mCPIds)
{
    m_mCPIds = _mCPIds;
    m_mCPIdsHasBeenSet = true;
}

bool ScheduledTaskDetail::MCPIdsHasBeenSet() const
{
    return m_mCPIdsHasBeenSet;
}

