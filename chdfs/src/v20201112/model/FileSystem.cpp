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

#include <tencentcloud/chdfs/v20201112/model/FileSystem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

FileSystem::FileSystem() :
    m_appIdHasBeenSet(false),
    m_fileSystemNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_blockSizeHasBeenSet(false),
    m_capacityQuotaHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_superUsersHasBeenSet(false),
    m_posixAclHasBeenSet(false),
    m_enableRangerHasBeenSet(false),
    m_rangerServiceAddressesHasBeenSet(false)
{
}

CoreInternalOutcome FileSystem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("FileSystemName") && !value["FileSystemName"].IsNull())
    {
        if (!value["FileSystemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.FileSystemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemName = string(value["FileSystemName"].GetString());
        m_fileSystemNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BlockSize") && !value["BlockSize"].IsNull())
    {
        if (!value["BlockSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.BlockSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockSize = value["BlockSize"].GetUint64();
        m_blockSizeHasBeenSet = true;
    }

    if (value.HasMember("CapacityQuota") && !value["CapacityQuota"].IsNull())
    {
        if (!value["CapacityQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.CapacityQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityQuota = value["CapacityQuota"].GetUint64();
        m_capacityQuotaHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuperUsers") && !value["SuperUsers"].IsNull())
    {
        if (!value["SuperUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileSystem.SuperUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["SuperUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_superUsers.push_back((*itr).GetString());
        }
        m_superUsersHasBeenSet = true;
    }

    if (value.HasMember("PosixAcl") && !value["PosixAcl"].IsNull())
    {
        if (!value["PosixAcl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.PosixAcl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_posixAcl = value["PosixAcl"].GetBool();
        m_posixAclHasBeenSet = true;
    }

    if (value.HasMember("EnableRanger") && !value["EnableRanger"].IsNull())
    {
        if (!value["EnableRanger"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystem.EnableRanger` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRanger = value["EnableRanger"].GetBool();
        m_enableRangerHasBeenSet = true;
    }

    if (value.HasMember("RangerServiceAddresses") && !value["RangerServiceAddresses"].IsNull())
    {
        if (!value["RangerServiceAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileSystem.RangerServiceAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["RangerServiceAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rangerServiceAddresses.push_back((*itr).GetString());
        }
        m_rangerServiceAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_fileSystemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blockSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockSize, allocator);
    }

    if (m_capacityQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityQuota, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_superUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_superUsers.begin(); itr != m_superUsers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_posixAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosixAcl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posixAcl, allocator);
    }

    if (m_enableRangerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRanger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRanger, allocator);
    }

    if (m_rangerServiceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangerServiceAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rangerServiceAddresses.begin(); itr != m_rangerServiceAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t FileSystem::GetAppId() const
{
    return m_appId;
}

void FileSystem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool FileSystem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string FileSystem::GetFileSystemName() const
{
    return m_fileSystemName;
}

void FileSystem::SetFileSystemName(const string& _fileSystemName)
{
    m_fileSystemName = _fileSystemName;
    m_fileSystemNameHasBeenSet = true;
}

bool FileSystem::FileSystemNameHasBeenSet() const
{
    return m_fileSystemNameHasBeenSet;
}

string FileSystem::GetDescription() const
{
    return m_description;
}

void FileSystem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FileSystem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FileSystem::GetRegion() const
{
    return m_region;
}

void FileSystem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool FileSystem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string FileSystem::GetFileSystemId() const
{
    return m_fileSystemId;
}

void FileSystem::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool FileSystem::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string FileSystem::GetCreateTime() const
{
    return m_createTime;
}

void FileSystem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileSystem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t FileSystem::GetBlockSize() const
{
    return m_blockSize;
}

void FileSystem::SetBlockSize(const uint64_t& _blockSize)
{
    m_blockSize = _blockSize;
    m_blockSizeHasBeenSet = true;
}

bool FileSystem::BlockSizeHasBeenSet() const
{
    return m_blockSizeHasBeenSet;
}

uint64_t FileSystem::GetCapacityQuota() const
{
    return m_capacityQuota;
}

void FileSystem::SetCapacityQuota(const uint64_t& _capacityQuota)
{
    m_capacityQuota = _capacityQuota;
    m_capacityQuotaHasBeenSet = true;
}

bool FileSystem::CapacityQuotaHasBeenSet() const
{
    return m_capacityQuotaHasBeenSet;
}

uint64_t FileSystem::GetStatus() const
{
    return m_status;
}

void FileSystem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileSystem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> FileSystem::GetSuperUsers() const
{
    return m_superUsers;
}

void FileSystem::SetSuperUsers(const vector<string>& _superUsers)
{
    m_superUsers = _superUsers;
    m_superUsersHasBeenSet = true;
}

bool FileSystem::SuperUsersHasBeenSet() const
{
    return m_superUsersHasBeenSet;
}

bool FileSystem::GetPosixAcl() const
{
    return m_posixAcl;
}

void FileSystem::SetPosixAcl(const bool& _posixAcl)
{
    m_posixAcl = _posixAcl;
    m_posixAclHasBeenSet = true;
}

bool FileSystem::PosixAclHasBeenSet() const
{
    return m_posixAclHasBeenSet;
}

bool FileSystem::GetEnableRanger() const
{
    return m_enableRanger;
}

void FileSystem::SetEnableRanger(const bool& _enableRanger)
{
    m_enableRanger = _enableRanger;
    m_enableRangerHasBeenSet = true;
}

bool FileSystem::EnableRangerHasBeenSet() const
{
    return m_enableRangerHasBeenSet;
}

vector<string> FileSystem::GetRangerServiceAddresses() const
{
    return m_rangerServiceAddresses;
}

void FileSystem::SetRangerServiceAddresses(const vector<string>& _rangerServiceAddresses)
{
    m_rangerServiceAddresses = _rangerServiceAddresses;
    m_rangerServiceAddressesHasBeenSet = true;
}

bool FileSystem::RangerServiceAddressesHasBeenSet() const
{
    return m_rangerServiceAddressesHasBeenSet;
}

