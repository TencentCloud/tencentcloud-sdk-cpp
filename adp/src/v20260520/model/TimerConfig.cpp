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

#include <tencentcloud/adp/v20260520/model/TimerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerConfig::TimerConfig() :
    m_pushConfigHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

CoreInternalOutcome TimerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PushConfig") && !value["PushConfig"].IsNull())
    {
        if (!value["PushConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfig.PushConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pushConfig.Deserialize(value["PushConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pushConfigHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfig.Schedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_schedule.Deserialize(value["Schedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pushConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pushConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(value[key.c_str()], allocator);
    }

}


TimerPushConfig TimerConfig::GetPushConfig() const
{
    return m_pushConfig;
}

void TimerConfig::SetPushConfig(const TimerPushConfig& _pushConfig)
{
    m_pushConfig = _pushConfig;
    m_pushConfigHasBeenSet = true;
}

bool TimerConfig::PushConfigHasBeenSet() const
{
    return m_pushConfigHasBeenSet;
}

TimerScheduleConfig TimerConfig::GetSchedule() const
{
    return m_schedule;
}

void TimerConfig::SetSchedule(const TimerScheduleConfig& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool TimerConfig::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

