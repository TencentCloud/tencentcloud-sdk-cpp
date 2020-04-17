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
using namespace rapidjson;
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
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome FileSystemInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("CreationToken") && !value["CreationToken"].IsNull())
    {
        if (!value["CreationToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.CreationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationToken = string(value["CreationToken"].GetString());
        m_creationTokenHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleState") && !value["LifeCycleState"].IsNull())
    {
        if (!value["LifeCycleState"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.LifeCycleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleState = string(value["LifeCycleState"].GetString());
        m_lifeCycleStateHasBeenSet = true;
    }

    if (value.HasMember("SizeByte") && !value["SizeByte"].IsNull())
    {
        if (!value["SizeByte"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.SizeByte` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = value["SizeByte"].GetUint64();
        m_sizeByteHasBeenSet = true;
    }

    if (value.HasMember("SizeLimit") && !value["SizeLimit"].IsNull())
    {
        if (!value["SizeLimit"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.SizeLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeLimit = value["SizeLimit"].GetUint64();
        m_sizeLimitHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageResourcePkg") && !value["StorageResourcePkg"].IsNull())
    {
        if (!value["StorageResourcePkg"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.StorageResourcePkg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageResourcePkg = string(value["StorageResourcePkg"].GetString());
        m_storageResourcePkgHasBeenSet = true;
    }

    if (value.HasMember("BandwidthResourcePkg") && !value["BandwidthResourcePkg"].IsNull())
    {
        if (!value["BandwidthResourcePkg"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.BandwidthResourcePkg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthResourcePkg = string(value["BandwidthResourcePkg"].GetString());
        m_bandwidthResourcePkgHasBeenSet = true;
    }

    if (value.HasMember("PGroup") && !value["PGroup"].IsNull())
    {
        if (!value["PGroup"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.PGroup` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `FileSystemInfo.FsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsName = string(value["FsName"].GetString());
        m_fsNameHasBeenSet = true;
    }

    if (value.HasMember("Encrypted") && !value["Encrypted"].IsNull())
    {
        if (!value["Encrypted"].IsBool())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.Encrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypted = value["Encrypted"].GetBool();
        m_encryptedHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyId") && !value["KmsKeyId"].IsNull())
    {
        if (!value["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(value["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FileSystemInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystemInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LifeCycleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lifeCycleState.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_sizeLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeLimit, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageResourcePkgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageResourcePkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_storageResourcePkg.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthResourcePkgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthResourcePkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bandwidthResourcePkg.c_str(), allocator).Move(), allocator);
    }

    if (m_pGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fsNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fsName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Encrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypted, allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

