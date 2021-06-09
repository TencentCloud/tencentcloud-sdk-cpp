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

#include <tencentcloud/iotcloud/v20180614/model/CreateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

CreateTaskRequest::CreateTaskRequest() :
    m_taskTypeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameFilterHasBeenSet(false),
    m_scheduleTimeInSecondsHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_maxExecutionTimeInSecondsHasBeenSet(false)
{
}

string CreateTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceNameFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleTimeInSeconds, allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tasks.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxExecutionTimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxExecutionTimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxExecutionTimeInSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateTaskRequest::GetProductId() const
{
    return m_productId;
}

void CreateTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateTaskRequest::GetDeviceNameFilter() const
{
    return m_deviceNameFilter;
}

void CreateTaskRequest::SetDeviceNameFilter(const string& _deviceNameFilter)
{
    m_deviceNameFilter = _deviceNameFilter;
    m_deviceNameFilterHasBeenSet = true;
}

bool CreateTaskRequest::DeviceNameFilterHasBeenSet() const
{
    return m_deviceNameFilterHasBeenSet;
}

uint64_t CreateTaskRequest::GetScheduleTimeInSeconds() const
{
    return m_scheduleTimeInSeconds;
}

void CreateTaskRequest::SetScheduleTimeInSeconds(const uint64_t& _scheduleTimeInSeconds)
{
    m_scheduleTimeInSeconds = _scheduleTimeInSeconds;
    m_scheduleTimeInSecondsHasBeenSet = true;
}

bool CreateTaskRequest::ScheduleTimeInSecondsHasBeenSet() const
{
    return m_scheduleTimeInSecondsHasBeenSet;
}

Task CreateTaskRequest::GetTasks() const
{
    return m_tasks;
}

void CreateTaskRequest::SetTasks(const Task& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateTaskRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

uint64_t CreateTaskRequest::GetMaxExecutionTimeInSeconds() const
{
    return m_maxExecutionTimeInSeconds;
}

void CreateTaskRequest::SetMaxExecutionTimeInSeconds(const uint64_t& _maxExecutionTimeInSeconds)
{
    m_maxExecutionTimeInSeconds = _maxExecutionTimeInSeconds;
    m_maxExecutionTimeInSecondsHasBeenSet = true;
}

bool CreateTaskRequest::MaxExecutionTimeInSecondsHasBeenSet() const
{
    return m_maxExecutionTimeInSecondsHasBeenSet;
}


