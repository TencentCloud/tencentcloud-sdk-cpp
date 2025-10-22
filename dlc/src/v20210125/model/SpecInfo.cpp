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

#include <tencentcloud/dlc/v20210125/model/SpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SpecInfo::SpecInfo() :
    m_nameHasBeenSet(false),
    m_cuHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

CoreInternalOutcome SpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Cu") && !value["Cu"].IsNull())
    {
        if (!value["Cu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Cu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cu = value["Cu"].GetInt64();
        m_cuHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cu, allocator);
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

}


string SpecInfo::GetName() const
{
    return m_name;
}

void SpecInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SpecInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SpecInfo::GetCu() const
{
    return m_cu;
}

void SpecInfo::SetCu(const int64_t& _cu)
{
    m_cu = _cu;
    m_cuHasBeenSet = true;
}

bool SpecInfo::CuHasBeenSet() const
{
    return m_cuHasBeenSet;
}

int64_t SpecInfo::GetCpu() const
{
    return m_cpu;
}

void SpecInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SpecInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t SpecInfo::GetMemory() const
{
    return m_memory;
}

void SpecInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SpecInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

