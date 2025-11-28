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

#include <tencentcloud/tke/v20180525/model/ModifyClusterMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterMaintenanceWindowAndExclusionsRequest::ModifyClusterMaintenanceWindowAndExclusionsRequest() :
    m_clusterIDHasBeenSet(false),
    m_maintenanceTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
}

string ModifyClusterMaintenanceWindowAndExclusionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintenanceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dayOfWeek.begin(); itr != m_dayOfWeek.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exclusionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exclusions.begin(); itr != m_exclusions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterMaintenanceWindowAndExclusionsRequest::GetClusterID() const
{
    return m_clusterID;
}

void ModifyClusterMaintenanceWindowAndExclusionsRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ModifyClusterMaintenanceWindowAndExclusionsRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ModifyClusterMaintenanceWindowAndExclusionsRequest::GetMaintenanceTime() const
{
    return m_maintenanceTime;
}

void ModifyClusterMaintenanceWindowAndExclusionsRequest::SetMaintenanceTime(const string& _maintenanceTime)
{
    m_maintenanceTime = _maintenanceTime;
    m_maintenanceTimeHasBeenSet = true;
}

bool ModifyClusterMaintenanceWindowAndExclusionsRequest::MaintenanceTimeHasBeenSet() const
{
    return m_maintenanceTimeHasBeenSet;
}

int64_t ModifyClusterMaintenanceWindowAndExclusionsRequest::GetDuration() const
{
    return m_duration;
}

void ModifyClusterMaintenanceWindowAndExclusionsRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ModifyClusterMaintenanceWindowAndExclusionsRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> ModifyClusterMaintenanceWindowAndExclusionsRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void ModifyClusterMaintenanceWindowAndExclusionsRequest::SetDayOfWeek(const vector<string>& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool ModifyClusterMaintenanceWindowAndExclusionsRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

vector<MaintenanceExclusion> ModifyClusterMaintenanceWindowAndExclusionsRequest::GetExclusions() const
{
    return m_exclusions;
}

void ModifyClusterMaintenanceWindowAndExclusionsRequest::SetExclusions(const vector<MaintenanceExclusion>& _exclusions)
{
    m_exclusions = _exclusions;
    m_exclusionsHasBeenSet = true;
}

bool ModifyClusterMaintenanceWindowAndExclusionsRequest::ExclusionsHasBeenSet() const
{
    return m_exclusionsHasBeenSet;
}


