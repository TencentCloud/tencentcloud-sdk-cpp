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

#include <tencentcloud/tcr/v20190924/model/TaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TaskDetail::TaskDetail() :
    m_taskNameHasBeenSet(false),
    m_taskUUIDHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskMessageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_finishedTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskUUID") && !value["TaskUUID"].IsNull())
    {
        if (!value["TaskUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.TaskUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskUUID = string(value["TaskUUID"].GetString());
        m_taskUUIDHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskMessage") && !value["TaskMessage"].IsNull())
    {
        if (!value["TaskMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.TaskMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMessage = string(value["TaskMessage"].GetString());
        m_taskMessageHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishedTime") && !value["FinishedTime"].IsNull())
    {
        if (!value["FinishedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDetail.FinishedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedTime = string(value["FinishedTime"].GetString());
        m_finishedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskUUID.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskDetail::GetTaskName() const
{
    return m_taskName;
}

void TaskDetail::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskDetail::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskDetail::GetTaskUUID() const
{
    return m_taskUUID;
}

void TaskDetail::SetTaskUUID(const string& _taskUUID)
{
    m_taskUUID = _taskUUID;
    m_taskUUIDHasBeenSet = true;
}

bool TaskDetail::TaskUUIDHasBeenSet() const
{
    return m_taskUUIDHasBeenSet;
}

string TaskDetail::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskDetail::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskDetail::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string TaskDetail::GetTaskMessage() const
{
    return m_taskMessage;
}

void TaskDetail::SetTaskMessage(const string& _taskMessage)
{
    m_taskMessage = _taskMessage;
    m_taskMessageHasBeenSet = true;
}

bool TaskDetail::TaskMessageHasBeenSet() const
{
    return m_taskMessageHasBeenSet;
}

string TaskDetail::GetCreatedTime() const
{
    return m_createdTime;
}

void TaskDetail::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TaskDetail::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string TaskDetail::GetFinishedTime() const
{
    return m_finishedTime;
}

void TaskDetail::SetFinishedTime(const string& _finishedTime)
{
    m_finishedTime = _finishedTime;
    m_finishedTimeHasBeenSet = true;
}

bool TaskDetail::FinishedTimeHasBeenSet() const
{
    return m_finishedTimeHasBeenSet;
}

