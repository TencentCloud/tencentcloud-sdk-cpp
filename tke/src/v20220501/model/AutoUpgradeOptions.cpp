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

#include <tencentcloud/tke/v20220501/model/AutoUpgradeOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

AutoUpgradeOptions::AutoUpgradeOptions() :
    m_autoUpgradeStartTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_weeklyPeriodHasBeenSet(false)
{
}

CoreInternalOutcome AutoUpgradeOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoUpgradeStartTime") && !value["AutoUpgradeStartTime"].IsNull())
    {
        if (!value["AutoUpgradeStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoUpgradeOptions.AutoUpgradeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpgradeStartTime = string(value["AutoUpgradeStartTime"].GetString());
        m_autoUpgradeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoUpgradeOptions.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("WeeklyPeriod") && !value["WeeklyPeriod"].IsNull())
    {
        if (!value["WeeklyPeriod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoUpgradeOptions.WeeklyPeriod` is not array type"));

        const rapidjson::Value &tmpValue = value["WeeklyPeriod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weeklyPeriod.push_back((*itr).GetString());
        }
        m_weeklyPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoUpgradeOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoUpgradeStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoUpgradeStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_weeklyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeeklyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weeklyPeriod.begin(); itr != m_weeklyPeriod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AutoUpgradeOptions::GetAutoUpgradeStartTime() const
{
    return m_autoUpgradeStartTime;
}

void AutoUpgradeOptions::SetAutoUpgradeStartTime(const string& _autoUpgradeStartTime)
{
    m_autoUpgradeStartTime = _autoUpgradeStartTime;
    m_autoUpgradeStartTimeHasBeenSet = true;
}

bool AutoUpgradeOptions::AutoUpgradeStartTimeHasBeenSet() const
{
    return m_autoUpgradeStartTimeHasBeenSet;
}

string AutoUpgradeOptions::GetDuration() const
{
    return m_duration;
}

void AutoUpgradeOptions::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AutoUpgradeOptions::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> AutoUpgradeOptions::GetWeeklyPeriod() const
{
    return m_weeklyPeriod;
}

void AutoUpgradeOptions::SetWeeklyPeriod(const vector<string>& _weeklyPeriod)
{
    m_weeklyPeriod = _weeklyPeriod;
    m_weeklyPeriodHasBeenSet = true;
}

bool AutoUpgradeOptions::WeeklyPeriodHasBeenSet() const
{
    return m_weeklyPeriodHasBeenSet;
}

