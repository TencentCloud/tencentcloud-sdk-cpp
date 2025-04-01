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

#include <tencentcloud/vdb/v20230616/model/CreateInstancesComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

CreateInstancesComponent::CreateInstancesComponent() :
    m_componentHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstancesComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.ReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetUint64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.StorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetUint64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancesComponent.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInstancesComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
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

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string CreateInstancesComponent::GetComponent() const
{
    return m_component;
}

void CreateInstancesComponent::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool CreateInstancesComponent::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

double CreateInstancesComponent::GetCpu() const
{
    return m_cpu;
}

void CreateInstancesComponent::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateInstancesComponent::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double CreateInstancesComponent::GetMemory() const
{
    return m_memory;
}

void CreateInstancesComponent::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateInstancesComponent::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateInstancesComponent::GetReplicaNum() const
{
    return m_replicaNum;
}

void CreateInstancesComponent::SetReplicaNum(const uint64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool CreateInstancesComponent::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

string CreateInstancesComponent::GetName() const
{
    return m_name;
}

void CreateInstancesComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInstancesComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateInstancesComponent::GetStorageSize() const
{
    return m_storageSize;
}

void CreateInstancesComponent::SetStorageSize(const uint64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool CreateInstancesComponent::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string CreateInstancesComponent::GetStorageType() const
{
    return m_storageType;
}

void CreateInstancesComponent::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateInstancesComponent::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string CreateInstancesComponent::GetParams() const
{
    return m_params;
}

void CreateInstancesComponent::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CreateInstancesComponent::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

