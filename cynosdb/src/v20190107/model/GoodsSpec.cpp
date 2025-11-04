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

#include <tencentcloud/cynosdb/v20190107/model/GoodsSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

GoodsSpec::GoodsSpec() :
    m_goodsNumHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_ccuHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome GoodsSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsNum") && !value["GoodsNum"].IsNull())
    {
        if (!value["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = value["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Ccu") && !value["Ccu"].IsNull())
    {
        if (!value["Ccu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.Ccu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ccu = value["Ccu"].GetDouble();
        m_ccuHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsSpec.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_ccuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccu, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

}


int64_t GoodsSpec::GetGoodsNum() const
{
    return m_goodsNum;
}

void GoodsSpec::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool GoodsSpec::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t GoodsSpec::GetCpu() const
{
    return m_cpu;
}

void GoodsSpec::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool GoodsSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t GoodsSpec::GetMemory() const
{
    return m_memory;
}

void GoodsSpec::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool GoodsSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

double GoodsSpec::GetCcu() const
{
    return m_ccu;
}

void GoodsSpec::SetCcu(const double& _ccu)
{
    m_ccu = _ccu;
    m_ccuHasBeenSet = true;
}

bool GoodsSpec::CcuHasBeenSet() const
{
    return m_ccuHasBeenSet;
}

int64_t GoodsSpec::GetStorageLimit() const
{
    return m_storageLimit;
}

void GoodsSpec::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool GoodsSpec::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t GoodsSpec::GetTimeSpan() const
{
    return m_timeSpan;
}

void GoodsSpec::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool GoodsSpec::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string GoodsSpec::GetTimeUnit() const
{
    return m_timeUnit;
}

void GoodsSpec::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool GoodsSpec::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string GoodsSpec::GetDeviceType() const
{
    return m_deviceType;
}

void GoodsSpec::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool GoodsSpec::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

