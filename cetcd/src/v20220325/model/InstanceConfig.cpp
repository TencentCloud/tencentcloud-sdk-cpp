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

#include <tencentcloud/cetcd/v20220325/model/InstanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

InstanceConfig::InstanceConfig() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfig.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

}


uint64_t InstanceConfig::GetCpu() const
{
    return m_cpu;
}

void InstanceConfig::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t InstanceConfig::GetMem() const
{
    return m_mem;
}

void InstanceConfig::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool InstanceConfig::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

uint64_t InstanceConfig::GetSize() const
{
    return m_size;
}

void InstanceConfig::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool InstanceConfig::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

