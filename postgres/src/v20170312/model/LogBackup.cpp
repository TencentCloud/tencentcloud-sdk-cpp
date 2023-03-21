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

#include <tencentcloud/postgres/v20170312/model/LogBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

LogBackup::LogBackup() :
    m_dBInstanceIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupModeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome LogBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBInstanceId") && !value["DBInstanceId"].IsNull())
    {
        if (!value["DBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.DBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceId = string(value["DBInstanceId"].GetString());
        m_dBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupMode") && !value["BackupMode"].IsNull())
    {
        if (!value["BackupMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.BackupMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMode = string(value["BackupMode"].GetString());
        m_backupModeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackup.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMode.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
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

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string LogBackup::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void LogBackup::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool LogBackup::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string LogBackup::GetId() const
{
    return m_id;
}

void LogBackup::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LogBackup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LogBackup::GetName() const
{
    return m_name;
}

void LogBackup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LogBackup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LogBackup::GetBackupMethod() const
{
    return m_backupMethod;
}

void LogBackup::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool LogBackup::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string LogBackup::GetBackupMode() const
{
    return m_backupMode;
}

void LogBackup::SetBackupMode(const string& _backupMode)
{
    m_backupMode = _backupMode;
    m_backupModeHasBeenSet = true;
}

bool LogBackup::BackupModeHasBeenSet() const
{
    return m_backupModeHasBeenSet;
}

string LogBackup::GetState() const
{
    return m_state;
}

void LogBackup::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool LogBackup::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t LogBackup::GetSize() const
{
    return m_size;
}

void LogBackup::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool LogBackup::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string LogBackup::GetStartTime() const
{
    return m_startTime;
}

void LogBackup::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LogBackup::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LogBackup::GetFinishTime() const
{
    return m_finishTime;
}

void LogBackup::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool LogBackup::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string LogBackup::GetExpireTime() const
{
    return m_expireTime;
}

void LogBackup::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool LogBackup::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

