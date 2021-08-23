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

#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstanceTypeConfig::InstanceTypeConfig() :
    m_instanceFamilyConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_vcpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_cpuModelNameHasBeenSet(false),
    m_instanceFamilyTypeConfigHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_vgpuHasBeenSet(false),
    m_gpuModelNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamilyConfig") && !value["InstanceFamilyConfig"].IsNull())
    {
        if (!value["InstanceFamilyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.InstanceFamilyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceFamilyConfig.Deserialize(value["InstanceFamilyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceFamilyConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Vcpu") && !value["Vcpu"].IsNull())
    {
        if (!value["Vcpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.Vcpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vcpu = value["Vcpu"].GetInt64();
        m_vcpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("CpuModelName") && !value["CpuModelName"].IsNull())
    {
        if (!value["CpuModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.CpuModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuModelName = string(value["CpuModelName"].GetString());
        m_cpuModelNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilyTypeConfig") && !value["InstanceFamilyTypeConfig"].IsNull())
    {
        if (!value["InstanceFamilyTypeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.InstanceFamilyTypeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceFamilyTypeConfig.Deserialize(value["InstanceFamilyTypeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceFamilyTypeConfigHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("Vgpu") && !value["Vgpu"].IsNull())
    {
        if (!value["Vgpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.Vgpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_vgpu = value["Vgpu"].GetDouble();
        m_vgpuHasBeenSet = true;
    }

    if (value.HasMember("GpuModelName") && !value["GpuModelName"].IsNull())
    {
        if (!value["GpuModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.GpuModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuModelName = string(value["GpuModelName"].GetString());
        m_gpuModelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceFamilyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_vcpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vcpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceFamilyTypeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_vgpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vgpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vgpu, allocator);
    }

    if (m_gpuModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuModelName.c_str(), allocator).Move(), allocator);
    }

}


InstanceFamilyConfig InstanceTypeConfig::GetInstanceFamilyConfig() const
{
    return m_instanceFamilyConfig;
}

void InstanceTypeConfig::SetInstanceFamilyConfig(const InstanceFamilyConfig& _instanceFamilyConfig)
{
    m_instanceFamilyConfig = _instanceFamilyConfig;
    m_instanceFamilyConfigHasBeenSet = true;
}

bool InstanceTypeConfig::InstanceFamilyConfigHasBeenSet() const
{
    return m_instanceFamilyConfigHasBeenSet;
}

string InstanceTypeConfig::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceTypeConfig::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceTypeConfig::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InstanceTypeConfig::GetVcpu() const
{
    return m_vcpu;
}

void InstanceTypeConfig::SetVcpu(const int64_t& _vcpu)
{
    m_vcpu = _vcpu;
    m_vcpuHasBeenSet = true;
}

bool InstanceTypeConfig::VcpuHasBeenSet() const
{
    return m_vcpuHasBeenSet;
}

int64_t InstanceTypeConfig::GetMemory() const
{
    return m_memory;
}

void InstanceTypeConfig::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceTypeConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string InstanceTypeConfig::GetFrequency() const
{
    return m_frequency;
}

void InstanceTypeConfig::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool InstanceTypeConfig::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string InstanceTypeConfig::GetCpuModelName() const
{
    return m_cpuModelName;
}

void InstanceTypeConfig::SetCpuModelName(const string& _cpuModelName)
{
    m_cpuModelName = _cpuModelName;
    m_cpuModelNameHasBeenSet = true;
}

bool InstanceTypeConfig::CpuModelNameHasBeenSet() const
{
    return m_cpuModelNameHasBeenSet;
}

InstanceFamilyTypeConfig InstanceTypeConfig::GetInstanceFamilyTypeConfig() const
{
    return m_instanceFamilyTypeConfig;
}

void InstanceTypeConfig::SetInstanceFamilyTypeConfig(const InstanceFamilyTypeConfig& _instanceFamilyTypeConfig)
{
    m_instanceFamilyTypeConfig = _instanceFamilyTypeConfig;
    m_instanceFamilyTypeConfigHasBeenSet = true;
}

bool InstanceTypeConfig::InstanceFamilyTypeConfigHasBeenSet() const
{
    return m_instanceFamilyTypeConfigHasBeenSet;
}

string InstanceTypeConfig::GetExtInfo() const
{
    return m_extInfo;
}

void InstanceTypeConfig::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool InstanceTypeConfig::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

double InstanceTypeConfig::GetVgpu() const
{
    return m_vgpu;
}

void InstanceTypeConfig::SetVgpu(const double& _vgpu)
{
    m_vgpu = _vgpu;
    m_vgpuHasBeenSet = true;
}

bool InstanceTypeConfig::VgpuHasBeenSet() const
{
    return m_vgpuHasBeenSet;
}

string InstanceTypeConfig::GetGpuModelName() const
{
    return m_gpuModelName;
}

void InstanceTypeConfig::SetGpuModelName(const string& _gpuModelName)
{
    m_gpuModelName = _gpuModelName;
    m_gpuModelNameHasBeenSet = true;
}

bool InstanceTypeConfig::GpuModelNameHasBeenSet() const
{
    return m_gpuModelNameHasBeenSet;
}

