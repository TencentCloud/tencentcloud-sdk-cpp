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

#include <tencentcloud/cynosdb/v20190107/model/RollbackTimeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackTimeRange::RollbackTimeRange() :
    m_timeRangeStartHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false)
{
}

CoreInternalOutcome RollbackTimeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeRangeStart") && !value["TimeRangeStart"].IsNull())
    {
        if (!value["TimeRangeStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTimeRange.TimeRangeStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeStart = string(value["TimeRangeStart"].GetString());
        m_timeRangeStartHasBeenSet = true;
    }

    if (value.HasMember("TimeRangeEnd") && !value["TimeRangeEnd"].IsNull())
    {
        if (!value["TimeRangeEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTimeRange.TimeRangeEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeEnd = string(value["TimeRangeEnd"].GetString());
        m_timeRangeEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackTimeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeRangeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeEnd.c_str(), allocator).Move(), allocator);
    }

}


string RollbackTimeRange::GetTimeRangeStart() const
{
    return m_timeRangeStart;
}

void RollbackTimeRange::SetTimeRangeStart(const string& _timeRangeStart)
{
    m_timeRangeStart = _timeRangeStart;
    m_timeRangeStartHasBeenSet = true;
}

bool RollbackTimeRange::TimeRangeStartHasBeenSet() const
{
    return m_timeRangeStartHasBeenSet;
}

string RollbackTimeRange::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

void RollbackTimeRange::SetTimeRangeEnd(const string& _timeRangeEnd)
{
    m_timeRangeEnd = _timeRangeEnd;
    m_timeRangeEndHasBeenSet = true;
}

bool RollbackTimeRange::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}

