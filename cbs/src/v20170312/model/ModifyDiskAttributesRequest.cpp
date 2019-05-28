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

#include <tencentcloud/cbs/v20170312/model/ModifyDiskAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyDiskAttributesRequest::ModifyDiskAttributesRequest() :
    m_diskIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_portableHasBeenSet(false),
    m_deleteWithInstanceHasBeenSet(false),
    m_diskTypeHasBeenSet(false)
{
}

string ModifyDiskAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_diskNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_portableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Portable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_portable, allocator);
    }

    if (m_deleteWithInstanceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteWithInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteWithInstance, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDiskAttributesRequest::GetDiskIds() const
{
    return m_diskIds;
}

void ModifyDiskAttributesRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

uint64_t ModifyDiskAttributesRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDiskAttributesRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyDiskAttributesRequest::GetDiskName() const
{
    return m_diskName;
}

void ModifyDiskAttributesRequest::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

bool ModifyDiskAttributesRequest::GetPortable() const
{
    return m_portable;
}

void ModifyDiskAttributesRequest::SetPortable(const bool& _portable)
{
    m_portable = _portable;
    m_portableHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::PortableHasBeenSet() const
{
    return m_portableHasBeenSet;
}

bool ModifyDiskAttributesRequest::GetDeleteWithInstance() const
{
    return m_deleteWithInstance;
}

void ModifyDiskAttributesRequest::SetDeleteWithInstance(const bool& _deleteWithInstance)
{
    m_deleteWithInstance = _deleteWithInstance;
    m_deleteWithInstanceHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::DeleteWithInstanceHasBeenSet() const
{
    return m_deleteWithInstanceHasBeenSet;
}

string ModifyDiskAttributesRequest::GetDiskType() const
{
    return m_diskType;
}

void ModifyDiskAttributesRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool ModifyDiskAttributesRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}


