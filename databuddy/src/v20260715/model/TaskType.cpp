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

#include <tencentcloud/databuddy/v20260715/model/TaskType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TaskType::TaskType() :
    m_taskTypeNameHasBeenSet(false),
    m_notebookHasBeenSet(false),
    m_taskTypePropertyListHasBeenSet(false),
    m_runtimePropertyListHasBeenSet(false)
{
}

CoreInternalOutcome TaskType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Notebook") && !value["Notebook"].IsNull())
    {
        if (!value["Notebook"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskType.Notebook` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notebook.Deserialize(value["Notebook"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notebookHasBeenSet = true;
    }

    if (value.HasMember("TaskTypePropertyList") && !value["TaskTypePropertyList"].IsNull())
    {
        if (!value["TaskTypePropertyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskType.TaskTypePropertyList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypePropertyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTypeProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskTypePropertyList.push_back(item);
        }
        m_taskTypePropertyListHasBeenSet = true;
    }

    if (value.HasMember("RuntimePropertyList") && !value["RuntimePropertyList"].IsNull())
    {
        if (!value["RuntimePropertyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskType.RuntimePropertyList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuntimePropertyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTypeProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runtimePropertyList.push_back(item);
        }
        m_runtimePropertyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notebook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notebook.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskTypePropertyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypePropertyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskTypePropertyList.begin(); itr != m_taskTypePropertyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runtimePropertyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimePropertyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runtimePropertyList.begin(); itr != m_runtimePropertyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TaskType::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void TaskType::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool TaskType::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

TaskTypeNotebookExt TaskType::GetNotebook() const
{
    return m_notebook;
}

void TaskType::SetNotebook(const TaskTypeNotebookExt& _notebook)
{
    m_notebook = _notebook;
    m_notebookHasBeenSet = true;
}

bool TaskType::NotebookHasBeenSet() const
{
    return m_notebookHasBeenSet;
}

vector<TaskTypeProperty> TaskType::GetTaskTypePropertyList() const
{
    return m_taskTypePropertyList;
}

void TaskType::SetTaskTypePropertyList(const vector<TaskTypeProperty>& _taskTypePropertyList)
{
    m_taskTypePropertyList = _taskTypePropertyList;
    m_taskTypePropertyListHasBeenSet = true;
}

bool TaskType::TaskTypePropertyListHasBeenSet() const
{
    return m_taskTypePropertyListHasBeenSet;
}

vector<TaskTypeProperty> TaskType::GetRuntimePropertyList() const
{
    return m_runtimePropertyList;
}

void TaskType::SetRuntimePropertyList(const vector<TaskTypeProperty>& _runtimePropertyList)
{
    m_runtimePropertyList = _runtimePropertyList;
    m_runtimePropertyListHasBeenSet = true;
}

bool TaskType::RuntimePropertyListHasBeenSet() const
{
    return m_runtimePropertyListHasBeenSet;
}

