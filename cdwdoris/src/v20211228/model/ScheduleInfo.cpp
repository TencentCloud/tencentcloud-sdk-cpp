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

#include <tencentcloud/cdwdoris/v20211228/model/ScheduleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ScheduleInfo::ScheduleInfo() :
    m_effectivePeriodHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_scheduleDataHasBeenSet(false),
    m_scheduleHourHasBeenSet(false),
    m_scheduleMinHasBeenSet(false),
    m_backupScopeHasBeenSet(false),
    m_backupDatabaseHasBeenSet(false)
{
}

CoreInternalOutcome ScheduleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EffectivePeriod") && !value["EffectivePeriod"].IsNull())
    {
        if (!value["EffectivePeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.EffectivePeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectivePeriod = string(value["EffectivePeriod"].GetString());
        m_effectivePeriodHasBeenSet = true;
    }

    if (value.HasMember("ScheduleType") && !value["ScheduleType"].IsNull())
    {
        if (!value["ScheduleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.ScheduleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleType = string(value["ScheduleType"].GetString());
        m_scheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleData") && !value["ScheduleData"].IsNull())
    {
        if (!value["ScheduleData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.ScheduleData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleData = string(value["ScheduleData"].GetString());
        m_scheduleDataHasBeenSet = true;
    }

    if (value.HasMember("ScheduleHour") && !value["ScheduleHour"].IsNull())
    {
        if (!value["ScheduleHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.ScheduleHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleHour = value["ScheduleHour"].GetInt64();
        m_scheduleHourHasBeenSet = true;
    }

    if (value.HasMember("ScheduleMin") && !value["ScheduleMin"].IsNull())
    {
        if (!value["ScheduleMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.ScheduleMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleMin = value["ScheduleMin"].GetInt64();
        m_scheduleMinHasBeenSet = true;
    }

    if (value.HasMember("BackupScope") && !value["BackupScope"].IsNull())
    {
        if (!value["BackupScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.BackupScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupScope = string(value["BackupScope"].GetString());
        m_backupScopeHasBeenSet = true;
    }

    if (value.HasMember("BackupDatabase") && !value["BackupDatabase"].IsNull())
    {
        if (!value["BackupDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleInfo.BackupDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupDatabase = string(value["BackupDatabase"].GetString());
        m_backupDatabaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_effectivePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectivePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectivePeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleData.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleHour, allocator);
    }

    if (m_scheduleMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleMin, allocator);
    }

    if (m_backupScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupScope.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupDatabase.c_str(), allocator).Move(), allocator);
    }

}


string ScheduleInfo::GetEffectivePeriod() const
{
    return m_effectivePeriod;
}

void ScheduleInfo::SetEffectivePeriod(const string& _effectivePeriod)
{
    m_effectivePeriod = _effectivePeriod;
    m_effectivePeriodHasBeenSet = true;
}

bool ScheduleInfo::EffectivePeriodHasBeenSet() const
{
    return m_effectivePeriodHasBeenSet;
}

string ScheduleInfo::GetScheduleType() const
{
    return m_scheduleType;
}

void ScheduleInfo::SetScheduleType(const string& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool ScheduleInfo::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

string ScheduleInfo::GetScheduleData() const
{
    return m_scheduleData;
}

void ScheduleInfo::SetScheduleData(const string& _scheduleData)
{
    m_scheduleData = _scheduleData;
    m_scheduleDataHasBeenSet = true;
}

bool ScheduleInfo::ScheduleDataHasBeenSet() const
{
    return m_scheduleDataHasBeenSet;
}

int64_t ScheduleInfo::GetScheduleHour() const
{
    return m_scheduleHour;
}

void ScheduleInfo::SetScheduleHour(const int64_t& _scheduleHour)
{
    m_scheduleHour = _scheduleHour;
    m_scheduleHourHasBeenSet = true;
}

bool ScheduleInfo::ScheduleHourHasBeenSet() const
{
    return m_scheduleHourHasBeenSet;
}

int64_t ScheduleInfo::GetScheduleMin() const
{
    return m_scheduleMin;
}

void ScheduleInfo::SetScheduleMin(const int64_t& _scheduleMin)
{
    m_scheduleMin = _scheduleMin;
    m_scheduleMinHasBeenSet = true;
}

bool ScheduleInfo::ScheduleMinHasBeenSet() const
{
    return m_scheduleMinHasBeenSet;
}

string ScheduleInfo::GetBackupScope() const
{
    return m_backupScope;
}

void ScheduleInfo::SetBackupScope(const string& _backupScope)
{
    m_backupScope = _backupScope;
    m_backupScopeHasBeenSet = true;
}

bool ScheduleInfo::BackupScopeHasBeenSet() const
{
    return m_backupScopeHasBeenSet;
}

string ScheduleInfo::GetBackupDatabase() const
{
    return m_backupDatabase;
}

void ScheduleInfo::SetBackupDatabase(const string& _backupDatabase)
{
    m_backupDatabase = _backupDatabase;
    m_backupDatabaseHasBeenSet = true;
}

bool ScheduleInfo::BackupDatabaseHasBeenSet() const
{
    return m_backupDatabaseHasBeenSet;
}

