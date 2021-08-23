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

#include <tencentcloud/emr/v20190103/model/PriceResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PriceResource::PriceResource() :
    m_specHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_rootSizeHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_multiDisksHasBeenSet(false),
    m_diskCntHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_diskNumHasBeenSet(false),
    m_localDiskNumHasBeenSet(false)
{
}

CoreInternalOutcome PriceResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.StorageType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetUint64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("RootSize") && !value["RootSize"].IsNull())
    {
        if (!value["RootSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.RootSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootSize = value["RootSize"].GetInt64();
        m_rootSizeHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("MultiDisks") && !value["MultiDisks"].IsNull())
    {
        if (!value["MultiDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PriceResource.MultiDisks` is not array type"));

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

    if (value.HasMember("DiskCnt") && !value["DiskCnt"].IsNull())
    {
        if (!value["DiskCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.DiskCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCnt = value["DiskCnt"].GetInt64();
        m_diskCntHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PriceResource.Tags` is not array type"));

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

    if (value.HasMember("DiskNum") && !value["DiskNum"].IsNull())
    {
        if (!value["DiskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.DiskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskNum = value["DiskNum"].GetInt64();
        m_diskNumHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskNum") && !value["LocalDiskNum"].IsNull())
    {
        if (!value["LocalDiskNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceResource.LocalDiskNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localDiskNum = value["LocalDiskNum"].GetInt64();
        m_localDiskNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_rootSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootSize, allocator);
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

    if (m_diskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCnt, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_diskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskNum, allocator);
    }

    if (m_localDiskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localDiskNum, allocator);
    }

}


string PriceResource::GetSpec() const
{
    return m_spec;
}

void PriceResource::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool PriceResource::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

uint64_t PriceResource::GetStorageType() const
{
    return m_storageType;
}

void PriceResource::SetStorageType(const uint64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool PriceResource::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string PriceResource::GetDiskType() const
{
    return m_diskType;
}

void PriceResource::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool PriceResource::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t PriceResource::GetRootSize() const
{
    return m_rootSize;
}

void PriceResource::SetRootSize(const int64_t& _rootSize)
{
    m_rootSize = _rootSize;
    m_rootSizeHasBeenSet = true;
}

bool PriceResource::RootSizeHasBeenSet() const
{
    return m_rootSizeHasBeenSet;
}

int64_t PriceResource::GetMemSize() const
{
    return m_memSize;
}

void PriceResource::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool PriceResource::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t PriceResource::GetCpu() const
{
    return m_cpu;
}

void PriceResource::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool PriceResource::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t PriceResource::GetDiskSize() const
{
    return m_diskSize;
}

void PriceResource::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool PriceResource::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

vector<MultiDisk> PriceResource::GetMultiDisks() const
{
    return m_multiDisks;
}

void PriceResource::SetMultiDisks(const vector<MultiDisk>& _multiDisks)
{
    m_multiDisks = _multiDisks;
    m_multiDisksHasBeenSet = true;
}

bool PriceResource::MultiDisksHasBeenSet() const
{
    return m_multiDisksHasBeenSet;
}

int64_t PriceResource::GetDiskCnt() const
{
    return m_diskCnt;
}

void PriceResource::SetDiskCnt(const int64_t& _diskCnt)
{
    m_diskCnt = _diskCnt;
    m_diskCntHasBeenSet = true;
}

bool PriceResource::DiskCntHasBeenSet() const
{
    return m_diskCntHasBeenSet;
}

string PriceResource::GetInstanceType() const
{
    return m_instanceType;
}

void PriceResource::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool PriceResource::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<Tag> PriceResource::GetTags() const
{
    return m_tags;
}

void PriceResource::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PriceResource::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t PriceResource::GetDiskNum() const
{
    return m_diskNum;
}

void PriceResource::SetDiskNum(const int64_t& _diskNum)
{
    m_diskNum = _diskNum;
    m_diskNumHasBeenSet = true;
}

bool PriceResource::DiskNumHasBeenSet() const
{
    return m_diskNumHasBeenSet;
}

int64_t PriceResource::GetLocalDiskNum() const
{
    return m_localDiskNum;
}

void PriceResource::SetLocalDiskNum(const int64_t& _localDiskNum)
{
    m_localDiskNum = _localDiskNum;
    m_localDiskNumHasBeenSet = true;
}

bool PriceResource::LocalDiskNumHasBeenSet() const
{
    return m_localDiskNumHasBeenSet;
}

