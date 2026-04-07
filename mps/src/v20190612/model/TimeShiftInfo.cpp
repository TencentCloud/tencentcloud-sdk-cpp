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

#include <tencentcloud/mps/v20190612/model/TimeShiftInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TimeShiftInfo::TimeShiftInfo() :
    m_timeWindowsHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeWindows") && !value["TimeWindows"].IsNull())
    {
        if (!value["TimeWindows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftInfo.TimeWindows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeWindows = value["TimeWindows"].GetUint64();
        m_timeWindowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeWindowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWindows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeWindows, allocator);
    }

}


uint64_t TimeShiftInfo::GetTimeWindows() const
{
    return m_timeWindows;
}

void TimeShiftInfo::SetTimeWindows(const uint64_t& _timeWindows)
{
    m_timeWindows = _timeWindows;
    m_timeWindowsHasBeenSet = true;
}

bool TimeShiftInfo::TimeWindowsHasBeenSet() const
{
    return m_timeWindowsHasBeenSet;
}

