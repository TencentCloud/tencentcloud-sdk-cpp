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

#include <tencentcloud/vod/v20180717/model/WatermarkCycleConfigForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WatermarkCycleConfigForUpdate::WatermarkCycleConfigForUpdate() :
    m_startTimeHasBeenSet(false),
    m_displayDurationHasBeenSet(false),
    m_cycleDurationHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkCycleConfigForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkCycleConfigForUpdate.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("DisplayDuration") && !value["DisplayDuration"].IsNull())
    {
        if (!value["DisplayDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkCycleConfigForUpdate.DisplayDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_displayDuration = value["DisplayDuration"].GetDouble();
        m_displayDurationHasBeenSet = true;
    }

    if (value.HasMember("CycleDuration") && !value["CycleDuration"].IsNull())
    {
        if (!value["CycleDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkCycleConfigForUpdate.CycleDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cycleDuration = value["CycleDuration"].GetDouble();
        m_cycleDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkCycleConfigForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_displayDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayDuration, allocator);
    }

    if (m_cycleDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleDuration, allocator);
    }

}


double WatermarkCycleConfigForUpdate::GetStartTime() const
{
    return m_startTime;
}

void WatermarkCycleConfigForUpdate::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WatermarkCycleConfigForUpdate::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double WatermarkCycleConfigForUpdate::GetDisplayDuration() const
{
    return m_displayDuration;
}

void WatermarkCycleConfigForUpdate::SetDisplayDuration(const double& _displayDuration)
{
    m_displayDuration = _displayDuration;
    m_displayDurationHasBeenSet = true;
}

bool WatermarkCycleConfigForUpdate::DisplayDurationHasBeenSet() const
{
    return m_displayDurationHasBeenSet;
}

double WatermarkCycleConfigForUpdate::GetCycleDuration() const
{
    return m_cycleDuration;
}

void WatermarkCycleConfigForUpdate::SetCycleDuration(const double& _cycleDuration)
{
    m_cycleDuration = _cycleDuration;
    m_cycleDurationHasBeenSet = true;
}

bool WatermarkCycleConfigForUpdate::CycleDurationHasBeenSet() const
{
    return m_cycleDurationHasBeenSet;
}

