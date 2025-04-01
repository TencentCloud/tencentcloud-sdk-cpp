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

#include <tencentcloud/mariadb/v20170312/model/DescribePriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribePriceRequest::DescribePriceRequest() :
    m_zoneHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_countHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_amountUnitHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

string DescribePriceRequest::ToJsonString() const
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

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
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


string DescribePriceRequest::GetZone() const
{
    return m_zone;
}

void DescribePriceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribePriceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DescribePriceRequest::GetNodeCount() const
{
    return m_nodeCount;
}

void DescribePriceRequest::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool DescribePriceRequest::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t DescribePriceRequest::GetMemory() const
{
    return m_memory;
}

void DescribePriceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribePriceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribePriceRequest::GetStorage() const
{
    return m_storage;
}

void DescribePriceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DescribePriceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t DescribePriceRequest::GetPeriod() const
{
    return m_period;
}

void DescribePriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribePriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DescribePriceRequest::GetCount() const
{
    return m_count;
}

void DescribePriceRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribePriceRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DescribePriceRequest::GetPaymode() const
{
    return m_paymode;
}

void DescribePriceRequest::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool DescribePriceRequest::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

string DescribePriceRequest::GetAmountUnit() const
{
    return m_amountUnit;
}

void DescribePriceRequest::SetAmountUnit(const string& _amountUnit)
{
    m_amountUnit = _amountUnit;
    m_amountUnitHasBeenSet = true;
}

bool DescribePriceRequest::AmountUnitHasBeenSet() const
{
    return m_amountUnitHasBeenSet;
}

string DescribePriceRequest::GetCpuType() const
{
    return m_cpuType;
}

void DescribePriceRequest::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool DescribePriceRequest::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


