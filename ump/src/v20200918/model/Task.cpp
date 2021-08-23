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

#include <tencentcloud/ump/v20200918/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

Task::Task() :
    m_taskIdHasBeenSet(false),
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_taskContentHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("GroupCode") && !value["GroupCode"].IsNull())
    {
        if (!value["GroupCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.GroupCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupCode = string(value["GroupCode"].GetString());
        m_groupCodeHasBeenSet = true;
    }

    if (value.HasMember("MallId") && !value["MallId"].IsNull())
    {
        if (!value["MallId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.MallId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mallId = value["MallId"].GetUint64();
        m_mallIdHasBeenSet = true;
    }

    if (value.HasMember("TaskContent") && !value["TaskContent"].IsNull())
    {
        if (!value["TaskContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskContent.Deserialize(value["TaskContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskContentHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mallId, allocator);
    }

    if (m_taskContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

}


uint64_t Task::GetTaskId() const
{
    return m_taskId;
}

void Task::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Task::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Task::GetGroupCode() const
{
    return m_groupCode;
}

void Task::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool Task::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t Task::GetMallId() const
{
    return m_mallId;
}

void Task::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool Task::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

TaskContent Task::GetTaskContent() const
{
    return m_taskContent;
}

void Task::SetTaskContent(const TaskContent& _taskContent)
{
    m_taskContent = _taskContent;
    m_taskContentHasBeenSet = true;
}

bool Task::TaskContentHasBeenSet() const
{
    return m_taskContentHasBeenSet;
}

int64_t Task::GetTaskType() const
{
    return m_taskType;
}

void Task::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool Task::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

