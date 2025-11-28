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

#include <tencentcloud/tke/v20180525/model/MaintenanceWindowAndExclusion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

MaintenanceWindowAndExclusion::MaintenanceWindowAndExclusion() :
    m_maintenanceTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
}

CoreInternalOutcome MaintenanceWindowAndExclusion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaintenanceTime") && !value["MaintenanceTime"].IsNull())
    {
        if (!value["MaintenanceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.MaintenanceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceTime = string(value["MaintenanceTime"].GetString());
        m_maintenanceTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.DayOfWeek` is not array type"));

        const rapidjson::Value &tmpValue = value["DayOfWeek"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dayOfWeek.push_back((*itr).GetString());
        }
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("Exclusions") && !value["Exclusions"].IsNull())
    {
        if (!value["Exclusions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindowAndExclusion.Exclusions` is not array type"));

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


    return CoreInternalOutcome(true);
}

void MaintenanceWindowAndExclusion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
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

}


string MaintenanceWindowAndExclusion::GetMaintenanceTime() const
{
    return m_maintenanceTime;
}

void MaintenanceWindowAndExclusion::SetMaintenanceTime(const string& _maintenanceTime)
{
    m_maintenanceTime = _maintenanceTime;
    m_maintenanceTimeHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::MaintenanceTimeHasBeenSet() const
{
    return m_maintenanceTimeHasBeenSet;
}

int64_t MaintenanceWindowAndExclusion::GetDuration() const
{
    return m_duration;
}

void MaintenanceWindowAndExclusion::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string MaintenanceWindowAndExclusion::GetClusterID() const
{
    return m_clusterID;
}

void MaintenanceWindowAndExclusion::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

vector<string> MaintenanceWindowAndExclusion::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void MaintenanceWindowAndExclusion::SetDayOfWeek(const vector<string>& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string MaintenanceWindowAndExclusion::GetRegion() const
{
    return m_region;
}

void MaintenanceWindowAndExclusion::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MaintenanceWindowAndExclusion::GetClusterName() const
{
    return m_clusterName;
}

void MaintenanceWindowAndExclusion::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string MaintenanceWindowAndExclusion::GetClusterVersion() const
{
    return m_clusterVersion;
}

void MaintenanceWindowAndExclusion::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

vector<MaintenanceExclusion> MaintenanceWindowAndExclusion::GetExclusions() const
{
    return m_exclusions;
}

void MaintenanceWindowAndExclusion::SetExclusions(const vector<MaintenanceExclusion>& _exclusions)
{
    m_exclusions = _exclusions;
    m_exclusionsHasBeenSet = true;
}

bool MaintenanceWindowAndExclusion::ExclusionsHasBeenSet() const
{
    return m_exclusionsHasBeenSet;
}

