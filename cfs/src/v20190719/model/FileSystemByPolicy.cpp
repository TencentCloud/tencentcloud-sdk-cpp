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

#include <tencentcloud/cfs/v20190719/model/FileSystemByPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

FileSystemByPolicy::FileSystemByPolicy() :
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_sizeByteHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_totalSnapshotSizeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

CoreInternalOutcome FileSystemByPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationToken") && !value["CreationToken"].IsNull())
    {
        if (!value["CreationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.CreationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationToken = string(value["CreationToken"].GetString());
        m_creationTokenHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("SizeByte") && !value["SizeByte"].IsNull())
    {
        if (!value["SizeByte"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.SizeByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = value["SizeByte"].GetUint64();
        m_sizeByteHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalSnapshotSize") && !value["TotalSnapshotSize"].IsNull())
    {
        if (!value["TotalSnapshotSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.TotalSnapshotSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSnapshotSize = value["TotalSnapshotSize"].GetUint64();
        m_totalSnapshotSizeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemByPolicy.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystemByPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSnapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSnapshotSize, allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

}


string FileSystemByPolicy::GetCreationToken() const
{
    return m_creationToken;
}

void FileSystemByPolicy::SetCreationToken(const string& _creationToken)
{
    m_creationToken = _creationToken;
    m_creationTokenHasBeenSet = true;
}

bool FileSystemByPolicy::CreationTokenHasBeenSet() const
{
    return m_creationTokenHasBeenSet;
}

string FileSystemByPolicy::GetFileSystemId() const
{
    return m_fileSystemId;
}

void FileSystemByPolicy::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool FileSystemByPolicy::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

uint64_t FileSystemByPolicy::GetSizeByte() const
{
    return m_sizeByte;
}

void FileSystemByPolicy::SetSizeByte(const uint64_t& _sizeByte)
{
    m_sizeByte = _sizeByte;
    m_sizeByteHasBeenSet = true;
}

bool FileSystemByPolicy::SizeByteHasBeenSet() const
{
    return m_sizeByteHasBeenSet;
}

string FileSystemByPolicy::GetStorageType() const
{
    return m_storageType;
}

void FileSystemByPolicy::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool FileSystemByPolicy::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

uint64_t FileSystemByPolicy::GetTotalSnapshotSize() const
{
    return m_totalSnapshotSize;
}

void FileSystemByPolicy::SetTotalSnapshotSize(const uint64_t& _totalSnapshotSize)
{
    m_totalSnapshotSize = _totalSnapshotSize;
    m_totalSnapshotSizeHasBeenSet = true;
}

bool FileSystemByPolicy::TotalSnapshotSizeHasBeenSet() const
{
    return m_totalSnapshotSizeHasBeenSet;
}

string FileSystemByPolicy::GetCreationTime() const
{
    return m_creationTime;
}

void FileSystemByPolicy::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool FileSystemByPolicy::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

uint64_t FileSystemByPolicy::GetZoneId() const
{
    return m_zoneId;
}

void FileSystemByPolicy::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool FileSystemByPolicy::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

