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

#include <tencentcloud/organization/v20210331/model/TaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

TaskStatus::TaskStatus() :
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

CoreInternalOutcome TaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

}


string TaskStatus::GetStatus() const
{
    return m_status;
}

void TaskStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskStatus::GetTaskId() const
{
    return m_taskId;
}

void TaskStatus::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskStatus::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskStatus::GetTaskType() const
{
    return m_taskType;
}

void TaskStatus::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskStatus::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskStatus::GetFailureReason() const
{
    return m_failureReason;
}

void TaskStatus::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool TaskStatus::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

