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

#include <tencentcloud/cfs/v20190719/model/MigrationTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

MigrationTaskInfo::MigrationTaskInfo() :
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_migrationTypeHasBeenSet(false),
    m_migrationModeHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketAddressHasBeenSet(false),
    m_listAddressHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fsPathHasBeenSet(false),
    m_coverTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileTotalCountHasBeenSet(false),
    m_fileMigratedCountHasBeenSet(false),
    m_fileFailedCountHasBeenSet(false),
    m_fileTotalSizeHasBeenSet(false),
    m_fileMigratedSizeHasBeenSet(false),
    m_fileFailedSizeHasBeenSet(false),
    m_fileTotalListHasBeenSet(false),
    m_fileCompletedListHasBeenSet(false),
    m_fileFailedListHasBeenSet(false),
    m_bucketPathHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

CoreInternalOutcome MigrationTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MigrationType") && !value["MigrationType"].IsNull())
    {
        if (!value["MigrationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.MigrationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migrationType = value["MigrationType"].GetUint64();
        m_migrationTypeHasBeenSet = true;
    }

    if (value.HasMember("MigrationMode") && !value["MigrationMode"].IsNull())
    {
        if (!value["MigrationMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.MigrationMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migrationMode = value["MigrationMode"].GetUint64();
        m_migrationModeHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("BucketAddress") && !value["BucketAddress"].IsNull())
    {
        if (!value["BucketAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.BucketAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketAddress = string(value["BucketAddress"].GetString());
        m_bucketAddressHasBeenSet = true;
    }

    if (value.HasMember("ListAddress") && !value["ListAddress"].IsNull())
    {
        if (!value["ListAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.ListAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listAddress = string(value["ListAddress"].GetString());
        m_listAddressHasBeenSet = true;
    }

    if (value.HasMember("FsName") && !value["FsName"].IsNull())
    {
        if (!value["FsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(value["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("FsPath") && !value["FsPath"].IsNull())
    {
        if (!value["FsPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FsPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsPath = string(value["FsPath"].GetString());
        m_fsPathHasBeenSet = true;
    }

    if (value.HasMember("CoverType") && !value["CoverType"].IsNull())
    {
        if (!value["CoverType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.CoverType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coverType = value["CoverType"].GetUint64();
        m_coverTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FileTotalCount") && !value["FileTotalCount"].IsNull())
    {
        if (!value["FileTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalCount = value["FileTotalCount"].GetUint64();
        m_fileTotalCountHasBeenSet = true;
    }

    if (value.HasMember("FileMigratedCount") && !value["FileMigratedCount"].IsNull())
    {
        if (!value["FileMigratedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileMigratedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileMigratedCount = value["FileMigratedCount"].GetUint64();
        m_fileMigratedCountHasBeenSet = true;
    }

    if (value.HasMember("FileFailedCount") && !value["FileFailedCount"].IsNull())
    {
        if (!value["FileFailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileFailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedCount = value["FileFailedCount"].GetUint64();
        m_fileFailedCountHasBeenSet = true;
    }

    if (value.HasMember("FileTotalSize") && !value["FileTotalSize"].IsNull())
    {
        if (!value["FileTotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileTotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalSize = value["FileTotalSize"].GetInt64();
        m_fileTotalSizeHasBeenSet = true;
    }

    if (value.HasMember("FileMigratedSize") && !value["FileMigratedSize"].IsNull())
    {
        if (!value["FileMigratedSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileMigratedSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileMigratedSize = value["FileMigratedSize"].GetInt64();
        m_fileMigratedSizeHasBeenSet = true;
    }

    if (value.HasMember("FileFailedSize") && !value["FileFailedSize"].IsNull())
    {
        if (!value["FileFailedSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileFailedSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedSize = value["FileFailedSize"].GetInt64();
        m_fileFailedSizeHasBeenSet = true;
    }

    if (value.HasMember("FileTotalList") && !value["FileTotalList"].IsNull())
    {
        if (!value["FileTotalList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileTotalList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileTotalList = string(value["FileTotalList"].GetString());
        m_fileTotalListHasBeenSet = true;
    }

    if (value.HasMember("FileCompletedList") && !value["FileCompletedList"].IsNull())
    {
        if (!value["FileCompletedList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileCompletedList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCompletedList = string(value["FileCompletedList"].GetString());
        m_fileCompletedListHasBeenSet = true;
    }

    if (value.HasMember("FileFailedList") && !value["FileFailedList"].IsNull())
    {
        if (!value["FileFailedList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.FileFailedList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileFailedList = string(value["FileFailedList"].GetString());
        m_fileFailedListHasBeenSet = true;
    }

    if (value.HasMember("BucketPath") && !value["BucketPath"].IsNull())
    {
        if (!value["BucketPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.BucketPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketPath = string(value["BucketPath"].GetString());
        m_bucketPathHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationTaskInfo.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrationType, allocator);
    }

    if (m_migrationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrationMode, allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_listAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fsPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsPath.c_str(), allocator).Move(), allocator);
    }

    if (m_coverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coverType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_fileTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTotalCount, allocator);
    }

    if (m_fileMigratedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMigratedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileMigratedCount, allocator);
    }

    if (m_fileFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileFailedCount, allocator);
    }

    if (m_fileTotalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTotalSize, allocator);
    }

    if (m_fileMigratedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMigratedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileMigratedSize, allocator);
    }

    if (m_fileFailedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileFailedSize, allocator);
    }

    if (m_fileTotalListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTotalList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileTotalList.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCompletedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCompletedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCompletedList.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFailedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFailedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileFailedList.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketPath.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

}


string MigrationTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void MigrationTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool MigrationTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string MigrationTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void MigrationTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MigrationTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t MigrationTaskInfo::GetMigrationType() const
{
    return m_migrationType;
}

void MigrationTaskInfo::SetMigrationType(const uint64_t& _migrationType)
{
    m_migrationType = _migrationType;
    m_migrationTypeHasBeenSet = true;
}

bool MigrationTaskInfo::MigrationTypeHasBeenSet() const
{
    return m_migrationTypeHasBeenSet;
}

uint64_t MigrationTaskInfo::GetMigrationMode() const
{
    return m_migrationMode;
}

void MigrationTaskInfo::SetMigrationMode(const uint64_t& _migrationMode)
{
    m_migrationMode = _migrationMode;
    m_migrationModeHasBeenSet = true;
}

bool MigrationTaskInfo::MigrationModeHasBeenSet() const
{
    return m_migrationModeHasBeenSet;
}

string MigrationTaskInfo::GetBucketName() const
{
    return m_bucketName;
}

void MigrationTaskInfo::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool MigrationTaskInfo::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string MigrationTaskInfo::GetBucketRegion() const
{
    return m_bucketRegion;
}

void MigrationTaskInfo::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool MigrationTaskInfo::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string MigrationTaskInfo::GetBucketAddress() const
{
    return m_bucketAddress;
}

void MigrationTaskInfo::SetBucketAddress(const string& _bucketAddress)
{
    m_bucketAddress = _bucketAddress;
    m_bucketAddressHasBeenSet = true;
}

bool MigrationTaskInfo::BucketAddressHasBeenSet() const
{
    return m_bucketAddressHasBeenSet;
}

string MigrationTaskInfo::GetListAddress() const
{
    return m_listAddress;
}

void MigrationTaskInfo::SetListAddress(const string& _listAddress)
{
    m_listAddress = _listAddress;
    m_listAddressHasBeenSet = true;
}

bool MigrationTaskInfo::ListAddressHasBeenSet() const
{
    return m_listAddressHasBeenSet;
}

string MigrationTaskInfo::GetFsName() const
{
    return m_fsName;
}

void MigrationTaskInfo::SetFsName(const string& _fsName)
{
    m_fsName = _fsName;
    m_fsNameHasBeenSet = true;
}

bool MigrationTaskInfo::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

string MigrationTaskInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void MigrationTaskInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool MigrationTaskInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string MigrationTaskInfo::GetFsPath() const
{
    return m_fsPath;
}

void MigrationTaskInfo::SetFsPath(const string& _fsPath)
{
    m_fsPath = _fsPath;
    m_fsPathHasBeenSet = true;
}

bool MigrationTaskInfo::FsPathHasBeenSet() const
{
    return m_fsPathHasBeenSet;
}

uint64_t MigrationTaskInfo::GetCoverType() const
{
    return m_coverType;
}

void MigrationTaskInfo::SetCoverType(const uint64_t& _coverType)
{
    m_coverType = _coverType;
    m_coverTypeHasBeenSet = true;
}

bool MigrationTaskInfo::CoverTypeHasBeenSet() const
{
    return m_coverTypeHasBeenSet;
}

int64_t MigrationTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void MigrationTaskInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MigrationTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MigrationTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void MigrationTaskInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MigrationTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t MigrationTaskInfo::GetStatus() const
{
    return m_status;
}

void MigrationTaskInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrationTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t MigrationTaskInfo::GetFileTotalCount() const
{
    return m_fileTotalCount;
}

void MigrationTaskInfo::SetFileTotalCount(const uint64_t& _fileTotalCount)
{
    m_fileTotalCount = _fileTotalCount;
    m_fileTotalCountHasBeenSet = true;
}

bool MigrationTaskInfo::FileTotalCountHasBeenSet() const
{
    return m_fileTotalCountHasBeenSet;
}

uint64_t MigrationTaskInfo::GetFileMigratedCount() const
{
    return m_fileMigratedCount;
}

void MigrationTaskInfo::SetFileMigratedCount(const uint64_t& _fileMigratedCount)
{
    m_fileMigratedCount = _fileMigratedCount;
    m_fileMigratedCountHasBeenSet = true;
}

bool MigrationTaskInfo::FileMigratedCountHasBeenSet() const
{
    return m_fileMigratedCountHasBeenSet;
}

uint64_t MigrationTaskInfo::GetFileFailedCount() const
{
    return m_fileFailedCount;
}

void MigrationTaskInfo::SetFileFailedCount(const uint64_t& _fileFailedCount)
{
    m_fileFailedCount = _fileFailedCount;
    m_fileFailedCountHasBeenSet = true;
}

bool MigrationTaskInfo::FileFailedCountHasBeenSet() const
{
    return m_fileFailedCountHasBeenSet;
}

int64_t MigrationTaskInfo::GetFileTotalSize() const
{
    return m_fileTotalSize;
}

void MigrationTaskInfo::SetFileTotalSize(const int64_t& _fileTotalSize)
{
    m_fileTotalSize = _fileTotalSize;
    m_fileTotalSizeHasBeenSet = true;
}

bool MigrationTaskInfo::FileTotalSizeHasBeenSet() const
{
    return m_fileTotalSizeHasBeenSet;
}

int64_t MigrationTaskInfo::GetFileMigratedSize() const
{
    return m_fileMigratedSize;
}

void MigrationTaskInfo::SetFileMigratedSize(const int64_t& _fileMigratedSize)
{
    m_fileMigratedSize = _fileMigratedSize;
    m_fileMigratedSizeHasBeenSet = true;
}

bool MigrationTaskInfo::FileMigratedSizeHasBeenSet() const
{
    return m_fileMigratedSizeHasBeenSet;
}

int64_t MigrationTaskInfo::GetFileFailedSize() const
{
    return m_fileFailedSize;
}

void MigrationTaskInfo::SetFileFailedSize(const int64_t& _fileFailedSize)
{
    m_fileFailedSize = _fileFailedSize;
    m_fileFailedSizeHasBeenSet = true;
}

bool MigrationTaskInfo::FileFailedSizeHasBeenSet() const
{
    return m_fileFailedSizeHasBeenSet;
}

string MigrationTaskInfo::GetFileTotalList() const
{
    return m_fileTotalList;
}

void MigrationTaskInfo::SetFileTotalList(const string& _fileTotalList)
{
    m_fileTotalList = _fileTotalList;
    m_fileTotalListHasBeenSet = true;
}

bool MigrationTaskInfo::FileTotalListHasBeenSet() const
{
    return m_fileTotalListHasBeenSet;
}

string MigrationTaskInfo::GetFileCompletedList() const
{
    return m_fileCompletedList;
}

void MigrationTaskInfo::SetFileCompletedList(const string& _fileCompletedList)
{
    m_fileCompletedList = _fileCompletedList;
    m_fileCompletedListHasBeenSet = true;
}

bool MigrationTaskInfo::FileCompletedListHasBeenSet() const
{
    return m_fileCompletedListHasBeenSet;
}

string MigrationTaskInfo::GetFileFailedList() const
{
    return m_fileFailedList;
}

void MigrationTaskInfo::SetFileFailedList(const string& _fileFailedList)
{
    m_fileFailedList = _fileFailedList;
    m_fileFailedListHasBeenSet = true;
}

bool MigrationTaskInfo::FileFailedListHasBeenSet() const
{
    return m_fileFailedListHasBeenSet;
}

string MigrationTaskInfo::GetBucketPath() const
{
    return m_bucketPath;
}

void MigrationTaskInfo::SetBucketPath(const string& _bucketPath)
{
    m_bucketPath = _bucketPath;
    m_bucketPathHasBeenSet = true;
}

bool MigrationTaskInfo::BucketPathHasBeenSet() const
{
    return m_bucketPathHasBeenSet;
}

uint64_t MigrationTaskInfo::GetDirection() const
{
    return m_direction;
}

void MigrationTaskInfo::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool MigrationTaskInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

