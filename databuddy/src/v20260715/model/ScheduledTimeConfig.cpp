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

#include <tencentcloud/databuddy/v20260715/model/ScheduledTimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ScheduledTimeConfig::ScheduledTimeConfig() :
    m_scheduledTimeZoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleNumHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledTimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledTimeZone") && !value["ScheduledTimeZone"].IsNull())
    {
        if (!value["ScheduledTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTimeConfig.ScheduledTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTimeZone = string(value["ScheduledTimeZone"].GetString());
        m_scheduledTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTimeConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTimeConfig.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTimeConfig.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleNum") && !value["CycleNum"].IsNull())
    {
        if (!value["CycleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTimeConfig.CycleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleNum = value["CycleNum"].GetInt64();
        m_cycleNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledTimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledTimeZone.c_str(), allocator).Move(), allocator);
    }

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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleNum, allocator);
    }

}


string ScheduledTimeConfig::GetScheduledTimeZone() const
{
    return m_scheduledTimeZone;
}

void ScheduledTimeConfig::SetScheduledTimeZone(const string& _scheduledTimeZone)
{
    m_scheduledTimeZone = _scheduledTimeZone;
    m_scheduledTimeZoneHasBeenSet = true;
}

bool ScheduledTimeConfig::ScheduledTimeZoneHasBeenSet() const
{
    return m_scheduledTimeZoneHasBeenSet;
}

string ScheduledTimeConfig::GetStartTime() const
{
    return m_startTime;
}

void ScheduledTimeConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScheduledTimeConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScheduledTimeConfig::GetEndTime() const
{
    return m_endTime;
}

void ScheduledTimeConfig::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScheduledTimeConfig::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ScheduledTimeConfig::GetCycleType() const
{
    return m_cycleType;
}

void ScheduledTimeConfig::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ScheduledTimeConfig::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t ScheduledTimeConfig::GetCycleNum() const
{
    return m_cycleNum;
}

void ScheduledTimeConfig::SetCycleNum(const int64_t& _cycleNum)
{
    m_cycleNum = _cycleNum;
    m_cycleNumHasBeenSet = true;
}

bool ScheduledTimeConfig::CycleNumHasBeenSet() const
{
    return m_cycleNumHasBeenSet;
}

