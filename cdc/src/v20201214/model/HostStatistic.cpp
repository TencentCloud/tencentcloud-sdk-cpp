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

#include <tencentcloud/cdc/v20201214/model/HostStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

HostStatistic::HostStatistic() :
    m_hostTypeHasBeenSet(false),
    m_hostFamilyHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome HostStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.HostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = string(value["HostType"].GetString());
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("HostFamily") && !value["HostFamily"].IsNull())
    {
        if (!value["HostFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.HostFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostFamily = string(value["HostFamily"].GetString());
        m_hostFamilyHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostFamily.c_str(), allocator).Move(), allocator);
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string HostStatistic::GetHostType() const
{
    return m_hostType;
}

void HostStatistic::SetHostType(const string& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool HostStatistic::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

string HostStatistic::GetHostFamily() const
{
    return m_hostFamily;
}

void HostStatistic::SetHostFamily(const string& _hostFamily)
{
    m_hostFamily = _hostFamily;
    m_hostFamilyHasBeenSet = true;
}

bool HostStatistic::HostFamilyHasBeenSet() const
{
    return m_hostFamilyHasBeenSet;
}

uint64_t HostStatistic::GetCpu() const
{
    return m_cpu;
}

void HostStatistic::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool HostStatistic::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t HostStatistic::GetMemory() const
{
    return m_memory;
}

void HostStatistic::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool HostStatistic::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t HostStatistic::GetCount() const
{
    return m_count;
}

void HostStatistic::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool HostStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

