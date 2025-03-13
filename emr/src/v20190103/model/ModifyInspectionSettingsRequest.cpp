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

#include <tencentcloud/emr/v20190103/model/ModifyInspectionSettingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyInspectionSettingsRequest::ModifyInspectionSettingsRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_clockHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

string ModifyInspectionSettingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_settingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Settings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_settings.begin(); itr != m_settings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_clockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clock.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfWeek.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInspectionSettingsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInspectionSettingsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetType() const
{
    return m_type;
}

void ModifyInspectionSettingsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<InspectionTaskSettings> ModifyInspectionSettingsRequest::GetSettings() const
{
    return m_settings;
}

void ModifyInspectionSettingsRequest::SetSettings(const vector<InspectionTaskSettings>& _settings)
{
    m_settings = _settings;
    m_settingsHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::SettingsHasBeenSet() const
{
    return m_settingsHasBeenSet;
}

int64_t ModifyInspectionSettingsRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyInspectionSettingsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ModifyInspectionSettingsRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyInspectionSettingsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetStrategy() const
{
    return m_strategy;
}

void ModifyInspectionSettingsRequest::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetClock() const
{
    return m_clock;
}

void ModifyInspectionSettingsRequest::SetClock(const string& _clock)
{
    m_clock = _clock;
    m_clockHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::ClockHasBeenSet() const
{
    return m_clockHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void ModifyInspectionSettingsRequest::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void ModifyInspectionSettingsRequest::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

string ModifyInspectionSettingsRequest::GetJobId() const
{
    return m_jobId;
}

void ModifyInspectionSettingsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifyInspectionSettingsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}


