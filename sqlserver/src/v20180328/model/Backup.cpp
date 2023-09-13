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

#include <tencentcloud/sqlserver/v20180328/model/Backup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

Backup::Backup() :
    m_fileNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_internalAddrHasBeenSet(false),
    m_externalAddrHasBeenSet(false),
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_storageStrategyHasBeenSet(false),
    m_backupWayHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_backupFormatHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_crossBackupAddrHasBeenSet(false),
    m_crossBackupStatusHasBeenSet(false)
{
}

CoreInternalOutcome Backup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InternalAddr") && !value["InternalAddr"].IsNull())
    {
        if (!value["InternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.InternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalAddr = string(value["InternalAddr"].GetString());
        m_internalAddrHasBeenSet = true;
    }

    if (value.HasMember("ExternalAddr") && !value["ExternalAddr"].IsNull())
    {
        if (!value["ExternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.ExternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalAddr = string(value["ExternalAddr"].GetString());
        m_externalAddrHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DBs") && !value["DBs"].IsNull())
    {
        if (!value["DBs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Backup.DBs` is not array type"));

        const rapidjson::Value &tmpValue = value["DBs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBs.push_back((*itr).GetString());
        }
        m_dBsHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("StorageStrategy") && !value["StorageStrategy"].IsNull())
    {
        if (!value["StorageStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.StorageStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageStrategy = value["StorageStrategy"].GetInt64();
        m_storageStrategyHasBeenSet = true;
    }

    if (value.HasMember("BackupWay") && !value["BackupWay"].IsNull())
    {
        if (!value["BackupWay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupWay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupWay = value["BackupWay"].GetInt64();
        m_backupWayHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupFormat") && !value["BackupFormat"].IsNull())
    {
        if (!value["BackupFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupFormat = string(value["BackupFormat"].GetString());
        m_backupFormatHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupAddr") && !value["CrossBackupAddr"].IsNull())
    {
        if (!value["CrossBackupAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Backup.CrossBackupAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossBackupAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CrossBackupAddr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crossBackupAddr.push_back(item);
        }
        m_crossBackupAddrHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupStatus") && !value["CrossBackupStatus"].IsNull())
    {
        if (!value["CrossBackupStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Backup.CrossBackupStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossBackupStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CrossRegionStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crossBackupStatus.push_back(item);
        }
        m_crossBackupStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Backup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
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

    if (m_internalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_externalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_dBsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_storageStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageStrategy, allocator);
    }

    if (m_backupWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupWay, allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBackupAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crossBackupAddr.begin(); itr != m_crossBackupAddr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_crossBackupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crossBackupStatus.begin(); itr != m_crossBackupStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Backup::GetFileName() const
{
    return m_fileName;
}

void Backup::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool Backup::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t Backup::GetSize() const
{
    return m_size;
}

void Backup::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Backup::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string Backup::GetStartTime() const
{
    return m_startTime;
}

void Backup::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Backup::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Backup::GetEndTime() const
{
    return m_endTime;
}

void Backup::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Backup::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Backup::GetInternalAddr() const
{
    return m_internalAddr;
}

void Backup::SetInternalAddr(const string& _internalAddr)
{
    m_internalAddr = _internalAddr;
    m_internalAddrHasBeenSet = true;
}

bool Backup::InternalAddrHasBeenSet() const
{
    return m_internalAddrHasBeenSet;
}

string Backup::GetExternalAddr() const
{
    return m_externalAddr;
}

void Backup::SetExternalAddr(const string& _externalAddr)
{
    m_externalAddr = _externalAddr;
    m_externalAddrHasBeenSet = true;
}

bool Backup::ExternalAddrHasBeenSet() const
{
    return m_externalAddrHasBeenSet;
}

uint64_t Backup::GetId() const
{
    return m_id;
}

void Backup::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Backup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Backup::GetStatus() const
{
    return m_status;
}

void Backup::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Backup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Backup::GetDBs() const
{
    return m_dBs;
}

void Backup::SetDBs(const vector<string>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool Backup::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

int64_t Backup::GetStrategy() const
{
    return m_strategy;
}

void Backup::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool Backup::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t Backup::GetStorageStrategy() const
{
    return m_storageStrategy;
}

void Backup::SetStorageStrategy(const int64_t& _storageStrategy)
{
    m_storageStrategy = _storageStrategy;
    m_storageStrategyHasBeenSet = true;
}

bool Backup::StorageStrategyHasBeenSet() const
{
    return m_storageStrategyHasBeenSet;
}

int64_t Backup::GetBackupWay() const
{
    return m_backupWay;
}

void Backup::SetBackupWay(const int64_t& _backupWay)
{
    m_backupWay = _backupWay;
    m_backupWayHasBeenSet = true;
}

bool Backup::BackupWayHasBeenSet() const
{
    return m_backupWayHasBeenSet;
}

string Backup::GetBackupName() const
{
    return m_backupName;
}

void Backup::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool Backup::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string Backup::GetGroupId() const
{
    return m_groupId;
}

void Backup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Backup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Backup::GetBackupFormat() const
{
    return m_backupFormat;
}

void Backup::SetBackupFormat(const string& _backupFormat)
{
    m_backupFormat = _backupFormat;
    m_backupFormatHasBeenSet = true;
}

bool Backup::BackupFormatHasBeenSet() const
{
    return m_backupFormatHasBeenSet;
}

string Backup::GetRegion() const
{
    return m_region;
}

void Backup::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Backup::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CrossBackupAddr> Backup::GetCrossBackupAddr() const
{
    return m_crossBackupAddr;
}

void Backup::SetCrossBackupAddr(const vector<CrossBackupAddr>& _crossBackupAddr)
{
    m_crossBackupAddr = _crossBackupAddr;
    m_crossBackupAddrHasBeenSet = true;
}

bool Backup::CrossBackupAddrHasBeenSet() const
{
    return m_crossBackupAddrHasBeenSet;
}

vector<CrossRegionStatus> Backup::GetCrossBackupStatus() const
{
    return m_crossBackupStatus;
}

void Backup::SetCrossBackupStatus(const vector<CrossRegionStatus>& _crossBackupStatus)
{
    m_crossBackupStatus = _crossBackupStatus;
    m_crossBackupStatusHasBeenSet = true;
}

bool Backup::CrossBackupStatusHasBeenSet() const
{
    return m_crossBackupStatusHasBeenSet;
}

