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

#include <tencentcloud/iotexplorer/v20190423/model/FenceAlarmPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

FenceAlarmPoint::FenceAlarmPoint() :
    m_alarmTimeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false)
{
}

CoreInternalOutcome FenceAlarmPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmTime") && !value["AlarmTime"].IsNull())
    {
        if (!value["AlarmTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FenceAlarmPoint.AlarmTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTime = value["AlarmTime"].GetInt64();
        m_alarmTimeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FenceAlarmPoint.Longitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = value["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FenceAlarmPoint.Latitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = value["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FenceAlarmPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmTime, allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

}


int64_t FenceAlarmPoint::GetAlarmTime() const
{
    return m_alarmTime;
}

void FenceAlarmPoint::SetAlarmTime(const int64_t& _alarmTime)
{
    m_alarmTime = _alarmTime;
    m_alarmTimeHasBeenSet = true;
}

bool FenceAlarmPoint::AlarmTimeHasBeenSet() const
{
    return m_alarmTimeHasBeenSet;
}

double FenceAlarmPoint::GetLongitude() const
{
    return m_longitude;
}

void FenceAlarmPoint::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool FenceAlarmPoint::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double FenceAlarmPoint::GetLatitude() const
{
    return m_latitude;
}

void FenceAlarmPoint::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool FenceAlarmPoint::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

