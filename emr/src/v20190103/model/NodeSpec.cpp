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

#include <tencentcloud/emr/v20190103/model/NodeSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

NodeSpec::NodeSpec() :
    m_memoryHasBeenSet(false),
    m_cPUCoresHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_rootDiskVolumeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_multiDisksHasBeenSet(false)
{
}

CoreInternalOutcome NodeSpec::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("CPUCores") && !value["CPUCores"].IsNull())
    {
        if (!value["CPUCores"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.CPUCores` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUCores = value["CPUCores"].GetUint64();
        m_cPUCoresHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("RootDiskVolume") && !value["RootDiskVolume"].IsNull())
    {
        if (!value["RootDiskVolume"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.RootDiskVolume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rootDiskVolume = value["RootDiskVolume"].GetUint64();
        m_rootDiskVolumeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.StorageType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetUint64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeSpec.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("MultiDisks") && !value["MultiDisks"].IsNull())
    {
        if (!value["MultiDisks"].IsArray())
            return CoreInternalOutcome(Error("response `NodeSpec.MultiDisks` is not array type"));

        const Value &tmpValue = value["MultiDisks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiDisks.push_back(item);
        }
        m_multiDisksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeSpec::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_cPUCoresHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CPUCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUCores, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_rootDiskVolumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RootDiskVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootDiskVolume, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_specNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_multiDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MultiDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiDisks.begin(); itr != m_multiDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t NodeSpec::GetMemory() const
{
    return m_memory;
}

void NodeSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool NodeSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t NodeSpec::GetCPUCores() const
{
    return m_cPUCores;
}

void NodeSpec::SetCPUCores(const uint64_t& _cPUCores)
{
    m_cPUCores = _cPUCores;
    m_cPUCoresHasBeenSet = true;
}

bool NodeSpec::CPUCoresHasBeenSet() const
{
    return m_cPUCoresHasBeenSet;
}

uint64_t NodeSpec::GetVolume() const
{
    return m_volume;
}

void NodeSpec::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool NodeSpec::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string NodeSpec::GetDiskType() const
{
    return m_diskType;
}

void NodeSpec::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodeSpec::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string NodeSpec::GetSpec() const
{
    return m_spec;
}

void NodeSpec::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool NodeSpec::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

uint64_t NodeSpec::GetRootDiskVolume() const
{
    return m_rootDiskVolume;
}

void NodeSpec::SetRootDiskVolume(const uint64_t& _rootDiskVolume)
{
    m_rootDiskVolume = _rootDiskVolume;
    m_rootDiskVolumeHasBeenSet = true;
}

bool NodeSpec::RootDiskVolumeHasBeenSet() const
{
    return m_rootDiskVolumeHasBeenSet;
}

uint64_t NodeSpec::GetStorageType() const
{
    return m_storageType;
}

void NodeSpec::SetStorageType(const uint64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool NodeSpec::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string NodeSpec::GetSpecName() const
{
    return m_specName;
}

void NodeSpec::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool NodeSpec::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

vector<MultiDisk> NodeSpec::GetMultiDisks() const
{
    return m_multiDisks;
}

void NodeSpec::SetMultiDisks(const vector<MultiDisk>& _multiDisks)
{
    m_multiDisks = _multiDisks;
    m_multiDisksHasBeenSet = true;
}

bool NodeSpec::MultiDisksHasBeenSet() const
{
    return m_multiDisksHasBeenSet;
}

