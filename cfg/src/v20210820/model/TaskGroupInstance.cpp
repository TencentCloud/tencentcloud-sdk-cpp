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

#include <tencentcloud/cfg/v20210820/model/TaskGroupInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupInstance::TaskGroupInstance() :
    m_taskGroupInstanceIdHasBeenSet(false),
    m_taskGroupInstanceObjectIdHasBeenSet(false),
    m_taskGroupInstanceStatusHasBeenSet(false),
    m_taskGroupInstanceCreateTimeHasBeenSet(false),
    m_taskGroupInstanceUpdateTimeHasBeenSet(false),
    m_taskGroupInstanceStatusTypeHasBeenSet(false),
    m_taskGroupInstanceStartTimeHasBeenSet(false),
    m_taskGroupInstanceEndTimeHasBeenSet(false),
    m_taskGroupInstanceExecuteLogHasBeenSet(false),
    m_taskGroupInstanceIsRedoHasBeenSet(false),
    m_taskGroupInstanceExecuteTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupInstanceId") && !value["TaskGroupInstanceId"].IsNull())
    {
        if (!value["TaskGroupInstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceId = value["TaskGroupInstanceId"].GetInt64();
        m_taskGroupInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceObjectId") && !value["TaskGroupInstanceObjectId"].IsNull())
    {
        if (!value["TaskGroupInstanceObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceObjectId = string(value["TaskGroupInstanceObjectId"].GetString());
        m_taskGroupInstanceObjectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceStatus") && !value["TaskGroupInstanceStatus"].IsNull())
    {
        if (!value["TaskGroupInstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceStatus = value["TaskGroupInstanceStatus"].GetInt64();
        m_taskGroupInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceCreateTime") && !value["TaskGroupInstanceCreateTime"].IsNull())
    {
        if (!value["TaskGroupInstanceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceCreateTime = string(value["TaskGroupInstanceCreateTime"].GetString());
        m_taskGroupInstanceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceUpdateTime") && !value["TaskGroupInstanceUpdateTime"].IsNull())
    {
        if (!value["TaskGroupInstanceUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceUpdateTime = string(value["TaskGroupInstanceUpdateTime"].GetString());
        m_taskGroupInstanceUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceStatusType") && !value["TaskGroupInstanceStatusType"].IsNull())
    {
        if (!value["TaskGroupInstanceStatusType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceStatusType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceStatusType = value["TaskGroupInstanceStatusType"].GetInt64();
        m_taskGroupInstanceStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceStartTime") && !value["TaskGroupInstanceStartTime"].IsNull())
    {
        if (!value["TaskGroupInstanceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceStartTime = string(value["TaskGroupInstanceStartTime"].GetString());
        m_taskGroupInstanceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceEndTime") && !value["TaskGroupInstanceEndTime"].IsNull())
    {
        if (!value["TaskGroupInstanceEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceEndTime = string(value["TaskGroupInstanceEndTime"].GetString());
        m_taskGroupInstanceEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceExecuteLog") && !value["TaskGroupInstanceExecuteLog"].IsNull())
    {
        if (!value["TaskGroupInstanceExecuteLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceExecuteLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceExecuteLog = string(value["TaskGroupInstanceExecuteLog"].GetString());
        m_taskGroupInstanceExecuteLogHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceIsRedo") && !value["TaskGroupInstanceIsRedo"].IsNull())
    {
        if (!value["TaskGroupInstanceIsRedo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceIsRedo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceIsRedo = value["TaskGroupInstanceIsRedo"].GetBool();
        m_taskGroupInstanceIsRedoHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceExecuteTime") && !value["TaskGroupInstanceExecuteTime"].IsNull())
    {
        if (!value["TaskGroupInstanceExecuteTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstance.TaskGroupInstanceExecuteTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstanceExecuteTime = value["TaskGroupInstanceExecuteTime"].GetInt64();
        m_taskGroupInstanceExecuteTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstanceId, allocator);
    }

    if (m_taskGroupInstanceObjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceObjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstanceStatus, allocator);
    }

    if (m_taskGroupInstanceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstanceStatusType, allocator);
    }

    if (m_taskGroupInstanceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceExecuteLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceExecuteLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupInstanceExecuteLog.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupInstanceIsRedoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceIsRedo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstanceIsRedo, allocator);
    }

    if (m_taskGroupInstanceExecuteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstanceExecuteTime, allocator);
    }

}


int64_t TaskGroupInstance::GetTaskGroupInstanceId() const
{
    return m_taskGroupInstanceId;
}

void TaskGroupInstance::SetTaskGroupInstanceId(const int64_t& _taskGroupInstanceId)
{
    m_taskGroupInstanceId = _taskGroupInstanceId;
    m_taskGroupInstanceIdHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceIdHasBeenSet() const
{
    return m_taskGroupInstanceIdHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceObjectId() const
{
    return m_taskGroupInstanceObjectId;
}

void TaskGroupInstance::SetTaskGroupInstanceObjectId(const string& _taskGroupInstanceObjectId)
{
    m_taskGroupInstanceObjectId = _taskGroupInstanceObjectId;
    m_taskGroupInstanceObjectIdHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceObjectIdHasBeenSet() const
{
    return m_taskGroupInstanceObjectIdHasBeenSet;
}

int64_t TaskGroupInstance::GetTaskGroupInstanceStatus() const
{
    return m_taskGroupInstanceStatus;
}

void TaskGroupInstance::SetTaskGroupInstanceStatus(const int64_t& _taskGroupInstanceStatus)
{
    m_taskGroupInstanceStatus = _taskGroupInstanceStatus;
    m_taskGroupInstanceStatusHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceStatusHasBeenSet() const
{
    return m_taskGroupInstanceStatusHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceCreateTime() const
{
    return m_taskGroupInstanceCreateTime;
}

void TaskGroupInstance::SetTaskGroupInstanceCreateTime(const string& _taskGroupInstanceCreateTime)
{
    m_taskGroupInstanceCreateTime = _taskGroupInstanceCreateTime;
    m_taskGroupInstanceCreateTimeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceCreateTimeHasBeenSet() const
{
    return m_taskGroupInstanceCreateTimeHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceUpdateTime() const
{
    return m_taskGroupInstanceUpdateTime;
}

void TaskGroupInstance::SetTaskGroupInstanceUpdateTime(const string& _taskGroupInstanceUpdateTime)
{
    m_taskGroupInstanceUpdateTime = _taskGroupInstanceUpdateTime;
    m_taskGroupInstanceUpdateTimeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceUpdateTimeHasBeenSet() const
{
    return m_taskGroupInstanceUpdateTimeHasBeenSet;
}

int64_t TaskGroupInstance::GetTaskGroupInstanceStatusType() const
{
    return m_taskGroupInstanceStatusType;
}

void TaskGroupInstance::SetTaskGroupInstanceStatusType(const int64_t& _taskGroupInstanceStatusType)
{
    m_taskGroupInstanceStatusType = _taskGroupInstanceStatusType;
    m_taskGroupInstanceStatusTypeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceStatusTypeHasBeenSet() const
{
    return m_taskGroupInstanceStatusTypeHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceStartTime() const
{
    return m_taskGroupInstanceStartTime;
}

void TaskGroupInstance::SetTaskGroupInstanceStartTime(const string& _taskGroupInstanceStartTime)
{
    m_taskGroupInstanceStartTime = _taskGroupInstanceStartTime;
    m_taskGroupInstanceStartTimeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceStartTimeHasBeenSet() const
{
    return m_taskGroupInstanceStartTimeHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceEndTime() const
{
    return m_taskGroupInstanceEndTime;
}

void TaskGroupInstance::SetTaskGroupInstanceEndTime(const string& _taskGroupInstanceEndTime)
{
    m_taskGroupInstanceEndTime = _taskGroupInstanceEndTime;
    m_taskGroupInstanceEndTimeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceEndTimeHasBeenSet() const
{
    return m_taskGroupInstanceEndTimeHasBeenSet;
}

string TaskGroupInstance::GetTaskGroupInstanceExecuteLog() const
{
    return m_taskGroupInstanceExecuteLog;
}

void TaskGroupInstance::SetTaskGroupInstanceExecuteLog(const string& _taskGroupInstanceExecuteLog)
{
    m_taskGroupInstanceExecuteLog = _taskGroupInstanceExecuteLog;
    m_taskGroupInstanceExecuteLogHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceExecuteLogHasBeenSet() const
{
    return m_taskGroupInstanceExecuteLogHasBeenSet;
}

bool TaskGroupInstance::GetTaskGroupInstanceIsRedo() const
{
    return m_taskGroupInstanceIsRedo;
}

void TaskGroupInstance::SetTaskGroupInstanceIsRedo(const bool& _taskGroupInstanceIsRedo)
{
    m_taskGroupInstanceIsRedo = _taskGroupInstanceIsRedo;
    m_taskGroupInstanceIsRedoHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceIsRedoHasBeenSet() const
{
    return m_taskGroupInstanceIsRedoHasBeenSet;
}

int64_t TaskGroupInstance::GetTaskGroupInstanceExecuteTime() const
{
    return m_taskGroupInstanceExecuteTime;
}

void TaskGroupInstance::SetTaskGroupInstanceExecuteTime(const int64_t& _taskGroupInstanceExecuteTime)
{
    m_taskGroupInstanceExecuteTime = _taskGroupInstanceExecuteTime;
    m_taskGroupInstanceExecuteTimeHasBeenSet = true;
}

bool TaskGroupInstance::TaskGroupInstanceExecuteTimeHasBeenSet() const
{
    return m_taskGroupInstanceExecuteTimeHasBeenSet;
}

