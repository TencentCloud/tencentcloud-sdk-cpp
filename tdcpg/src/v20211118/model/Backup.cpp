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

#include <tencentcloud/tdcpg/v20211118/model/Backup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

Backup::Backup() :
    m_backupIdHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupDataTimeHasBeenSet(false),
    m_backupDataSizeHasBeenSet(false),
    m_backupTaskStartTimeHasBeenSet(false),
    m_backupTaskEndTimeHasBeenSet(false),
    m_backupTaskStatusHasBeenSet(false)
{
}

CoreInternalOutcome Backup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = value["BackupId"].GetInt64();
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupDataTime") && !value["BackupDataTime"].IsNull())
    {
        if (!value["BackupDataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupDataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupDataTime = string(value["BackupDataTime"].GetString());
        m_backupDataTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupDataSize") && !value["BackupDataSize"].IsNull())
    {
        if (!value["BackupDataSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupDataSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupDataSize = value["BackupDataSize"].GetInt64();
        m_backupDataSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupTaskStartTime") && !value["BackupTaskStartTime"].IsNull())
    {
        if (!value["BackupTaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupTaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTaskStartTime = string(value["BackupTaskStartTime"].GetString());
        m_backupTaskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupTaskEndTime") && !value["BackupTaskEndTime"].IsNull())
    {
        if (!value["BackupTaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupTaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTaskEndTime = string(value["BackupTaskEndTime"].GetString());
        m_backupTaskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupTaskStatus") && !value["BackupTaskStatus"].IsNull())
    {
        if (!value["BackupTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Backup.BackupTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTaskStatus = string(value["BackupTaskStatus"].GetString());
        m_backupTaskStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Backup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupId, allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupDataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDataSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDataSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupDataSize, allocator);
    }

    if (m_backupTaskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTaskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTaskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTaskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTaskStatus.c_str(), allocator).Move(), allocator);
    }

}


int64_t Backup::GetBackupId() const
{
    return m_backupId;
}

void Backup::SetBackupId(const int64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool Backup::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string Backup::GetBackupType() const
{
    return m_backupType;
}

void Backup::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool Backup::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string Backup::GetBackupMethod() const
{
    return m_backupMethod;
}

void Backup::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool Backup::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string Backup::GetBackupDataTime() const
{
    return m_backupDataTime;
}

void Backup::SetBackupDataTime(const string& _backupDataTime)
{
    m_backupDataTime = _backupDataTime;
    m_backupDataTimeHasBeenSet = true;
}

bool Backup::BackupDataTimeHasBeenSet() const
{
    return m_backupDataTimeHasBeenSet;
}

int64_t Backup::GetBackupDataSize() const
{
    return m_backupDataSize;
}

void Backup::SetBackupDataSize(const int64_t& _backupDataSize)
{
    m_backupDataSize = _backupDataSize;
    m_backupDataSizeHasBeenSet = true;
}

bool Backup::BackupDataSizeHasBeenSet() const
{
    return m_backupDataSizeHasBeenSet;
}

string Backup::GetBackupTaskStartTime() const
{
    return m_backupTaskStartTime;
}

void Backup::SetBackupTaskStartTime(const string& _backupTaskStartTime)
{
    m_backupTaskStartTime = _backupTaskStartTime;
    m_backupTaskStartTimeHasBeenSet = true;
}

bool Backup::BackupTaskStartTimeHasBeenSet() const
{
    return m_backupTaskStartTimeHasBeenSet;
}

string Backup::GetBackupTaskEndTime() const
{
    return m_backupTaskEndTime;
}

void Backup::SetBackupTaskEndTime(const string& _backupTaskEndTime)
{
    m_backupTaskEndTime = _backupTaskEndTime;
    m_backupTaskEndTimeHasBeenSet = true;
}

bool Backup::BackupTaskEndTimeHasBeenSet() const
{
    return m_backupTaskEndTimeHasBeenSet;
}

string Backup::GetBackupTaskStatus() const
{
    return m_backupTaskStatus;
}

void Backup::SetBackupTaskStatus(const string& _backupTaskStatus)
{
    m_backupTaskStatus = _backupTaskStatus;
    m_backupTaskStatusHasBeenSet = true;
}

bool Backup::BackupTaskStatusHasBeenSet() const
{
    return m_backupTaskStatusHasBeenSet;
}

