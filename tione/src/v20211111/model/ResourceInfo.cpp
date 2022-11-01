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

#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceInfo::ResourceInfo() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_realGpuHasBeenSet(false),
    m_realGpuDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome ResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("RealGpu") && !value["RealGpu"].IsNull())
    {
        if (!value["RealGpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RealGpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realGpu = value["RealGpu"].GetUint64();
        m_realGpuHasBeenSet = true;
    }

    if (value.HasMember("RealGpuDetailSet") && !value["RealGpuDetailSet"].IsNull())
    {
        if (!value["RealGpuDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RealGpuDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RealGpuDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GpuDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_realGpuDetailSet.push_back(item);
        }
        m_realGpuDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_realGpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealGpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realGpu, allocator);
    }

    if (m_realGpuDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealGpuDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realGpuDetailSet.begin(); itr != m_realGpuDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ResourceInfo::GetCpu() const
{
    return m_cpu;
}

void ResourceInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ResourceInfo::GetMemory() const
{
    return m_memory;
}

void ResourceInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ResourceInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ResourceInfo::GetGpu() const
{
    return m_gpu;
}

void ResourceInfo::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ResourceInfo::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

string ResourceInfo::GetGpuType() const
{
    return m_gpuType;
}

void ResourceInfo::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool ResourceInfo::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

uint64_t ResourceInfo::GetRealGpu() const
{
    return m_realGpu;
}

void ResourceInfo::SetRealGpu(const uint64_t& _realGpu)
{
    m_realGpu = _realGpu;
    m_realGpuHasBeenSet = true;
}

bool ResourceInfo::RealGpuHasBeenSet() const
{
    return m_realGpuHasBeenSet;
}

vector<GpuDetail> ResourceInfo::GetRealGpuDetailSet() const
{
    return m_realGpuDetailSet;
}

void ResourceInfo::SetRealGpuDetailSet(const vector<GpuDetail>& _realGpuDetailSet)
{
    m_realGpuDetailSet = _realGpuDetailSet;
    m_realGpuDetailSetHasBeenSet = true;
}

bool ResourceInfo::RealGpuDetailSetHasBeenSet() const
{
    return m_realGpuDetailSetHasBeenSet;
}

