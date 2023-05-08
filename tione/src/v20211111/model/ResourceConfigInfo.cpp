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

#include <tencentcloud/tione/v20211111/model/ResourceConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceConfigInfo::ResourceConfigInfo() :
    m_roleHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_instanceTypeAliasHasBeenSet(false),
    m_rDMAConfigHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.InstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetUint64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeAlias") && !value["InstanceTypeAlias"].IsNull())
    {
        if (!value["InstanceTypeAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.InstanceTypeAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeAlias = string(value["InstanceTypeAlias"].GetString());
        m_instanceTypeAliasHasBeenSet = true;
    }

    if (value.HasMember("RDMAConfig") && !value["RDMAConfig"].IsNull())
    {
        if (!value["RDMAConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfigInfo.RDMAConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rDMAConfig.Deserialize(value["RDMAConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rDMAConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
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

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_instanceTypeAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTypeAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_rDMAConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDMAConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rDMAConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ResourceConfigInfo::GetRole() const
{
    return m_role;
}

void ResourceConfigInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ResourceConfigInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

uint64_t ResourceConfigInfo::GetCpu() const
{
    return m_cpu;
}

void ResourceConfigInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceConfigInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ResourceConfigInfo::GetMemory() const
{
    return m_memory;
}

void ResourceConfigInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ResourceConfigInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ResourceConfigInfo::GetGpuType() const
{
    return m_gpuType;
}

void ResourceConfigInfo::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool ResourceConfigInfo::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

uint64_t ResourceConfigInfo::GetGpu() const
{
    return m_gpu;
}

void ResourceConfigInfo::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ResourceConfigInfo::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

string ResourceConfigInfo::GetInstanceType() const
{
    return m_instanceType;
}

void ResourceConfigInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourceConfigInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t ResourceConfigInfo::GetInstanceNum() const
{
    return m_instanceNum;
}

void ResourceConfigInfo::SetInstanceNum(const uint64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool ResourceConfigInfo::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string ResourceConfigInfo::GetInstanceTypeAlias() const
{
    return m_instanceTypeAlias;
}

void ResourceConfigInfo::SetInstanceTypeAlias(const string& _instanceTypeAlias)
{
    m_instanceTypeAlias = _instanceTypeAlias;
    m_instanceTypeAliasHasBeenSet = true;
}

bool ResourceConfigInfo::InstanceTypeAliasHasBeenSet() const
{
    return m_instanceTypeAliasHasBeenSet;
}

RDMAConfig ResourceConfigInfo::GetRDMAConfig() const
{
    return m_rDMAConfig;
}

void ResourceConfigInfo::SetRDMAConfig(const RDMAConfig& _rDMAConfig)
{
    m_rDMAConfig = _rDMAConfig;
    m_rDMAConfigHasBeenSet = true;
}

bool ResourceConfigInfo::RDMAConfigHasBeenSet() const
{
    return m_rDMAConfigHasBeenSet;
}

