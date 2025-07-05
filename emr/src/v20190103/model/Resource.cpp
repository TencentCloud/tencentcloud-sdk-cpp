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

#include <tencentcloud/emr/v20190103/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

Resource::Resource() :
    m_specHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_rootSizeHasBeenSet(false),
    m_multiDisksHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_localDiskNumHasBeenSet(false),
    m_diskNumHasBeenSet(false),
    m_gpuDescHasBeenSet(false)
{
}

CoreInternalOutcome Resource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("RootSize") && !value["RootSize"].IsNull())
    {
        if (!value["RootSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.RootSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootSize = value["RootSize"].GetInt64();
        m_rootSizeHasBeenSet = true;
    }

    if (value.HasMember("MultiDisks") && !value["MultiDisks"].IsNull())
    {
        if (!value["MultiDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.MultiDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskNum") && !value["LocalDiskNum"].IsNull())
    {
        if (!value["LocalDiskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.LocalDiskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localDiskNum = value["LocalDiskNum"].GetUint64();
        m_localDiskNumHasBeenSet = true;
    }

    if (value.HasMember("DiskNum") && !value["DiskNum"].IsNull())
    {
        if (!value["DiskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.DiskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskNum = value["DiskNum"].GetUint64();
        m_diskNumHasBeenSet = true;
    }

    if (value.HasMember("GpuDesc") && !value["GpuDesc"].IsNull())
    {
        if (!value["GpuDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.GpuDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuDesc = string(value["GpuDesc"].GetString());
        m_gpuDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Resource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_rootSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootSize, allocator);
    }

    if (m_multiDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiDisks.begin(); itr != m_multiDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_localDiskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localDiskNum, allocator);
    }

    if (m_diskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskNum, allocator);
    }

    if (m_gpuDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuDesc.c_str(), allocator).Move(), allocator);
    }

}


string Resource::GetSpec() const
{
    return m_spec;
}

void Resource::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool Resource::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t Resource::GetStorageType() const
{
    return m_storageType;
}

void Resource::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool Resource::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string Resource::GetDiskType() const
{
    return m_diskType;
}

void Resource::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Resource::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t Resource::GetMemSize() const
{
    return m_memSize;
}

void Resource::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool Resource::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t Resource::GetCpu() const
{
    return m_cpu;
}

void Resource::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Resource::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t Resource::GetDiskSize() const
{
    return m_diskSize;
}

void Resource::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Resource::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t Resource::GetRootSize() const
{
    return m_rootSize;
}

void Resource::SetRootSize(const int64_t& _rootSize)
{
    m_rootSize = _rootSize;
    m_rootSizeHasBeenSet = true;
}

bool Resource::RootSizeHasBeenSet() const
{
    return m_rootSizeHasBeenSet;
}

vector<MultiDisk> Resource::GetMultiDisks() const
{
    return m_multiDisks;
}

void Resource::SetMultiDisks(const vector<MultiDisk>& _multiDisks)
{
    m_multiDisks = _multiDisks;
    m_multiDisksHasBeenSet = true;
}

bool Resource::MultiDisksHasBeenSet() const
{
    return m_multiDisksHasBeenSet;
}

vector<Tag> Resource::GetTags() const
{
    return m_tags;
}

void Resource::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Resource::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Resource::GetInstanceType() const
{
    return m_instanceType;
}

void Resource::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Resource::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t Resource::GetLocalDiskNum() const
{
    return m_localDiskNum;
}

void Resource::SetLocalDiskNum(const uint64_t& _localDiskNum)
{
    m_localDiskNum = _localDiskNum;
    m_localDiskNumHasBeenSet = true;
}

bool Resource::LocalDiskNumHasBeenSet() const
{
    return m_localDiskNumHasBeenSet;
}

uint64_t Resource::GetDiskNum() const
{
    return m_diskNum;
}

void Resource::SetDiskNum(const uint64_t& _diskNum)
{
    m_diskNum = _diskNum;
    m_diskNumHasBeenSet = true;
}

bool Resource::DiskNumHasBeenSet() const
{
    return m_diskNumHasBeenSet;
}

string Resource::GetGpuDesc() const
{
    return m_gpuDesc;
}

void Resource::SetGpuDesc(const string& _gpuDesc)
{
    m_gpuDesc = _gpuDesc;
    m_gpuDescHasBeenSet = true;
}

bool Resource::GpuDescHasBeenSet() const
{
    return m_gpuDescHasBeenSet;
}

