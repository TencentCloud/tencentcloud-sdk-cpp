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

#include <tencentcloud/cynosdb/v20190107/model/InquirePriceCreateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InquirePriceCreateRequest::InquirePriceCreateRequest() :
    m_zoneHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_instancePayModeHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_ccuHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false)
{
}

string InquirePriceCreateRequest::ToJsonString() const
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

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_instancePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instancePayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storagePayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_ccuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ccu, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquirePriceCreateRequest::GetZone() const
{
    return m_zone;
}

void InquirePriceCreateRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquirePriceCreateRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InquirePriceCreateRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquirePriceCreateRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquirePriceCreateRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquirePriceCreateRequest::GetInstancePayMode() const
{
    return m_instancePayMode;
}

void InquirePriceCreateRequest::SetInstancePayMode(const string& _instancePayMode)
{
    m_instancePayMode = _instancePayMode;
    m_instancePayModeHasBeenSet = true;
}

bool InquirePriceCreateRequest::InstancePayModeHasBeenSet() const
{
    return m_instancePayModeHasBeenSet;
}

string InquirePriceCreateRequest::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void InquirePriceCreateRequest::SetStoragePayMode(const string& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool InquirePriceCreateRequest::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

string InquirePriceCreateRequest::GetDeviceType() const
{
    return m_deviceType;
}

void InquirePriceCreateRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InquirePriceCreateRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t InquirePriceCreateRequest::GetCpu() const
{
    return m_cpu;
}

void InquirePriceCreateRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InquirePriceCreateRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InquirePriceCreateRequest::GetMemory() const
{
    return m_memory;
}

void InquirePriceCreateRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquirePriceCreateRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

double InquirePriceCreateRequest::GetCcu() const
{
    return m_ccu;
}

void InquirePriceCreateRequest::SetCcu(const double& _ccu)
{
    m_ccu = _ccu;
    m_ccuHasBeenSet = true;
}

bool InquirePriceCreateRequest::CcuHasBeenSet() const
{
    return m_ccuHasBeenSet;
}

int64_t InquirePriceCreateRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void InquirePriceCreateRequest::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool InquirePriceCreateRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t InquirePriceCreateRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquirePriceCreateRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquirePriceCreateRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquirePriceCreateRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquirePriceCreateRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquirePriceCreateRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}


