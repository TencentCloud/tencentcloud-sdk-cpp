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

#include <tencentcloud/thpc/v20230321/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

Task::Task() :
    m_applicationHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskInstanceNumHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Application` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_application.Deserialize(value["Application"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskInstanceNum") && !value["TaskInstanceNum"].IsNull())
    {
        if (!value["TaskInstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskInstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceNum = value["TaskInstanceNum"].GetUint64();
        m_taskInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_application.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInstanceNum, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


Application Task::GetApplication() const
{
    return m_application;
}

void Task::SetApplication(const Application& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool Task::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

string Task::GetTaskName() const
{
    return m_taskName;
}

void Task::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool Task::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t Task::GetTaskInstanceNum() const
{
    return m_taskInstanceNum;
}

void Task::SetTaskInstanceNum(const uint64_t& _taskInstanceNum)
{
    m_taskInstanceNum = _taskInstanceNum;
    m_taskInstanceNumHasBeenSet = true;
}

bool Task::TaskInstanceNumHasBeenSet() const
{
    return m_taskInstanceNumHasBeenSet;
}

uint64_t Task::GetTimeout() const
{
    return m_timeout;
}

void Task::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Task::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

