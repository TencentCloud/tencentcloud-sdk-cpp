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

#include <tencentcloud/dlc/v20210125/model/TasksOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TasksOverview::TasksOverview() :
    m_taskQueuedCountHasBeenSet(false),
    m_taskInitCountHasBeenSet(false),
    m_taskRunningCountHasBeenSet(false),
    m_totalTaskCountHasBeenSet(false)
{
}

CoreInternalOutcome TasksOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskQueuedCount") && !value["TaskQueuedCount"].IsNull())
    {
        if (!value["TaskQueuedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TasksOverview.TaskQueuedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskQueuedCount = value["TaskQueuedCount"].GetInt64();
        m_taskQueuedCountHasBeenSet = true;
    }

    if (value.HasMember("TaskInitCount") && !value["TaskInitCount"].IsNull())
    {
        if (!value["TaskInitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TasksOverview.TaskInitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInitCount = value["TaskInitCount"].GetInt64();
        m_taskInitCountHasBeenSet = true;
    }

    if (value.HasMember("TaskRunningCount") && !value["TaskRunningCount"].IsNull())
    {
        if (!value["TaskRunningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TasksOverview.TaskRunningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunningCount = value["TaskRunningCount"].GetInt64();
        m_taskRunningCountHasBeenSet = true;
    }

    if (value.HasMember("TotalTaskCount") && !value["TotalTaskCount"].IsNull())
    {
        if (!value["TotalTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TasksOverview.TotalTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTaskCount = value["TotalTaskCount"].GetInt64();
        m_totalTaskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TasksOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskQueuedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskQueuedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskQueuedCount, allocator);
    }

    if (m_taskInitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInitCount, allocator);
    }

    if (m_taskRunningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRunningCount, allocator);
    }

    if (m_totalTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTaskCount, allocator);
    }

}


int64_t TasksOverview::GetTaskQueuedCount() const
{
    return m_taskQueuedCount;
}

void TasksOverview::SetTaskQueuedCount(const int64_t& _taskQueuedCount)
{
    m_taskQueuedCount = _taskQueuedCount;
    m_taskQueuedCountHasBeenSet = true;
}

bool TasksOverview::TaskQueuedCountHasBeenSet() const
{
    return m_taskQueuedCountHasBeenSet;
}

int64_t TasksOverview::GetTaskInitCount() const
{
    return m_taskInitCount;
}

void TasksOverview::SetTaskInitCount(const int64_t& _taskInitCount)
{
    m_taskInitCount = _taskInitCount;
    m_taskInitCountHasBeenSet = true;
}

bool TasksOverview::TaskInitCountHasBeenSet() const
{
    return m_taskInitCountHasBeenSet;
}

int64_t TasksOverview::GetTaskRunningCount() const
{
    return m_taskRunningCount;
}

void TasksOverview::SetTaskRunningCount(const int64_t& _taskRunningCount)
{
    m_taskRunningCount = _taskRunningCount;
    m_taskRunningCountHasBeenSet = true;
}

bool TasksOverview::TaskRunningCountHasBeenSet() const
{
    return m_taskRunningCountHasBeenSet;
}

int64_t TasksOverview::GetTotalTaskCount() const
{
    return m_totalTaskCount;
}

void TasksOverview::SetTotalTaskCount(const int64_t& _totalTaskCount)
{
    m_totalTaskCount = _totalTaskCount;
    m_totalTaskCountHasBeenSet = true;
}

bool TasksOverview::TotalTaskCountHasBeenSet() const
{
    return m_totalTaskCountHasBeenSet;
}

