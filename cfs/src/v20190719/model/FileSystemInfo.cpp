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

#include <tencentcloud/cfs/v20190719/model/FileSystemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

FileSystemInfo::FileSystemInfo() :
    m_creationTimeHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_lifeCycleStateHasBeenSet(false),
    m_sizeByteHasBeenSet(false),
    m_sizeLimitHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageResourcePkgHasBeenSet(false),
    m_bandwidthResourcePkgHasBeenSet(false),
    m_pGroupHasBeenSet(false),
    m_fsNameHasBeenSet(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_bandwidthLimitHasBeenSet(false),
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_snapStatusHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tieringStateHasBeenSet(false),
    m_tieringDetailHasBeenSet(false),
    m_autoScaleUpRuleHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome FileSystemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("CreationToken") && !value["CreationToken"].IsNull())
    {
        if (!value["CreationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.CreationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationToken = string(value["CreationToken"].GetString());
        m_creationTokenHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleState") && !value["LifeCycleState"].IsNull())
    {
        if (!value["LifeCycleState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.LifeCycleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleState = string(value["LifeCycleState"].GetString());
        m_lifeCycleStateHasBeenSet = true;
    }

    if (value.HasMember("SizeByte") && !value["SizeByte"].IsNull())
    {
        if (!value["SizeByte"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.SizeByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = value["SizeByte"].GetUint64();
        m_sizeByteHasBeenSet = true;
    }

    if (value.HasMember("SizeLimit") && !value["SizeLimit"].IsNull())
    {
        if (!value["SizeLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.SizeLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeLimit = value["SizeLimit"].GetUint64();
        m_sizeLimitHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageResourcePkg") && !value["StorageResourcePkg"].IsNull())
    {
        if (!value["StorageResourcePkg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.StorageResourcePkg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageResourcePkg = string(value["StorageResourcePkg"].GetString());
        m_storageResourcePkgHasBeenSet = true;
    }

    if (value.HasMember("BandwidthResourcePkg") && !value["BandwidthResourcePkg"].IsNull())
    {
        if (!value["BandwidthResourcePkg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.BandwidthResourcePkg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthResourcePkg = string(value["BandwidthResourcePkg"].GetString());
        m_bandwidthResourcePkgHasBeenSet = true;
    }

    if (value.HasMember("PGroup") && !value["PGroup"].IsNull())
    {
        if (!value["PGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.PGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pGroup.Deserialize(value["PGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pGroupHasBeenSet = true;
    }

    if (value.HasMember("FsName") && !value["FsName"].IsNull())
    {
        if (!value["FsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(value["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }

    if (value.HasMember("Encrypted") && !value["Encrypted"].IsNull())
    {
        if (!value["Encrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Encrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypted = value["Encrypted"].GetBool();
        m_encryptedHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimit") && !value["BandwidthLimit"].IsNull())
    {
        if (!value["BandwidthLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.BandwidthLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimit = value["BandwidthLimit"].GetDouble();
        m_bandwidthLimitHasBeenSet = true;
    }

    if (value.HasMember("AutoSnapshotPolicyId") && !value["AutoSnapshotPolicyId"].IsNull())
    {
        if (!value["AutoSnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.AutoSnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyId = string(value["AutoSnapshotPolicyId"].GetString());
        m_autoSnapshotPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("SnapStatus") && !value["SnapStatus"].IsNull())
    {
        if (!value["SnapStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.SnapStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapStatus = string(value["SnapStatus"].GetString());
        m_snapStatusHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Capacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetUint64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TieringState") && !value["TieringState"].IsNull())
    {
        if (!value["TieringState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.TieringState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tieringState = string(value["TieringState"].GetString());
        m_tieringStateHasBeenSet = true;
    }

    if (value.HasMember("TieringDetail") && !value["TieringDetail"].IsNull())
    {
        if (!value["TieringDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.TieringDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tieringDetail.Deserialize(value["TieringDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tieringDetailHasBeenSet = true;
    }

    if (value.HasMember("AutoScaleUpRule") && !value["AutoScaleUpRule"].IsNull())
    {
        if (!value["AutoScaleUpRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.AutoScaleUpRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoScaleUpRule.Deserialize(value["AutoScaleUpRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoScaleUpRuleHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_lifeCycleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeCycleState.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_sizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeLimit, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageResourcePkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageResourcePkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageResourcePkg.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthResourcePkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthResourcePkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthResourcePkg.c_str(), allocator).Move(), allocator);
    }

    if (m_pGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypted, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_bandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLimit, allocator);
    }

    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tieringStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TieringState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tieringState.c_str(), allocator).Move(), allocator);
    }

    if (m_tieringDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TieringDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tieringDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoScaleUpRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleUpRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScaleUpRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string FileSystemInfo::GetCreationTime() const
{
    return m_creationTime;
}

void FileSystemInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool FileSystemInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string FileSystemInfo::GetCreationToken() const
{
    return m_creationToken;
}

void FileSystemInfo::SetCreationToken(const string& _creationToken)
{
    m_creationToken = _creationToken;
    m_creationTokenHasBeenSet = true;
}

bool FileSystemInfo::CreationTokenHasBeenSet() const
{
    return m_creationTokenHasBeenSet;
}

string FileSystemInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void FileSystemInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool FileSystemInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string FileSystemInfo::GetLifeCycleState() const
{
    return m_lifeCycleState;
}

void FileSystemInfo::SetLifeCycleState(const string& _lifeCycleState)
{
    m_lifeCycleState = _lifeCycleState;
    m_lifeCycleStateHasBeenSet = true;
}

bool FileSystemInfo::LifeCycleStateHasBeenSet() const
{
    return m_lifeCycleStateHasBeenSet;
}

uint64_t FileSystemInfo::GetSizeByte() const
{
    return m_sizeByte;
}

void FileSystemInfo::SetSizeByte(const uint64_t& _sizeByte)
{
    m_sizeByte = _sizeByte;
    m_sizeByteHasBeenSet = true;
}

bool FileSystemInfo::SizeByteHasBeenSet() const
{
    return m_sizeByteHasBeenSet;
}

uint64_t FileSystemInfo::GetSizeLimit() const
{
    return m_sizeLimit;
}

void FileSystemInfo::SetSizeLimit(const uint64_t& _sizeLimit)
{
    m_sizeLimit = _sizeLimit;
    m_sizeLimitHasBeenSet = true;
}

bool FileSystemInfo::SizeLimitHasBeenSet() const
{
    return m_sizeLimitHasBeenSet;
}

uint64_t FileSystemInfo::GetZoneId() const
{
    return m_zoneId;
}

void FileSystemInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool FileSystemInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string FileSystemInfo::GetZone() const
{
    return m_zone;
}

void FileSystemInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool FileSystemInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string FileSystemInfo::GetProtocol() const
{
    return m_protocol;
}

void FileSystemInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool FileSystemInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string FileSystemInfo::GetStorageType() const
{
    return m_storageType;
}

void FileSystemInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool FileSystemInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string FileSystemInfo::GetStorageResourcePkg() const
{
    return m_storageResourcePkg;
}

void FileSystemInfo::SetStorageResourcePkg(const string& _storageResourcePkg)
{
    m_storageResourcePkg = _storageResourcePkg;
    m_storageResourcePkgHasBeenSet = true;
}

bool FileSystemInfo::StorageResourcePkgHasBeenSet() const
{
    return m_storageResourcePkgHasBeenSet;
}

string FileSystemInfo::GetBandwidthResourcePkg() const
{
    return m_bandwidthResourcePkg;
}

void FileSystemInfo::SetBandwidthResourcePkg(const string& _bandwidthResourcePkg)
{
    m_bandwidthResourcePkg = _bandwidthResourcePkg;
    m_bandwidthResourcePkgHasBeenSet = true;
}

bool FileSystemInfo::BandwidthResourcePkgHasBeenSet() const
{
    return m_bandwidthResourcePkgHasBeenSet;
}

PGroup FileSystemInfo::GetPGroup() const
{
    return m_pGroup;
}

void FileSystemInfo::SetPGroup(const PGroup& _pGroup)
{
    m_pGroup = _pGroup;
    m_pGroupHasBeenSet = true;
}

bool FileSystemInfo::PGroupHasBeenSet() const
{
    return m_pGroupHasBeenSet;
}

string FileSystemInfo::GetFsName() const
{
    return m_fsName;
}

void FileSystemInfo::SetFsName(const string& _fsName)
{
    m_fsName = _fsName;
    m_fsNameHasBeenSet = true;
}

bool FileSystemInfo::FsNameHasBeenSet() const
{
    return m_fsNameHasBeenSet;
}

bool FileSystemInfo::GetEncrypted() const
{
    return m_encrypted;
}

void FileSystemInfo::SetEncrypted(const bool& _encrypted)
{
    m_encrypted = _encrypted;
    m_encryptedHasBeenSet = true;
}

bool FileSystemInfo::EncryptedHasBeenSet() const
{
    return m_encryptedHasBeenSet;
}

string FileSystemInfo::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void FileSystemInfo::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool FileSystemInfo::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

int64_t FileSystemInfo::GetAppId() const
{
    return m_appId;
}

void FileSystemInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool FileSystemInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

double FileSystemInfo::GetBandwidthLimit() const
{
    return m_bandwidthLimit;
}

void FileSystemInfo::SetBandwidthLimit(const double& _bandwidthLimit)
{
    m_bandwidthLimit = _bandwidthLimit;
    m_bandwidthLimitHasBeenSet = true;
}

bool FileSystemInfo::BandwidthLimitHasBeenSet() const
{
    return m_bandwidthLimitHasBeenSet;
}

string FileSystemInfo::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void FileSystemInfo::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool FileSystemInfo::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

string FileSystemInfo::GetSnapStatus() const
{
    return m_snapStatus;
}

void FileSystemInfo::SetSnapStatus(const string& _snapStatus)
{
    m_snapStatus = _snapStatus;
    m_snapStatusHasBeenSet = true;
}

bool FileSystemInfo::SnapStatusHasBeenSet() const
{
    return m_snapStatusHasBeenSet;
}

uint64_t FileSystemInfo::GetCapacity() const
{
    return m_capacity;
}

void FileSystemInfo::SetCapacity(const uint64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool FileSystemInfo::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

vector<TagInfo> FileSystemInfo::GetTags() const
{
    return m_tags;
}

void FileSystemInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FileSystemInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string FileSystemInfo::GetTieringState() const
{
    return m_tieringState;
}

void FileSystemInfo::SetTieringState(const string& _tieringState)
{
    m_tieringState = _tieringState;
    m_tieringStateHasBeenSet = true;
}

bool FileSystemInfo::TieringStateHasBeenSet() const
{
    return m_tieringStateHasBeenSet;
}

TieringDetailInfo FileSystemInfo::GetTieringDetail() const
{
    return m_tieringDetail;
}

void FileSystemInfo::SetTieringDetail(const TieringDetailInfo& _tieringDetail)
{
    m_tieringDetail = _tieringDetail;
    m_tieringDetailHasBeenSet = true;
}

bool FileSystemInfo::TieringDetailHasBeenSet() const
{
    return m_tieringDetailHasBeenSet;
}

AutoScaleUpRule FileSystemInfo::GetAutoScaleUpRule() const
{
    return m_autoScaleUpRule;
}

void FileSystemInfo::SetAutoScaleUpRule(const AutoScaleUpRule& _autoScaleUpRule)
{
    m_autoScaleUpRule = _autoScaleUpRule;
    m_autoScaleUpRuleHasBeenSet = true;
}

bool FileSystemInfo::AutoScaleUpRuleHasBeenSet() const
{
    return m_autoScaleUpRuleHasBeenSet;
}

string FileSystemInfo::GetVersion() const
{
    return m_version;
}

void FileSystemInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool FileSystemInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

