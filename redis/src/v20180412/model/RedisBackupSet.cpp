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

#include <tencentcloud/redis/v20180412/model/RedisBackupSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

RedisBackupSet::RedisBackupSet() :
    m_startTimeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_fullBackupHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome RedisBackupSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("FullBackup") && !value["FullBackup"].IsNull())
    {
        if (!value["FullBackup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.FullBackup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullBackup = value["FullBackup"].GetInt64();
        m_fullBackupHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisBackupSet.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisBackupSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_fullBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullBackup, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string RedisBackupSet::GetStartTime() const
{
    return m_startTime;
}

void RedisBackupSet::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RedisBackupSet::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RedisBackupSet::GetBackupId() const
{
    return m_backupId;
}

void RedisBackupSet::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool RedisBackupSet::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string RedisBackupSet::GetBackupType() const
{
    return m_backupType;
}

void RedisBackupSet::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool RedisBackupSet::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

int64_t RedisBackupSet::GetStatus() const
{
    return m_status;
}

void RedisBackupSet::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RedisBackupSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RedisBackupSet::GetRemark() const
{
    return m_remark;
}

void RedisBackupSet::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RedisBackupSet::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t RedisBackupSet::GetLocked() const
{
    return m_locked;
}

void RedisBackupSet::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool RedisBackupSet::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

int64_t RedisBackupSet::GetBackupSize() const
{
    return m_backupSize;
}

void RedisBackupSet::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool RedisBackupSet::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

int64_t RedisBackupSet::GetFullBackup() const
{
    return m_fullBackup;
}

void RedisBackupSet::SetFullBackup(const int64_t& _fullBackup)
{
    m_fullBackup = _fullBackup;
    m_fullBackupHasBeenSet = true;
}

bool RedisBackupSet::FullBackupHasBeenSet() const
{
    return m_fullBackupHasBeenSet;
}

int64_t RedisBackupSet::GetInstanceType() const
{
    return m_instanceType;
}

void RedisBackupSet::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RedisBackupSet::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string RedisBackupSet::GetInstanceId() const
{
    return m_instanceId;
}

void RedisBackupSet::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RedisBackupSet::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RedisBackupSet::GetInstanceName() const
{
    return m_instanceName;
}

void RedisBackupSet::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RedisBackupSet::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RedisBackupSet::GetRegion() const
{
    return m_region;
}

void RedisBackupSet::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RedisBackupSet::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RedisBackupSet::GetEndTime() const
{
    return m_endTime;
}

void RedisBackupSet::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RedisBackupSet::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RedisBackupSet::GetFileType() const
{
    return m_fileType;
}

void RedisBackupSet::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool RedisBackupSet::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string RedisBackupSet::GetExpireTime() const
{
    return m_expireTime;
}

void RedisBackupSet::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RedisBackupSet::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

