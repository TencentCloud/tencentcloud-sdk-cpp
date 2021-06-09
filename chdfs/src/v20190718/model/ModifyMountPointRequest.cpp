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

#include <tencentcloud/chdfs/v20190718/model/ModifyMountPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

ModifyMountPointRequest::ModifyMountPointRequest() :
    m_mountPointIdHasBeenSet(false),
    m_mountPointNameHasBeenSet(false),
    m_mountPointStatusHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false)
{
}

string ModifyMountPointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mountPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPointStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mountPointStatus, allocator);
    }

    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMountPointRequest::GetMountPointId() const
{
    return m_mountPointId;
}

void ModifyMountPointRequest::SetMountPointId(const string& _mountPointId)
{
    m_mountPointId = _mountPointId;
    m_mountPointIdHasBeenSet = true;
}

bool ModifyMountPointRequest::MountPointIdHasBeenSet() const
{
    return m_mountPointIdHasBeenSet;
}

string ModifyMountPointRequest::GetMountPointName() const
{
    return m_mountPointName;
}

void ModifyMountPointRequest::SetMountPointName(const string& _mountPointName)
{
    m_mountPointName = _mountPointName;
    m_mountPointNameHasBeenSet = true;
}

bool ModifyMountPointRequest::MountPointNameHasBeenSet() const
{
    return m_mountPointNameHasBeenSet;
}

uint64_t ModifyMountPointRequest::GetMountPointStatus() const
{
    return m_mountPointStatus;
}

void ModifyMountPointRequest::SetMountPointStatus(const uint64_t& _mountPointStatus)
{
    m_mountPointStatus = _mountPointStatus;
    m_mountPointStatusHasBeenSet = true;
}

bool ModifyMountPointRequest::MountPointStatusHasBeenSet() const
{
    return m_mountPointStatusHasBeenSet;
}

string ModifyMountPointRequest::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void ModifyMountPointRequest::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool ModifyMountPointRequest::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}


