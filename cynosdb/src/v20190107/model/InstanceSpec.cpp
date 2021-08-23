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

#include <tencentcloud/cynosdb/v20190107/model/InstanceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceSpec::InstanceSpec() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_minStorageSizeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MaxStorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetUint64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("MinStorageSize") && !value["MinStorageSize"].IsNull())
    {
        if (!value["MinStorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MinStorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorageSize = value["MinStorageSize"].GetUint64();
        m_minStorageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_minStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorageSize, allocator);
    }

}


uint64_t InstanceSpec::GetCpu() const
{
    return m_cpu;
}

void InstanceSpec::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t InstanceSpec::GetMemory() const
{
    return m_memory;
}

void InstanceSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InstanceSpec::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void InstanceSpec::SetMaxStorageSize(const uint64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool InstanceSpec::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

uint64_t InstanceSpec::GetMinStorageSize() const
{
    return m_minStorageSize;
}

void InstanceSpec::SetMinStorageSize(const uint64_t& _minStorageSize)
{
    m_minStorageSize = _minStorageSize;
    m_minStorageSizeHasBeenSet = true;
}

bool InstanceSpec::MinStorageSizeHasBeenSet() const
{
    return m_minStorageSizeHasBeenSet;
}

