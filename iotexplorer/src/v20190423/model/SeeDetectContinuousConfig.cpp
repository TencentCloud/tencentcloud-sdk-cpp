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

#include <tencentcloud/iotexplorer/v20190423/model/SeeDetectContinuousConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeDetectContinuousConfig::SeeDetectContinuousConfig() :
    m_detectTypeHasBeenSet(false),
    m_dailyStartTimeHasBeenSet(false),
    m_dailyEndTimeHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

CoreInternalOutcome SeeDetectContinuousConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectType") && !value["DetectType"].IsNull())
    {
        if (!value["DetectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeDetectContinuousConfig.DetectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectType = string(value["DetectType"].GetString());
        m_detectTypeHasBeenSet = true;
    }

    if (value.HasMember("DailyStartTime") && !value["DailyStartTime"].IsNull())
    {
        if (!value["DailyStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeDetectContinuousConfig.DailyStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyStartTime = value["DailyStartTime"].GetInt64();
        m_dailyStartTimeHasBeenSet = true;
    }

    if (value.HasMember("DailyEndTime") && !value["DailyEndTime"].IsNull())
    {
        if (!value["DailyEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeDetectContinuousConfig.DailyEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyEndTime = value["DailyEndTime"].GetInt64();
        m_dailyEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeDetectContinuousConfig.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeDetectContinuousConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectType.c_str(), allocator).Move(), allocator);
    }

    if (m_dailyStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyStartTime, allocator);
    }

    if (m_dailyEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyEndTime, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

}


string SeeDetectContinuousConfig::GetDetectType() const
{
    return m_detectType;
}

void SeeDetectContinuousConfig::SetDetectType(const string& _detectType)
{
    m_detectType = _detectType;
    m_detectTypeHasBeenSet = true;
}

bool SeeDetectContinuousConfig::DetectTypeHasBeenSet() const
{
    return m_detectTypeHasBeenSet;
}

int64_t SeeDetectContinuousConfig::GetDailyStartTime() const
{
    return m_dailyStartTime;
}

void SeeDetectContinuousConfig::SetDailyStartTime(const int64_t& _dailyStartTime)
{
    m_dailyStartTime = _dailyStartTime;
    m_dailyStartTimeHasBeenSet = true;
}

bool SeeDetectContinuousConfig::DailyStartTimeHasBeenSet() const
{
    return m_dailyStartTimeHasBeenSet;
}

int64_t SeeDetectContinuousConfig::GetDailyEndTime() const
{
    return m_dailyEndTime;
}

void SeeDetectContinuousConfig::SetDailyEndTime(const int64_t& _dailyEndTime)
{
    m_dailyEndTime = _dailyEndTime;
    m_dailyEndTimeHasBeenSet = true;
}

bool SeeDetectContinuousConfig::DailyEndTimeHasBeenSet() const
{
    return m_dailyEndTimeHasBeenSet;
}

int64_t SeeDetectContinuousConfig::GetInterval() const
{
    return m_interval;
}

void SeeDetectContinuousConfig::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool SeeDetectContinuousConfig::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

