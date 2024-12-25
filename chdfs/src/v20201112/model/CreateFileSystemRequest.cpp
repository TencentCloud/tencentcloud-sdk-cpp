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

#include <tencentcloud/chdfs/v20201112/model/CreateFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

CreateFileSystemRequest::CreateFileSystemRequest() :
    m_fileSystemNameHasBeenSet(false),
    m_posixAclHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_capacityQuotaHasBeenSet(false),
    m_superUsersHasBeenSet(false),
    m_rootInodeUserHasBeenSet(false),
    m_rootInodeGroupHasBeenSet(false),
    m_enableRangerHasBeenSet(false),
    m_rangerServiceAddressesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateFileSystemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemName.c_str(), allocator).Move(), allocator);
    }

    if (m_posixAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosixAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_posixAcl, allocator);
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

    if (m_rootInodeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootInodeUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootInodeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_rootInodeGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootInodeGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootInodeGroup.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileSystemRequest::GetFileSystemName() const
{
    return m_fileSystemName;
}

void CreateFileSystemRequest::SetFileSystemName(const string& _fileSystemName)
{
    m_fileSystemName = _fileSystemName;
    m_fileSystemNameHasBeenSet = true;
}

bool CreateFileSystemRequest::FileSystemNameHasBeenSet() const
{
    return m_fileSystemNameHasBeenSet;
}

bool CreateFileSystemRequest::GetPosixAcl() const
{
    return m_posixAcl;
}

void CreateFileSystemRequest::SetPosixAcl(const bool& _posixAcl)
{
    m_posixAcl = _posixAcl;
    m_posixAclHasBeenSet = true;
}

bool CreateFileSystemRequest::PosixAclHasBeenSet() const
{
    return m_posixAclHasBeenSet;
}

string CreateFileSystemRequest::GetDescription() const
{
    return m_description;
}

void CreateFileSystemRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFileSystemRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateFileSystemRequest::GetCapacityQuota() const
{
    return m_capacityQuota;
}

void CreateFileSystemRequest::SetCapacityQuota(const uint64_t& _capacityQuota)
{
    m_capacityQuota = _capacityQuota;
    m_capacityQuotaHasBeenSet = true;
}

bool CreateFileSystemRequest::CapacityQuotaHasBeenSet() const
{
    return m_capacityQuotaHasBeenSet;
}

vector<string> CreateFileSystemRequest::GetSuperUsers() const
{
    return m_superUsers;
}

void CreateFileSystemRequest::SetSuperUsers(const vector<string>& _superUsers)
{
    m_superUsers = _superUsers;
    m_superUsersHasBeenSet = true;
}

bool CreateFileSystemRequest::SuperUsersHasBeenSet() const
{
    return m_superUsersHasBeenSet;
}

string CreateFileSystemRequest::GetRootInodeUser() const
{
    return m_rootInodeUser;
}

void CreateFileSystemRequest::SetRootInodeUser(const string& _rootInodeUser)
{
    m_rootInodeUser = _rootInodeUser;
    m_rootInodeUserHasBeenSet = true;
}

bool CreateFileSystemRequest::RootInodeUserHasBeenSet() const
{
    return m_rootInodeUserHasBeenSet;
}

string CreateFileSystemRequest::GetRootInodeGroup() const
{
    return m_rootInodeGroup;
}

void CreateFileSystemRequest::SetRootInodeGroup(const string& _rootInodeGroup)
{
    m_rootInodeGroup = _rootInodeGroup;
    m_rootInodeGroupHasBeenSet = true;
}

bool CreateFileSystemRequest::RootInodeGroupHasBeenSet() const
{
    return m_rootInodeGroupHasBeenSet;
}

bool CreateFileSystemRequest::GetEnableRanger() const
{
    return m_enableRanger;
}

void CreateFileSystemRequest::SetEnableRanger(const bool& _enableRanger)
{
    m_enableRanger = _enableRanger;
    m_enableRangerHasBeenSet = true;
}

bool CreateFileSystemRequest::EnableRangerHasBeenSet() const
{
    return m_enableRangerHasBeenSet;
}

vector<string> CreateFileSystemRequest::GetRangerServiceAddresses() const
{
    return m_rangerServiceAddresses;
}

void CreateFileSystemRequest::SetRangerServiceAddresses(const vector<string>& _rangerServiceAddresses)
{
    m_rangerServiceAddresses = _rangerServiceAddresses;
    m_rangerServiceAddressesHasBeenSet = true;
}

bool CreateFileSystemRequest::RangerServiceAddressesHasBeenSet() const
{
    return m_rangerServiceAddressesHasBeenSet;
}

vector<Tag> CreateFileSystemRequest::GetTags() const
{
    return m_tags;
}

void CreateFileSystemRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateFileSystemRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


