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

#include <tencentcloud/tdmysql/v20211122/model/BackupPolicyModelInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupPolicyModelInput::BackupPolicyModelInput() :
    m_backupEndTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupStartTimeHasBeenSet(false),
    m_enableFullHasBeenSet(false),
    m_enableLogHasBeenSet(false),
    m_fullRetentionPeriodHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_logRetentionPeriodHasBeenSet(false),
    m_periodTimeHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

CoreInternalOutcome BackupPolicyModelInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupEndTime") && !value["BackupEndTime"].IsNull())
    {
        if (!value["BackupEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.BackupEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupEndTime = string(value["BackupEndTime"].GetString());
        m_backupEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupStartTime") && !value["BackupStartTime"].IsNull())
    {
        if (!value["BackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.BackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStartTime = string(value["BackupStartTime"].GetString());
        m_backupStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableFull") && !value["EnableFull"].IsNull())
    {
        if (!value["EnableFull"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.EnableFull` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFull = value["EnableFull"].GetInt64();
        m_enableFullHasBeenSet = true;
    }

    if (value.HasMember("EnableLog") && !value["EnableLog"].IsNull())
    {
        if (!value["EnableLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.EnableLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableLog = value["EnableLog"].GetInt64();
        m_enableLogHasBeenSet = true;
    }

    if (value.HasMember("FullRetentionPeriod") && !value["FullRetentionPeriod"].IsNull())
    {
        if (!value["FullRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.FullRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullRetentionPeriod = value["FullRetentionPeriod"].GetInt64();
        m_fullRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("LogRetentionPeriod") && !value["LogRetentionPeriod"].IsNull())
    {
        if (!value["LogRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.LogRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logRetentionPeriod = value["LogRetentionPeriod"].GetInt64();
        m_logRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("PeriodTime") && !value["PeriodTime"].IsNull())
    {
        if (!value["PeriodTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.PeriodTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodTime = string(value["PeriodTime"].GetString());
        m_periodTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelInput.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPolicyModelInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFull, allocator);
    }

    if (m_enableLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLog, allocator);
    }

    if (m_fullRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullRetentionPeriod, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logRetentionPeriod, allocator);
    }

    if (m_periodTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

}


string BackupPolicyModelInput::GetBackupEndTime() const
{
    return m_backupEndTime;
}

void BackupPolicyModelInput::SetBackupEndTime(const string& _backupEndTime)
{
    m_backupEndTime = _backupEndTime;
    m_backupEndTimeHasBeenSet = true;
}

bool BackupPolicyModelInput::BackupEndTimeHasBeenSet() const
{
    return m_backupEndTimeHasBeenSet;
}

string BackupPolicyModelInput::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupPolicyModelInput::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupPolicyModelInput::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupPolicyModelInput::GetBackupStartTime() const
{
    return m_backupStartTime;
}

void BackupPolicyModelInput::SetBackupStartTime(const string& _backupStartTime)
{
    m_backupStartTime = _backupStartTime;
    m_backupStartTimeHasBeenSet = true;
}

bool BackupPolicyModelInput::BackupStartTimeHasBeenSet() const
{
    return m_backupStartTimeHasBeenSet;
}

int64_t BackupPolicyModelInput::GetEnableFull() const
{
    return m_enableFull;
}

void BackupPolicyModelInput::SetEnableFull(const int64_t& _enableFull)
{
    m_enableFull = _enableFull;
    m_enableFullHasBeenSet = true;
}

bool BackupPolicyModelInput::EnableFullHasBeenSet() const
{
    return m_enableFullHasBeenSet;
}

int64_t BackupPolicyModelInput::GetEnableLog() const
{
    return m_enableLog;
}

void BackupPolicyModelInput::SetEnableLog(const int64_t& _enableLog)
{
    m_enableLog = _enableLog;
    m_enableLogHasBeenSet = true;
}

bool BackupPolicyModelInput::EnableLogHasBeenSet() const
{
    return m_enableLogHasBeenSet;
}

int64_t BackupPolicyModelInput::GetFullRetentionPeriod() const
{
    return m_fullRetentionPeriod;
}

void BackupPolicyModelInput::SetFullRetentionPeriod(const int64_t& _fullRetentionPeriod)
{
    m_fullRetentionPeriod = _fullRetentionPeriod;
    m_fullRetentionPeriodHasBeenSet = true;
}

bool BackupPolicyModelInput::FullRetentionPeriodHasBeenSet() const
{
    return m_fullRetentionPeriodHasBeenSet;
}

string BackupPolicyModelInput::GetInstanceId() const
{
    return m_instanceId;
}

void BackupPolicyModelInput::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupPolicyModelInput::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t BackupPolicyModelInput::GetLogRetentionPeriod() const
{
    return m_logRetentionPeriod;
}

void BackupPolicyModelInput::SetLogRetentionPeriod(const int64_t& _logRetentionPeriod)
{
    m_logRetentionPeriod = _logRetentionPeriod;
    m_logRetentionPeriodHasBeenSet = true;
}

bool BackupPolicyModelInput::LogRetentionPeriodHasBeenSet() const
{
    return m_logRetentionPeriodHasBeenSet;
}

string BackupPolicyModelInput::GetPeriodTime() const
{
    return m_periodTime;
}

void BackupPolicyModelInput::SetPeriodTime(const string& _periodTime)
{
    m_periodTime = _periodTime;
    m_periodTimeHasBeenSet = true;
}

bool BackupPolicyModelInput::PeriodTimeHasBeenSet() const
{
    return m_periodTimeHasBeenSet;
}

string BackupPolicyModelInput::GetStorageType() const
{
    return m_storageType;
}

void BackupPolicyModelInput::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool BackupPolicyModelInput::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

