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

#include <tencentcloud/cii/v20210408/model/ReviewDataTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

ReviewDataTaskInfo::ReviewDataTaskInfo() :
    m_mainTaskIdHasBeenSet(false),
    m_subTaskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome ReviewDataTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainTaskId") && !value["MainTaskId"].IsNull())
    {
        if (!value["MainTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewDataTaskInfo.MainTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainTaskId = string(value["MainTaskId"].GetString());
        m_mainTaskIdHasBeenSet = true;
    }

    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewDataTaskInfo.SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(value["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewDataTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewDataTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReviewDataTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

}


string ReviewDataTaskInfo::GetMainTaskId() const
{
    return m_mainTaskId;
}

void ReviewDataTaskInfo::SetMainTaskId(const string& _mainTaskId)
{
    m_mainTaskId = _mainTaskId;
    m_mainTaskIdHasBeenSet = true;
}

bool ReviewDataTaskInfo::MainTaskIdHasBeenSet() const
{
    return m_mainTaskIdHasBeenSet;
}

string ReviewDataTaskInfo::GetSubTaskId() const
{
    return m_subTaskId;
}

void ReviewDataTaskInfo::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool ReviewDataTaskInfo::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

string ReviewDataTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void ReviewDataTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ReviewDataTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ReviewDataTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void ReviewDataTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ReviewDataTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

