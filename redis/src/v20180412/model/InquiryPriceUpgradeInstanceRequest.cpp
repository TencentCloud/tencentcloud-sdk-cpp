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

#include <tencentcloud/redis/v20180412/model/InquiryPriceUpgradeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InquiryPriceUpgradeInstanceRequest::InquiryPriceUpgradeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_redisShardNumHasBeenSet(false),
    m_redisReplicasNumHasBeenSet(false)
{
}

string InquiryPriceUpgradeInstanceRequest::ToJsonString() const
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

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_redisShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redisShardNum, allocator);
    }

    if (m_redisReplicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redisReplicasNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceUpgradeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquiryPriceUpgradeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquiryPriceUpgradeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstanceRequest::GetMemSize() const
{
    return m_memSize;
}

void InquiryPriceUpgradeInstanceRequest::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InquiryPriceUpgradeInstanceRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstanceRequest::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void InquiryPriceUpgradeInstanceRequest::SetRedisShardNum(const uint64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool InquiryPriceUpgradeInstanceRequest::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstanceRequest::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void InquiryPriceUpgradeInstanceRequest::SetRedisReplicasNum(const uint64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool InquiryPriceUpgradeInstanceRequest::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}


