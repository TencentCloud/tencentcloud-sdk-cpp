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

#include <tencentcloud/cdwdoris/v20211228/model/ResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ResourceSpec::ResourceSpec() :
    m_nameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDiskHasBeenSet(false),
    m_maxNodeSizeHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_computeSpecDescHasBeenSet(false),
    m_instanceQuotaHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisk") && !value["DataDisk"].IsNull())
    {
        if (!value["DataDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.DataDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataDisk.Deserialize(value["DataDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataDiskHasBeenSet = true;
    }

    if (value.HasMember("MaxNodeSize") && !value["MaxNodeSize"].IsNull())
    {
        if (!value["MaxNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.MaxNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodeSize = value["MaxNodeSize"].GetInt64();
        m_maxNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("ComputeSpecDesc") && !value["ComputeSpecDesc"].IsNull())
    {
        if (!value["ComputeSpecDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.ComputeSpecDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeSpecDesc = string(value["ComputeSpecDesc"].GetString());
        m_computeSpecDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceQuota") && !value["InstanceQuota"].IsNull())
    {
        if (!value["InstanceQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.InstanceQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceQuota = value["InstanceQuota"].GetInt64();
        m_instanceQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxNodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodeSize, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_computeSpecDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeSpecDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeSpecDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceQuota, allocator);
    }

}


string ResourceSpec::GetName() const
{
    return m_name;
}

void ResourceSpec::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceSpec::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ResourceSpec::GetCpu() const
{
    return m_cpu;
}

void ResourceSpec::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ResourceSpec::GetMem() const
{
    return m_mem;
}

void ResourceSpec::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ResourceSpec::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ResourceSpec::GetType() const
{
    return m_type;
}

void ResourceSpec::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceSpec::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DiskSpec ResourceSpec::GetSystemDisk() const
{
    return m_systemDisk;
}

void ResourceSpec::SetSystemDisk(const DiskSpec& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool ResourceSpec::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

DiskSpec ResourceSpec::GetDataDisk() const
{
    return m_dataDisk;
}

void ResourceSpec::SetDataDisk(const DiskSpec& _dataDisk)
{
    m_dataDisk = _dataDisk;
    m_dataDiskHasBeenSet = true;
}

bool ResourceSpec::DataDiskHasBeenSet() const
{
    return m_dataDiskHasBeenSet;
}

int64_t ResourceSpec::GetMaxNodeSize() const
{
    return m_maxNodeSize;
}

void ResourceSpec::SetMaxNodeSize(const int64_t& _maxNodeSize)
{
    m_maxNodeSize = _maxNodeSize;
    m_maxNodeSizeHasBeenSet = true;
}

bool ResourceSpec::MaxNodeSizeHasBeenSet() const
{
    return m_maxNodeSizeHasBeenSet;
}

bool ResourceSpec::GetAvailable() const
{
    return m_available;
}

void ResourceSpec::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool ResourceSpec::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string ResourceSpec::GetComputeSpecDesc() const
{
    return m_computeSpecDesc;
}

void ResourceSpec::SetComputeSpecDesc(const string& _computeSpecDesc)
{
    m_computeSpecDesc = _computeSpecDesc;
    m_computeSpecDescHasBeenSet = true;
}

bool ResourceSpec::ComputeSpecDescHasBeenSet() const
{
    return m_computeSpecDescHasBeenSet;
}

int64_t ResourceSpec::GetInstanceQuota() const
{
    return m_instanceQuota;
}

void ResourceSpec::SetInstanceQuota(const int64_t& _instanceQuota)
{
    m_instanceQuota = _instanceQuota;
    m_instanceQuotaHasBeenSet = true;
}

bool ResourceSpec::InstanceQuotaHasBeenSet() const
{
    return m_instanceQuotaHasBeenSet;
}

