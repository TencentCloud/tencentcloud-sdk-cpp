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

#include <tencentcloud/chdfs/v20201112/model/ModifyFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

ModifyFileSystemRequest::ModifyFileSystemRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_fileSystemNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_capacityQuotaHasBeenSet(false),
    m_superUsersHasBeenSet(false),
    m_posixAclHasBeenSet(false),
    m_enableRangerHasBeenSet(false),
    m_rangerServiceAddressesHasBeenSet(false)
{
}

string ModifyFileSystemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capacityQuota, allocator);
    }

    if (m_superUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_superUsers.begin(); itr != m_superUsers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_posixAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosixAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_posixAcl, allocator);
    }

    if (m_enableRangerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRanger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRanger, allocator);
    }

    if (m_rangerServiceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangerServiceAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rangerServiceAddresses.begin(); itr != m_rangerServiceAddresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFileSystemRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ModifyFileSystemRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ModifyFileSystemRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string ModifyFileSystemRequest::GetFileSystemName() const
{
    return m_fileSystemName;
}

void ModifyFileSystemRequest::SetFileSystemName(const string& _fileSystemName)
{
    m_fileSystemName = _fileSystemName;
    m_fileSystemNameHasBeenSet = true;
}

bool ModifyFileSystemRequest::FileSystemNameHasBeenSet() const
{
    return m_fileSystemNameHasBeenSet;
}

string ModifyFileSystemRequest::GetDescription() const
{
    return m_description;
}

void ModifyFileSystemRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyFileSystemRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ModifyFileSystemRequest::GetCapacityQuota() const
{
    return m_capacityQuota;
}

void ModifyFileSystemRequest::SetCapacityQuota(const uint64_t& _capacityQuota)
{
    m_capacityQuota = _capacityQuota;
    m_capacityQuotaHasBeenSet = true;
}

bool ModifyFileSystemRequest::CapacityQuotaHasBeenSet() const
{
    return m_capacityQuotaHasBeenSet;
}

vector<string> ModifyFileSystemRequest::GetSuperUsers() const
{
    return m_superUsers;
}

void ModifyFileSystemRequest::SetSuperUsers(const vector<string>& _superUsers)
{
    m_superUsers = _superUsers;
    m_superUsersHasBeenSet = true;
}

bool ModifyFileSystemRequest::SuperUsersHasBeenSet() const
{
    return m_superUsersHasBeenSet;
}

bool ModifyFileSystemRequest::GetPosixAcl() const
{
    return m_posixAcl;
}

void ModifyFileSystemRequest::SetPosixAcl(const bool& _posixAcl)
{
    m_posixAcl = _posixAcl;
    m_posixAclHasBeenSet = true;
}

bool ModifyFileSystemRequest::PosixAclHasBeenSet() const
{
    return m_posixAclHasBeenSet;
}

bool ModifyFileSystemRequest::GetEnableRanger() const
{
    return m_enableRanger;
}

void ModifyFileSystemRequest::SetEnableRanger(const bool& _enableRanger)
{
    m_enableRanger = _enableRanger;
    m_enableRangerHasBeenSet = true;
}

bool ModifyFileSystemRequest::EnableRangerHasBeenSet() const
{
    return m_enableRangerHasBeenSet;
}

vector<string> ModifyFileSystemRequest::GetRangerServiceAddresses() const
{
    return m_rangerServiceAddresses;
}

void ModifyFileSystemRequest::SetRangerServiceAddresses(const vector<string>& _rangerServiceAddresses)
{
    m_rangerServiceAddresses = _rangerServiceAddresses;
    m_rangerServiceAddressesHasBeenSet = true;
}

bool ModifyFileSystemRequest::RangerServiceAddressesHasBeenSet() const
{
    return m_rangerServiceAddressesHasBeenSet;
}


