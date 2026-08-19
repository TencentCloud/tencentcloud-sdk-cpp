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

#include <tencentcloud/csip/v20221121/model/CustomAgentRunModePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CustomAgentRunModePolicy::CustomAgentRunModePolicy() :
    m_memoryHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_networkPpsHasBeenSet(false)
{
}

CoreInternalOutcome CustomAgentRunModePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomAgentRunModePolicy.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomAgentRunModePolicy.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("NetworkPps") && !value["NetworkPps"].IsNull())
    {
        if (!value["NetworkPps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomAgentRunModePolicy.NetworkPps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkPps = value["NetworkPps"].GetUint64();
        m_networkPpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomAgentRunModePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_networkPpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkPps, allocator);
    }

}


uint64_t CustomAgentRunModePolicy::GetMemory() const
{
    return m_memory;
}

void CustomAgentRunModePolicy::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CustomAgentRunModePolicy::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CustomAgentRunModePolicy::GetCpu() const
{
    return m_cpu;
}

void CustomAgentRunModePolicy::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CustomAgentRunModePolicy::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CustomAgentRunModePolicy::GetNetworkPps() const
{
    return m_networkPps;
}

void CustomAgentRunModePolicy::SetNetworkPps(const uint64_t& _networkPps)
{
    m_networkPps = _networkPps;
    m_networkPpsHasBeenSet = true;
}

bool CustomAgentRunModePolicy::NetworkPpsHasBeenSet() const
{
    return m_networkPpsHasBeenSet;
}

