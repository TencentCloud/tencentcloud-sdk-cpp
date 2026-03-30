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

#include <tencentcloud/cvm/v20170312/model/ResourceCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ResourceCount::ResourceCount() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_diskHasBeenSet(false)
{
}

CoreInternalOutcome ResourceCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCount.Disk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetUint64();
        m_diskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

}


uint64_t ResourceCount::GetCpu() const
{
    return m_cpu;
}

void ResourceCount::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceCount::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ResourceCount::GetMemory() const
{
    return m_memory;
}

void ResourceCount::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ResourceCount::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ResourceCount::GetGpu() const
{
    return m_gpu;
}

void ResourceCount::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ResourceCount::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t ResourceCount::GetDisk() const
{
    return m_disk;
}

void ResourceCount::SetDisk(const uint64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool ResourceCount::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

