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

#include <tencentcloud/mongodb/v20190725/model/ModifyShardSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyShardSpecInfo::ModifyShardSpecInfo() :
    m_replicaSetIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyShardSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicaSetId") && !value["ReplicaSetId"].IsNull())
    {
        if (!value["ReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyShardSpecInfo.ReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetId = string(value["ReplicaSetId"].GetString());
        m_replicaSetIdHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyShardSpecInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyShardSpecInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyShardSpecInfo.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyShardSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicaSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaSetId.c_str(), allocator).Move(), allocator);
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

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


string ModifyShardSpecInfo::GetReplicaSetId() const
{
    return m_replicaSetId;
}

void ModifyShardSpecInfo::SetReplicaSetId(const string& _replicaSetId)
{
    m_replicaSetId = _replicaSetId;
    m_replicaSetIdHasBeenSet = true;
}

bool ModifyShardSpecInfo::ReplicaSetIdHasBeenSet() const
{
    return m_replicaSetIdHasBeenSet;
}

uint64_t ModifyShardSpecInfo::GetCpu() const
{
    return m_cpu;
}

void ModifyShardSpecInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ModifyShardSpecInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ModifyShardSpecInfo::GetMemory() const
{
    return m_memory;
}

void ModifyShardSpecInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ModifyShardSpecInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ModifyShardSpecInfo::GetVolume() const
{
    return m_volume;
}

void ModifyShardSpecInfo::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool ModifyShardSpecInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

