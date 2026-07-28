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

#include <tencentcloud/wedata/v20210820/model/ExecutorTaskInstanceCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorTaskInstanceCount::ExecutorTaskInstanceCount() :
    m_executorGroupIdHasBeenSet(false),
    m_schedulingTaskCountHasBeenSet(false),
    m_runningInstanceCountHasBeenSet(false),
    m_waitingInstanceCountHasBeenSet(false),
    m_othersTaskTypeSchedulingTaskCountHasBeenSet(false),
    m_othersTaskTypeRunningInstanceCountHasBeenSet(false),
    m_othersTaskTypeWaitingInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorTaskInstanceCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulingTaskCount") && !value["SchedulingTaskCount"].IsNull())
    {
        if (!value["SchedulingTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.SchedulingTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_schedulingTaskCount = value["SchedulingTaskCount"].GetInt64();
        m_schedulingTaskCountHasBeenSet = true;
    }

    if (value.HasMember("RunningInstanceCount") && !value["RunningInstanceCount"].IsNull())
    {
        if (!value["RunningInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.RunningInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningInstanceCount = value["RunningInstanceCount"].GetInt64();
        m_runningInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("WaitingInstanceCount") && !value["WaitingInstanceCount"].IsNull())
    {
        if (!value["WaitingInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.WaitingInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitingInstanceCount = value["WaitingInstanceCount"].GetInt64();
        m_waitingInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("OthersTaskTypeSchedulingTaskCount") && !value["OthersTaskTypeSchedulingTaskCount"].IsNull())
    {
        if (!value["OthersTaskTypeSchedulingTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.OthersTaskTypeSchedulingTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_othersTaskTypeSchedulingTaskCount = value["OthersTaskTypeSchedulingTaskCount"].GetInt64();
        m_othersTaskTypeSchedulingTaskCountHasBeenSet = true;
    }

    if (value.HasMember("OthersTaskTypeRunningInstanceCount") && !value["OthersTaskTypeRunningInstanceCount"].IsNull())
    {
        if (!value["OthersTaskTypeRunningInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.OthersTaskTypeRunningInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_othersTaskTypeRunningInstanceCount = value["OthersTaskTypeRunningInstanceCount"].GetInt64();
        m_othersTaskTypeRunningInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("OthersTaskTypeWaitingInstanceCount") && !value["OthersTaskTypeWaitingInstanceCount"].IsNull())
    {
        if (!value["OthersTaskTypeWaitingInstanceCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorTaskInstanceCount.OthersTaskTypeWaitingInstanceCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_othersTaskTypeWaitingInstanceCount = string(value["OthersTaskTypeWaitingInstanceCount"].GetString());
        m_othersTaskTypeWaitingInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorTaskInstanceCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulingTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schedulingTaskCount, allocator);
    }

    if (m_runningInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningInstanceCount, allocator);
    }

    if (m_waitingInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitingInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitingInstanceCount, allocator);
    }

    if (m_othersTaskTypeSchedulingTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersTaskTypeSchedulingTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_othersTaskTypeSchedulingTaskCount, allocator);
    }

    if (m_othersTaskTypeRunningInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersTaskTypeRunningInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_othersTaskTypeRunningInstanceCount, allocator);
    }

    if (m_othersTaskTypeWaitingInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersTaskTypeWaitingInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_othersTaskTypeWaitingInstanceCount.c_str(), allocator).Move(), allocator);
    }

}


string ExecutorTaskInstanceCount::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void ExecutorTaskInstanceCount::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

int64_t ExecutorTaskInstanceCount::GetSchedulingTaskCount() const
{
    return m_schedulingTaskCount;
}

void ExecutorTaskInstanceCount::SetSchedulingTaskCount(const int64_t& _schedulingTaskCount)
{
    m_schedulingTaskCount = _schedulingTaskCount;
    m_schedulingTaskCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::SchedulingTaskCountHasBeenSet() const
{
    return m_schedulingTaskCountHasBeenSet;
}

int64_t ExecutorTaskInstanceCount::GetRunningInstanceCount() const
{
    return m_runningInstanceCount;
}

void ExecutorTaskInstanceCount::SetRunningInstanceCount(const int64_t& _runningInstanceCount)
{
    m_runningInstanceCount = _runningInstanceCount;
    m_runningInstanceCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::RunningInstanceCountHasBeenSet() const
{
    return m_runningInstanceCountHasBeenSet;
}

int64_t ExecutorTaskInstanceCount::GetWaitingInstanceCount() const
{
    return m_waitingInstanceCount;
}

void ExecutorTaskInstanceCount::SetWaitingInstanceCount(const int64_t& _waitingInstanceCount)
{
    m_waitingInstanceCount = _waitingInstanceCount;
    m_waitingInstanceCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::WaitingInstanceCountHasBeenSet() const
{
    return m_waitingInstanceCountHasBeenSet;
}

int64_t ExecutorTaskInstanceCount::GetOthersTaskTypeSchedulingTaskCount() const
{
    return m_othersTaskTypeSchedulingTaskCount;
}

void ExecutorTaskInstanceCount::SetOthersTaskTypeSchedulingTaskCount(const int64_t& _othersTaskTypeSchedulingTaskCount)
{
    m_othersTaskTypeSchedulingTaskCount = _othersTaskTypeSchedulingTaskCount;
    m_othersTaskTypeSchedulingTaskCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::OthersTaskTypeSchedulingTaskCountHasBeenSet() const
{
    return m_othersTaskTypeSchedulingTaskCountHasBeenSet;
}

int64_t ExecutorTaskInstanceCount::GetOthersTaskTypeRunningInstanceCount() const
{
    return m_othersTaskTypeRunningInstanceCount;
}

void ExecutorTaskInstanceCount::SetOthersTaskTypeRunningInstanceCount(const int64_t& _othersTaskTypeRunningInstanceCount)
{
    m_othersTaskTypeRunningInstanceCount = _othersTaskTypeRunningInstanceCount;
    m_othersTaskTypeRunningInstanceCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::OthersTaskTypeRunningInstanceCountHasBeenSet() const
{
    return m_othersTaskTypeRunningInstanceCountHasBeenSet;
}

string ExecutorTaskInstanceCount::GetOthersTaskTypeWaitingInstanceCount() const
{
    return m_othersTaskTypeWaitingInstanceCount;
}

void ExecutorTaskInstanceCount::SetOthersTaskTypeWaitingInstanceCount(const string& _othersTaskTypeWaitingInstanceCount)
{
    m_othersTaskTypeWaitingInstanceCount = _othersTaskTypeWaitingInstanceCount;
    m_othersTaskTypeWaitingInstanceCountHasBeenSet = true;
}

bool ExecutorTaskInstanceCount::OthersTaskTypeWaitingInstanceCountHasBeenSet() const
{
    return m_othersTaskTypeWaitingInstanceCountHasBeenSet;
}

