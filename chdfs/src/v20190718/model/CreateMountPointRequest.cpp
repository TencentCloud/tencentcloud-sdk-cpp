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

#include <tencentcloud/chdfs/v20190718/model/CreateMountPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

CreateMountPointRequest::CreateMountPointRequest() :
    m_mountPointNameHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_mountPointStatusHasBeenSet(false),
    m_vpcTypeHasBeenSet(false)
{
}

string CreateMountPointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mountPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mountPointStatus, allocator);
    }

    if (m_vpcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vpcType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMountPointRequest::GetMountPointName() const
{
    return m_mountPointName;
}

void CreateMountPointRequest::SetMountPointName(const string& _mountPointName)
{
    m_mountPointName = _mountPointName;
    m_mountPointNameHasBeenSet = true;
}

bool CreateMountPointRequest::MountPointNameHasBeenSet() const
{
    return m_mountPointNameHasBeenSet;
}

string CreateMountPointRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateMountPointRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateMountPointRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateMountPointRequest::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void CreateMountPointRequest::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool CreateMountPointRequest::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

string CreateMountPointRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateMountPointRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateMountPointRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t CreateMountPointRequest::GetMountPointStatus() const
{
    return m_mountPointStatus;
}

void CreateMountPointRequest::SetMountPointStatus(const uint64_t& _mountPointStatus)
{
    m_mountPointStatus = _mountPointStatus;
    m_mountPointStatusHasBeenSet = true;
}

bool CreateMountPointRequest::MountPointStatusHasBeenSet() const
{
    return m_mountPointStatusHasBeenSet;
}

uint64_t CreateMountPointRequest::GetVpcType() const
{
    return m_vpcType;
}

void CreateMountPointRequest::SetVpcType(const uint64_t& _vpcType)
{
    m_vpcType = _vpcType;
    m_vpcTypeHasBeenSet = true;
}

bool CreateMountPointRequest::VpcTypeHasBeenSet() const
{
    return m_vpcTypeHasBeenSet;
}


