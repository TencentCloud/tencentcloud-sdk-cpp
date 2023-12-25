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

#include <tencentcloud/emr/v20190103/model/ResourceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ResourceDetail::ResourceDetail() :
    m_specHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_rootSizeHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("RootSize") && !value["RootSize"].IsNull())
    {
        if (!value["RootSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.RootSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rootSize = value["RootSize"].GetInt64();
        m_rootSizeHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

}


string ResourceDetail::GetSpec() const
{
    return m_spec;
}

void ResourceDetail::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ResourceDetail::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string ResourceDetail::GetSpecName() const
{
    return m_specName;
}

void ResourceDetail::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ResourceDetail::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t ResourceDetail::GetStorageType() const
{
    return m_storageType;
}

void ResourceDetail::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ResourceDetail::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string ResourceDetail::GetDiskType() const
{
    return m_diskType;
}

void ResourceDetail::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool ResourceDetail::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t ResourceDetail::GetRootSize() const
{
    return m_rootSize;
}

void ResourceDetail::SetRootSize(const int64_t& _rootSize)
{
    m_rootSize = _rootSize;
    m_rootSizeHasBeenSet = true;
}

bool ResourceDetail::RootSizeHasBeenSet() const
{
    return m_rootSizeHasBeenSet;
}

int64_t ResourceDetail::GetMemSize() const
{
    return m_memSize;
}

void ResourceDetail::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool ResourceDetail::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t ResourceDetail::GetCpu() const
{
    return m_cpu;
}

void ResourceDetail::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ResourceDetail::GetDiskSize() const
{
    return m_diskSize;
}

void ResourceDetail::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ResourceDetail::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string ResourceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void ResourceDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

