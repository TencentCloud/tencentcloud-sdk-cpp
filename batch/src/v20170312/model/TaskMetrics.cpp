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

#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

TaskMetrics::TaskMetrics() :
    m_submittedCountHasBeenSet(false),
    m_pendingCountHasBeenSet(false),
    m_runnableCountHasBeenSet(false),
    m_startingCountHasBeenSet(false),
    m_runningCountHasBeenSet(false),
    m_succeedCountHasBeenSet(false),
    m_failedInterruptedCountHasBeenSet(false),
    m_failedCountHasBeenSet(false)
{
}

CoreInternalOutcome TaskMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubmittedCount") && !value["SubmittedCount"].IsNull())
    {
        if (!value["SubmittedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.SubmittedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submittedCount = value["SubmittedCount"].GetInt64();
        m_submittedCountHasBeenSet = true;
    }

    if (value.HasMember("PendingCount") && !value["PendingCount"].IsNull())
    {
        if (!value["PendingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.PendingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pendingCount = value["PendingCount"].GetInt64();
        m_pendingCountHasBeenSet = true;
    }

    if (value.HasMember("RunnableCount") && !value["RunnableCount"].IsNull())
    {
        if (!value["RunnableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.RunnableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runnableCount = value["RunnableCount"].GetInt64();
        m_runnableCountHasBeenSet = true;
    }

    if (value.HasMember("StartingCount") && !value["StartingCount"].IsNull())
    {
        if (!value["StartingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.StartingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startingCount = value["StartingCount"].GetInt64();
        m_startingCountHasBeenSet = true;
    }

    if (value.HasMember("RunningCount") && !value["RunningCount"].IsNull())
    {
        if (!value["RunningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.RunningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCount = value["RunningCount"].GetInt64();
        m_runningCountHasBeenSet = true;
    }

    if (value.HasMember("SucceedCount") && !value["SucceedCount"].IsNull())
    {
        if (!value["SucceedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.SucceedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_succeedCount = value["SucceedCount"].GetInt64();
        m_succeedCountHasBeenSet = true;
    }

    if (value.HasMember("FailedInterruptedCount") && !value["FailedInterruptedCount"].IsNull())
    {
        if (!value["FailedInterruptedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.FailedInterruptedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedInterruptedCount = value["FailedInterruptedCount"].GetInt64();
        m_failedInterruptedCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMetrics.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_submittedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmittedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submittedCount, allocator);
    }

    if (m_pendingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PendingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pendingCount, allocator);
    }

    if (m_runnableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunnableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runnableCount, allocator);
    }

    if (m_startingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startingCount, allocator);
    }

    if (m_runningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCount, allocator);
    }

    if (m_succeedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucceedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succeedCount, allocator);
    }

    if (m_failedInterruptedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedInterruptedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedInterruptedCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

}


int64_t TaskMetrics::GetSubmittedCount() const
{
    return m_submittedCount;
}

void TaskMetrics::SetSubmittedCount(const int64_t& _submittedCount)
{
    m_submittedCount = _submittedCount;
    m_submittedCountHasBeenSet = true;
}

bool TaskMetrics::SubmittedCountHasBeenSet() const
{
    return m_submittedCountHasBeenSet;
}

int64_t TaskMetrics::GetPendingCount() const
{
    return m_pendingCount;
}

void TaskMetrics::SetPendingCount(const int64_t& _pendingCount)
{
    m_pendingCount = _pendingCount;
    m_pendingCountHasBeenSet = true;
}

bool TaskMetrics::PendingCountHasBeenSet() const
{
    return m_pendingCountHasBeenSet;
}

int64_t TaskMetrics::GetRunnableCount() const
{
    return m_runnableCount;
}

void TaskMetrics::SetRunnableCount(const int64_t& _runnableCount)
{
    m_runnableCount = _runnableCount;
    m_runnableCountHasBeenSet = true;
}

bool TaskMetrics::RunnableCountHasBeenSet() const
{
    return m_runnableCountHasBeenSet;
}

int64_t TaskMetrics::GetStartingCount() const
{
    return m_startingCount;
}

void TaskMetrics::SetStartingCount(const int64_t& _startingCount)
{
    m_startingCount = _startingCount;
    m_startingCountHasBeenSet = true;
}

bool TaskMetrics::StartingCountHasBeenSet() const
{
    return m_startingCountHasBeenSet;
}

int64_t TaskMetrics::GetRunningCount() const
{
    return m_runningCount;
}

void TaskMetrics::SetRunningCount(const int64_t& _runningCount)
{
    m_runningCount = _runningCount;
    m_runningCountHasBeenSet = true;
}

bool TaskMetrics::RunningCountHasBeenSet() const
{
    return m_runningCountHasBeenSet;
}

int64_t TaskMetrics::GetSucceedCount() const
{
    return m_succeedCount;
}

void TaskMetrics::SetSucceedCount(const int64_t& _succeedCount)
{
    m_succeedCount = _succeedCount;
    m_succeedCountHasBeenSet = true;
}

bool TaskMetrics::SucceedCountHasBeenSet() const
{
    return m_succeedCountHasBeenSet;
}

int64_t TaskMetrics::GetFailedInterruptedCount() const
{
    return m_failedInterruptedCount;
}

void TaskMetrics::SetFailedInterruptedCount(const int64_t& _failedInterruptedCount)
{
    m_failedInterruptedCount = _failedInterruptedCount;
    m_failedInterruptedCountHasBeenSet = true;
}

bool TaskMetrics::FailedInterruptedCountHasBeenSet() const
{
    return m_failedInterruptedCountHasBeenSet;
}

int64_t TaskMetrics::GetFailedCount() const
{
    return m_failedCount;
}

void TaskMetrics::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool TaskMetrics::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

