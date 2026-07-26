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

#include <tencentcloud/adp/v20260520/model/TimerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerStatus::TimerStatus() :
    m_failedCountHasBeenSet(false),
    m_lastFireTimeHasBeenSet(false),
    m_lastSessionIdHasBeenSet(false),
    m_nextFireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_unreadRunLogCountHasBeenSet(false)
{
}

CoreInternalOutcome TimerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.FailedCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = string(value["FailedCount"].GetString());
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("LastFireTime") && !value["LastFireTime"].IsNull())
    {
        if (!value["LastFireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.LastFireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFireTime = string(value["LastFireTime"].GetString());
        m_lastFireTimeHasBeenSet = true;
    }

    if (value.HasMember("LastSessionId") && !value["LastSessionId"].IsNull())
    {
        if (!value["LastSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.LastSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSessionId = string(value["LastSessionId"].GetString());
        m_lastSessionIdHasBeenSet = true;
    }

    if (value.HasMember("NextFireTime") && !value["NextFireTime"].IsNull())
    {
        if (!value["NextFireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.NextFireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextFireTime = string(value["NextFireTime"].GetString());
        m_nextFireTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.SuccessCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = string(value["SuccessCount"].GetString());
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("UnreadRunLogCount") && !value["UnreadRunLogCount"].IsNull())
    {
        if (!value["UnreadRunLogCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerStatus.UnreadRunLogCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unreadRunLogCount = string(value["UnreadRunLogCount"].GetString());
        m_unreadRunLogCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedCount.c_str(), allocator).Move(), allocator);
    }

    if (m_lastFireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nextFireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextFireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successCount.c_str(), allocator).Move(), allocator);
    }

    if (m_unreadRunLogCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnreadRunLogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unreadRunLogCount.c_str(), allocator).Move(), allocator);
    }

}


string TimerStatus::GetFailedCount() const
{
    return m_failedCount;
}

void TimerStatus::SetFailedCount(const string& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool TimerStatus::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

string TimerStatus::GetLastFireTime() const
{
    return m_lastFireTime;
}

void TimerStatus::SetLastFireTime(const string& _lastFireTime)
{
    m_lastFireTime = _lastFireTime;
    m_lastFireTimeHasBeenSet = true;
}

bool TimerStatus::LastFireTimeHasBeenSet() const
{
    return m_lastFireTimeHasBeenSet;
}

string TimerStatus::GetLastSessionId() const
{
    return m_lastSessionId;
}

void TimerStatus::SetLastSessionId(const string& _lastSessionId)
{
    m_lastSessionId = _lastSessionId;
    m_lastSessionIdHasBeenSet = true;
}

bool TimerStatus::LastSessionIdHasBeenSet() const
{
    return m_lastSessionIdHasBeenSet;
}

string TimerStatus::GetNextFireTime() const
{
    return m_nextFireTime;
}

void TimerStatus::SetNextFireTime(const string& _nextFireTime)
{
    m_nextFireTime = _nextFireTime;
    m_nextFireTimeHasBeenSet = true;
}

bool TimerStatus::NextFireTimeHasBeenSet() const
{
    return m_nextFireTimeHasBeenSet;
}

int64_t TimerStatus::GetStatus() const
{
    return m_status;
}

void TimerStatus::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TimerStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TimerStatus::GetSuccessCount() const
{
    return m_successCount;
}

void TimerStatus::SetSuccessCount(const string& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool TimerStatus::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string TimerStatus::GetUnreadRunLogCount() const
{
    return m_unreadRunLogCount;
}

void TimerStatus::SetUnreadRunLogCount(const string& _unreadRunLogCount)
{
    m_unreadRunLogCount = _unreadRunLogCount;
    m_unreadRunLogCountHasBeenSet = true;
}

bool TimerStatus::UnreadRunLogCountHasBeenSet() const
{
    return m_unreadRunLogCountHasBeenSet;
}

