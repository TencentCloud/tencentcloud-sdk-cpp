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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDCDBPriceRequest::DescribeDCDBPriceRequest() :
    m_zoneHasBeenSet(false),
    m_countHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_shardNodeCountHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_amountUnitHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

string DescribeDCDBPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_shardNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNodeCount, allocator);
    }

    if (m_shardMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardMemory, allocator);
    }

    if (m_shardStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardStorage, allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_paymodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paymode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymode.c_str(), allocator).Move(), allocator);
    }

    if (m_amountUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amountUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDCDBPriceRequest::GetZone() const
{
    return m_zone;
}

void DescribeDCDBPriceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetCount() const
{
    return m_count;
}

void DescribeDCDBPriceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetPeriod() const
{
    return m_period;
}

void DescribeDCDBPriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetShardNodeCount() const
{
    return m_shardNodeCount;
}

void DescribeDCDBPriceRequest::SetShardNodeCount(const int64_t& _shardNodeCount)
{
    m_shardNodeCount = _shardNodeCount;
    m_shardNodeCountHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::ShardNodeCountHasBeenSet() const
{
    return m_shardNodeCountHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetShardMemory() const
{
    return m_shardMemory;
}

void DescribeDCDBPriceRequest::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetShardStorage() const
{
    return m_shardStorage;
}

void DescribeDCDBPriceRequest::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}

int64_t DescribeDCDBPriceRequest::GetShardCount() const
{
    return m_shardCount;
}

void DescribeDCDBPriceRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

string DescribeDCDBPriceRequest::GetPaymode() const
{
    return m_paymode;
}

void DescribeDCDBPriceRequest::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

string DescribeDCDBPriceRequest::GetAmountUnit() const
{
    return m_amountUnit;
}

void DescribeDCDBPriceRequest::SetAmountUnit(const string& _amountUnit)
{
    m_amountUnit = _amountUnit;
    m_amountUnitHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::AmountUnitHasBeenSet() const
{
    return m_amountUnitHasBeenSet;
}

string DescribeDCDBPriceRequest::GetCpuType() const
{
    return m_cpuType;
}

void DescribeDCDBPriceRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool DescribeDCDBPriceRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


