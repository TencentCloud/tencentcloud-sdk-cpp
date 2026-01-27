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

#include <tencentcloud/cynosdb/v20190107/model/BackupConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupConfigInfo::BackupConfigInfo() :
    m_backupCustomAutoTimeHasBeenSet(false),
    m_backupTimeBegHasBeenSet(false),
    m_backupTimeEndHasBeenSet(false),
    m_backupWeekDaysHasBeenSet(false),
    m_backupIntervalTimeHasBeenSet(false),
    m_reserveDurationHasBeenSet(false),
    m_crossRegionsEnableHasBeenSet(false),
    m_crossRegionsHasBeenSet(false),
    m_backupTriggerStrategyHasBeenSet(false)
{
}

CoreInternalOutcome BackupConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupCustomAutoTime") && !value["BackupCustomAutoTime"].IsNull())
    {
        if (!value["BackupCustomAutoTime"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupCustomAutoTime` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backupCustomAutoTime = value["BackupCustomAutoTime"].GetBool();
        m_backupCustomAutoTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupTimeBeg") && !value["BackupTimeBeg"].IsNull())
    {
        if (!value["BackupTimeBeg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupTimeBeg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeBeg = value["BackupTimeBeg"].GetUint64();
        m_backupTimeBegHasBeenSet = true;
    }

    if (value.HasMember("BackupTimeEnd") && !value["BackupTimeEnd"].IsNull())
    {
        if (!value["BackupTimeEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupTimeEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupTimeEnd = value["BackupTimeEnd"].GetUint64();
        m_backupTimeEndHasBeenSet = true;
    }

    if (value.HasMember("BackupWeekDays") && !value["BackupWeekDays"].IsNull())
    {
        if (!value["BackupWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupWeekDays` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupIntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupIntervalTime = value["BackupIntervalTime"].GetInt64();
        m_backupIntervalTimeHasBeenSet = true;
    }

    if (value.HasMember("ReserveDuration") && !value["ReserveDuration"].IsNull())
    {
        if (!value["ReserveDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.ReserveDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reserveDuration = value["ReserveDuration"].GetUint64();
        m_reserveDurationHasBeenSet = true;
    }

    if (value.HasMember("CrossRegionsEnable") && !value["CrossRegionsEnable"].IsNull())
    {
        if (!value["CrossRegionsEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.CrossRegionsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegionsEnable = string(value["CrossRegionsEnable"].GetString());
        m_crossRegionsEnableHasBeenSet = true;
    }

    if (value.HasMember("CrossRegions") && !value["CrossRegions"].IsNull())
    {
        if (!value["CrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.CrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_crossRegions.push_back((*itr).GetString());
        }
        m_crossRegionsHasBeenSet = true;
    }

    if (value.HasMember("BackupTriggerStrategy") && !value["BackupTriggerStrategy"].IsNull())
    {
        if (!value["BackupTriggerStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupConfigInfo.BackupTriggerStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTriggerStrategy = string(value["BackupTriggerStrategy"].GetString());
        m_backupTriggerStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_crossRegionsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegionsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossRegionsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_crossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_crossRegions.begin(); itr != m_crossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupTriggerStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTriggerStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTriggerStrategy.c_str(), allocator).Move(), allocator);
    }

}


bool BackupConfigInfo::GetBackupCustomAutoTime() const
{
    return m_backupCustomAutoTime;
}

void BackupConfigInfo::SetBackupCustomAutoTime(const bool& _backupCustomAutoTime)
{
    m_backupCustomAutoTime = _backupCustomAutoTime;
    m_backupCustomAutoTimeHasBeenSet = true;
}

bool BackupConfigInfo::BackupCustomAutoTimeHasBeenSet() const
{
    return m_backupCustomAutoTimeHasBeenSet;
}

uint64_t BackupConfigInfo::GetBackupTimeBeg() const
{
    return m_backupTimeBeg;
}

void BackupConfigInfo::SetBackupTimeBeg(const uint64_t& _backupTimeBeg)
{
    m_backupTimeBeg = _backupTimeBeg;
    m_backupTimeBegHasBeenSet = true;
}

bool BackupConfigInfo::BackupTimeBegHasBeenSet() const
{
    return m_backupTimeBegHasBeenSet;
}

uint64_t BackupConfigInfo::GetBackupTimeEnd() const
{
    return m_backupTimeEnd;
}

void BackupConfigInfo::SetBackupTimeEnd(const uint64_t& _backupTimeEnd)
{
    m_backupTimeEnd = _backupTimeEnd;
    m_backupTimeEndHasBeenSet = true;
}

bool BackupConfigInfo::BackupTimeEndHasBeenSet() const
{
    return m_backupTimeEndHasBeenSet;
}

vector<string> BackupConfigInfo::GetBackupWeekDays() const
{
    return m_backupWeekDays;
}

void BackupConfigInfo::SetBackupWeekDays(const vector<string>& _backupWeekDays)
{
    m_backupWeekDays = _backupWeekDays;
    m_backupWeekDaysHasBeenSet = true;
}

bool BackupConfigInfo::BackupWeekDaysHasBeenSet() const
{
    return m_backupWeekDaysHasBeenSet;
}

int64_t BackupConfigInfo::GetBackupIntervalTime() const
{
    return m_backupIntervalTime;
}

void BackupConfigInfo::SetBackupIntervalTime(const int64_t& _backupIntervalTime)
{
    m_backupIntervalTime = _backupIntervalTime;
    m_backupIntervalTimeHasBeenSet = true;
}

bool BackupConfigInfo::BackupIntervalTimeHasBeenSet() const
{
    return m_backupIntervalTimeHasBeenSet;
}

uint64_t BackupConfigInfo::GetReserveDuration() const
{
    return m_reserveDuration;
}

void BackupConfigInfo::SetReserveDuration(const uint64_t& _reserveDuration)
{
    m_reserveDuration = _reserveDuration;
    m_reserveDurationHasBeenSet = true;
}

bool BackupConfigInfo::ReserveDurationHasBeenSet() const
{
    return m_reserveDurationHasBeenSet;
}

string BackupConfigInfo::GetCrossRegionsEnable() const
{
    return m_crossRegionsEnable;
}

void BackupConfigInfo::SetCrossRegionsEnable(const string& _crossRegionsEnable)
{
    m_crossRegionsEnable = _crossRegionsEnable;
    m_crossRegionsEnableHasBeenSet = true;
}

bool BackupConfigInfo::CrossRegionsEnableHasBeenSet() const
{
    return m_crossRegionsEnableHasBeenSet;
}

vector<string> BackupConfigInfo::GetCrossRegions() const
{
    return m_crossRegions;
}

void BackupConfigInfo::SetCrossRegions(const vector<string>& _crossRegions)
{
    m_crossRegions = _crossRegions;
    m_crossRegionsHasBeenSet = true;
}

bool BackupConfigInfo::CrossRegionsHasBeenSet() const
{
    return m_crossRegionsHasBeenSet;
}

string BackupConfigInfo::GetBackupTriggerStrategy() const
{
    return m_backupTriggerStrategy;
}

void BackupConfigInfo::SetBackupTriggerStrategy(const string& _backupTriggerStrategy)
{
    m_backupTriggerStrategy = _backupTriggerStrategy;
    m_backupTriggerStrategyHasBeenSet = true;
}

bool BackupConfigInfo::BackupTriggerStrategyHasBeenSet() const
{
    return m_backupTriggerStrategyHasBeenSet;
}

