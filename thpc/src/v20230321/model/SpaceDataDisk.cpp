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

#include <tencentcloud/thpc/v20230321/model/SpaceDataDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

SpaceDataDisk::SpaceDataDisk() :
    m_diskTypeHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false),
    m_burstPerformanceHasBeenSet(false)
{
}

CoreInternalOutcome SpaceDataDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DeleteWithInstance") && !value["DeleteWithInstance"].IsNull())
    {
        if (!value["DeleteWithInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.DeleteWithInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteWithInstance = value["DeleteWithInstance"].GetBool();
        m_deleteWithInstanceHasBeenSet = true;
    }

    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("ThroughputPerformance") && !value["ThroughputPerformance"].IsNull())
    {
        if (!value["ThroughputPerformance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.ThroughputPerformance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_throughputPerformance = value["ThroughputPerformance"].GetInt64();
        m_throughputPerformanceHasBeenSet = true;
    }

    if (value.HasMember("BurstPerformance") && !value["BurstPerformance"].IsNull())
    {
        if (!value["BurstPerformance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceDataDisk.BurstPerformance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_burstPerformance = value["BurstPerformance"].GetBool();
        m_burstPerformanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceDataDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_burstPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurstPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burstPerformance, allocator);
    }

}


string SpaceDataDisk::GetDiskType() const
{
    return m_diskType;
}

void SpaceDataDisk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool SpaceDataDisk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string SpaceDataDisk::GetDiskId() const
{
    return m_diskId;
}

void SpaceDataDisk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool SpaceDataDisk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

int64_t SpaceDataDisk::GetDiskSize() const
{
    return m_diskSize;
}

void SpaceDataDisk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool SpaceDataDisk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

bool SpaceDataDisk::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void SpaceDataDisk::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool SpaceDataDisk::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

string SpaceDataDisk::GetSnapshotId() const
{
    return m_snapshotId;
}

void SpaceDataDisk::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SpaceDataDisk::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

bool SpaceDataDisk::GetEncrypt() const
{
    return m_encrypt;
}

void SpaceDataDisk::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool SpaceDataDisk::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string SpaceDataDisk::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void SpaceDataDisk::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool SpaceDataDisk::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

int64_t SpaceDataDisk::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void SpaceDataDisk::SetThroughputPerformance(const int64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool SpaceDataDisk::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

bool SpaceDataDisk::GetBurstPerformance() const
{
    return m_burstPerformance;
}

void SpaceDataDisk::SetBurstPerformance(const bool& _burstPerformance)
{
    m_burstPerformance = _burstPerformance;
    m_burstPerformanceHasBeenSet = true;
}

bool SpaceDataDisk::BurstPerformanceHasBeenSet() const
{
    return m_burstPerformanceHasBeenSet;
}

