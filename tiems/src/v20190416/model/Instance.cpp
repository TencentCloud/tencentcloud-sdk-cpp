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

#include <tencentcloud/tiems/v20190416/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

Instance::Instance() :
    m_idHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_abnormalReasonHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_cpuRequestedHasBeenSet(false),
    m_memoryRequestedHasBeenSet(false),
    m_gpuRequestedHasBeenSet(false),
    m_rsgAsGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AbnormalReason") && !value["AbnormalReason"].IsNull())
    {
        if (!value["AbnormalReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AbnormalReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalReason = string(value["AbnormalReason"].GetString());
        m_abnormalReasonHasBeenSet = true;
    }

    if (value.HasMember("Created") && !value["Created"].IsNull())
    {
        if (!value["Created"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Created` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_created = string(value["Created"].GetString());
        m_createdHasBeenSet = true;
    }

    if (value.HasMember("Updated") && !value["Updated"].IsNull())
    {
        if (!value["Updated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Updated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updated = string(value["Updated"].GetString());
        m_updatedHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CpuRequested") && !value["CpuRequested"].IsNull())
    {
        if (!value["CpuRequested"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CpuRequested` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequested = value["CpuRequested"].GetUint64();
        m_cpuRequestedHasBeenSet = true;
    }

    if (value.HasMember("MemoryRequested") && !value["MemoryRequested"].IsNull())
    {
        if (!value["MemoryRequested"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.MemoryRequested` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRequested = value["MemoryRequested"].GetUint64();
        m_memoryRequestedHasBeenSet = true;
    }

    if (value.HasMember("GpuRequested") && !value["GpuRequested"].IsNull())
    {
        if (!value["GpuRequested"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GpuRequested` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuRequested = value["GpuRequested"].GetUint64();
        m_gpuRequestedHasBeenSet = true;
    }

    if (value.HasMember("RsgAsGroupId") && !value["RsgAsGroupId"].IsNull())
    {
        if (!value["RsgAsGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RsgAsGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rsgAsGroupId = string(value["RsgAsGroupId"].GetString());
        m_rsgAsGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
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

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abnormalReason.c_str(), allocator).Move(), allocator);
    }

    if (m_createdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Created";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_created.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updated.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequested";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuRequested, allocator);
    }

    if (m_memoryRequestedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRequested";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryRequested, allocator);
    }

    if (m_gpuRequestedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuRequested";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuRequested, allocator);
    }

    if (m_rsgAsGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsgAsGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rsgAsGroupId.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetId() const
{
    return m_id;
}

void Instance::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Instance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Instance::GetZone() const
{
    return m_zone;
}

void Instance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Instance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Instance::GetInstanceType() const
{
    return m_instanceType;
}

void Instance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Instance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Instance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Instance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Instance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t Instance::GetCpu() const
{
    return m_cpu;
}

void Instance::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Instance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t Instance::GetMemory() const
{
    return m_memory;
}

void Instance::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Instance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t Instance::GetGpu() const
{
    return m_gpu;
}

void Instance::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool Instance::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

string Instance::GetState() const
{
    return m_state;
}

void Instance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Instance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Instance::GetAbnormalReason() const
{
    return m_abnormalReason;
}

void Instance::SetAbnormalReason(const string& _abnormalReason)
{
    m_abnormalReason = _abnormalReason;
    m_abnormalReasonHasBeenSet = true;
}

bool Instance::AbnormalReasonHasBeenSet() const
{
    return m_abnormalReasonHasBeenSet;
}

string Instance::GetCreated() const
{
    return m_created;
}

void Instance::SetCreated(const string& _created)
{
    m_created = _created;
    m_createdHasBeenSet = true;
}

bool Instance::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

string Instance::GetUpdated() const
{
    return m_updated;
}

void Instance::SetUpdated(const string& _updated)
{
    m_updated = _updated;
    m_updatedHasBeenSet = true;
}

bool Instance::UpdatedHasBeenSet() const
{
    return m_updatedHasBeenSet;
}

string Instance::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void Instance::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool Instance::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string Instance::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void Instance::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool Instance::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string Instance::GetRenewFlag() const
{
    return m_renewFlag;
}

void Instance::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Instance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string Instance::GetRegion() const
{
    return m_region;
}

void Instance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Instance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t Instance::GetCpuRequested() const
{
    return m_cpuRequested;
}

void Instance::SetCpuRequested(const uint64_t& _cpuRequested)
{
    m_cpuRequested = _cpuRequested;
    m_cpuRequestedHasBeenSet = true;
}

bool Instance::CpuRequestedHasBeenSet() const
{
    return m_cpuRequestedHasBeenSet;
}

uint64_t Instance::GetMemoryRequested() const
{
    return m_memoryRequested;
}

void Instance::SetMemoryRequested(const uint64_t& _memoryRequested)
{
    m_memoryRequested = _memoryRequested;
    m_memoryRequestedHasBeenSet = true;
}

bool Instance::MemoryRequestedHasBeenSet() const
{
    return m_memoryRequestedHasBeenSet;
}

uint64_t Instance::GetGpuRequested() const
{
    return m_gpuRequested;
}

void Instance::SetGpuRequested(const uint64_t& _gpuRequested)
{
    m_gpuRequested = _gpuRequested;
    m_gpuRequestedHasBeenSet = true;
}

bool Instance::GpuRequestedHasBeenSet() const
{
    return m_gpuRequestedHasBeenSet;
}

string Instance::GetRsgAsGroupId() const
{
    return m_rsgAsGroupId;
}

void Instance::SetRsgAsGroupId(const string& _rsgAsGroupId)
{
    m_rsgAsGroupId = _rsgAsGroupId;
    m_rsgAsGroupIdHasBeenSet = true;
}

bool Instance::RsgAsGroupIdHasBeenSet() const
{
    return m_rsgAsGroupIdHasBeenSet;
}

