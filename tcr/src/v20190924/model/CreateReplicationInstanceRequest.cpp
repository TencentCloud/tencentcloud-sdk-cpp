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

#include <tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateReplicationInstanceRequest::CreateReplicationInstanceRequest() :
    m_registryIdHasBeenSet(false),
    m_replicationRegionIdHasBeenSet(false),
    m_replicationRegionNameHasBeenSet(false),
    m_syncTagHasBeenSet(false)
{
}

string CreateReplicationInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationRegionId, allocator);
    }

    if (m_replicationRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replicationRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_syncTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncTag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateReplicationInstanceRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateReplicationInstanceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateReplicationInstanceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

uint64_t CreateReplicationInstanceRequest::GetReplicationRegionId() const
{
    return m_replicationRegionId;
}

void CreateReplicationInstanceRequest::SetReplicationRegionId(const uint64_t& _replicationRegionId)
{
    m_replicationRegionId = _replicationRegionId;
    m_replicationRegionIdHasBeenSet = true;
}

bool CreateReplicationInstanceRequest::ReplicationRegionIdHasBeenSet() const
{
    return m_replicationRegionIdHasBeenSet;
}

string CreateReplicationInstanceRequest::GetReplicationRegionName() const
{
    return m_replicationRegionName;
}

void CreateReplicationInstanceRequest::SetReplicationRegionName(const string& _replicationRegionName)
{
    m_replicationRegionName = _replicationRegionName;
    m_replicationRegionNameHasBeenSet = true;
}

bool CreateReplicationInstanceRequest::ReplicationRegionNameHasBeenSet() const
{
    return m_replicationRegionNameHasBeenSet;
}

bool CreateReplicationInstanceRequest::GetSyncTag() const
{
    return m_syncTag;
}

void CreateReplicationInstanceRequest::SetSyncTag(const bool& _syncTag)
{
    m_syncTag = _syncTag;
    m_syncTagHasBeenSet = true;
}

bool CreateReplicationInstanceRequest::SyncTagHasBeenSet() const
{
    return m_syncTagHasBeenSet;
}


