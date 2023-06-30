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

#include <tencentcloud/cdwch/v20200915/model/ScheduleStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ScheduleStrategy::ScheduleStrategy() :
    m_cosBucketNameHasBeenSet(false),
    m_retainDaysHasBeenSet(false),
    m_weekDaysHasBeenSet(false),
    m_executeHourHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_nextBackupTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScheduleStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("RetainDays") && !value["RetainDays"].IsNull())
    {
        if (!value["RetainDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.RetainDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retainDays = value["RetainDays"].GetInt64();
        m_retainDaysHasBeenSet = true;
    }

    if (value.HasMember("WeekDays") && !value["WeekDays"].IsNull())
    {
        if (!value["WeekDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.WeekDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weekDays = string(value["WeekDays"].GetString());
        m_weekDaysHasBeenSet = true;
    }

    if (value.HasMember("ExecuteHour") && !value["ExecuteHour"].IsNull())
    {
        if (!value["ExecuteHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.ExecuteHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executeHour = value["ExecuteHour"].GetInt64();
        m_executeHourHasBeenSet = true;
    }

    if (value.HasMember("ScheduleId") && !value["ScheduleId"].IsNull())
    {
        if (!value["ScheduleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.ScheduleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleId = value["ScheduleId"].GetInt64();
        m_scheduleIdHasBeenSet = true;
    }

    if (value.HasMember("NextBackupTime") && !value["NextBackupTime"].IsNull())
    {
        if (!value["NextBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleStrategy.NextBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextBackupTime = string(value["NextBackupTime"].GetString());
        m_nextBackupTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduleStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_retainDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetainDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retainDays, allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weekDays.c_str(), allocator).Move(), allocator);
    }

    if (m_executeHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeHour, allocator);
    }

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleId, allocator);
    }

    if (m_nextBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextBackupTime.c_str(), allocator).Move(), allocator);
    }

}


string ScheduleStrategy::GetCosBucketName() const
{
    return m_cosBucketName;
}

void ScheduleStrategy::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool ScheduleStrategy::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

int64_t ScheduleStrategy::GetRetainDays() const
{
    return m_retainDays;
}

void ScheduleStrategy::SetRetainDays(const int64_t& _retainDays)
{
    m_retainDays = _retainDays;
    m_retainDaysHasBeenSet = true;
}

bool ScheduleStrategy::RetainDaysHasBeenSet() const
{
    return m_retainDaysHasBeenSet;
}

string ScheduleStrategy::GetWeekDays() const
{
    return m_weekDays;
}

void ScheduleStrategy::SetWeekDays(const string& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool ScheduleStrategy::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

int64_t ScheduleStrategy::GetExecuteHour() const
{
    return m_executeHour;
}

void ScheduleStrategy::SetExecuteHour(const int64_t& _executeHour)
{
    m_executeHour = _executeHour;
    m_executeHourHasBeenSet = true;
}

bool ScheduleStrategy::ExecuteHourHasBeenSet() const
{
    return m_executeHourHasBeenSet;
}

int64_t ScheduleStrategy::GetScheduleId() const
{
    return m_scheduleId;
}

void ScheduleStrategy::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool ScheduleStrategy::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string ScheduleStrategy::GetNextBackupTime() const
{
    return m_nextBackupTime;
}

void ScheduleStrategy::SetNextBackupTime(const string& _nextBackupTime)
{
    m_nextBackupTime = _nextBackupTime;
    m_nextBackupTimeHasBeenSet = true;
}

bool ScheduleStrategy::NextBackupTimeHasBeenSet() const
{
    return m_nextBackupTimeHasBeenSet;
}

