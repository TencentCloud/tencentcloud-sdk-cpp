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

#include <tencentcloud/wedata/v20210820/model/TaskInstanceCountDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInstanceCountDto::TaskInstanceCountDto() :
    m_successHasBeenSet(false),
    m_runningHasBeenSet(false),
    m_waitingHasBeenSet(false),
    m_dependHasBeenSet(false),
    m_failedHasBeenSet(false),
    m_stoppedHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstanceCountDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Success` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetUint64();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Running") && !value["Running"].IsNull())
    {
        if (!value["Running"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Running` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_running = value["Running"].GetUint64();
        m_runningHasBeenSet = true;
    }

    if (value.HasMember("Waiting") && !value["Waiting"].IsNull())
    {
        if (!value["Waiting"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Waiting` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waiting = value["Waiting"].GetUint64();
        m_waitingHasBeenSet = true;
    }

    if (value.HasMember("Depend") && !value["Depend"].IsNull())
    {
        if (!value["Depend"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Depend` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_depend = value["Depend"].GetUint64();
        m_dependHasBeenSet = true;
    }

    if (value.HasMember("Failed") && !value["Failed"].IsNull())
    {
        if (!value["Failed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Failed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failed = value["Failed"].GetUint64();
        m_failedHasBeenSet = true;
    }

    if (value.HasMember("Stopped") && !value["Stopped"].IsNull())
    {
        if (!value["Stopped"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceCountDto.Stopped` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopped = value["Stopped"].GetUint64();
        m_stoppedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstanceCountDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_runningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Running";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_running, allocator);
    }

    if (m_waitingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waiting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waiting, allocator);
    }

    if (m_dependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depend, allocator);
    }

    if (m_failedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failed, allocator);
    }

    if (m_stoppedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stopped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopped, allocator);
    }

}


uint64_t TaskInstanceCountDto::GetSuccess() const
{
    return m_success;
}

void TaskInstanceCountDto::SetSuccess(const uint64_t& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool TaskInstanceCountDto::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

uint64_t TaskInstanceCountDto::GetRunning() const
{
    return m_running;
}

void TaskInstanceCountDto::SetRunning(const uint64_t& _running)
{
    m_running = _running;
    m_runningHasBeenSet = true;
}

bool TaskInstanceCountDto::RunningHasBeenSet() const
{
    return m_runningHasBeenSet;
}

uint64_t TaskInstanceCountDto::GetWaiting() const
{
    return m_waiting;
}

void TaskInstanceCountDto::SetWaiting(const uint64_t& _waiting)
{
    m_waiting = _waiting;
    m_waitingHasBeenSet = true;
}

bool TaskInstanceCountDto::WaitingHasBeenSet() const
{
    return m_waitingHasBeenSet;
}

uint64_t TaskInstanceCountDto::GetDepend() const
{
    return m_depend;
}

void TaskInstanceCountDto::SetDepend(const uint64_t& _depend)
{
    m_depend = _depend;
    m_dependHasBeenSet = true;
}

bool TaskInstanceCountDto::DependHasBeenSet() const
{
    return m_dependHasBeenSet;
}

uint64_t TaskInstanceCountDto::GetFailed() const
{
    return m_failed;
}

void TaskInstanceCountDto::SetFailed(const uint64_t& _failed)
{
    m_failed = _failed;
    m_failedHasBeenSet = true;
}

bool TaskInstanceCountDto::FailedHasBeenSet() const
{
    return m_failedHasBeenSet;
}

uint64_t TaskInstanceCountDto::GetStopped() const
{
    return m_stopped;
}

void TaskInstanceCountDto::SetStopped(const uint64_t& _stopped)
{
    m_stopped = _stopped;
    m_stoppedHasBeenSet = true;
}

bool TaskInstanceCountDto::StoppedHasBeenSet() const
{
    return m_stoppedHasBeenSet;
}

