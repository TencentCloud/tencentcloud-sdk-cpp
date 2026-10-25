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

#include <tencentcloud/rum/v20210622/model/DialTrendPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DialTrendPoint::DialTrendPoint() :
    m_timeHasBeenSet(false),
    m_executionCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_avgDurationHasBeenSet(false)
{
}

CoreInternalOutcome DialTrendPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTrendPoint.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionCount") && !value["ExecutionCount"].IsNull())
    {
        if (!value["ExecutionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTrendPoint.ExecutionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionCount = value["ExecutionCount"].GetInt64();
        m_executionCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTrendPoint.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTrendPoint.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("AvgDuration") && !value["AvgDuration"].IsNull())
    {
        if (!value["AvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DialTrendPoint.AvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDuration = value["AvgDuration"].GetDouble();
        m_avgDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DialTrendPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_executionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_avgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDuration, allocator);
    }

}


string DialTrendPoint::GetTime() const
{
    return m_time;
}

void DialTrendPoint::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DialTrendPoint::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t DialTrendPoint::GetExecutionCount() const
{
    return m_executionCount;
}

void DialTrendPoint::SetExecutionCount(const int64_t& _executionCount)
{
    m_executionCount = _executionCount;
    m_executionCountHasBeenSet = true;
}

bool DialTrendPoint::ExecutionCountHasBeenSet() const
{
    return m_executionCountHasBeenSet;
}

int64_t DialTrendPoint::GetSuccessCount() const
{
    return m_successCount;
}

void DialTrendPoint::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool DialTrendPoint::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t DialTrendPoint::GetFailCount() const
{
    return m_failCount;
}

void DialTrendPoint::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool DialTrendPoint::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

double DialTrendPoint::GetAvgDuration() const
{
    return m_avgDuration;
}

void DialTrendPoint::SetAvgDuration(const double& _avgDuration)
{
    m_avgDuration = _avgDuration;
    m_avgDurationHasBeenSet = true;
}

bool DialTrendPoint::AvgDurationHasBeenSet() const
{
    return m_avgDurationHasBeenSet;
}

