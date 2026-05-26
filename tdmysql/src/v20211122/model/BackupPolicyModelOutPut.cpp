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

#include <tencentcloud/tdmysql/v20211122/model/BackupPolicyModelOutPut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupPolicyModelOutPut::BackupPolicyModelOutPut() :
    m_backupEndTimeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupStartTimeHasBeenSet(false),
    m_dBTypeHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_enableFullHasBeenSet(false),
    m_enableLogHasBeenSet(false),
    m_expectedNextBackupPeriodHasBeenSet(false),
    m_fullRetentionPeriodHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_logRetentionPeriodHasBeenSet(false),
    m_periodTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_periodTypeHasBeenSet(false)
{
}

CoreInternalOutcome BackupPolicyModelOutPut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupEndTime") && !value["BackupEndTime"].IsNull())
    {
        if (!value["BackupEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.BackupEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupEndTime = string(value["BackupEndTime"].GetString());
        m_backupEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupStartTime") && !value["BackupStartTime"].IsNull())
    {
        if (!value["BackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.BackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStartTime = string(value["BackupStartTime"].GetString());
        m_backupStartTimeHasBeenSet = true;
    }

    if (value.HasMember("DBType") && !value["DBType"].IsNull())
    {
        if (!value["DBType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.DBType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBType = string(value["DBType"].GetString());
        m_dBTypeHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("EnableFull") && !value["EnableFull"].IsNull())
    {
        if (!value["EnableFull"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.EnableFull` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFull = value["EnableFull"].GetInt64();
        m_enableFullHasBeenSet = true;
    }

    if (value.HasMember("EnableLog") && !value["EnableLog"].IsNull())
    {
        if (!value["EnableLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.EnableLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableLog = value["EnableLog"].GetInt64();
        m_enableLogHasBeenSet = true;
    }

    if (value.HasMember("ExpectedNextBackupPeriod") && !value["ExpectedNextBackupPeriod"].IsNull())
    {
        if (!value["ExpectedNextBackupPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.ExpectedNextBackupPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedNextBackupPeriod = string(value["ExpectedNextBackupPeriod"].GetString());
        m_expectedNextBackupPeriodHasBeenSet = true;
    }

    if (value.HasMember("FullRetentionPeriod") && !value["FullRetentionPeriod"].IsNull())
    {
        if (!value["FullRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.FullRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullRetentionPeriod = value["FullRetentionPeriod"].GetInt64();
        m_fullRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("LogRetentionPeriod") && !value["LogRetentionPeriod"].IsNull())
    {
        if (!value["LogRetentionPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.LogRetentionPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logRetentionPeriod = value["LogRetentionPeriod"].GetInt64();
        m_logRetentionPeriodHasBeenSet = true;
    }

    if (value.HasMember("PeriodTime") && !value["PeriodTime"].IsNull())
    {
        if (!value["PeriodTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.PeriodTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodTime = string(value["PeriodTime"].GetString());
        m_periodTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyModelOutPut.PeriodType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = value["PeriodType"].GetInt64();
        m_periodTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPolicyModelOutPut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dBTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBType.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
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

    if (m_expectedNextBackupPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedNextBackupPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedNextBackupPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_fullRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullRetentionPeriod, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodType, allocator);
    }

}


string BackupPolicyModelOutPut::GetBackupEndTime() const
{
    return m_backupEndTime;
}

void BackupPolicyModelOutPut::SetBackupEndTime(const string& _backupEndTime)
{
    m_backupEndTime = _backupEndTime;
    m_backupEndTimeHasBeenSet = true;
}

bool BackupPolicyModelOutPut::BackupEndTimeHasBeenSet() const
{
    return m_backupEndTimeHasBeenSet;
}

string BackupPolicyModelOutPut::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupPolicyModelOutPut::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupPolicyModelOutPut::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupPolicyModelOutPut::GetBackupStartTime() const
{
    return m_backupStartTime;
}

void BackupPolicyModelOutPut::SetBackupStartTime(const string& _backupStartTime)
{
    m_backupStartTime = _backupStartTime;
    m_backupStartTimeHasBeenSet = true;
}

bool BackupPolicyModelOutPut::BackupStartTimeHasBeenSet() const
{
    return m_backupStartTimeHasBeenSet;
}

string BackupPolicyModelOutPut::GetDBType() const
{
    return m_dBType;
}

void BackupPolicyModelOutPut::SetDBType(const string& _dBType)
{
    m_dBType = _dBType;
    m_dBTypeHasBeenSet = true;
}

bool BackupPolicyModelOutPut::DBTypeHasBeenSet() const
{
    return m_dBTypeHasBeenSet;
}

string BackupPolicyModelOutPut::GetDBVersion() const
{
    return m_dBVersion;
}

void BackupPolicyModelOutPut::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool BackupPolicyModelOutPut::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetEnableFull() const
{
    return m_enableFull;
}

void BackupPolicyModelOutPut::SetEnableFull(const int64_t& _enableFull)
{
    m_enableFull = _enableFull;
    m_enableFullHasBeenSet = true;
}

bool BackupPolicyModelOutPut::EnableFullHasBeenSet() const
{
    return m_enableFullHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetEnableLog() const
{
    return m_enableLog;
}

void BackupPolicyModelOutPut::SetEnableLog(const int64_t& _enableLog)
{
    m_enableLog = _enableLog;
    m_enableLogHasBeenSet = true;
}

bool BackupPolicyModelOutPut::EnableLogHasBeenSet() const
{
    return m_enableLogHasBeenSet;
}

string BackupPolicyModelOutPut::GetExpectedNextBackupPeriod() const
{
    return m_expectedNextBackupPeriod;
}

void BackupPolicyModelOutPut::SetExpectedNextBackupPeriod(const string& _expectedNextBackupPeriod)
{
    m_expectedNextBackupPeriod = _expectedNextBackupPeriod;
    m_expectedNextBackupPeriodHasBeenSet = true;
}

bool BackupPolicyModelOutPut::ExpectedNextBackupPeriodHasBeenSet() const
{
    return m_expectedNextBackupPeriodHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetFullRetentionPeriod() const
{
    return m_fullRetentionPeriod;
}

void BackupPolicyModelOutPut::SetFullRetentionPeriod(const int64_t& _fullRetentionPeriod)
{
    m_fullRetentionPeriod = _fullRetentionPeriod;
    m_fullRetentionPeriodHasBeenSet = true;
}

bool BackupPolicyModelOutPut::FullRetentionPeriodHasBeenSet() const
{
    return m_fullRetentionPeriodHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetID() const
{
    return m_iD;
}

void BackupPolicyModelOutPut::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BackupPolicyModelOutPut::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BackupPolicyModelOutPut::GetInstanceId() const
{
    return m_instanceId;
}

void BackupPolicyModelOutPut::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupPolicyModelOutPut::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetLogRetentionPeriod() const
{
    return m_logRetentionPeriod;
}

void BackupPolicyModelOutPut::SetLogRetentionPeriod(const int64_t& _logRetentionPeriod)
{
    m_logRetentionPeriod = _logRetentionPeriod;
    m_logRetentionPeriodHasBeenSet = true;
}

bool BackupPolicyModelOutPut::LogRetentionPeriodHasBeenSet() const
{
    return m_logRetentionPeriodHasBeenSet;
}

string BackupPolicyModelOutPut::GetPeriodTime() const
{
    return m_periodTime;
}

void BackupPolicyModelOutPut::SetPeriodTime(const string& _periodTime)
{
    m_periodTime = _periodTime;
    m_periodTimeHasBeenSet = true;
}

bool BackupPolicyModelOutPut::PeriodTimeHasBeenSet() const
{
    return m_periodTimeHasBeenSet;
}

string BackupPolicyModelOutPut::GetRegion() const
{
    return m_region;
}

void BackupPolicyModelOutPut::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupPolicyModelOutPut::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t BackupPolicyModelOutPut::GetPeriodType() const
{
    return m_periodType;
}

void BackupPolicyModelOutPut::SetPeriodType(const int64_t& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool BackupPolicyModelOutPut::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

