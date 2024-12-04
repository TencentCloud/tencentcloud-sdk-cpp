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

#include <tencentcloud/cfs/v20190719/model/CreateMigrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateMigrationTaskRequest::CreateMigrationTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_migrationTypeHasBeenSet(false),
    m_migrationModeHasBeenSet(false),
    m_srcSecretIdHasBeenSet(false),
    m_srcSecretKeyHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fsPathHasBeenSet(false),
    m_coverTypeHasBeenSet(false),
    m_srcServiceHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_bucketAddressHasBeenSet(false),
    m_listAddressHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_bucketPathHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

string CreateMigrationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrationType, allocator);
    }

    if (m_migrationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrationMode, allocator);
    }

    if (m_srcSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fsPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsPath.c_str(), allocator).Move(), allocator);
    }

    if (m_coverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coverType, allocator);
    }

    if (m_srcServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcService.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_listAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketPath.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMigrationTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateMigrationTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateMigrationTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t CreateMigrationTaskRequest::GetMigrationType() const
{
    return m_migrationType;
}

void CreateMigrationTaskRequest::SetMigrationType(const uint64_t& _migrationType)
{
    m_migrationType = _migrationType;
    m_migrationTypeHasBeenSet = true;
}

bool CreateMigrationTaskRequest::MigrationTypeHasBeenSet() const
{
    return m_migrationTypeHasBeenSet;
}

uint64_t CreateMigrationTaskRequest::GetMigrationMode() const
{
    return m_migrationMode;
}

void CreateMigrationTaskRequest::SetMigrationMode(const uint64_t& _migrationMode)
{
    m_migrationMode = _migrationMode;
    m_migrationModeHasBeenSet = true;
}

bool CreateMigrationTaskRequest::MigrationModeHasBeenSet() const
{
    return m_migrationModeHasBeenSet;
}

string CreateMigrationTaskRequest::GetSrcSecretId() const
{
    return m_srcSecretId;
}

void CreateMigrationTaskRequest::SetSrcSecretId(const string& _srcSecretId)
{
    m_srcSecretId = _srcSecretId;
    m_srcSecretIdHasBeenSet = true;
}

bool CreateMigrationTaskRequest::SrcSecretIdHasBeenSet() const
{
    return m_srcSecretIdHasBeenSet;
}

string CreateMigrationTaskRequest::GetSrcSecretKey() const
{
    return m_srcSecretKey;
}

void CreateMigrationTaskRequest::SetSrcSecretKey(const string& _srcSecretKey)
{
    m_srcSecretKey = _srcSecretKey;
    m_srcSecretKeyHasBeenSet = true;
}

bool CreateMigrationTaskRequest::SrcSecretKeyHasBeenSet() const
{
    return m_srcSecretKeyHasBeenSet;
}

string CreateMigrationTaskRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateMigrationTaskRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateMigrationTaskRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateMigrationTaskRequest::GetFsPath() const
{
    return m_fsPath;
}

void CreateMigrationTaskRequest::SetFsPath(const string& _fsPath)
{
    m_fsPath = _fsPath;
    m_fsPathHasBeenSet = true;
}

bool CreateMigrationTaskRequest::FsPathHasBeenSet() const
{
    return m_fsPathHasBeenSet;
}

uint64_t CreateMigrationTaskRequest::GetCoverType() const
{
    return m_coverType;
}

void CreateMigrationTaskRequest::SetCoverType(const uint64_t& _coverType)
{
    m_coverType = _coverType;
    m_coverTypeHasBeenSet = true;
}

bool CreateMigrationTaskRequest::CoverTypeHasBeenSet() const
{
    return m_coverTypeHasBeenSet;
}

string CreateMigrationTaskRequest::GetSrcService() const
{
    return m_srcService;
}

void CreateMigrationTaskRequest::SetSrcService(const string& _srcService)
{
    m_srcService = _srcService;
    m_srcServiceHasBeenSet = true;
}

bool CreateMigrationTaskRequest::SrcServiceHasBeenSet() const
{
    return m_srcServiceHasBeenSet;
}

string CreateMigrationTaskRequest::GetBucketName() const
{
    return m_bucketName;
}

void CreateMigrationTaskRequest::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CreateMigrationTaskRequest::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string CreateMigrationTaskRequest::GetBucketRegion() const
{
    return m_bucketRegion;
}

void CreateMigrationTaskRequest::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool CreateMigrationTaskRequest::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string CreateMigrationTaskRequest::GetBucketAddress() const
{
    return m_bucketAddress;
}

void CreateMigrationTaskRequest::SetBucketAddress(const string& _bucketAddress)
{
    m_bucketAddress = _bucketAddress;
    m_bucketAddressHasBeenSet = true;
}

bool CreateMigrationTaskRequest::BucketAddressHasBeenSet() const
{
    return m_bucketAddressHasBeenSet;
}

string CreateMigrationTaskRequest::GetListAddress() const
{
    return m_listAddress;
}

void CreateMigrationTaskRequest::SetListAddress(const string& _listAddress)
{
    m_listAddress = _listAddress;
    m_listAddressHasBeenSet = true;
}

bool CreateMigrationTaskRequest::ListAddressHasBeenSet() const
{
    return m_listAddressHasBeenSet;
}

string CreateMigrationTaskRequest::GetFsName() const
{
    return m_fsName;
}

void CreateMigrationTaskRequest::SetFsName(const string& _fsName)
{
    m_fsName = _fsName;
    m_fsNameHasBeenSet = true;
}

bool CreateMigrationTaskRequest::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

string CreateMigrationTaskRequest::GetBucketPath() const
{
    return m_bucketPath;
}

void CreateMigrationTaskRequest::SetBucketPath(const string& _bucketPath)
{
    m_bucketPath = _bucketPath;
    m_bucketPathHasBeenSet = true;
}

bool CreateMigrationTaskRequest::BucketPathHasBeenSet() const
{
    return m_bucketPathHasBeenSet;
}

uint64_t CreateMigrationTaskRequest::GetDirection() const
{
    return m_direction;
}

void CreateMigrationTaskRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CreateMigrationTaskRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}


