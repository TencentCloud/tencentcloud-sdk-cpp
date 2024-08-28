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

#include <tencentcloud/wedata/v20210820/model/AiopsSimpleTaskDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AiopsSimpleTaskDto::AiopsSimpleTaskDto() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_configTypeHasBeenSet(false),
    m_timeDimensionHasBeenSet(false),
    m_instanceScopeHasBeenSet(false),
    m_exectuorPolicyHasBeenSet(false)
{
}

CoreInternalOutcome AiopsSimpleTaskDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.ConfigType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configType = string(value["ConfigType"].GetString());
        m_configTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeDimension") && !value["TimeDimension"].IsNull())
    {
        if (!value["TimeDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.TimeDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeDimension = string(value["TimeDimension"].GetString());
        m_timeDimensionHasBeenSet = true;
    }

    if (value.HasMember("InstanceScope") && !value["InstanceScope"].IsNull())
    {
        if (!value["InstanceScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.InstanceScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceScope = string(value["InstanceScope"].GetString());
        m_instanceScopeHasBeenSet = true;
    }

    if (value.HasMember("ExectuorPolicy") && !value["ExectuorPolicy"].IsNull())
    {
        if (!value["ExectuorPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiopsSimpleTaskDto.ExectuorPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exectuorPolicy = string(value["ExectuorPolicy"].GetString());
        m_exectuorPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiopsSimpleTaskDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceScope.c_str(), allocator).Move(), allocator);
    }

    if (m_exectuorPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExectuorPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exectuorPolicy.c_str(), allocator).Move(), allocator);
    }

}


string AiopsSimpleTaskDto::GetTaskId() const
{
    return m_taskId;
}

void AiopsSimpleTaskDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AiopsSimpleTaskDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AiopsSimpleTaskDto::GetTaskName() const
{
    return m_taskName;
}

void AiopsSimpleTaskDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AiopsSimpleTaskDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AiopsSimpleTaskDto::GetStatus() const
{
    return m_status;
}

void AiopsSimpleTaskDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiopsSimpleTaskDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AiopsSimpleTaskDto::GetCycleType() const
{
    return m_cycleType;
}

void AiopsSimpleTaskDto::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool AiopsSimpleTaskDto::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string AiopsSimpleTaskDto::GetCreator() const
{
    return m_creator;
}

void AiopsSimpleTaskDto::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AiopsSimpleTaskDto::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string AiopsSimpleTaskDto::GetWorkflowId() const
{
    return m_workflowId;
}

void AiopsSimpleTaskDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool AiopsSimpleTaskDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string AiopsSimpleTaskDto::GetWorkflowName() const
{
    return m_workflowName;
}

void AiopsSimpleTaskDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool AiopsSimpleTaskDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string AiopsSimpleTaskDto::GetProjectId() const
{
    return m_projectId;
}

void AiopsSimpleTaskDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AiopsSimpleTaskDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AiopsSimpleTaskDto::GetProjectIdent() const
{
    return m_projectIdent;
}

void AiopsSimpleTaskDto::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool AiopsSimpleTaskDto::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

string AiopsSimpleTaskDto::GetProjectName() const
{
    return m_projectName;
}

void AiopsSimpleTaskDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AiopsSimpleTaskDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string AiopsSimpleTaskDto::GetConfigType() const
{
    return m_configType;
}

void AiopsSimpleTaskDto::SetConfigType(const string& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool AiopsSimpleTaskDto::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

string AiopsSimpleTaskDto::GetTimeDimension() const
{
    return m_timeDimension;
}

void AiopsSimpleTaskDto::SetTimeDimension(const string& _timeDimension)
{
    m_timeDimension = _timeDimension;
    m_timeDimensionHasBeenSet = true;
}

bool AiopsSimpleTaskDto::TimeDimensionHasBeenSet() const
{
    return m_timeDimensionHasBeenSet;
}

string AiopsSimpleTaskDto::GetInstanceScope() const
{
    return m_instanceScope;
}

void AiopsSimpleTaskDto::SetInstanceScope(const string& _instanceScope)
{
    m_instanceScope = _instanceScope;
    m_instanceScopeHasBeenSet = true;
}

bool AiopsSimpleTaskDto::InstanceScopeHasBeenSet() const
{
    return m_instanceScopeHasBeenSet;
}

string AiopsSimpleTaskDto::GetExectuorPolicy() const
{
    return m_exectuorPolicy;
}

void AiopsSimpleTaskDto::SetExectuorPolicy(const string& _exectuorPolicy)
{
    m_exectuorPolicy = _exectuorPolicy;
    m_exectuorPolicyHasBeenSet = true;
}

bool AiopsSimpleTaskDto::ExectuorPolicyHasBeenSet() const
{
    return m_exectuorPolicyHasBeenSet;
}

