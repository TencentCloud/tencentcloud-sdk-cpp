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

#include <tencentcloud/bdrc/v20260330/model/FileBackupOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

FileBackupOverview::FileBackupOverview() :
    m_backupCountHasBeenSet(false),
    m_creatingBackupCountHasBeenSet(false),
    m_failedBackupCountHasBeenSet(false),
    m_successBackupCountHasBeenSet(false),
    m_restoringBackupCountHasBeenSet(false),
    m_backupSizeMbHasBeenSet(false),
    m_backupResourceCountHasBeenSet(false)
{
}

CoreInternalOutcome FileBackupOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupCount") && !value["BackupCount"].IsNull())
    {
        if (!value["BackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.BackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupCount = value["BackupCount"].GetInt64();
        m_backupCountHasBeenSet = true;
    }

    if (value.HasMember("CreatingBackupCount") && !value["CreatingBackupCount"].IsNull())
    {
        if (!value["CreatingBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.CreatingBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creatingBackupCount = value["CreatingBackupCount"].GetInt64();
        m_creatingBackupCountHasBeenSet = true;
    }

    if (value.HasMember("FailedBackupCount") && !value["FailedBackupCount"].IsNull())
    {
        if (!value["FailedBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.FailedBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedBackupCount = value["FailedBackupCount"].GetInt64();
        m_failedBackupCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessBackupCount") && !value["SuccessBackupCount"].IsNull())
    {
        if (!value["SuccessBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.SuccessBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successBackupCount = value["SuccessBackupCount"].GetInt64();
        m_successBackupCountHasBeenSet = true;
    }

    if (value.HasMember("RestoringBackupCount") && !value["RestoringBackupCount"].IsNull())
    {
        if (!value["RestoringBackupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.RestoringBackupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoringBackupCount = value["RestoringBackupCount"].GetInt64();
        m_restoringBackupCountHasBeenSet = true;
    }

    if (value.HasMember("BackupSizeMb") && !value["BackupSizeMb"].IsNull())
    {
        if (!value["BackupSizeMb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.BackupSizeMb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSizeMb = value["BackupSizeMb"].GetInt64();
        m_backupSizeMbHasBeenSet = true;
    }

    if (value.HasMember("BackupResourceCount") && !value["BackupResourceCount"].IsNull())
    {
        if (!value["BackupResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview.BackupResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupResourceCount = value["BackupResourceCount"].GetInt64();
        m_backupResourceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileBackupOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupCount, allocator);
    }

    if (m_creatingBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatingBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatingBackupCount, allocator);
    }

    if (m_failedBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedBackupCount, allocator);
    }

    if (m_successBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successBackupCount, allocator);
    }

    if (m_restoringBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoringBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoringBackupCount, allocator);
    }

    if (m_backupSizeMbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSizeMb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSizeMb, allocator);
    }

    if (m_backupResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupResourceCount, allocator);
    }

}


int64_t FileBackupOverview::GetBackupCount() const
{
    return m_backupCount;
}

void FileBackupOverview::SetBackupCount(const int64_t& _backupCount)
{
    m_backupCount = _backupCount;
    m_backupCountHasBeenSet = true;
}

bool FileBackupOverview::BackupCountHasBeenSet() const
{
    return m_backupCountHasBeenSet;
}

int64_t FileBackupOverview::GetCreatingBackupCount() const
{
    return m_creatingBackupCount;
}

void FileBackupOverview::SetCreatingBackupCount(const int64_t& _creatingBackupCount)
{
    m_creatingBackupCount = _creatingBackupCount;
    m_creatingBackupCountHasBeenSet = true;
}

bool FileBackupOverview::CreatingBackupCountHasBeenSet() const
{
    return m_creatingBackupCountHasBeenSet;
}

int64_t FileBackupOverview::GetFailedBackupCount() const
{
    return m_failedBackupCount;
}

void FileBackupOverview::SetFailedBackupCount(const int64_t& _failedBackupCount)
{
    m_failedBackupCount = _failedBackupCount;
    m_failedBackupCountHasBeenSet = true;
}

bool FileBackupOverview::FailedBackupCountHasBeenSet() const
{
    return m_failedBackupCountHasBeenSet;
}

int64_t FileBackupOverview::GetSuccessBackupCount() const
{
    return m_successBackupCount;
}

void FileBackupOverview::SetSuccessBackupCount(const int64_t& _successBackupCount)
{
    m_successBackupCount = _successBackupCount;
    m_successBackupCountHasBeenSet = true;
}

bool FileBackupOverview::SuccessBackupCountHasBeenSet() const
{
    return m_successBackupCountHasBeenSet;
}

int64_t FileBackupOverview::GetRestoringBackupCount() const
{
    return m_restoringBackupCount;
}

void FileBackupOverview::SetRestoringBackupCount(const int64_t& _restoringBackupCount)
{
    m_restoringBackupCount = _restoringBackupCount;
    m_restoringBackupCountHasBeenSet = true;
}

bool FileBackupOverview::RestoringBackupCountHasBeenSet() const
{
    return m_restoringBackupCountHasBeenSet;
}

int64_t FileBackupOverview::GetBackupSizeMb() const
{
    return m_backupSizeMb;
}

void FileBackupOverview::SetBackupSizeMb(const int64_t& _backupSizeMb)
{
    m_backupSizeMb = _backupSizeMb;
    m_backupSizeMbHasBeenSet = true;
}

bool FileBackupOverview::BackupSizeMbHasBeenSet() const
{
    return m_backupSizeMbHasBeenSet;
}

int64_t FileBackupOverview::GetBackupResourceCount() const
{
    return m_backupResourceCount;
}

void FileBackupOverview::SetBackupResourceCount(const int64_t& _backupResourceCount)
{
    m_backupResourceCount = _backupResourceCount;
    m_backupResourceCountHasBeenSet = true;
}

bool FileBackupOverview::BackupResourceCountHasBeenSet() const
{
    return m_backupResourceCountHasBeenSet;
}

