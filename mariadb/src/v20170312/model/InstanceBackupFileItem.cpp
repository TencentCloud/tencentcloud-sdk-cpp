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

#include <tencentcloud/mariadb/v20170312/model/InstanceBackupFileItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

InstanceBackupFileItem::InstanceBackupFileItem() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_backupTypeHasBeenSet(false),
    m_manualBackupHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
}

CoreInternalOutcome InstanceBackupFileItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.ShardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = string(value["ShardId"].GetString());
        m_shardIdHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupType") && !value["BackupType"].IsNull())
    {
        if (!value["BackupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.BackupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupType = string(value["BackupType"].GetString());
        m_backupTypeHasBeenSet = true;
    }

    if (value.HasMember("ManualBackup") && !value["ManualBackup"].IsNull())
    {
        if (!value["ManualBackup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.ManualBackup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBackup = value["ManualBackup"].GetInt64();
        m_manualBackupHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageClass") && !value["StorageClass"].IsNull())
    {
        if (!value["StorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupFileItem.StorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageClass = string(value["StorageClass"].GetString());
        m_storageClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceBackupFileItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardId.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
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

    if (m_backupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupType.c_str(), allocator).Move(), allocator);
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

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageClass.c_str(), allocator).Move(), allocator);
    }

}


string InstanceBackupFileItem::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceBackupFileItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceBackupFileItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceBackupFileItem::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceBackupFileItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceBackupFileItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t InstanceBackupFileItem::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceBackupFileItem::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceBackupFileItem::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string InstanceBackupFileItem::GetShardId() const
{
    return m_shardId;
}

void InstanceBackupFileItem::SetShardId(const string& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool InstanceBackupFileItem::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

string InstanceBackupFileItem::GetFilePath() const
{
    return m_filePath;
}

void InstanceBackupFileItem::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool InstanceBackupFileItem::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string InstanceBackupFileItem::GetFileName() const
{
    return m_fileName;
}

void InstanceBackupFileItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool InstanceBackupFileItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t InstanceBackupFileItem::GetFileSize() const
{
    return m_fileSize;
}

void InstanceBackupFileItem::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool InstanceBackupFileItem::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string InstanceBackupFileItem::GetBackupType() const
{
    return m_backupType;
}

void InstanceBackupFileItem::SetBackupType(const string& _backupType)
{
    m_backupType = _backupType;
    m_backupTypeHasBeenSet = true;
}

bool InstanceBackupFileItem::BackupTypeHasBeenSet() const
{
    return m_backupTypeHasBeenSet;
}

int64_t InstanceBackupFileItem::GetManualBackup() const
{
    return m_manualBackup;
}

void InstanceBackupFileItem::SetManualBackup(const int64_t& _manualBackup)
{
    m_manualBackup = _manualBackup;
    m_manualBackupHasBeenSet = true;
}

bool InstanceBackupFileItem::ManualBackupHasBeenSet() const
{
    return m_manualBackupHasBeenSet;
}

string InstanceBackupFileItem::GetStartTime() const
{
    return m_startTime;
}

void InstanceBackupFileItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceBackupFileItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceBackupFileItem::GetEndTime() const
{
    return m_endTime;
}

void InstanceBackupFileItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceBackupFileItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceBackupFileItem::GetStorageClass() const
{
    return m_storageClass;
}

void InstanceBackupFileItem::SetStorageClass(const string& _storageClass)
{
    m_storageClass = _storageClass;
    m_storageClassHasBeenSet = true;
}

bool InstanceBackupFileItem::StorageClassHasBeenSet() const
{
    return m_storageClassHasBeenSet;
}

