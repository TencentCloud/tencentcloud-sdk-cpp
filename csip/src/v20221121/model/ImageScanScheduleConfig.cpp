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

#include <tencentcloud/csip/v20221121/model/ImageScanScheduleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageScanScheduleConfig::ImageScanScheduleConfig() :
    m_cycleTypeHasBeenSet(false),
    m_cycleDaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

CoreInternalOutcome ImageScanScheduleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanScheduleConfig.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleDays") && !value["CycleDays"].IsNull())
    {
        if (!value["CycleDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanScheduleConfig.CycleDays` is not array type"));

        const rapidjson::Value &tmpValue = value["CycleDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cycleDays.push_back((*itr).GetUint64());
        }
        m_cycleDaysHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanScheduleConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanScheduleConfig.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScanScheduleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleDays.begin(); itr != m_cycleDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

}


string ImageScanScheduleConfig::GetCycleType() const
{
    return m_cycleType;
}

void ImageScanScheduleConfig::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ImageScanScheduleConfig::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

vector<uint64_t> ImageScanScheduleConfig::GetCycleDays() const
{
    return m_cycleDays;
}

void ImageScanScheduleConfig::SetCycleDays(const vector<uint64_t>& _cycleDays)
{
    m_cycleDays = _cycleDays;
    m_cycleDaysHasBeenSet = true;
}

bool ImageScanScheduleConfig::CycleDaysHasBeenSet() const
{
    return m_cycleDaysHasBeenSet;
}

string ImageScanScheduleConfig::GetStartTime() const
{
    return m_startTime;
}

void ImageScanScheduleConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ImageScanScheduleConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ImageScanScheduleConfig::GetTimezone() const
{
    return m_timezone;
}

void ImageScanScheduleConfig::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool ImageScanScheduleConfig::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

