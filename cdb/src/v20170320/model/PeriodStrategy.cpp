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

#include <tencentcloud/cdb/v20170320/model/PeriodStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

PeriodStrategy::PeriodStrategy() :
    m_timeCycleHasBeenSet(false),
    m_timeIntervalHasBeenSet(false)
{
}

CoreInternalOutcome PeriodStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeCycle") && !value["TimeCycle"].IsNull())
    {
        if (!value["TimeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodStrategy.TimeCycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeCycle.Deserialize(value["TimeCycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeCycleHasBeenSet = true;
    }

    if (value.HasMember("TimeInterval") && !value["TimeInterval"].IsNull())
    {
        if (!value["TimeInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodStrategy.TimeInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeInterval.Deserialize(value["TimeInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeriodStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeCycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeInterval.ToJsonObject(value[key.c_str()], allocator);
    }

}


TImeCycle PeriodStrategy::GetTimeCycle() const
{
    return m_timeCycle;
}

void PeriodStrategy::SetTimeCycle(const TImeCycle& _timeCycle)
{
    m_timeCycle = _timeCycle;
    m_timeCycleHasBeenSet = true;
}

bool PeriodStrategy::TimeCycleHasBeenSet() const
{
    return m_timeCycleHasBeenSet;
}

TimeInterval PeriodStrategy::GetTimeInterval() const
{
    return m_timeInterval;
}

void PeriodStrategy::SetTimeInterval(const TimeInterval& _timeInterval)
{
    m_timeInterval = _timeInterval;
    m_timeIntervalHasBeenSet = true;
}

bool PeriodStrategy::TimeIntervalHasBeenSet() const
{
    return m_timeIntervalHasBeenSet;
}

