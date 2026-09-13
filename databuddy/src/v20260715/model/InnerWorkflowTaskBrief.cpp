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

#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

InnerWorkflowTaskBrief::InnerWorkflowTaskBrief() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome InnerWorkflowTaskBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskBrief.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerWorkflowTaskBrief.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InnerWorkflowTaskBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
    }

}


string InnerWorkflowTaskBrief::GetTaskId() const
{
    return m_taskId;
}

void InnerWorkflowTaskBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InnerWorkflowTaskBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InnerWorkflowTaskBrief::GetTaskName() const
{
    return m_taskName;
}

void InnerWorkflowTaskBrief::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InnerWorkflowTaskBrief::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InnerWorkflowTaskBrief::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void InnerWorkflowTaskBrief::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool InnerWorkflowTaskBrief::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

