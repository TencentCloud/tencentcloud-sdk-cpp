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

#include <tencentcloud/wedata/v20250806/model/RelateTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RelateTask::RelateTask() :
    m_taskTypeHasBeenSet(false),
    m_taskNumHasBeenSet(false),
    m_taskListHasBeenSet(false)
{
}

CoreInternalOutcome RelateTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskNum") && !value["TaskNum"].IsNull())
    {
        if (!value["TaskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RelateTask.TaskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNum = value["TaskNum"].GetInt64();
        m_taskNumHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RelateTask.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BriefTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelateTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNum, allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RelateTask::GetTaskType() const
{
    return m_taskType;
}

void RelateTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool RelateTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t RelateTask::GetTaskNum() const
{
    return m_taskNum;
}

void RelateTask::SetTaskNum(const int64_t& _taskNum)
{
    m_taskNum = _taskNum;
    m_taskNumHasBeenSet = true;
}

bool RelateTask::TaskNumHasBeenSet() const
{
    return m_taskNumHasBeenSet;
}

vector<BriefTask> RelateTask::GetTaskList() const
{
    return m_taskList;
}

void RelateTask::SetTaskList(const vector<BriefTask>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool RelateTask::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

