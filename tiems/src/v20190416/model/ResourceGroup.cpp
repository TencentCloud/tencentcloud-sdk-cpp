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

#include <tencentcloud/tiems/v20190416/model/ResourceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

ResourceGroup::ResourceGroup() :
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_jobCountHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_hasPrepaidHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Created") && !value["Created"].IsNull())
    {
        if (!value["Created"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Created` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_created = string(value["Created"].GetString());
        m_createdHasBeenSet = true;
    }

    if (value.HasMember("Updated") && !value["Updated"].IsNull())
    {
        if (!value["Updated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Updated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updated = string(value["Updated"].GetString());
        m_updatedHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("JobCount") && !value["JobCount"].IsNull())
    {
        if (!value["JobCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.JobCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobCount = value["JobCount"].GetUint64();
        m_jobCountHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Public` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetBool();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.GpuType` is not array type"));

        const rapidjson::Value &tmpValue = value["GpuType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_gpuType.push_back((*itr).GetString());
        }
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("HasPrepaid") && !value["HasPrepaid"].IsNull())
    {
        if (!value["HasPrepaid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.HasPrepaid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPrepaid = value["HasPrepaid"].GetBool();
        m_hasPrepaidHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroup.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_jobCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobCount, allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gpuType.begin(); itr != m_gpuType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hasPrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPrepaid, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

}


string ResourceGroup::GetId() const
{
    return m_id;
}

void ResourceGroup::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ResourceGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ResourceGroup::GetRegion() const
{
    return m_region;
}

void ResourceGroup::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceGroup::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ResourceGroup::GetCluster() const
{
    return m_cluster;
}

void ResourceGroup::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool ResourceGroup::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string ResourceGroup::GetName() const
{
    return m_name;
}

void ResourceGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResourceGroup::GetDescription() const
{
    return m_description;
}

void ResourceGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ResourceGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ResourceGroup::GetCreated() const
{
    return m_created;
}

void ResourceGroup::SetCreated(const string& _created)
{
    m_created = _created;
    m_createdHasBeenSet = true;
}

bool ResourceGroup::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

string ResourceGroup::GetUpdated() const
{
    return m_updated;
}

void ResourceGroup::SetUpdated(const string& _updated)
{
    m_updated = _updated;
    m_updatedHasBeenSet = true;
}

bool ResourceGroup::UpdatedHasBeenSet() const
{
    return m_updatedHasBeenSet;
}

uint64_t ResourceGroup::GetInstanceCount() const
{
    return m_instanceCount;
}

void ResourceGroup::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ResourceGroup::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t ResourceGroup::GetServiceCount() const
{
    return m_serviceCount;
}

void ResourceGroup::SetServiceCount(const uint64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool ResourceGroup::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

uint64_t ResourceGroup::GetJobCount() const
{
    return m_jobCount;
}

void ResourceGroup::SetJobCount(const uint64_t& _jobCount)
{
    m_jobCount = _jobCount;
    m_jobCountHasBeenSet = true;
}

bool ResourceGroup::JobCountHasBeenSet() const
{
    return m_jobCountHasBeenSet;
}

bool ResourceGroup::GetPublic() const
{
    return m_public;
}

void ResourceGroup::SetPublic(const bool& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool ResourceGroup::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

string ResourceGroup::GetInstanceType() const
{
    return m_instanceType;
}

void ResourceGroup::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourceGroup::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ResourceGroup::GetStatus() const
{
    return m_status;
}

void ResourceGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ResourceGroup::GetGpu() const
{
    return m_gpu;
}

void ResourceGroup::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ResourceGroup::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t ResourceGroup::GetCpu() const
{
    return m_cpu;
}

void ResourceGroup::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ResourceGroup::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ResourceGroup::GetMemory() const
{
    return m_memory;
}

void ResourceGroup::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ResourceGroup::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ResourceGroup::GetZone() const
{
    return m_zone;
}

void ResourceGroup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ResourceGroup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> ResourceGroup::GetGpuType() const
{
    return m_gpuType;
}

void ResourceGroup::SetGpuType(const vector<string>& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool ResourceGroup::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

bool ResourceGroup::GetHasPrepaid() const
{
    return m_hasPrepaid;
}

void ResourceGroup::SetHasPrepaid(const bool& _hasPrepaid)
{
    m_hasPrepaid = _hasPrepaid;
    m_hasPrepaidHasBeenSet = true;
}

bool ResourceGroup::HasPrepaidHasBeenSet() const
{
    return m_hasPrepaidHasBeenSet;
}

string ResourceGroup::GetPayMode() const
{
    return m_payMode;
}

void ResourceGroup::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ResourceGroup::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

