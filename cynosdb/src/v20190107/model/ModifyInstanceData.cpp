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

#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyInstanceData::ModifyInstanceData() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_oldCpuHasBeenSet(false),
    m_oldMemoryHasBeenSet(false),
    m_oldStorageLimitHasBeenSet(false),
    m_oldDeviceTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_libraNodeCountHasBeenSet(false),
    m_oldLibraNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ModifyInstanceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("OldCpu") && !value["OldCpu"].IsNull())
    {
        if (!value["OldCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.OldCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldCpu = value["OldCpu"].GetInt64();
        m_oldCpuHasBeenSet = true;
    }

    if (value.HasMember("OldMemory") && !value["OldMemory"].IsNull())
    {
        if (!value["OldMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.OldMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldMemory = value["OldMemory"].GetInt64();
        m_oldMemoryHasBeenSet = true;
    }

    if (value.HasMember("OldStorageLimit") && !value["OldStorageLimit"].IsNull())
    {
        if (!value["OldStorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.OldStorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldStorageLimit = value["OldStorageLimit"].GetInt64();
        m_oldStorageLimitHasBeenSet = true;
    }

    if (value.HasMember("OldDeviceType") && !value["OldDeviceType"].IsNull())
    {
        if (!value["OldDeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.OldDeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldDeviceType = string(value["OldDeviceType"].GetString());
        m_oldDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpgradeType") && !value["UpgradeType"].IsNull())
    {
        if (!value["UpgradeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.UpgradeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeType = string(value["UpgradeType"].GetString());
        m_upgradeTypeHasBeenSet = true;
    }

    if (value.HasMember("LibraNodeCount") && !value["LibraNodeCount"].IsNull())
    {
        if (!value["LibraNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.LibraNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_libraNodeCount = value["LibraNodeCount"].GetInt64();
        m_libraNodeCountHasBeenSet = true;
    }

    if (value.HasMember("OldLibraNodeCount") && !value["OldLibraNodeCount"].IsNull())
    {
        if (!value["OldLibraNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInstanceData.OldLibraNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldLibraNodeCount = value["OldLibraNodeCount"].GetInt64();
        m_oldLibraNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyInstanceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_oldCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldCpu, allocator);
    }

    if (m_oldMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldMemory, allocator);
    }

    if (m_oldStorageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldStorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldStorageLimit, allocator);
    }

    if (m_oldDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldDeviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_libraNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_libraNodeCount, allocator);
    }

    if (m_oldLibraNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldLibraNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldLibraNodeCount, allocator);
    }

}


int64_t ModifyInstanceData::GetCpu() const
{
    return m_cpu;
}

void ModifyInstanceData::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ModifyInstanceData::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ModifyInstanceData::GetMemory() const
{
    return m_memory;
}

void ModifyInstanceData::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ModifyInstanceData::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t ModifyInstanceData::GetStorageLimit() const
{
    return m_storageLimit;
}

void ModifyInstanceData::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool ModifyInstanceData::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t ModifyInstanceData::GetOldCpu() const
{
    return m_oldCpu;
}

void ModifyInstanceData::SetOldCpu(const int64_t& _oldCpu)
{
    m_oldCpu = _oldCpu;
    m_oldCpuHasBeenSet = true;
}

bool ModifyInstanceData::OldCpuHasBeenSet() const
{
    return m_oldCpuHasBeenSet;
}

int64_t ModifyInstanceData::GetOldMemory() const
{
    return m_oldMemory;
}

void ModifyInstanceData::SetOldMemory(const int64_t& _oldMemory)
{
    m_oldMemory = _oldMemory;
    m_oldMemoryHasBeenSet = true;
}

bool ModifyInstanceData::OldMemoryHasBeenSet() const
{
    return m_oldMemoryHasBeenSet;
}

int64_t ModifyInstanceData::GetOldStorageLimit() const
{
    return m_oldStorageLimit;
}

void ModifyInstanceData::SetOldStorageLimit(const int64_t& _oldStorageLimit)
{
    m_oldStorageLimit = _oldStorageLimit;
    m_oldStorageLimitHasBeenSet = true;
}

bool ModifyInstanceData::OldStorageLimitHasBeenSet() const
{
    return m_oldStorageLimitHasBeenSet;
}

string ModifyInstanceData::GetOldDeviceType() const
{
    return m_oldDeviceType;
}

void ModifyInstanceData::SetOldDeviceType(const string& _oldDeviceType)
{
    m_oldDeviceType = _oldDeviceType;
    m_oldDeviceTypeHasBeenSet = true;
}

bool ModifyInstanceData::OldDeviceTypeHasBeenSet() const
{
    return m_oldDeviceTypeHasBeenSet;
}

string ModifyInstanceData::GetDeviceType() const
{
    return m_deviceType;
}

void ModifyInstanceData::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModifyInstanceData::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ModifyInstanceData::GetUpgradeType() const
{
    return m_upgradeType;
}

void ModifyInstanceData::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool ModifyInstanceData::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

int64_t ModifyInstanceData::GetLibraNodeCount() const
{
    return m_libraNodeCount;
}

void ModifyInstanceData::SetLibraNodeCount(const int64_t& _libraNodeCount)
{
    m_libraNodeCount = _libraNodeCount;
    m_libraNodeCountHasBeenSet = true;
}

bool ModifyInstanceData::LibraNodeCountHasBeenSet() const
{
    return m_libraNodeCountHasBeenSet;
}

int64_t ModifyInstanceData::GetOldLibraNodeCount() const
{
    return m_oldLibraNodeCount;
}

void ModifyInstanceData::SetOldLibraNodeCount(const int64_t& _oldLibraNodeCount)
{
    m_oldLibraNodeCount = _oldLibraNodeCount;
    m_oldLibraNodeCountHasBeenSet = true;
}

bool ModifyInstanceData::OldLibraNodeCountHasBeenSet() const
{
    return m_oldLibraNodeCountHasBeenSet;
}

