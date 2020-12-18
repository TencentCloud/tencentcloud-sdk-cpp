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
using namespace rapidjson;
using namespace std;

CreateFileSystemRequest::CreateFileSystemRequest() :
    m_fileSystemNameHasBeenSet(false),
    m_capacityQuotaHasBeenSet(false),
    m_posixAclHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_superUsersHasBeenSet(false),
    m_rootInodeUserHasBeenSet(false),
    m_rootInodeGroupHasBeenSet(false)
{
}

string CreateFileSystemRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystemName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileSystemName.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityQuotaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CapacityQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capacityQuota, allocator);
    }

    if (m_posixAclHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PosixAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_posixAcl, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_superUsersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SuperUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_superUsers.begin(); itr != m_superUsers.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rootInodeUserHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RootInodeUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rootInodeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_rootInodeGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RootInodeGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rootInodeGroup.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


