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

#include <tencentcloud/tse/v20201207/model/MaintenanceWindow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

MaintenanceWindow::MaintenanceWindow() :
    m_timeZoneHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome MaintenanceWindow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindow.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindow.DayOfWeek` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfWeek = value["DayOfWeek"].GetInt64();
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindow.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindow.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaintenanceWindow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayOfWeek, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string MaintenanceWindow::GetTimeZone() const
{
    return m_timeZone;
}

void MaintenanceWindow::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool MaintenanceWindow::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

int64_t MaintenanceWindow::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void MaintenanceWindow::SetDayOfWeek(const int64_t& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool MaintenanceWindow::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string MaintenanceWindow::GetStartTime() const
{
    return m_startTime;
}

void MaintenanceWindow::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MaintenanceWindow::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MaintenanceWindow::GetEndTime() const
{
    return m_endTime;
}

void MaintenanceWindow::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MaintenanceWindow::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

