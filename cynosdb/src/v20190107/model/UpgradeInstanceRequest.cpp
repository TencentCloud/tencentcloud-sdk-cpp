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

#include <tencentcloud/cynosdb/v20190107/model/UpgradeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_upgradeModeHasBeenSet(false),
    m_upgradeProxyHasBeenSet(false)
{
}

string UpgradeInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }

    if (m_upgradeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeProxy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upgradeProxy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void UpgradeInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpgradeInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetMemory() const
{
    return m_memory;
}

void UpgradeInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpgradeInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string UpgradeInstanceRequest::GetUpgradeType() const
{
    return m_upgradeType;
}

void UpgradeInstanceRequest::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

string UpgradeInstanceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void UpgradeInstanceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t UpgradeInstanceRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void UpgradeInstanceRequest::SetStorageLimit(const uint64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool UpgradeInstanceRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void UpgradeInstanceRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool UpgradeInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

string UpgradeInstanceRequest::GetDbType() const
{
    return m_dbType;
}

void UpgradeInstanceRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool UpgradeInstanceRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetDealMode() const
{
    return m_dealMode;
}

void UpgradeInstanceRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool UpgradeInstanceRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

string UpgradeInstanceRequest::GetUpgradeMode() const
{
    return m_upgradeMode;
}

void UpgradeInstanceRequest::SetUpgradeMode(const string& _upgradeMode)
{
    m_upgradeMode = _upgradeMode;
    m_upgradeModeHasBeenSet = true;
}

bool UpgradeInstanceRequest::UpgradeModeHasBeenSet() const
{
    return m_upgradeModeHasBeenSet;
}

UpgradeProxy UpgradeInstanceRequest::GetUpgradeProxy() const
{
    return m_upgradeProxy;
}

void UpgradeInstanceRequest::SetUpgradeProxy(const UpgradeProxy& _upgradeProxy)
{
    m_upgradeProxy = _upgradeProxy;
    m_upgradeProxyHasBeenSet = true;
}

bool UpgradeInstanceRequest::UpgradeProxyHasBeenSet() const
{
    return m_upgradeProxyHasBeenSet;
}


