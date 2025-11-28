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

#include <tencentcloud/tke/v20180525/model/CreateGlobalMaintenanceWindowAndExclusionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateGlobalMaintenanceWindowAndExclusionsRequest::CreateGlobalMaintenanceWindowAndExclusionsRequest() :
    m_maintenanceTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_targetRegionsHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
}

string CreateGlobalMaintenanceWindowAndExclusionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_targetRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetRegions.begin(); itr != m_targetRegions.end(); ++itr)
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


string CreateGlobalMaintenanceWindowAndExclusionsRequest::GetMaintenanceTime() const
{
    return m_maintenanceTime;
}

void CreateGlobalMaintenanceWindowAndExclusionsRequest::SetMaintenanceTime(const string& _maintenanceTime)
{
    m_maintenanceTime = _maintenanceTime;
    m_maintenanceTimeHasBeenSet = true;
}

bool CreateGlobalMaintenanceWindowAndExclusionsRequest::MaintenanceTimeHasBeenSet() const
{
    return m_maintenanceTimeHasBeenSet;
}

int64_t CreateGlobalMaintenanceWindowAndExclusionsRequest::GetDuration() const
{
    return m_duration;
}

void CreateGlobalMaintenanceWindowAndExclusionsRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateGlobalMaintenanceWindowAndExclusionsRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<string> CreateGlobalMaintenanceWindowAndExclusionsRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void CreateGlobalMaintenanceWindowAndExclusionsRequest::SetDayOfWeek(const vector<string>& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool CreateGlobalMaintenanceWindowAndExclusionsRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

vector<string> CreateGlobalMaintenanceWindowAndExclusionsRequest::GetTargetRegions() const
{
    return m_targetRegions;
}

void CreateGlobalMaintenanceWindowAndExclusionsRequest::SetTargetRegions(const vector<string>& _targetRegions)
{
    m_targetRegions = _targetRegions;
    m_targetRegionsHasBeenSet = true;
}

bool CreateGlobalMaintenanceWindowAndExclusionsRequest::TargetRegionsHasBeenSet() const
{
    return m_targetRegionsHasBeenSet;
}

vector<MaintenanceExclusion> CreateGlobalMaintenanceWindowAndExclusionsRequest::GetExclusions() const
{
    return m_exclusions;
}

void CreateGlobalMaintenanceWindowAndExclusionsRequest::SetExclusions(const vector<MaintenanceExclusion>& _exclusions)
{
    m_exclusions = _exclusions;
    m_exclusionsHasBeenSet = true;
}

bool CreateGlobalMaintenanceWindowAndExclusionsRequest::ExclusionsHasBeenSet() const
{
    return m_exclusionsHasBeenSet;
}


