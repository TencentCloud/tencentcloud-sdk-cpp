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

#include <tencentcloud/redis/v20180412/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InquiryPriceCreateInstanceRequest::InquiryPriceCreateInstanceRequest() :
    m_typeIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_redisShardNumHasBeenSet(false),
    m_redisReplicasNumHasBeenSet(false),
    m_replicasReadonlyHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_productVersionHasBeenSet(false)
{
}

string InquiryPriceCreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
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

    if (m_replicasReadonlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasReadonly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicasReadonly, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t InquiryPriceCreateInstanceRequest::GetTypeId() const
{
    return m_typeId;
}

void InquiryPriceCreateInstanceRequest::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetMemSize() const
{
    return m_memSize;
}

void InquiryPriceCreateInstanceRequest::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquiryPriceCreateInstanceRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetPeriod() const
{
    return m_period;
}

void InquiryPriceCreateInstanceRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t InquiryPriceCreateInstanceRequest::GetBillingMode() const
{
    return m_billingMode;
}

void InquiryPriceCreateInstanceRequest::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

uint64_t InquiryPriceCreateInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void InquiryPriceCreateInstanceRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InquiryPriceCreateInstanceRequest::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void InquiryPriceCreateInstanceRequest::SetRedisShardNum(const int64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

int64_t InquiryPriceCreateInstanceRequest::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void InquiryPriceCreateInstanceRequest::SetRedisReplicasNum(const int64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}

bool InquiryPriceCreateInstanceRequest::GetReplicasReadonly() const
{
    return m_replicasReadonly;
}

void InquiryPriceCreateInstanceRequest::SetReplicasReadonly(const bool& _replicasReadonly)
{
    m_replicasReadonly = _replicasReadonly;
    m_replicasReadonlyHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ReplicasReadonlyHasBeenSet() const
{
    return m_replicasReadonlyHasBeenSet;
}

string InquiryPriceCreateInstanceRequest::GetZoneName() const
{
    return m_zoneName;
}

void InquiryPriceCreateInstanceRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string InquiryPriceCreateInstanceRequest::GetProductVersion() const
{
    return m_productVersion;
}

void InquiryPriceCreateInstanceRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool InquiryPriceCreateInstanceRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}


