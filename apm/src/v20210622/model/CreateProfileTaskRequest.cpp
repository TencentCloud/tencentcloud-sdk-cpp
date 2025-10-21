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

#include <tencentcloud/apm/v20210622/model/CreateProfileTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

CreateProfileTaskRequest::CreateProfileTaskRequest() :
    m_serviceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_serviceInstanceHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_allTimesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskIntervalHasBeenSet(false)
{
}

string CreateProfileTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_allTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allTimes, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_taskIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskInterval, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProfileTaskRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateProfileTaskRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateProfileTaskRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateProfileTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateProfileTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateProfileTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateProfileTaskRequest::GetServiceInstance() const
{
    return m_serviceInstance;
}

void CreateProfileTaskRequest::SetServiceInstance(const string& _serviceInstance)
{
    m_serviceInstance = _serviceInstance;
    m_serviceInstanceHasBeenSet = true;
}

bool CreateProfileTaskRequest::ServiceInstanceHasBeenSet() const
{
    return m_serviceInstanceHasBeenSet;
}

string CreateProfileTaskRequest::GetEvent() const
{
    return m_event;
}

void CreateProfileTaskRequest::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool CreateProfileTaskRequest::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

int64_t CreateProfileTaskRequest::GetDuration() const
{
    return m_duration;
}

void CreateProfileTaskRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateProfileTaskRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t CreateProfileTaskRequest::GetAllTimes() const
{
    return m_allTimes;
}

void CreateProfileTaskRequest::SetAllTimes(const int64_t& _allTimes)
{
    m_allTimes = _allTimes;
    m_allTimesHasBeenSet = true;
}

bool CreateProfileTaskRequest::AllTimesHasBeenSet() const
{
    return m_allTimesHasBeenSet;
}

int64_t CreateProfileTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateProfileTaskRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateProfileTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateProfileTaskRequest::GetTaskInterval() const
{
    return m_taskInterval;
}

void CreateProfileTaskRequest::SetTaskInterval(const int64_t& _taskInterval)
{
    m_taskInterval = _taskInterval;
    m_taskIntervalHasBeenSet = true;
}

bool CreateProfileTaskRequest::TaskIntervalHasBeenSet() const
{
    return m_taskIntervalHasBeenSet;
}


