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

#include <tencentcloud/cdc/v20201214/model/DedicatedClusterInstanceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DedicatedClusterInstanceType::DedicatedClusterInstanceType() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_networkCardHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_storageBlockAmountHasBeenSet(false),
    m_instanceBandwidthHasBeenSet(false),
    m_instancePpsHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_fpgaHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedClusterInstanceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkCard") && !value["NetworkCard"].IsNull())
    {
        if (!value["NetworkCard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.NetworkCard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCard = value["NetworkCard"].GetInt64();
        m_networkCardHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("StorageBlockAmount") && !value["StorageBlockAmount"].IsNull())
    {
        if (!value["StorageBlockAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.StorageBlockAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageBlockAmount = value["StorageBlockAmount"].GetInt64();
        m_storageBlockAmountHasBeenSet = true;
    }

    if (value.HasMember("InstanceBandwidth") && !value["InstanceBandwidth"].IsNull())
    {
        if (!value["InstanceBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.InstanceBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceBandwidth = value["InstanceBandwidth"].GetDouble();
        m_instanceBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InstancePps") && !value["InstancePps"].IsNull())
    {
        if (!value["InstancePps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.InstancePps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instancePps = value["InstancePps"].GetInt64();
        m_instancePpsHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Gpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetInt64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("Fpga") && !value["Fpga"].IsNull())
    {
        if (!value["Fpga"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Fpga` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpga = value["Fpga"].GetInt64();
        m_fpgaHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedClusterInstanceType.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedClusterInstanceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_networkCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCard, allocator);
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

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageBlockAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageBlockAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageBlockAmount, allocator);
    }

    if (m_instanceBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceBandwidth, allocator);
    }

    if (m_instancePpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instancePps, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_fpgaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fpga";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpga, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DedicatedClusterInstanceType::GetZone() const
{
    return m_zone;
}

void DedicatedClusterInstanceType::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DedicatedClusterInstanceType::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DedicatedClusterInstanceType::GetInstanceType() const
{
    return m_instanceType;
}

void DedicatedClusterInstanceType::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DedicatedClusterInstanceType::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetNetworkCard() const
{
    return m_networkCard;
}

void DedicatedClusterInstanceType::SetNetworkCard(const int64_t& _networkCard)
{
    m_networkCard = _networkCard;
    m_networkCardHasBeenSet = true;
}

bool DedicatedClusterInstanceType::NetworkCardHasBeenSet() const
{
    return m_networkCardHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetCpu() const
{
    return m_cpu;
}

void DedicatedClusterInstanceType::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DedicatedClusterInstanceType::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetMemory() const
{
    return m_memory;
}

void DedicatedClusterInstanceType::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DedicatedClusterInstanceType::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string DedicatedClusterInstanceType::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void DedicatedClusterInstanceType::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool DedicatedClusterInstanceType::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string DedicatedClusterInstanceType::GetTypeName() const
{
    return m_typeName;
}

void DedicatedClusterInstanceType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool DedicatedClusterInstanceType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetStorageBlockAmount() const
{
    return m_storageBlockAmount;
}

void DedicatedClusterInstanceType::SetStorageBlockAmount(const int64_t& _storageBlockAmount)
{
    m_storageBlockAmount = _storageBlockAmount;
    m_storageBlockAmountHasBeenSet = true;
}

bool DedicatedClusterInstanceType::StorageBlockAmountHasBeenSet() const
{
    return m_storageBlockAmountHasBeenSet;
}

double DedicatedClusterInstanceType::GetInstanceBandwidth() const
{
    return m_instanceBandwidth;
}

void DedicatedClusterInstanceType::SetInstanceBandwidth(const double& _instanceBandwidth)
{
    m_instanceBandwidth = _instanceBandwidth;
    m_instanceBandwidthHasBeenSet = true;
}

bool DedicatedClusterInstanceType::InstanceBandwidthHasBeenSet() const
{
    return m_instanceBandwidthHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetInstancePps() const
{
    return m_instancePps;
}

void DedicatedClusterInstanceType::SetInstancePps(const int64_t& _instancePps)
{
    m_instancePps = _instancePps;
    m_instancePpsHasBeenSet = true;
}

bool DedicatedClusterInstanceType::InstancePpsHasBeenSet() const
{
    return m_instancePpsHasBeenSet;
}

string DedicatedClusterInstanceType::GetCpuType() const
{
    return m_cpuType;
}

void DedicatedClusterInstanceType::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool DedicatedClusterInstanceType::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetGpu() const
{
    return m_gpu;
}

void DedicatedClusterInstanceType::SetGpu(const int64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool DedicatedClusterInstanceType::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

int64_t DedicatedClusterInstanceType::GetFpga() const
{
    return m_fpga;
}

void DedicatedClusterInstanceType::SetFpga(const int64_t& _fpga)
{
    m_fpga = _fpga;
    m_fpgaHasBeenSet = true;
}

bool DedicatedClusterInstanceType::FpgaHasBeenSet() const
{
    return m_fpgaHasBeenSet;
}

string DedicatedClusterInstanceType::GetRemark() const
{
    return m_remark;
}

void DedicatedClusterInstanceType::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DedicatedClusterInstanceType::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DedicatedClusterInstanceType::GetStatus() const
{
    return m_status;
}

void DedicatedClusterInstanceType::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DedicatedClusterInstanceType::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

