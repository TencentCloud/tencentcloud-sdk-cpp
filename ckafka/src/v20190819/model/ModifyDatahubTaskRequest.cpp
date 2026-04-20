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

#include <tencentcloud/ckafka/v20190819/model/ModifyDatahubTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyDatahubTaskRequest::ModifyDatahubTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tasksMaxHasBeenSet(false),
    m_syncThrottleLimitHasBeenSet(false),
    m_autoExpandFlagHasBeenSet(false)
{
}

string ModifyDatahubTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksMax, allocator);
    }

    if (m_syncThrottleLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncThrottleLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncThrottleLimit, allocator);
    }

    if (m_autoExpandFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoExpandFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoExpandFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDatahubTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyDatahubTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyDatahubTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyDatahubTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyDatahubTaskRequest::GetDescription() const
{
    return m_description;
}

void ModifyDatahubTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyDatahubTaskRequest::GetTasksMax() const
{
    return m_tasksMax;
}

void ModifyDatahubTaskRequest::SetTasksMax(const int64_t& _tasksMax)
{
    m_tasksMax = _tasksMax;
    m_tasksMaxHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::TasksMaxHasBeenSet() const
{
    return m_tasksMaxHasBeenSet;
}

int64_t ModifyDatahubTaskRequest::GetSyncThrottleLimit() const
{
    return m_syncThrottleLimit;
}

void ModifyDatahubTaskRequest::SetSyncThrottleLimit(const int64_t& _syncThrottleLimit)
{
    m_syncThrottleLimit = _syncThrottleLimit;
    m_syncThrottleLimitHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::SyncThrottleLimitHasBeenSet() const
{
    return m_syncThrottleLimitHasBeenSet;
}

bool ModifyDatahubTaskRequest::GetAutoExpandFlag() const
{
    return m_autoExpandFlag;
}

void ModifyDatahubTaskRequest::SetAutoExpandFlag(const bool& _autoExpandFlag)
{
    m_autoExpandFlag = _autoExpandFlag;
    m_autoExpandFlagHasBeenSet = true;
}

bool ModifyDatahubTaskRequest::AutoExpandFlagHasBeenSet() const
{
    return m_autoExpandFlagHasBeenSet;
}


