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
using namespace rapidjson;
using namespace std;

RedisBackupSet::RedisBackupSet() :
    m_startTimeHasBeenSet(false),
    m_backupIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lockedHasBeenSet(false)
{
}

CoreInternalOutcome RedisBackupSet::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RedisBackupSet.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisBackupSet::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
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

