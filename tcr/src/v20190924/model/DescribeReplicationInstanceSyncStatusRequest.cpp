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

#include <tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

DescribeReplicationInstanceSyncStatusRequest::DescribeReplicationInstanceSyncStatusRequest() :
    m_registryIdHasBeenSet(false),
    m_replicationRegistryIdHasBeenSet(false),
    m_replicationRegionIdHasBeenSet(false)
{
}

string DescribeReplicationInstanceSyncStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegistryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicationRegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_replicationRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationRegionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicationRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationRegionId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReplicationInstanceSyncStatusRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeReplicationInstanceSyncStatusRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeReplicationInstanceSyncStatusRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeReplicationInstanceSyncStatusRequest::GetReplicationRegistryId() const
{
    return m_replicationRegistryId;
}

void DescribeReplicationInstanceSyncStatusRequest::SetReplicationRegistryId(const string& _replicationRegistryId)
{
    m_replicationRegistryId = _replicationRegistryId;
    m_replicationRegistryIdHasBeenSet = true;
}

bool DescribeReplicationInstanceSyncStatusRequest::ReplicationRegistryIdHasBeenSet() const
{
    return m_replicationRegistryIdHasBeenSet;
}

uint64_t DescribeReplicationInstanceSyncStatusRequest::GetReplicationRegionId() const
{
    return m_replicationRegionId;
}

void DescribeReplicationInstanceSyncStatusRequest::SetReplicationRegionId(const uint64_t& _replicationRegionId)
{
    m_replicationRegionId = _replicationRegionId;
    m_replicationRegionIdHasBeenSet = true;
}

bool DescribeReplicationInstanceSyncStatusRequest::ReplicationRegionIdHasBeenSet() const
{
    return m_replicationRegionIdHasBeenSet;
}


