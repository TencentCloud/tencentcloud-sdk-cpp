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

#include <tencentcloud/waf/v20180125/model/TimedJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TimedJob::TimedJob() :
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TimedJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartDateTime") && !value["StartDateTime"].IsNull())
    {
        if (!value["StartDateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimedJob.StartDateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startDateTime = value["StartDateTime"].GetUint64();
        m_startDateTimeHasBeenSet = true;
    }

    if (value.HasMember("EndDateTime") && !value["EndDateTime"].IsNull())
    {
        if (!value["EndDateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimedJob.EndDateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endDateTime = value["EndDateTime"].GetUint64();
        m_endDateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimedJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startDateTime, allocator);
    }

    if (m_endDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endDateTime, allocator);
    }

}


uint64_t TimedJob::GetStartDateTime() const
{
    return m_startDateTime;
}

void TimedJob::SetStartDateTime(const uint64_t& _startDateTime)
{
    m_startDateTime = _startDateTime;
    m_startDateTimeHasBeenSet = true;
}

bool TimedJob::StartDateTimeHasBeenSet() const
{
    return m_startDateTimeHasBeenSet;
}

uint64_t TimedJob::GetEndDateTime() const
{
    return m_endDateTime;
}

void TimedJob::SetEndDateTime(const uint64_t& _endDateTime)
{
    m_endDateTime = _endDateTime;
    m_endDateTimeHasBeenSet = true;
}

bool TimedJob::EndDateTimeHasBeenSet() const
{
    return m_endDateTimeHasBeenSet;
}

