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

#include <tencentcloud/tcr/v20190924/model/DeleteReplicationInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DeleteReplicationInstanceRequest::DeleteReplicationInstanceRequest() :
    m_registryIdHasBeenSet(false),
    m_replicationRegistryIdHasBeenSet(false),
    m_replicationRegionIdHasBeenSet(false)
{
}

string DeleteReplicationInstanceRequest::ToJsonString() const
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

    if (m_replicationRegistryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replicationRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationRegionId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteReplicationInstanceRequest::GetRegistryId() const
{
    return m_registryId;
}

void DeleteReplicationInstanceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DeleteReplicationInstanceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DeleteReplicationInstanceRequest::GetReplicationRegistryId() const
{
    return m_replicationRegistryId;
}

void DeleteReplicationInstanceRequest::SetReplicationRegistryId(const string& _replicationRegistryId)
{
    m_replicationRegistryId = _replicationRegistryId;
    m_replicationRegistryIdHasBeenSet = true;
}

bool DeleteReplicationInstanceRequest::ReplicationRegistryIdHasBeenSet() const
{
    return m_replicationRegistryIdHasBeenSet;
}

uint64_t DeleteReplicationInstanceRequest::GetReplicationRegionId() const
{
    return m_replicationRegionId;
}

void DeleteReplicationInstanceRequest::SetReplicationRegionId(const uint64_t& _replicationRegionId)
{
    m_replicationRegionId = _replicationRegionId;
    m_replicationRegionIdHasBeenSet = true;
}

bool DeleteReplicationInstanceRequest::ReplicationRegionIdHasBeenSet() const
{
    return m_replicationRegionIdHasBeenSet;
}


