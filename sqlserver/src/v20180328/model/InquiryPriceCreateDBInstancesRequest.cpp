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

#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

InquiryPriceCreateDBInstancesRequest::InquiryPriceCreateDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_drZonesHasBeenSet(false)
{
}

string InquiryPriceCreateDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_drZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drZones.begin(); itr != m_drZones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void InquiryPriceCreateDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void InquiryPriceCreateDBInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetStorage() const
{
    return m_storage;
}

void InquiryPriceCreateDBInstancesRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InquiryPriceCreateDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void InquiryPriceCreateDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquiryPriceCreateDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void InquiryPriceCreateDBInstancesRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

int64_t InquiryPriceCreateDBInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void InquiryPriceCreateDBInstancesRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void InquiryPriceCreateDBInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InquiryPriceCreateDBInstancesRequest::GetMachineType() const
{
    return m_machineType;
}

void InquiryPriceCreateDBInstancesRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

vector<string> InquiryPriceCreateDBInstancesRequest::GetDrZones() const
{
    return m_drZones;
}

void InquiryPriceCreateDBInstancesRequest::SetDrZones(const vector<string>& _drZones)
{
    m_drZones = _drZones;
    m_drZonesHasBeenSet = true;
}

bool InquiryPriceCreateDBInstancesRequest::DrZonesHasBeenSet() const
{
    return m_drZonesHasBeenSet;
}


