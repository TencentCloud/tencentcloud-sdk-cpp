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

#include <tencentcloud/cynosdb/v20190107/model/SnapshotBackupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SnapshotBackupConfig::SnapshotBackupConfig() :
    m_backupCustomAutoTimeHasBeenSet(false),
    m_backupTimeBegHasBeenSet(false),
    m_backupTimeEndHasBeenSet(false),
    m_backupWeekDaysHasBeenSet(false),
    m_backupIntervalTimeHasBeenSet(false),
    m_reserveDurationHasBeenSet(false),
    m_backupTriggerStrategyHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotBackupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupCustomAutoTime") && !value["BackupCustomAutoTime"].IsNull())
    {
        if (!value["BackupCustomAutoTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupCustomAutoTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backupCustomAutoTime = value["BackupCustomAutoTime"].GetBool();
        m_backupCustomAutoTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupTimeBeg") && !value["BackupTimeBeg"].IsNull())
    {
        if (!value["BackupTimeBeg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupTimeBeg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeBeg = value["BackupTimeBeg"].GetUint64();
        m_backupTimeBegHasBeenSet = true;
    }

    if (value.HasMember("BackupTimeEnd") && !value["BackupTimeEnd"].IsNull())
    {
        if (!value["BackupTimeEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupTimeEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeEnd = value["BackupTimeEnd"].GetUint64();
        m_backupTimeEndHasBeenSet = true;
    }

    if (value.HasMember("BackupWeekDays") && !value["BackupWeekDays"].IsNull())
    {
        if (!value["BackupWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupWeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupWeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupWeekDays.push_back((*itr).GetString());
        }
        m_backupWeekDaysHasBeenSet = true;
    }

    if (value.HasMember("BackupIntervalTime") && !value["BackupIntervalTime"].IsNull())
    {
        if (!value["BackupIntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupIntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupIntervalTime = value["BackupIntervalTime"].GetInt64();
        m_backupIntervalTimeHasBeenSet = true;
    }

    if (value.HasMember("ReserveDuration") && !value["ReserveDuration"].IsNull())
    {
        if (!value["ReserveDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.ReserveDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDuration = value["ReserveDuration"].GetUint64();
        m_reserveDurationHasBeenSet = true;
    }

    if (value.HasMember("BackupTriggerStrategy") && !value["BackupTriggerStrategy"].IsNull())
    {
        if (!value["BackupTriggerStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotBackupConfig.BackupTriggerStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTriggerStrategy = string(value["BackupTriggerStrategy"].GetString());
        m_backupTriggerStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotBackupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupCustomAutoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCustomAutoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCustomAutoTime, allocator);
    }

    if (m_backupTimeBegHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeBeg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTimeBeg, allocator);
    }

    if (m_backupTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupTimeEnd, allocator);
    }

    if (m_backupWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupWeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupWeekDays.begin(); itr != m_backupWeekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupIntervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupIntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupIntervalTime, allocator);
    }

    if (m_reserveDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveDuration, allocator);
    }

    if (m_backupTriggerStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTriggerStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTriggerStrategy.c_str(), allocator).Move(), allocator);
    }

}


bool SnapshotBackupConfig::GetBackupCustomAutoTime() const
{
    return m_backupCustomAutoTime;
}

void SnapshotBackupConfig::SetBackupCustomAutoTime(const bool& _backupCustomAutoTime)
{
    m_backupCustomAutoTime = _backupCustomAutoTime;
    m_backupCustomAutoTimeHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupCustomAutoTimeHasBeenSet() const
{
    return m_backupCustomAutoTimeHasBeenSet;
}

uint64_t SnapshotBackupConfig::GetBackupTimeBeg() const
{
    return m_backupTimeBeg;
}

void SnapshotBackupConfig::SetBackupTimeBeg(const uint64_t& _backupTimeBeg)
{
    m_backupTimeBeg = _backupTimeBeg;
    m_backupTimeBegHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupTimeBegHasBeenSet() const
{
    return m_backupTimeBegHasBeenSet;
}

uint64_t SnapshotBackupConfig::GetBackupTimeEnd() const
{
    return m_backupTimeEnd;
}

void SnapshotBackupConfig::SetBackupTimeEnd(const uint64_t& _backupTimeEnd)
{
    m_backupTimeEnd = _backupTimeEnd;
    m_backupTimeEndHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupTimeEndHasBeenSet() const
{
    return m_backupTimeEndHasBeenSet;
}

vector<string> SnapshotBackupConfig::GetBackupWeekDays() const
{
    return m_backupWeekDays;
}

void SnapshotBackupConfig::SetBackupWeekDays(const vector<string>& _backupWeekDays)
{
    m_backupWeekDays = _backupWeekDays;
    m_backupWeekDaysHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupWeekDaysHasBeenSet() const
{
    return m_backupWeekDaysHasBeenSet;
}

int64_t SnapshotBackupConfig::GetBackupIntervalTime() const
{
    return m_backupIntervalTime;
}

void SnapshotBackupConfig::SetBackupIntervalTime(const int64_t& _backupIntervalTime)
{
    m_backupIntervalTime = _backupIntervalTime;
    m_backupIntervalTimeHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupIntervalTimeHasBeenSet() const
{
    return m_backupIntervalTimeHasBeenSet;
}

uint64_t SnapshotBackupConfig::GetReserveDuration() const
{
    return m_reserveDuration;
}

void SnapshotBackupConfig::SetReserveDuration(const uint64_t& _reserveDuration)
{
    m_reserveDuration = _reserveDuration;
    m_reserveDurationHasBeenSet = true;
}

bool SnapshotBackupConfig::ReserveDurationHasBeenSet() const
{
    return m_reserveDurationHasBeenSet;
}

string SnapshotBackupConfig::GetBackupTriggerStrategy() const
{
    return m_backupTriggerStrategy;
}

void SnapshotBackupConfig::SetBackupTriggerStrategy(const string& _backupTriggerStrategy)
{
    m_backupTriggerStrategy = _backupTriggerStrategy;
    m_backupTriggerStrategyHasBeenSet = true;
}

bool SnapshotBackupConfig::BackupTriggerStrategyHasBeenSet() const
{
    return m_backupTriggerStrategyHasBeenSet;
}

