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

#include <tencentcloud/ctsdb/v20230202/model/Component.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Component::Component() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_networksHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome Component::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Disk` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetUint64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("Shards") && !value["Shards"].IsNull())
    {
        if (!value["Shards"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Shards` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shards = value["Shards"].GetUint64();
        m_shardsHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.Replicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetUint64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Networks") && !value["Networks"].IsNull())
    {
        if (!value["Networks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Component.Networks` is not array type"));

        const rapidjson::Value &tmpValue = value["Networks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Network item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networks.push_back(item);
        }
        m_networksHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Component.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Component::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_shardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shards, allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_networksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Networks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networks.begin(); itr != m_networks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


string Component::GetInstanceID() const
{
    return m_instanceID;
}

void Component::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool Component::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string Component::GetName() const
{
    return m_name;
}

void Component::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Component::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Component::GetType() const
{
    return m_type;
}

void Component::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Component::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t Component::GetCpu() const
{
    return m_cpu;
}

void Component::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Component::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t Component::GetMemory() const
{
    return m_memory;
}

void Component::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Component::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t Component::GetDisk() const
{
    return m_disk;
}

void Component::SetDisk(const uint64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool Component::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

uint64_t Component::GetShards() const
{
    return m_shards;
}

void Component::SetShards(const uint64_t& _shards)
{
    m_shards = _shards;
    m_shardsHasBeenSet = true;
}

bool Component::ShardsHasBeenSet() const
{
    return m_shardsHasBeenSet;
}

uint64_t Component::GetReplicas() const
{
    return m_replicas;
}

void Component::SetReplicas(const uint64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool Component::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

vector<Network> Component::GetNetworks() const
{
    return m_networks;
}

void Component::SetNetworks(const vector<Network>& _networks)
{
    m_networks = _networks;
    m_networksHasBeenSet = true;
}

bool Component::NetworksHasBeenSet() const
{
    return m_networksHasBeenSet;
}

uint64_t Component::GetState() const
{
    return m_state;
}

void Component::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Component::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t Component::GetID() const
{
    return m_iD;
}

void Component::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool Component::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

