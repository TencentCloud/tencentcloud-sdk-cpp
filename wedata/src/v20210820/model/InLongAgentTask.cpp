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

#include <tencentcloud/wedata/v20210820/model/InLongAgentTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InLongAgentTask::InLongAgentTask() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

CoreInternalOutcome InLongAgentTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InLongAgentTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InLongAgentTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

}


string InLongAgentTask::GetTaskId() const
{
    return m_taskId;
}

void InLongAgentTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InLongAgentTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InLongAgentTask::GetTaskName() const
{
    return m_taskName;
}

void InLongAgentTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InLongAgentTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InLongAgentTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void InLongAgentTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InLongAgentTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

