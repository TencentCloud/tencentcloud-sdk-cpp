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

#include <tencentcloud/cvm/v20170312/model/InstanceTypeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InstanceTypeConfig::InstanceTypeConfig() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_gPUHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_fPGAHasBeenSet(false),
    m_gpuCountHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
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

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("GPU") && !value["GPU"].IsNull())
    {
        if (!value["GPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.GPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gPU = value["GPU"].GetInt64();
        m_gPUHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
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

    if (value.HasMember("FPGA") && !value["FPGA"].IsNull())
    {
        if (!value["FPGA"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.FPGA` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fPGA = value["FPGA"].GetInt64();
        m_fPGAHasBeenSet = true;
    }

    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfig.GpuCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = value["GpuCount"].GetDouble();
        m_gpuCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPU, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_fPGAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPGA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fPGA, allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCount, allocator);
    }

}


string InstanceTypeConfig::GetZone() const
{
    return m_zone;
}

void InstanceTypeConfig::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceTypeConfig::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
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

string InstanceTypeConfig::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void InstanceTypeConfig::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool InstanceTypeConfig::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

int64_t InstanceTypeConfig::GetGPU() const
{
    return m_gPU;
}

void InstanceTypeConfig::SetGPU(const int64_t& _gPU)
{
    m_gPU = _gPU;
    m_gPUHasBeenSet = true;
}

bool InstanceTypeConfig::GPUHasBeenSet() const
{
    return m_gPUHasBeenSet;
}

int64_t InstanceTypeConfig::GetCPU() const
{
    return m_cPU;
}

void InstanceTypeConfig::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool InstanceTypeConfig::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
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

int64_t InstanceTypeConfig::GetFPGA() const
{
    return m_fPGA;
}

void InstanceTypeConfig::SetFPGA(const int64_t& _fPGA)
{
    m_fPGA = _fPGA;
    m_fPGAHasBeenSet = true;
}

bool InstanceTypeConfig::FPGAHasBeenSet() const
{
    return m_fPGAHasBeenSet;
}

double InstanceTypeConfig::GetGpuCount() const
{
    return m_gpuCount;
}

void InstanceTypeConfig::SetGpuCount(const double& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool InstanceTypeConfig::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

