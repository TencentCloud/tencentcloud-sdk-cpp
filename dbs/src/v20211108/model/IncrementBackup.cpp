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

#include <tencentcloud/dbs/v20211108/model/IncrementBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

IncrementBackup::IncrementBackup() :
    m_backupSetIdHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fileCountHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_backupPoolHasBeenSet(false),
    m_retentionTypeHasBeenSet(false),
    m_resourceDetailHasBeenSet(false)
{
}

CoreInternalOutcome IncrementBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupSetId") && !value["BackupSetId"].IsNull())
    {
        if (!value["BackupSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.BackupSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSetId = string(value["BackupSetId"].GetString());
        m_backupSetIdHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.SourceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInfo = string(value["SourceInfo"].GetString());
        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FileCount") && !value["FileCount"].IsNull())
    {
        if (!value["FileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.FileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileCount = value["FileCount"].GetInt64();
        m_fileCountHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupPool") && !value["BackupPool"].IsNull())
    {
        if (!value["BackupPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.BackupPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPool = string(value["BackupPool"].GetString());
        m_backupPoolHasBeenSet = true;
    }

    if (value.HasMember("RetentionType") && !value["RetentionType"].IsNull())
    {
        if (!value["RetentionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.RetentionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionType = string(value["RetentionType"].GetString());
        m_retentionTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceDetail") && !value["ResourceDetail"].IsNull())
    {
        if (!value["ResourceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementBackup.ResourceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceDetail.Deserialize(value["ResourceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileCount, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPool.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retentionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IncrementBackup::GetBackupSetId() const
{
    return m_backupSetId;
}

void IncrementBackup::SetBackupSetId(const string& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool IncrementBackup::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string IncrementBackup::GetSourceInfo() const
{
    return m_sourceInfo;
}

void IncrementBackup::SetSourceInfo(const string& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool IncrementBackup::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string IncrementBackup::GetStatus() const
{
    return m_status;
}

void IncrementBackup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IncrementBackup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IncrementBackup::GetStartTime() const
{
    return m_startTime;
}

void IncrementBackup::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool IncrementBackup::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string IncrementBackup::GetEndTime() const
{
    return m_endTime;
}

void IncrementBackup::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool IncrementBackup::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string IncrementBackup::GetExpireTime() const
{
    return m_expireTime;
}

void IncrementBackup::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool IncrementBackup::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t IncrementBackup::GetFileCount() const
{
    return m_fileCount;
}

void IncrementBackup::SetFileCount(const int64_t& _fileCount)
{
    m_fileCount = _fileCount;
    m_fileCountHasBeenSet = true;
}

bool IncrementBackup::FileCountHasBeenSet() const
{
    return m_fileCountHasBeenSet;
}

string IncrementBackup::GetBackupMethod() const
{
    return m_backupMethod;
}

void IncrementBackup::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool IncrementBackup::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string IncrementBackup::GetStorageType() const
{
    return m_storageType;
}

void IncrementBackup::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool IncrementBackup::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string IncrementBackup::GetBackupPool() const
{
    return m_backupPool;
}

void IncrementBackup::SetBackupPool(const string& _backupPool)
{
    m_backupPool = _backupPool;
    m_backupPoolHasBeenSet = true;
}

bool IncrementBackup::BackupPoolHasBeenSet() const
{
    return m_backupPoolHasBeenSet;
}

string IncrementBackup::GetRetentionType() const
{
    return m_retentionType;
}

void IncrementBackup::SetRetentionType(const string& _retentionType)
{
    m_retentionType = _retentionType;
    m_retentionTypeHasBeenSet = true;
}

bool IncrementBackup::RetentionTypeHasBeenSet() const
{
    return m_retentionTypeHasBeenSet;
}

ResourceItemDetail IncrementBackup::GetResourceDetail() const
{
    return m_resourceDetail;
}

void IncrementBackup::SetResourceDetail(const ResourceItemDetail& _resourceDetail)
{
    m_resourceDetail = _resourceDetail;
    m_resourceDetailHasBeenSet = true;
}

bool IncrementBackup::ResourceDetailHasBeenSet() const
{
    return m_resourceDetailHasBeenSet;
}

