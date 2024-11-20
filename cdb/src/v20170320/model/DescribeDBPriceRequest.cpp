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

#include <tencentcloud/cdb/v20170320/model/DescribeDBPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDBPriceRequest::DescribeDBPriceRequest() :
    m_periodHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceNodesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ladderHasBeenSet(false),
    m_diskTypeHasBeenSet(false)
{
}

string DescribeDBPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNodes, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ladderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ladder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ladder, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDBPriceRequest::GetPeriod() const
{
    return m_period;
}

void DescribeDBPriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeDBPriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeDBPriceRequest::GetZone() const
{
    return m_zone;
}

void DescribeDBPriceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeDBPriceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void DescribeDBPriceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool DescribeDBPriceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetMemory() const
{
    return m_memory;
}

void DescribeDBPriceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeDBPriceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetVolume() const
{
    return m_volume;
}

void DescribeDBPriceRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool DescribeDBPriceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string DescribeDBPriceRequest::GetInstanceRole() const
{
    return m_instanceRole;
}

void DescribeDBPriceRequest::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool DescribeDBPriceRequest::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string DescribeDBPriceRequest::GetPayType() const
{
    return m_payType;
}

void DescribeDBPriceRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool DescribeDBPriceRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetProtectMode() const
{
    return m_protectMode;
}

void DescribeDBPriceRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool DescribeDBPriceRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

string DescribeDBPriceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeDBPriceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeDBPriceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetInstanceNodes() const
{
    return m_instanceNodes;
}

void DescribeDBPriceRequest::SetInstanceNodes(const int64_t& _instanceNodes)
{
    m_instanceNodes = _instanceNodes;
    m_instanceNodesHasBeenSet = true;
}

bool DescribeDBPriceRequest::InstanceNodesHasBeenSet() const
{
    return m_instanceNodesHasBeenSet;
}

int64_t DescribeDBPriceRequest::GetCpu() const
{
    return m_cpu;
}

void DescribeDBPriceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DescribeDBPriceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DescribeDBPriceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBPriceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBPriceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeDBPriceRequest::GetLadder() const
{
    return m_ladder;
}

void DescribeDBPriceRequest::SetLadder(const uint64_t& _ladder)
{
    m_ladder = _ladder;
    m_ladderHasBeenSet = true;
}

bool DescribeDBPriceRequest::LadderHasBeenSet() const
{
    return m_ladderHasBeenSet;
}

string DescribeDBPriceRequest::GetDiskType() const
{
    return m_diskType;
}

void DescribeDBPriceRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DescribeDBPriceRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}


