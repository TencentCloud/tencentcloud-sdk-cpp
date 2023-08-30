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

#include <tencentcloud/cvm/v20170312/model/HostResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

HostResource::HostResource() :
    m_cpuTotalHasBeenSet(false),
    m_cpuAvailableHasBeenSet(false),
    m_memTotalHasBeenSet(false),
    m_memAvailableHasBeenSet(false),
    m_diskTotalHasBeenSet(false),
    m_diskAvailableHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_gpuTotalHasBeenSet(false),
    m_gpuAvailableHasBeenSet(false),
    m_exclusiveOwnerHasBeenSet(false)
{
}

CoreInternalOutcome HostResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuTotal") && !value["CpuTotal"].IsNull())
    {
        if (!value["CpuTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.CpuTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTotal = value["CpuTotal"].GetUint64();
        m_cpuTotalHasBeenSet = true;
    }

    if (value.HasMember("CpuAvailable") && !value["CpuAvailable"].IsNull())
    {
        if (!value["CpuAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.CpuAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAvailable = value["CpuAvailable"].GetUint64();
        m_cpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("MemTotal") && !value["MemTotal"].IsNull())
    {
        if (!value["MemTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.MemTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memTotal = value["MemTotal"].GetDouble();
        m_memTotalHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.MemAvailable` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memAvailable = value["MemAvailable"].GetDouble();
        m_memAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskTotal") && !value["DiskTotal"].IsNull())
    {
        if (!value["DiskTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.DiskTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskTotal = value["DiskTotal"].GetUint64();
        m_diskTotalHasBeenSet = true;
    }

    if (value.HasMember("DiskAvailable") && !value["DiskAvailable"].IsNull())
    {
        if (!value["DiskAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.DiskAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAvailable = value["DiskAvailable"].GetUint64();
        m_diskAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuTotal") && !value["GpuTotal"].IsNull())
    {
        if (!value["GpuTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.GpuTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuTotal = value["GpuTotal"].GetUint64();
        m_gpuTotalHasBeenSet = true;
    }

    if (value.HasMember("GpuAvailable") && !value["GpuAvailable"].IsNull())
    {
        if (!value["GpuAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.GpuAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuAvailable = value["GpuAvailable"].GetUint64();
        m_gpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveOwner") && !value["ExclusiveOwner"].IsNull())
    {
        if (!value["ExclusiveOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostResource.ExclusiveOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveOwner = string(value["ExclusiveOwner"].GetString());
        m_exclusiveOwnerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTotal, allocator);
    }

    if (m_cpuAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAvailable, allocator);
    }

    if (m_memTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memTotal, allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAvailable, allocator);
    }

    if (m_diskTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskTotal, allocator);
    }

    if (m_diskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAvailable, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuTotal, allocator);
    }

    if (m_gpuAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuAvailable, allocator);
    }

    if (m_exclusiveOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveOwner.c_str(), allocator).Move(), allocator);
    }

}


uint64_t HostResource::GetCpuTotal() const
{
    return m_cpuTotal;
}

void HostResource::SetCpuTotal(const uint64_t& _cpuTotal)
{
    m_cpuTotal = _cpuTotal;
    m_cpuTotalHasBeenSet = true;
}

bool HostResource::CpuTotalHasBeenSet() const
{
    return m_cpuTotalHasBeenSet;
}

uint64_t HostResource::GetCpuAvailable() const
{
    return m_cpuAvailable;
}

void HostResource::SetCpuAvailable(const uint64_t& _cpuAvailable)
{
    m_cpuAvailable = _cpuAvailable;
    m_cpuAvailableHasBeenSet = true;
}

bool HostResource::CpuAvailableHasBeenSet() const
{
    return m_cpuAvailableHasBeenSet;
}

double HostResource::GetMemTotal() const
{
    return m_memTotal;
}

void HostResource::SetMemTotal(const double& _memTotal)
{
    m_memTotal = _memTotal;
    m_memTotalHasBeenSet = true;
}

bool HostResource::MemTotalHasBeenSet() const
{
    return m_memTotalHasBeenSet;
}

double HostResource::GetMemAvailable() const
{
    return m_memAvailable;
}

void HostResource::SetMemAvailable(const double& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool HostResource::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

uint64_t HostResource::GetDiskTotal() const
{
    return m_diskTotal;
}

void HostResource::SetDiskTotal(const uint64_t& _diskTotal)
{
    m_diskTotal = _diskTotal;
    m_diskTotalHasBeenSet = true;
}

bool HostResource::DiskTotalHasBeenSet() const
{
    return m_diskTotalHasBeenSet;
}

uint64_t HostResource::GetDiskAvailable() const
{
    return m_diskAvailable;
}

void HostResource::SetDiskAvailable(const uint64_t& _diskAvailable)
{
    m_diskAvailable = _diskAvailable;
    m_diskAvailableHasBeenSet = true;
}

bool HostResource::DiskAvailableHasBeenSet() const
{
    return m_diskAvailableHasBeenSet;
}

string HostResource::GetDiskType() const
{
    return m_diskType;
}

void HostResource::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool HostResource::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t HostResource::GetGpuTotal() const
{
    return m_gpuTotal;
}

void HostResource::SetGpuTotal(const uint64_t& _gpuTotal)
{
    m_gpuTotal = _gpuTotal;
    m_gpuTotalHasBeenSet = true;
}

bool HostResource::GpuTotalHasBeenSet() const
{
    return m_gpuTotalHasBeenSet;
}

uint64_t HostResource::GetGpuAvailable() const
{
    return m_gpuAvailable;
}

void HostResource::SetGpuAvailable(const uint64_t& _gpuAvailable)
{
    m_gpuAvailable = _gpuAvailable;
    m_gpuAvailableHasBeenSet = true;
}

bool HostResource::GpuAvailableHasBeenSet() const
{
    return m_gpuAvailableHasBeenSet;
}

string HostResource::GetExclusiveOwner() const
{
    return m_exclusiveOwner;
}

void HostResource::SetExclusiveOwner(const string& _exclusiveOwner)
{
    m_exclusiveOwner = _exclusiveOwner;
    m_exclusiveOwnerHasBeenSet = true;
}

bool HostResource::ExclusiveOwnerHasBeenSet() const
{
    return m_exclusiveOwnerHasBeenSet;
}

