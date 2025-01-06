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

#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

UpgradeDBInstanceRequest::UpgradeDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_hATypeHasBeenSet(false),
    m_multiZonesHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_drZonesHasBeenSet(false)
{
}

string UpgradeDBInstanceRequest::ToJsonString() const
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_hATypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hAType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_multiZones.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_drZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drZones.begin(); itr != m_drZones.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void UpgradeDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void UpgradeDBInstanceRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void UpgradeDBInstanceRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> UpgradeDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void UpgradeDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void UpgradeDBInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string UpgradeDBInstanceRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void UpgradeDBInstanceRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string UpgradeDBInstanceRequest::GetHAType() const
{
    return m_hAType;
}

void UpgradeDBInstanceRequest::SetHAType(const string& _hAType)
{
    m_hAType = _hAType;
    m_hATypeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::HATypeHasBeenSet() const
{
    return m_hATypeHasBeenSet;
}

string UpgradeDBInstanceRequest::GetMultiZones() const
{
    return m_multiZones;
}

void UpgradeDBInstanceRequest::SetMultiZones(const string& _multiZones)
{
    m_multiZones = _multiZones;
    m_multiZonesHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::MultiZonesHasBeenSet() const
{
    return m_multiZonesHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void UpgradeDBInstanceRequest::SetWaitSwitch(const int64_t& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

vector<DrZoneInfo> UpgradeDBInstanceRequest::GetDrZones() const
{
    return m_drZones;
}

void UpgradeDBInstanceRequest::SetDrZones(const vector<DrZoneInfo>& _drZones)
{
    m_drZones = _drZones;
    m_drZonesHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::DrZonesHasBeenSet() const
{
    return m_drZonesHasBeenSet;
}


