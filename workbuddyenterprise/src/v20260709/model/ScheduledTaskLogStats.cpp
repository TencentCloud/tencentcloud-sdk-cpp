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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ScheduledTaskLogStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ScheduledTaskLogStats::ScheduledTaskLogStats() :
    m_totalCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_avgDurationMsHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledTaskLogStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogStats.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogStats.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogStats.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("AvgDurationMs") && !value["AvgDurationMs"].IsNull())
    {
        if (!value["AvgDurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogStats.AvgDurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgDurationMs = value["AvgDurationMs"].GetInt64();
        m_avgDurationMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledTaskLogStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_avgDurationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDurationMs, allocator);
    }

}


int64_t ScheduledTaskLogStats::GetTotalCount() const
{
    return m_totalCount;
}

void ScheduledTaskLogStats::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ScheduledTaskLogStats::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t ScheduledTaskLogStats::GetSuccessCount() const
{
    return m_successCount;
}

void ScheduledTaskLogStats::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool ScheduledTaskLogStats::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t ScheduledTaskLogStats::GetFailedCount() const
{
    return m_failedCount;
}

void ScheduledTaskLogStats::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool ScheduledTaskLogStats::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t ScheduledTaskLogStats::GetAvgDurationMs() const
{
    return m_avgDurationMs;
}

void ScheduledTaskLogStats::SetAvgDurationMs(const int64_t& _avgDurationMs)
{
    m_avgDurationMs = _avgDurationMs;
    m_avgDurationMsHasBeenSet = true;
}

bool ScheduledTaskLogStats::AvgDurationMsHasBeenSet() const
{
    return m_avgDurationMsHasBeenSet;
}

