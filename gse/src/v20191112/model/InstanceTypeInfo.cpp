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

#include <tencentcloud/gse/v20191112/model/InstanceTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

InstanceTypeInfo::InstanceTypeInfo() :
    m_typeNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_networkCardHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("NetworkCard") && !value["NetworkCard"].IsNull())
    {
        if (!value["NetworkCard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeInfo.NetworkCard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCard = value["NetworkCard"].GetUint64();
        m_networkCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_networkCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCard, allocator);
    }

}


string InstanceTypeInfo::GetTypeName() const
{
    return m_typeName;
}

void InstanceTypeInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool InstanceTypeInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string InstanceTypeInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceTypeInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceTypeInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t InstanceTypeInfo::GetCpu() const
{
    return m_cpu;
}

void InstanceTypeInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceTypeInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t InstanceTypeInfo::GetMemory() const
{
    return m_memory;
}

void InstanceTypeInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceTypeInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InstanceTypeInfo::GetNetworkCard() const
{
    return m_networkCard;
}

void InstanceTypeInfo::SetNetworkCard(const uint64_t& _networkCard)
{
    m_networkCard = _networkCard;
    m_networkCardHasBeenSet = true;
}

bool InstanceTypeInfo::NetworkCardHasBeenSet() const
{
    return m_networkCardHasBeenSet;
}

