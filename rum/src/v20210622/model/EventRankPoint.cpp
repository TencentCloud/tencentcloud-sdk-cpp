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

#include <tencentcloud/rum/v20210622/model/EventRankPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

EventRankPoint::EventRankPoint() :
    m_tsHasBeenSet(false),
    m_countHasBeenSet(false),
    m_failHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome EventRankPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ts") && !value["Ts"].IsNull())
    {
        if (!value["Ts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankPoint.Ts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ts = value["Ts"].GetInt64();
        m_tsHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankPoint.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Fail") && !value["Fail"].IsNull())
    {
        if (!value["Fail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankPoint.Fail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fail = value["Fail"].GetInt64();
        m_failHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankPoint.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventRankPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ts, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_failHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fail, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


int64_t EventRankPoint::GetTs() const
{
    return m_ts;
}

void EventRankPoint::SetTs(const int64_t& _ts)
{
    m_ts = _ts;
    m_tsHasBeenSet = true;
}

bool EventRankPoint::TsHasBeenSet() const
{
    return m_tsHasBeenSet;
}

int64_t EventRankPoint::GetCount() const
{
    return m_count;
}

void EventRankPoint::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EventRankPoint::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t EventRankPoint::GetFail() const
{
    return m_fail;
}

void EventRankPoint::SetFail(const int64_t& _fail)
{
    m_fail = _fail;
    m_failHasBeenSet = true;
}

bool EventRankPoint::FailHasBeenSet() const
{
    return m_failHasBeenSet;
}

double EventRankPoint::GetDuration() const
{
    return m_duration;
}

void EventRankPoint::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool EventRankPoint::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

