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

#include <tencentcloud/tdmysql/v20211122/model/BackupSetModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

BackupSetModel::BackupSetModel() :
    m_backupDurationHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupProgressHasBeenSet(false),
    m_backupSetIdHasBeenSet(false),
    m_backupStatusHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endTrxTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_manualBackupHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome BackupSetModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupDuration") && !value["BackupDuration"].IsNull())
    {
        if (!value["BackupDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupDuration = value["BackupDuration"].GetInt64();
        m_backupDurationHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("BackupProgress") && !value["BackupProgress"].IsNull())
    {
        if (!value["BackupProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_backupProgress = value["BackupProgress"].GetDouble();
        m_backupProgressHasBeenSet = true;
    }

    if (value.HasMember("BackupSetId") && !value["BackupSetId"].IsNull())
    {
        if (!value["BackupSetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupSetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSetId = value["BackupSetId"].GetInt64();
        m_backupSetIdHasBeenSet = true;
    }

    if (value.HasMember("BackupStatus") && !value["BackupStatus"].IsNull())
    {
        if (!value["BackupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = string(value["BackupStatus"].GetString());
        m_backupStatusHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTrxTime") && !value["EndTrxTime"].IsNull())
    {
        if (!value["EndTrxTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.EndTrxTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTrxTime = string(value["EndTrxTime"].GetString());
        m_endTrxTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ManualBackup") && !value["ManualBackup"].IsNull())
    {
        if (!value["ManualBackup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.ManualBackup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackup = value["ManualBackup"].GetInt64();
        m_manualBackupHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupSetModel.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupSetModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupDuration, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupProgress, allocator);
    }

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSetId, allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTrxTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTrxTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTrxTime.c_str(), allocator).Move(), allocator);
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

    if (m_manualBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBackup, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t BackupSetModel::GetBackupDuration() const
{
    return m_backupDuration;
}

void BackupSetModel::SetBackupDuration(const int64_t& _backupDuration)
{
    m_backupDuration = _backupDuration;
    m_backupDurationHasBeenSet = true;
}

bool BackupSetModel::BackupDurationHasBeenSet() const
{
    return m_backupDurationHasBeenSet;
}

string BackupSetModel::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupSetModel::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupSetModel::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupSetModel::GetBackupName() const
{
    return m_backupName;
}

void BackupSetModel::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool BackupSetModel::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

double BackupSetModel::GetBackupProgress() const
{
    return m_backupProgress;
}

void BackupSetModel::SetBackupProgress(const double& _backupProgress)
{
    m_backupProgress = _backupProgress;
    m_backupProgressHasBeenSet = true;
}

bool BackupSetModel::BackupProgressHasBeenSet() const
{
    return m_backupProgressHasBeenSet;
}

int64_t BackupSetModel::GetBackupSetId() const
{
    return m_backupSetId;
}

void BackupSetModel::SetBackupSetId(const int64_t& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool BackupSetModel::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string BackupSetModel::GetBackupStatus() const
{
    return m_backupStatus;
}

void BackupSetModel::SetBackupStatus(const string& _backupStatus)
{
    m_backupStatus = _backupStatus;
    m_backupStatusHasBeenSet = true;
}

bool BackupSetModel::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}

string BackupSetModel::GetBackupType() const
{
    return m_backupType;
}

void BackupSetModel::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool BackupSetModel::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

string BackupSetModel::GetDBVersion() const
{
    return m_dBVersion;
}

void BackupSetModel::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool BackupSetModel::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string BackupSetModel::GetEndTime() const
{
    return m_endTime;
}

void BackupSetModel::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BackupSetModel::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BackupSetModel::GetEndTrxTime() const
{
    return m_endTrxTime;
}

void BackupSetModel::SetEndTrxTime(const string& _endTrxTime)
{
    m_endTrxTime = _endTrxTime;
    m_endTrxTimeHasBeenSet = true;
}

bool BackupSetModel::EndTrxTimeHasBeenSet() const
{
    return m_endTrxTimeHasBeenSet;
}

string BackupSetModel::GetErrorMessage() const
{
    return m_errorMessage;
}

void BackupSetModel::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool BackupSetModel::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string BackupSetModel::GetExpiredTime() const
{
    return m_expiredTime;
}

void BackupSetModel::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool BackupSetModel::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string BackupSetModel::GetFileName() const
{
    return m_fileName;
}

void BackupSetModel::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BackupSetModel::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t BackupSetModel::GetFileSize() const
{
    return m_fileSize;
}

void BackupSetModel::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BackupSetModel::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BackupSetModel::GetInstanceId() const
{
    return m_instanceId;
}

void BackupSetModel::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BackupSetModel::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t BackupSetModel::GetManualBackup() const
{
    return m_manualBackup;
}

void BackupSetModel::SetManualBackup(const int64_t& _manualBackup)
{
    m_manualBackup = _manualBackup;
    m_manualBackupHasBeenSet = true;
}

bool BackupSetModel::ManualBackupHasBeenSet() const
{
    return m_manualBackupHasBeenSet;
}

string BackupSetModel::GetStartTime() const
{
    return m_startTime;
}

void BackupSetModel::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupSetModel::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

