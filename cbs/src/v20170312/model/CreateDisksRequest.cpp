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

#include <tencentcloud/cbs/v20170312/model/CreateDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

CreateDisksRequest::CreateDisksRequest() :
    m_placementHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_throughputPerformanceHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_shareableHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_deleteSnapshotHasBeenSet(false),
    m_autoMountConfigurationHasBeenSet(false),
    m_diskBackupQuotaHasBeenSet(false),
    m_burstPerformanceHasBeenSet(false),
    m_encryptTypeHasBeenSet(false)
{
}

string CreateDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_throughputPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputPerformance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_throughputPerformance, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_shareableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shareable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shareable, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encrypt.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deleteSnapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteSnapshot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteSnapshot, allocator);
    }

    if (m_autoMountConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMountConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoMountConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskBackupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskBackupQuota, allocator);
    }

    if (m_burstPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurstPerformance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_burstPerformance, allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Placement CreateDisksRequest::GetPlacement() const
{
    return m_placement;
}

void CreateDisksRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool CreateDisksRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string CreateDisksRequest::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void CreateDisksRequest::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool CreateDisksRequest::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

string CreateDisksRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateDisksRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateDisksRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string CreateDisksRequest::GetDiskName() const
{
    return m_diskName;
}

void CreateDisksRequest::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool CreateDisksRequest::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

vector<Tag> CreateDisksRequest::GetTags() const
{
    return m_tags;
}

void CreateDisksRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDisksRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateDisksRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void CreateDisksRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool CreateDisksRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

uint64_t CreateDisksRequest::GetDiskCount() const
{
    return m_diskCount;
}

void CreateDisksRequest::SetDiskCount(const uint64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool CreateDisksRequest::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

uint64_t CreateDisksRequest::GetThroughputPerformance() const
{
    return m_throughputPerformance;
}

void CreateDisksRequest::SetThroughputPerformance(const uint64_t& _throughputPerformance)
{
    m_throughputPerformance = _throughputPerformance;
    m_throughputPerformanceHasBeenSet = true;
}

bool CreateDisksRequest::ThroughputPerformanceHasBeenSet() const
{
    return m_throughputPerformanceHasBeenSet;
}

string CreateDisksRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void CreateDisksRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool CreateDisksRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

uint64_t CreateDisksRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateDisksRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateDisksRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

bool CreateDisksRequest::GetShareable() const
{
    return m_shareable;
}

void CreateDisksRequest::SetShareable(const bool& _shareable)
{
    m_shareable = _shareable;
    m_shareableHasBeenSet = true;
}

bool CreateDisksRequest::ShareableHasBeenSet() const
{
    return m_shareableHasBeenSet;
}

string CreateDisksRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDisksRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDisksRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateDisksRequest::GetEncrypt() const
{
    return m_encrypt;
}

void CreateDisksRequest::SetEncrypt(const string& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool CreateDisksRequest::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

DiskChargePrepaid CreateDisksRequest::GetDiskChargePrepaid() const
{
    return m_diskChargePrepaid;
}

void CreateDisksRequest::SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid)
{
    m_diskChargePrepaid = _diskChargePrepaid;
    m_diskChargePrepaidHasBeenSet = true;
}

bool CreateDisksRequest::DiskChargePrepaidHasBeenSet() const
{
    return m_diskChargePrepaidHasBeenSet;
}

int64_t CreateDisksRequest::GetDeleteSnapshot() const
{
    return m_deleteSnapshot;
}

void CreateDisksRequest::SetDeleteSnapshot(const int64_t& _deleteSnapshot)
{
    m_deleteSnapshot = _deleteSnapshot;
    m_deleteSnapshotHasBeenSet = true;
}

bool CreateDisksRequest::DeleteSnapshotHasBeenSet() const
{
    return m_deleteSnapshotHasBeenSet;
}

AutoMountConfiguration CreateDisksRequest::GetAutoMountConfiguration() const
{
    return m_autoMountConfiguration;
}

void CreateDisksRequest::SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration)
{
    m_autoMountConfiguration = _autoMountConfiguration;
    m_autoMountConfigurationHasBeenSet = true;
}

bool CreateDisksRequest::AutoMountConfigurationHasBeenSet() const
{
    return m_autoMountConfigurationHasBeenSet;
}

uint64_t CreateDisksRequest::GetDiskBackupQuota() const
{
    return m_diskBackupQuota;
}

void CreateDisksRequest::SetDiskBackupQuota(const uint64_t& _diskBackupQuota)
{
    m_diskBackupQuota = _diskBackupQuota;
    m_diskBackupQuotaHasBeenSet = true;
}

bool CreateDisksRequest::DiskBackupQuotaHasBeenSet() const
{
    return m_diskBackupQuotaHasBeenSet;
}

bool CreateDisksRequest::GetBurstPerformance() const
{
    return m_burstPerformance;
}

void CreateDisksRequest::SetBurstPerformance(const bool& _burstPerformance)
{
    m_burstPerformance = _burstPerformance;
    m_burstPerformanceHasBeenSet = true;
}

bool CreateDisksRequest::BurstPerformanceHasBeenSet() const
{
    return m_burstPerformanceHasBeenSet;
}

string CreateDisksRequest::GetEncryptType() const
{
    return m_encryptType;
}

void CreateDisksRequest::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool CreateDisksRequest::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}


