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

#include <tencentcloud/tke/v20220501/model/DataDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

DataDisk::DataDisk() :
    m_diskTypeHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_autoFormatAndMountHasBeenSet(false),
    m_diskPartitionHasBeenSet(false),
    m_mountTargetHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false)
{
}

CoreInternalOutcome DataDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSystem") && !value["FileSystem"].IsNull())
    {
        if (!value["FileSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.FileSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystem = string(value["FileSystem"].GetString());
        m_fileSystemHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("AutoFormatAndMount") && !value["AutoFormatAndMount"].IsNull())
    {
        if (!value["AutoFormatAndMount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.AutoFormatAndMount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoFormatAndMount = value["AutoFormatAndMount"].GetBool();
        m_autoFormatAndMountHasBeenSet = true;
    }

    if (value.HasMember("DiskPartition") && !value["DiskPartition"].IsNull())
    {
        if (!value["DiskPartition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.DiskPartition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskPartition = string(value["DiskPartition"].GetString());
        m_diskPartitionHasBeenSet = true;
    }

    if (value.HasMember("MountTarget") && !value["MountTarget"].IsNull())
    {
        if (!value["MountTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.MountTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountTarget = string(value["MountTarget"].GetString());
        m_mountTargetHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.Encrypt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = string(value["Encrypt"].GetString());
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("ThroughputPerformance") && !value["ThroughputPerformance"].IsNull())
    {
        if (!value["ThroughputPerformance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataDisk.ThroughputPerformance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_throughputPerformance = value["ThroughputPerformance"].GetUint64();
        m_throughputPerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_autoFormatAndMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoFormatAndMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoFormatAndMount, allocator);
    }

    if (m_diskPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskPartition.c_str(), allocator).Move(), allocator);
    }

    if (m_mountTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throughputPerformance, allocator);
    }

}


string DataDisk::GetDiskType() const
{
    return m_diskType;
}

void DataDisk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DataDisk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string DataDisk::GetFileSystem() const
{
    return m_fileSystem;
}

void DataDisk::SetFileSystem(const string& _fileSystem)
{
    m_fileSystem = _fileSystem;
    m_fileSystemHasBeenSet = true;
}

bool DataDisk::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

int64_t DataDisk::GetDiskSize() const
{
    return m_diskSize;
}

void DataDisk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DataDisk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

bool DataDisk::GetAutoFormatAndMount() const
{
    return m_autoFormatAndMount;
}

void DataDisk::SetAutoFormatAndMount(const bool& _autoFormatAndMount)
{
    m_autoFormatAndMount = _autoFormatAndMount;
    m_autoFormatAndMountHasBeenSet = true;
}

bool DataDisk::AutoFormatAndMountHasBeenSet() const
{
    return m_autoFormatAndMountHasBeenSet;
}

string DataDisk::GetDiskPartition() const
{
    return m_diskPartition;
}

void DataDisk::SetDiskPartition(const string& _diskPartition)
{
    m_diskPartition = _diskPartition;
    m_diskPartitionHasBeenSet = true;
}

bool DataDisk::DiskPartitionHasBeenSet() const
{
    return m_diskPartitionHasBeenSet;
}

string DataDisk::GetMountTarget() const
{
    return m_mountTarget;
}

void DataDisk::SetMountTarget(const string& _mountTarget)
{
    m_mountTarget = _mountTarget;
    m_mountTargetHasBeenSet = true;
}

bool DataDisk::MountTargetHasBeenSet() const
{
    return m_mountTargetHasBeenSet;
}

string DataDisk::GetEncrypt() const
{
    return m_encrypt;
}

void DataDisk::SetEncrypt(const string& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool DataDisk::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string DataDisk::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void DataDisk::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool DataDisk::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

string DataDisk::GetSnapshotId() const
{
    return m_snapshotId;
}

void DataDisk::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool DataDisk::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

uint64_t DataDisk::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void DataDisk::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool DataDisk::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

