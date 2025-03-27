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

#include <tencentcloud/live/v20180801/model/TaskDurationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TaskDurationInfo::TaskDurationInfo() :
    m_timeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_durationSecondHasBeenSet(false)
{
}

CoreInternalOutcome TaskDurationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDurationInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDurationInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("DurationSecond") && !value["DurationSecond"].IsNull())
    {
        if (!value["DurationSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDurationInfo.DurationSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_durationSecond = value["DurationSecond"].GetUint64();
        m_durationSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDurationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_durationSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationSecond, allocator);
    }

}


string TaskDurationInfo::GetTime() const
{
    return m_time;
}

void TaskDurationInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TaskDurationInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t TaskDurationInfo::GetDuration() const
{
    return m_duration;
}

void TaskDurationInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TaskDurationInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t TaskDurationInfo::GetDurationSecond() const
{
    return m_durationSecond;
}

void TaskDurationInfo::SetDurationSecond(const uint64_t& _durationSecond)
{
    m_durationSecond = _durationSecond;
    m_durationSecondHasBeenSet = true;
}

bool TaskDurationInfo::DurationSecondHasBeenSet() const
{
    return m_durationSecondHasBeenSet;
}

