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

#include <tencentcloud/tdmysql/v20211122/model/ArchiveLogModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ArchiveLogModel::ArchiveLogModel() :
    m_archiveLogIdHasBeenSet(false),
    m_backupDurationHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome ArchiveLogModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArchiveLogId") && !value["ArchiveLogId"].IsNull())
    {
        if (!value["ArchiveLogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.ArchiveLogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveLogId = value["ArchiveLogId"].GetInt64();
        m_archiveLogIdHasBeenSet = true;
    }

    if (value.HasMember("BackupDuration") && !value["BackupDuration"].IsNull())
    {
        if (!value["BackupDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.BackupDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupDuration = value["BackupDuration"].GetInt64();
        m_backupDurationHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.BackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = string(value["BackupStatus"].GetString());
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveLogModel.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchiveLogModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_archiveLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveLogId, allocator);
    }

    if (m_backupDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupDuration, allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ArchiveLogModel::GetArchiveLogId() const
{
    return m_archiveLogId;
}

void ArchiveLogModel::SetArchiveLogId(const int64_t& _archiveLogId)
{
    m_archiveLogId = _archiveLogId;
    m_archiveLogIdHasBeenSet = true;
}

bool ArchiveLogModel::ArchiveLogIdHasBeenSet() const
{
    return m_archiveLogIdHasBeenSet;
}

int64_t ArchiveLogModel::GetBackupDuration() const
{
    return m_backupDuration;
}

void ArchiveLogModel::SetBackupDuration(const int64_t& _backupDuration)
{
    m_backupDuration = _backupDuration;
    m_backupDurationHasBeenSet = true;
}

bool ArchiveLogModel::BackupDurationHasBeenSet() const
{
    return m_backupDurationHasBeenSet;
}

string ArchiveLogModel::GetBackupStatus() const
{
    return m_backupStatus;
}

void ArchiveLogModel::SetBackupStatus(const string& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool ArchiveLogModel::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

string ArchiveLogModel::GetEndTime() const
{
    return m_endTime;
}

void ArchiveLogModel::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ArchiveLogModel::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ArchiveLogModel::GetErrorMessage() const
{
    return m_errorMessage;
}

void ArchiveLogModel::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ArchiveLogModel::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string ArchiveLogModel::GetExpiredTime() const
{
    return m_expiredTime;
}

void ArchiveLogModel::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ArchiveLogModel::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string ArchiveLogModel::GetFileName() const
{
    return m_fileName;
}

void ArchiveLogModel::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ArchiveLogModel::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t ArchiveLogModel::GetFileSize() const
{
    return m_fileSize;
}

void ArchiveLogModel::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ArchiveLogModel::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ArchiveLogModel::GetInstanceId() const
{
    return m_instanceId;
}

void ArchiveLogModel::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ArchiveLogModel::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ArchiveLogModel::GetStartTime() const
{
    return m_startTime;
}

void ArchiveLogModel::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ArchiveLogModel::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

