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

#include <tencentcloud/cdb/v20170320/model/TimeIntervalStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

TimeIntervalStrategy::TimeIntervalStrategy() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TimeIntervalStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeIntervalStrategy.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeIntervalStrategy.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeIntervalStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


int64_t TimeIntervalStrategy::GetStartTime() const
{
    return m_startTime;
}

void TimeIntervalStrategy::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TimeIntervalStrategy::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t TimeIntervalStrategy::GetEndTime() const
{
    return m_endTime;
}

void TimeIntervalStrategy::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimeIntervalStrategy::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

