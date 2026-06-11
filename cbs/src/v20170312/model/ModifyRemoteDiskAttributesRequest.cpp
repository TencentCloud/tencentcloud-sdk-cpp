/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cbs/v20170312/model/ModifyRemoteDiskAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

ModifyRemoteDiskAttributesRequest::ModifyRemoteDiskAttributesRequest() :
    m_remoteDiskIdsHasBeenSet(false),
    m_diskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string ModifyRemoteDiskAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_remoteDiskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteDiskIds.begin(); itr != m_remoteDiskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyRemoteDiskAttributesRequest::GetRemoteDiskIds() const
{
    return m_remoteDiskIds;
}

void ModifyRemoteDiskAttributesRequest::SetRemoteDiskIds(const vector<string>& _remoteDiskIds)
{
    m_remoteDiskIds = _remoteDiskIds;
    m_remoteDiskIdsHasBeenSet = true;
}

bool ModifyRemoteDiskAttributesRequest::RemoteDiskIdsHasBeenSet() const
{
    return m_remoteDiskIdsHasBeenSet;
}

string ModifyRemoteDiskAttributesRequest::GetDiskName() const
{
    return m_diskName;
}

void ModifyRemoteDiskAttributesRequest::SetDiskName(const string& _diskName)
{
    m_diskName = _diskName;
    m_diskNameHasBeenSet = true;
}

bool ModifyRemoteDiskAttributesRequest::DiskNameHasBeenSet() const
{
    return m_diskNameHasBeenSet;
}

uint64_t ModifyRemoteDiskAttributesRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyRemoteDiskAttributesRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyRemoteDiskAttributesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


