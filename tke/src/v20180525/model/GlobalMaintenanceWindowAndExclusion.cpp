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

#include <tencentcloud/tke/v20180525/model/GlobalMaintenanceWindowAndExclusion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GlobalMaintenanceWindowAndExclusion::GlobalMaintenanceWindowAndExclusion() :
    m_targetRegionsHasBeenSet(false),
    m_maintenanceTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome GlobalMaintenanceWindowAndExclusion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetRegions") && !value["TargetRegions"].IsNull())
    {
        if (!value["TargetRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.TargetRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetRegions.push_back((*itr).GetString());
        }
        m_targetRegionsHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceTime") && !value["MaintenanceTime"].IsNull())
    {
        if (!value["MaintenanceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.MaintenanceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceTime = string(value["MaintenanceTime"].GetString());
        m_maintenanceTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.DayOfWeek` is not array type"));

        const rapidjson::Value &tmpValue = value["DayOfWeek"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dayOfWeek.push_back((*itr).GetString());
        }
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("Exclusions") && !value["Exclusions"].IsNull())
    {
        if (!value["Exclusions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.Exclusions` is not array type"));

        const rapidjson::Value &tmpValue = value["Exclusions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaintenanceExclusion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exclusions.push_back(item);
        }
        m_exclusionsHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalMaintenanceWindowAndExclusion.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalMaintenanceWindowAndExclusion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetRegions.begin(); itr != m_targetRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maintenanceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintenanceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dayOfWeek.begin(); itr != m_dayOfWeek.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exclusionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exclusions.begin(); itr != m_exclusions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


vector<string> GlobalMaintenanceWindowAndExclusion::GetTargetRegions() const
{
    return m_targetRegions;
}

void GlobalMaintenanceWindowAndExclusion::SetTargetRegions(const vector<string>& _targetRegions)
{
    m_targetRegions = _targetRegions;
    m_targetRegionsHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::TargetRegionsHasBeenSet() const
{
    return m_targetRegionsHasBeenSet;
}

string GlobalMaintenanceWindowAndExclusion::GetMaintenanceTime() const
{
    return m_maintenanceTime;
}

void GlobalMaintenanceWindowAndExclusion::SetMaintenanceTime(const string& _maintenanceTime)
{
    m_maintenanceTime = _maintenanceTime;
    m_maintenanceTimeHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::MaintenanceTimeHasBeenSet() const
{
    return m_maintenanceTimeHasBeenSet;
}

int64_t GlobalMaintenanceWindowAndExclusion::GetDuration() const
{
    return m_duration;
}

void GlobalMaintenanceWindowAndExclusion::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> GlobalMaintenanceWindowAndExclusion::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void GlobalMaintenanceWindowAndExclusion::SetDayOfWeek(const vector<string>& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

vector<MaintenanceExclusion> GlobalMaintenanceWindowAndExclusion::GetExclusions() const
{
    return m_exclusions;
}

void GlobalMaintenanceWindowAndExclusion::SetExclusions(const vector<MaintenanceExclusion>& _exclusions)
{
    m_exclusions = _exclusions;
    m_exclusionsHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::ExclusionsHasBeenSet() const
{
    return m_exclusionsHasBeenSet;
}

int64_t GlobalMaintenanceWindowAndExclusion::GetID() const
{
    return m_iD;
}

void GlobalMaintenanceWindowAndExclusion::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GlobalMaintenanceWindowAndExclusion::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

