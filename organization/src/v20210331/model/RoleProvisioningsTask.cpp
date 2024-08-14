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

#include <tencentcloud/organization/v20210331/model/RoleProvisioningsTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RoleProvisioningsTask::RoleProvisioningsTask() :
    m_taskIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_roleConfigurationNameHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome RoleProvisioningsTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationId") && !value["RoleConfigurationId"].IsNull())
    {
        if (!value["RoleConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.RoleConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationId = string(value["RoleConfigurationId"].GetString());
        m_roleConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationName") && !value["RoleConfigurationName"].IsNull())
    {
        if (!value["RoleConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.RoleConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationName = string(value["RoleConfigurationName"].GetString());
        m_roleConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleProvisioningsTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleProvisioningsTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

}


string RoleProvisioningsTask::GetTaskId() const
{
    return m_taskId;
}

void RoleProvisioningsTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RoleProvisioningsTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RoleProvisioningsTask::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void RoleProvisioningsTask::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool RoleProvisioningsTask::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string RoleProvisioningsTask::GetRoleConfigurationName() const
{
    return m_roleConfigurationName;
}

void RoleProvisioningsTask::SetRoleConfigurationName(const string& _roleConfigurationName)
{
    m_roleConfigurationName = _roleConfigurationName;
    m_roleConfigurationNameHasBeenSet = true;
}

bool RoleProvisioningsTask::RoleConfigurationNameHasBeenSet() const
{
    return m_roleConfigurationNameHasBeenSet;
}

int64_t RoleProvisioningsTask::GetTargetUin() const
{
    return m_targetUin;
}

void RoleProvisioningsTask::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool RoleProvisioningsTask::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string RoleProvisioningsTask::GetTargetType() const
{
    return m_targetType;
}

void RoleProvisioningsTask::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RoleProvisioningsTask::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RoleProvisioningsTask::GetTaskType() const
{
    return m_taskType;
}

void RoleProvisioningsTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool RoleProvisioningsTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string RoleProvisioningsTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void RoleProvisioningsTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool RoleProvisioningsTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

