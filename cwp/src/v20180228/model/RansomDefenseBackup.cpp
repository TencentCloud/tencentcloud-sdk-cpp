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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseBackup::RansomDefenseBackup() :
    m_backupTimeHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_snapshotIdsHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_strategyStatusHasBeenSet(false),
    m_strategyNameHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.EventStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = value["EventStatus"].GetUint64();
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.BackupStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = value["BackupStatus"].GetUint64();
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.DiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetUint64();
        m_diskCountHasBeenSet = true;
    }

    if (value.HasMember("Disks") && !value["Disks"].IsNull())
    {
        if (!value["Disks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.Disks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disks = string(value["Disks"].GetString());
        m_disksHasBeenSet = true;
    }

    if (value.HasMember("SnapshotIds") && !value["SnapshotIds"].IsNull())
    {
        if (!value["SnapshotIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.SnapshotIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotIds = string(value["SnapshotIds"].GetString());
        m_snapshotIdsHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyStatus") && !value["StrategyStatus"].IsNull())
    {
        if (!value["StrategyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.StrategyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyStatus = value["StrategyStatus"].GetUint64();
        m_strategyStatusHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseBackup.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStatus, allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStatus, allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_disksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disks.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotIds.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_strategyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyStatus, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

}


string RansomDefenseBackup::GetBackupTime() const
{
    return m_backupTime;
}

void RansomDefenseBackup::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool RansomDefenseBackup::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

uint64_t RansomDefenseBackup::GetEventStatus() const
{
    return m_eventStatus;
}

void RansomDefenseBackup::SetEventStatus(const uint64_t& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool RansomDefenseBackup::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

uint64_t RansomDefenseBackup::GetBackupStatus() const
{
    return m_backupStatus;
}

void RansomDefenseBackup::SetBackupStatus(const uint64_t& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool RansomDefenseBackup::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

uint64_t RansomDefenseBackup::GetDiskCount() const
{
    return m_diskCount;
}

void RansomDefenseBackup::SetDiskCount(const uint64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool RansomDefenseBackup::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

string RansomDefenseBackup::GetDisks() const
{
    return m_disks;
}

void RansomDefenseBackup::SetDisks(const string& _disks)
{
    m_disks = _disks;
    m_disksHasBeenSet = true;
}

bool RansomDefenseBackup::DisksHasBeenSet() const
{
    return m_disksHasBeenSet;
}

string RansomDefenseBackup::GetSnapshotIds() const
{
    return m_snapshotIds;
}

void RansomDefenseBackup::SetSnapshotIds(const string& _snapshotIds)
{
    m_snapshotIds = _snapshotIds;
    m_snapshotIdsHasBeenSet = true;
}

bool RansomDefenseBackup::SnapshotIdsHasBeenSet() const
{
    return m_snapshotIdsHasBeenSet;
}

uint64_t RansomDefenseBackup::GetStrategyId() const
{
    return m_strategyId;
}

void RansomDefenseBackup::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool RansomDefenseBackup::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

uint64_t RansomDefenseBackup::GetStrategyStatus() const
{
    return m_strategyStatus;
}

void RansomDefenseBackup::SetStrategyStatus(const uint64_t& _strategyStatus)
{
    m_strategyStatus = _strategyStatus;
    m_strategyStatusHasBeenSet = true;
}

bool RansomDefenseBackup::StrategyStatusHasBeenSet() const
{
    return m_strategyStatusHasBeenSet;
}

string RansomDefenseBackup::GetStrategyName() const
{
    return m_strategyName;
}

void RansomDefenseBackup::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool RansomDefenseBackup::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

