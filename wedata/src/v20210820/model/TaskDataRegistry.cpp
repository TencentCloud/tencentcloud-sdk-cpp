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

#include <tencentcloud/wedata/v20210820/model/TaskDataRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDataRegistry::TaskDataRegistry() :
    m_taskInfoHasBeenSet(false),
    m_taskDataRegistryInfoHasBeenSet(false)
{
}

CoreInternalOutcome TaskDataRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskInfo") && !value["TaskInfo"].IsNull())
    {
        if (!value["TaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.TaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInfo.Deserialize(value["TaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskDataRegistryInfo") && !value["TaskDataRegistryInfo"].IsNull())
    {
        if (!value["TaskDataRegistryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDataRegistry.TaskDataRegistryInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskDataRegistryInfo.Deserialize(value["TaskDataRegistryInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskDataRegistryInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDataRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskDataRegistryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDataRegistryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskDataRegistryInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


TaskDsDTO TaskDataRegistry::GetTaskInfo() const
{
    return m_taskInfo;
}

void TaskDataRegistry::SetTaskInfo(const TaskDsDTO& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool TaskDataRegistry::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

TaskDataRegistryDTO TaskDataRegistry::GetTaskDataRegistryInfo() const
{
    return m_taskDataRegistryInfo;
}

void TaskDataRegistry::SetTaskDataRegistryInfo(const TaskDataRegistryDTO& _taskDataRegistryInfo)
{
    m_taskDataRegistryInfo = _taskDataRegistryInfo;
    m_taskDataRegistryInfoHasBeenSet = true;
}

bool TaskDataRegistry::TaskDataRegistryInfoHasBeenSet() const
{
    return m_taskDataRegistryInfoHasBeenSet;
}

