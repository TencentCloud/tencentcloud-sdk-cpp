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

#include <tencentcloud/mongodb/v20190725/model/SetBackupRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SetBackupRulesRequest::SetBackupRulesRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_backupFrequencyHasBeenSet(false),
    m_notifyHasBeenSet(false),
    m_backupRetentionPeriodHasBeenSet(false),
    m_activeWeekdaysHasBeenSet(false),
    m_longTermUnitHasBeenSet(false),
    m_longTermActiveDaysHasBeenSet(false),
    m_longTermExpiredDaysHasBeenSet(false),
    m_oplogExpiredDaysHasBeenSet(false),
    m_backupVersionHasBeenSet(false),
    m_alarmWaterLevelHasBeenSet(false),
    m_longTermIntervalHasBeenSet(false),
    m_alertThresholdHasBeenSet(false)
{
}

string SetBackupRulesRequest::ToJsonString() const
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

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupMethod, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTime, allocator);
    }

    if (m_backupFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFrequency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupFrequency, allocator);
    }

    if (m_notifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notify, allocator);
    }

    if (m_backupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupRetentionPeriod, allocator);
    }

    if (m_activeWeekdaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveWeekdays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activeWeekdays.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_longTermUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermActiveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermActiveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_longTermActiveDays.c_str(), allocator).Move(), allocator);
    }

    if (m_longTermExpiredDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermExpiredDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_longTermExpiredDays, allocator);
    }

    if (m_oplogExpiredDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OplogExpiredDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oplogExpiredDays, allocator);
    }

    if (m_backupVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupVersion, allocator);
    }

    if (m_alarmWaterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWaterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmWaterLevel, allocator);
    }

    if (m_longTermIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_longTermInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_alertThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertThreshold, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetBackupRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetBackupRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetBackupRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void SetBackupRulesRequest::SetBackupMethod(const uint64_t& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupTime() const
{
    return m_backupTime;
}

void SetBackupRulesRequest::SetBackupTime(const uint64_t& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupFrequency() const
{
    return m_backupFrequency;
}

void SetBackupRulesRequest::SetBackupFrequency(const uint64_t& _backupFrequency)
{
    m_backupFrequency = _backupFrequency;
    m_backupFrequencyHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupFrequencyHasBeenSet() const
{
    return m_backupFrequencyHasBeenSet;
}

bool SetBackupRulesRequest::GetNotify() const
{
    return m_notify;
}

void SetBackupRulesRequest::SetNotify(const bool& _notify)
{
    m_notify = _notify;
    m_notifyHasBeenSet = true;
}

bool SetBackupRulesRequest::NotifyHasBeenSet() const
{
    return m_notifyHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupRetentionPeriod() const
{
    return m_backupRetentionPeriod;
}

void SetBackupRulesRequest::SetBackupRetentionPeriod(const uint64_t& _backupRetentionPeriod)
{
    m_backupRetentionPeriod = _backupRetentionPeriod;
    m_backupRetentionPeriodHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupRetentionPeriodHasBeenSet() const
{
    return m_backupRetentionPeriodHasBeenSet;
}

string SetBackupRulesRequest::GetActiveWeekdays() const
{
    return m_activeWeekdays;
}

void SetBackupRulesRequest::SetActiveWeekdays(const string& _activeWeekdays)
{
    m_activeWeekdays = _activeWeekdays;
    m_activeWeekdaysHasBeenSet = true;
}

bool SetBackupRulesRequest::ActiveWeekdaysHasBeenSet() const
{
    return m_activeWeekdaysHasBeenSet;
}

string SetBackupRulesRequest::GetLongTermUnit() const
{
    return m_longTermUnit;
}

void SetBackupRulesRequest::SetLongTermUnit(const string& _longTermUnit)
{
    m_longTermUnit = _longTermUnit;
    m_longTermUnitHasBeenSet = true;
}

bool SetBackupRulesRequest::LongTermUnitHasBeenSet() const
{
    return m_longTermUnitHasBeenSet;
}

string SetBackupRulesRequest::GetLongTermActiveDays() const
{
    return m_longTermActiveDays;
}

void SetBackupRulesRequest::SetLongTermActiveDays(const string& _longTermActiveDays)
{
    m_longTermActiveDays = _longTermActiveDays;
    m_longTermActiveDaysHasBeenSet = true;
}

bool SetBackupRulesRequest::LongTermActiveDaysHasBeenSet() const
{
    return m_longTermActiveDaysHasBeenSet;
}

int64_t SetBackupRulesRequest::GetLongTermExpiredDays() const
{
    return m_longTermExpiredDays;
}

void SetBackupRulesRequest::SetLongTermExpiredDays(const int64_t& _longTermExpiredDays)
{
    m_longTermExpiredDays = _longTermExpiredDays;
    m_longTermExpiredDaysHasBeenSet = true;
}

bool SetBackupRulesRequest::LongTermExpiredDaysHasBeenSet() const
{
    return m_longTermExpiredDaysHasBeenSet;
}

int64_t SetBackupRulesRequest::GetOplogExpiredDays() const
{
    return m_oplogExpiredDays;
}

void SetBackupRulesRequest::SetOplogExpiredDays(const int64_t& _oplogExpiredDays)
{
    m_oplogExpiredDays = _oplogExpiredDays;
    m_oplogExpiredDaysHasBeenSet = true;
}

bool SetBackupRulesRequest::OplogExpiredDaysHasBeenSet() const
{
    return m_oplogExpiredDaysHasBeenSet;
}

int64_t SetBackupRulesRequest::GetBackupVersion() const
{
    return m_backupVersion;
}

void SetBackupRulesRequest::SetBackupVersion(const int64_t& _backupVersion)
{
    m_backupVersion = _backupVersion;
    m_backupVersionHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupVersionHasBeenSet() const
{
    return m_backupVersionHasBeenSet;
}

int64_t SetBackupRulesRequest::GetAlarmWaterLevel() const
{
    return m_alarmWaterLevel;
}

void SetBackupRulesRequest::SetAlarmWaterLevel(const int64_t& _alarmWaterLevel)
{
    m_alarmWaterLevel = _alarmWaterLevel;
    m_alarmWaterLevelHasBeenSet = true;
}

bool SetBackupRulesRequest::AlarmWaterLevelHasBeenSet() const
{
    return m_alarmWaterLevelHasBeenSet;
}

string SetBackupRulesRequest::GetLongTermInterval() const
{
    return m_longTermInterval;
}

void SetBackupRulesRequest::SetLongTermInterval(const string& _longTermInterval)
{
    m_longTermInterval = _longTermInterval;
    m_longTermIntervalHasBeenSet = true;
}

bool SetBackupRulesRequest::LongTermIntervalHasBeenSet() const
{
    return m_longTermIntervalHasBeenSet;
}

int64_t SetBackupRulesRequest::GetAlertThreshold() const
{
    return m_alertThreshold;
}

void SetBackupRulesRequest::SetAlertThreshold(const int64_t& _alertThreshold)
{
    m_alertThreshold = _alertThreshold;
    m_alertThresholdHasBeenSet = true;
}

bool SetBackupRulesRequest::AlertThresholdHasBeenSet() const
{
    return m_alertThresholdHasBeenSet;
}


