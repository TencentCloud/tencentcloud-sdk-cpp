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

#include <tencentcloud/organization/v20210331/model/UserProvisioningsTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UserProvisioningsTask::UserProvisioningsTask() :
    m_taskIdHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_userProvisioningIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_duplicationStrategyHasBeenSet(false),
    m_deletionStrategyHasBeenSet(false)
{
}

CoreInternalOutcome UserProvisioningsTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.TargetUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = value["TargetUin"].GetInt64();
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("UserProvisioningId") && !value["UserProvisioningId"].IsNull())
    {
        if (!value["UserProvisioningId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.UserProvisioningId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userProvisioningId = string(value["UserProvisioningId"].GetString());
        m_userProvisioningIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalType") && !value["PrincipalType"].IsNull())
    {
        if (!value["PrincipalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.PrincipalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalType = string(value["PrincipalType"].GetString());
        m_principalTypeHasBeenSet = true;
    }

    if (value.HasMember("PrincipalName") && !value["PrincipalName"].IsNull())
    {
        if (!value["PrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.PrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalName = string(value["PrincipalName"].GetString());
        m_principalNameHasBeenSet = true;
    }

    if (value.HasMember("DuplicationStrategy") && !value["DuplicationStrategy"].IsNull())
    {
        if (!value["DuplicationStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.DuplicationStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duplicationStrategy = string(value["DuplicationStrategy"].GetString());
        m_duplicationStrategyHasBeenSet = true;
    }

    if (value.HasMember("DeletionStrategy") && !value["DeletionStrategy"].IsNull())
    {
        if (!value["DeletionStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserProvisioningsTask.DeletionStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletionStrategy = string(value["DeletionStrategy"].GetString());
        m_deletionStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserProvisioningsTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
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

    if (m_userProvisioningIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProvisioningId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userProvisioningId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalType.c_str(), allocator).Move(), allocator);
    }

    if (m_principalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalName.c_str(), allocator).Move(), allocator);
    }

    if (m_duplicationStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DuplicationStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duplicationStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletionStrategy.c_str(), allocator).Move(), allocator);
    }

}


string UserProvisioningsTask::GetTaskId() const
{
    return m_taskId;
}

void UserProvisioningsTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UserProvisioningsTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t UserProvisioningsTask::GetTargetUin() const
{
    return m_targetUin;
}

void UserProvisioningsTask::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool UserProvisioningsTask::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string UserProvisioningsTask::GetTargetType() const
{
    return m_targetType;
}

void UserProvisioningsTask::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool UserProvisioningsTask::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string UserProvisioningsTask::GetTaskType() const
{
    return m_taskType;
}

void UserProvisioningsTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool UserProvisioningsTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string UserProvisioningsTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void UserProvisioningsTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool UserProvisioningsTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string UserProvisioningsTask::GetUserProvisioningId() const
{
    return m_userProvisioningId;
}

void UserProvisioningsTask::SetUserProvisioningId(const string& _userProvisioningId)
{
    m_userProvisioningId = _userProvisioningId;
    m_userProvisioningIdHasBeenSet = true;
}

bool UserProvisioningsTask::UserProvisioningIdHasBeenSet() const
{
    return m_userProvisioningIdHasBeenSet;
}

string UserProvisioningsTask::GetPrincipalId() const
{
    return m_principalId;
}

void UserProvisioningsTask::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool UserProvisioningsTask::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string UserProvisioningsTask::GetPrincipalType() const
{
    return m_principalType;
}

void UserProvisioningsTask::SetPrincipalType(const string& _principalType)
{
    m_principalType = _principalType;
    m_principalTypeHasBeenSet = true;
}

bool UserProvisioningsTask::PrincipalTypeHasBeenSet() const
{
    return m_principalTypeHasBeenSet;
}

string UserProvisioningsTask::GetPrincipalName() const
{
    return m_principalName;
}

void UserProvisioningsTask::SetPrincipalName(const string& _principalName)
{
    m_principalName = _principalName;
    m_principalNameHasBeenSet = true;
}

bool UserProvisioningsTask::PrincipalNameHasBeenSet() const
{
    return m_principalNameHasBeenSet;
}

string UserProvisioningsTask::GetDuplicationStrategy() const
{
    return m_duplicationStrategy;
}

void UserProvisioningsTask::SetDuplicationStrategy(const string& _duplicationStrategy)
{
    m_duplicationStrategy = _duplicationStrategy;
    m_duplicationStrategyHasBeenSet = true;
}

bool UserProvisioningsTask::DuplicationStrategyHasBeenSet() const
{
    return m_duplicationStrategyHasBeenSet;
}

string UserProvisioningsTask::GetDeletionStrategy() const
{
    return m_deletionStrategy;
}

void UserProvisioningsTask::SetDeletionStrategy(const string& _deletionStrategy)
{
    m_deletionStrategy = _deletionStrategy;
    m_deletionStrategyHasBeenSet = true;
}

bool UserProvisioningsTask::DeletionStrategyHasBeenSet() const
{
    return m_deletionStrategyHasBeenSet;
}

