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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceSpecBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeInstanceSpecBandwidthRequest::DescribeInstanceSpecBandwidthRequest() :
    m_instanceIdHasBeenSet(false),
    m_shardSizeHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_replicateNumHasBeenSet(false),
    m_readOnlyWeightHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeInstanceSpecBandwidthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardSize, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_replicateNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateNum, allocator);
    }

    if (m_readOnlyWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnlyWeight, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceSpecBandwidthRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceSpecBandwidthRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeInstanceSpecBandwidthRequest::GetShardSize() const
{
    return m_shardSize;
}

void DescribeInstanceSpecBandwidthRequest::SetShardSize(const int64_t& _shardSize)
{
    m_shardSize = _shardSize;
    m_shardSizeHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::ShardSizeHasBeenSet() const
{
    return m_shardSizeHasBeenSet;
}

int64_t DescribeInstanceSpecBandwidthRequest::GetShardNum() const
{
    return m_shardNum;
}

void DescribeInstanceSpecBandwidthRequest::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t DescribeInstanceSpecBandwidthRequest::GetReplicateNum() const
{
    return m_replicateNum;
}

void DescribeInstanceSpecBandwidthRequest::SetReplicateNum(const int64_t& _replicateNum)
{
    m_replicateNum = _replicateNum;
    m_replicateNumHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::ReplicateNumHasBeenSet() const
{
    return m_replicateNumHasBeenSet;
}

int64_t DescribeInstanceSpecBandwidthRequest::GetReadOnlyWeight() const
{
    return m_readOnlyWeight;
}

void DescribeInstanceSpecBandwidthRequest::SetReadOnlyWeight(const int64_t& _readOnlyWeight)
{
    m_readOnlyWeight = _readOnlyWeight;
    m_readOnlyWeightHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::ReadOnlyWeightHasBeenSet() const
{
    return m_readOnlyWeightHasBeenSet;
}

int64_t DescribeInstanceSpecBandwidthRequest::GetType() const
{
    return m_type;
}

void DescribeInstanceSpecBandwidthRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeInstanceSpecBandwidthRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


