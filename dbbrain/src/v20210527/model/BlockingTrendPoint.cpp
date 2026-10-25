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

#include <tencentcloud/dbbrain/v20210527/model/BlockingTrendPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

BlockingTrendPoint::BlockingTrendPoint() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lockCountHasBeenSet(false),
    m_monitorLoopCountHasBeenSet(false)
{
}

CoreInternalOutcome BlockingTrendPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingTrendPoint.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingTrendPoint.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("LockCount") && !value["LockCount"].IsNull())
    {
        if (!value["LockCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingTrendPoint.LockCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockCount = value["LockCount"].GetInt64();
        m_lockCountHasBeenSet = true;
    }

    if (value.HasMember("MonitorLoopCount") && !value["MonitorLoopCount"].IsNull())
    {
        if (!value["MonitorLoopCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingTrendPoint.MonitorLoopCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorLoopCount = value["MonitorLoopCount"].GetInt64();
        m_monitorLoopCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockingTrendPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lockCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockCount, allocator);
    }

    if (m_monitorLoopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorLoopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorLoopCount, allocator);
    }

}


string BlockingTrendPoint::GetStartTime() const
{
    return m_startTime;
}

void BlockingTrendPoint::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BlockingTrendPoint::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BlockingTrendPoint::GetEndTime() const
{
    return m_endTime;
}

void BlockingTrendPoint::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BlockingTrendPoint::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t BlockingTrendPoint::GetLockCount() const
{
    return m_lockCount;
}

void BlockingTrendPoint::SetLockCount(const int64_t& _lockCount)
{
    m_lockCount = _lockCount;
    m_lockCountHasBeenSet = true;
}

bool BlockingTrendPoint::LockCountHasBeenSet() const
{
    return m_lockCountHasBeenSet;
}

int64_t BlockingTrendPoint::GetMonitorLoopCount() const
{
    return m_monitorLoopCount;
}

void BlockingTrendPoint::SetMonitorLoopCount(const int64_t& _monitorLoopCount)
{
    m_monitorLoopCount = _monitorLoopCount;
    m_monitorLoopCountHasBeenSet = true;
}

bool BlockingTrendPoint::MonitorLoopCountHasBeenSet() const
{
    return m_monitorLoopCountHasBeenSet;
}

