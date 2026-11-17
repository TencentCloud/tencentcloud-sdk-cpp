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

#include <tencentcloud/dbs/v20211108/model/BackupProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupProgress::BackupProgress() :
    m_fullBackupStatusHasBeenSet(false),
    m_incrementBackupStatusHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false),
    m_nextBackupTimeHasBeenSet(false),
    m_lastRestoreTimeHasBeenSet(false),
    m_lastRestoreStatusHasBeenSet(false),
    m_currentBackupJobStatusHasBeenSet(false)
{
}

CoreInternalOutcome BackupProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullBackupStatus") && !value["FullBackupStatus"].IsNull())
    {
        if (!value["FullBackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.FullBackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullBackupStatus = string(value["FullBackupStatus"].GetString());
        m_fullBackupStatusHasBeenSet = true;
    }

    if (value.HasMember("IncrementBackupStatus") && !value["IncrementBackupStatus"].IsNull())
    {
        if (!value["IncrementBackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.IncrementBackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incrementBackupStatus = string(value["IncrementBackupStatus"].GetString());
        m_incrementBackupStatusHasBeenSet = true;
    }

    if (value.HasMember("LastBackupTime") && !value["LastBackupTime"].IsNull())
    {
        if (!value["LastBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.LastBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastBackupTime = string(value["LastBackupTime"].GetString());
        m_lastBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("NextBackupTime") && !value["NextBackupTime"].IsNull())
    {
        if (!value["NextBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.NextBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextBackupTime = string(value["NextBackupTime"].GetString());
        m_nextBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRestoreTime") && !value["LastRestoreTime"].IsNull())
    {
        if (!value["LastRestoreTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.LastRestoreTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestoreTime = string(value["LastRestoreTime"].GetString());
        m_lastRestoreTimeHasBeenSet = true;
    }

    if (value.HasMember("LastRestoreStatus") && !value["LastRestoreStatus"].IsNull())
    {
        if (!value["LastRestoreStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.LastRestoreStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRestoreStatus = string(value["LastRestoreStatus"].GetString());
        m_lastRestoreStatusHasBeenSet = true;
    }

    if (value.HasMember("CurrentBackupJobStatus") && !value["CurrentBackupJobStatus"].IsNull())
    {
        if (!value["CurrentBackupJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupProgress.CurrentBackupJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentBackupJobStatus = string(value["CurrentBackupJobStatus"].GetString());
        m_currentBackupJobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullBackupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullBackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullBackupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_incrementBackupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementBackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incrementBackupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestoreTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestoreTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestoreTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRestoreStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRestoreStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRestoreStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_currentBackupJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentBackupJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentBackupJobStatus.c_str(), allocator).Move(), allocator);
    }

}


string BackupProgress::GetFullBackupStatus() const
{
    return m_fullBackupStatus;
}

void BackupProgress::SetFullBackupStatus(const string& _fullBackupStatus)
{
    m_fullBackupStatus = _fullBackupStatus;
    m_fullBackupStatusHasBeenSet = true;
}

bool BackupProgress::FullBackupStatusHasBeenSet() const
{
    return m_fullBackupStatusHasBeenSet;
}

string BackupProgress::GetIncrementBackupStatus() const
{
    return m_incrementBackupStatus;
}

void BackupProgress::SetIncrementBackupStatus(const string& _incrementBackupStatus)
{
    m_incrementBackupStatus = _incrementBackupStatus;
    m_incrementBackupStatusHasBeenSet = true;
}

bool BackupProgress::IncrementBackupStatusHasBeenSet() const
{
    return m_incrementBackupStatusHasBeenSet;
}

string BackupProgress::GetLastBackupTime() const
{
    return m_lastBackupTime;
}

void BackupProgress::SetLastBackupTime(const string& _lastBackupTime)
{
    m_lastBackupTime = _lastBackupTime;
    m_lastBackupTimeHasBeenSet = true;
}

bool BackupProgress::LastBackupTimeHasBeenSet() const
{
    return m_lastBackupTimeHasBeenSet;
}

string BackupProgress::GetNextBackupTime() const
{
    return m_nextBackupTime;
}

void BackupProgress::SetNextBackupTime(const string& _nextBackupTime)
{
    m_nextBackupTime = _nextBackupTime;
    m_nextBackupTimeHasBeenSet = true;
}

bool BackupProgress::NextBackupTimeHasBeenSet() const
{
    return m_nextBackupTimeHasBeenSet;
}

string BackupProgress::GetLastRestoreTime() const
{
    return m_lastRestoreTime;
}

void BackupProgress::SetLastRestoreTime(const string& _lastRestoreTime)
{
    m_lastRestoreTime = _lastRestoreTime;
    m_lastRestoreTimeHasBeenSet = true;
}

bool BackupProgress::LastRestoreTimeHasBeenSet() const
{
    return m_lastRestoreTimeHasBeenSet;
}

string BackupProgress::GetLastRestoreStatus() const
{
    return m_lastRestoreStatus;
}

void BackupProgress::SetLastRestoreStatus(const string& _lastRestoreStatus)
{
    m_lastRestoreStatus = _lastRestoreStatus;
    m_lastRestoreStatusHasBeenSet = true;
}

bool BackupProgress::LastRestoreStatusHasBeenSet() const
{
    return m_lastRestoreStatusHasBeenSet;
}

string BackupProgress::GetCurrentBackupJobStatus() const
{
    return m_currentBackupJobStatus;
}

void BackupProgress::SetCurrentBackupJobStatus(const string& _currentBackupJobStatus)
{
    m_currentBackupJobStatus = _currentBackupJobStatus;
    m_currentBackupJobStatusHasBeenSet = true;
}

bool BackupProgress::CurrentBackupJobStatusHasBeenSet() const
{
    return m_currentBackupJobStatusHasBeenSet;
}

