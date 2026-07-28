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

#include <tencentcloud/postgres/v20170312/model/ProxySpecItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxySpecItem::ProxySpecItem() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_minNodeNumHasBeenSet(false),
    m_maxNodeNumHasBeenSet(false)
{
}

CoreInternalOutcome ProxySpecItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpecItem.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpecItem.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MinNodeNum") && !value["MinNodeNum"].IsNull())
    {
        if (!value["MinNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpecItem.MinNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodeNum = value["MinNodeNum"].GetUint64();
        m_minNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxNodeNum") && !value["MaxNodeNum"].IsNull())
    {
        if (!value["MaxNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpecItem.MaxNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodeNum = value["MaxNodeNum"].GetUint64();
        m_maxNodeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxySpecItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_minNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodeNum, allocator);
    }

    if (m_maxNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodeNum, allocator);
    }

}


uint64_t ProxySpecItem::GetCpu() const
{
    return m_cpu;
}

void ProxySpecItem::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxySpecItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ProxySpecItem::GetMemory() const
{
    return m_memory;
}

void ProxySpecItem::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ProxySpecItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ProxySpecItem::GetMinNodeNum() const
{
    return m_minNodeNum;
}

void ProxySpecItem::SetMinNodeNum(const uint64_t& _minNodeNum)
{
    m_minNodeNum = _minNodeNum;
    m_minNodeNumHasBeenSet = true;
}

bool ProxySpecItem::MinNodeNumHasBeenSet() const
{
    return m_minNodeNumHasBeenSet;
}

uint64_t ProxySpecItem::GetMaxNodeNum() const
{
    return m_maxNodeNum;
}

void ProxySpecItem::SetMaxNodeNum(const uint64_t& _maxNodeNum)
{
    m_maxNodeNum = _maxNodeNum;
    m_maxNodeNumHasBeenSet = true;
}

bool ProxySpecItem::MaxNodeNumHasBeenSet() const
{
    return m_maxNodeNumHasBeenSet;
}

