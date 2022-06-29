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

#include <tencentcloud/cfg/v20210820/model/TaskListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskListItem::TaskListItem() :
    m_taskIdHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskTagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTitle") && !value["TaskTitle"].IsNull())
    {
        if (!value["TaskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTitle = string(value["TaskTitle"].GetString());
        m_taskTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskTag") && !value["TaskTag"].IsNull())
    {
        if (!value["TaskTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTag = string(value["TaskTag"].GetString());
        m_taskTagHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskUpdateTime") && !value["TaskUpdateTime"].IsNull())
    {
        if (!value["TaskUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskListItem.TaskUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskUpdateTime = string(value["TaskUpdateTime"].GetString());
        m_taskUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTag.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskListItem::GetTaskId() const
{
    return m_taskId;
}

void TaskListItem::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskListItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskListItem::GetTaskTitle() const
{
    return m_taskTitle;
}

void TaskListItem::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool TaskListItem::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string TaskListItem::GetTaskDescription() const
{
    return m_taskDescription;
}

void TaskListItem::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool TaskListItem::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string TaskListItem::GetTaskTag() const
{
    return m_taskTag;
}

void TaskListItem::SetTaskTag(const string& _taskTag)
{
    m_taskTag = _taskTag;
    m_taskTagHasBeenSet = true;
}

bool TaskListItem::TaskTagHasBeenSet() const
{
    return m_taskTagHasBeenSet;
}

int64_t TaskListItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void TaskListItem::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool TaskListItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string TaskListItem::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void TaskListItem::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool TaskListItem::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string TaskListItem::GetTaskUpdateTime() const
{
    return m_taskUpdateTime;
}

void TaskListItem::SetTaskUpdateTime(const string& _taskUpdateTime)
{
    m_taskUpdateTime = _taskUpdateTime;
    m_taskUpdateTimeHasBeenSet = true;
}

bool TaskListItem::TaskUpdateTimeHasBeenSet() const
{
    return m_taskUpdateTimeHasBeenSet;
}

