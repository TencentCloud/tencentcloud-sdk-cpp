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

#include <tencentcloud/tione/v20211111/model/GroupResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

GroupResource::GroupResource() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome GroupResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResource.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResource.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupResource.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("GpuDetailSet") && !value["GpuDetailSet"].IsNull())
    {
        if (!value["GpuDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupResource.GpuDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GpuDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GpuDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gpuDetailSet.push_back(item);
        }
        m_gpuDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gpuDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gpuDetailSet.begin(); itr != m_gpuDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t GroupResource::GetCpu() const
{
    return m_cpu;
}

void GroupResource::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool GroupResource::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t GroupResource::GetMemory() const
{
    return m_memory;
}

void GroupResource::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool GroupResource::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t GroupResource::GetGpu() const
{
    return m_gpu;
}

void GroupResource::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool GroupResource::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

vector<GpuDetail> GroupResource::GetGpuDetailSet() const
{
    return m_gpuDetailSet;
}

void GroupResource::SetGpuDetailSet(const vector<GpuDetail>& _gpuDetailSet)
{
    m_gpuDetailSet = _gpuDetailSet;
    m_gpuDetailSetHasBeenSet = true;
}

bool GroupResource::GpuDetailSetHasBeenSet() const
{
    return m_gpuDetailSetHasBeenSet;
}

