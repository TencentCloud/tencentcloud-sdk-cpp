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

#include <tencentcloud/dbdc/v20201029/model/MetaResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

MetaResource::MetaResource() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_podsHasBeenSet(false)
{
}

CoreInternalOutcome MetaResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetaResource.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetaResource.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Pods") && !value["Pods"].IsNull())
    {
        if (!value["Pods"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetaResource.Pods` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pods = value["Pods"].GetUint64();
        m_podsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetaResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_podsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pods, allocator);
    }

}


double MetaResource::GetCpu() const
{
    return m_cpu;
}

void MetaResource::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool MetaResource::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double MetaResource::GetMemory() const
{
    return m_memory;
}

void MetaResource::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool MetaResource::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t MetaResource::GetPods() const
{
    return m_pods;
}

void MetaResource::SetPods(const uint64_t& _pods)
{
    m_pods = _pods;
    m_podsHasBeenSet = true;
}

bool MetaResource::PodsHasBeenSet() const
{
    return m_podsHasBeenSet;
}

