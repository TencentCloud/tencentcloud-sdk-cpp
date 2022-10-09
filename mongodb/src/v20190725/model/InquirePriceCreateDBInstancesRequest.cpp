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

#include <tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

InquirePriceCreateDBInstancesRequest::InquirePriceCreateDBInstancesRequest() :
    m_zoneHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_replicateSetNumHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_mongosCpuHasBeenSet(false),
    m_mongosMemoryHasBeenSet(false),
    m_mongosNumHasBeenSet(false),
    m_configServerCpuHasBeenSet(false),
    m_configServerMemoryHasBeenSet(false),
    m_configServerVolumeHasBeenSet(false)
{
}

string InquirePriceCreateDBInstancesRequest::ToJsonString() const
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

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
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

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_replicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_mongosCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosCpu, allocator);
    }

    if (m_mongosMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosMemory, allocator);
    }

    if (m_mongosNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosNum, allocator);
    }

    if (m_configServerCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configServerCpu, allocator);
    }

    if (m_configServerMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configServerMemory, allocator);
    }

    if (m_configServerVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerVolume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configServerVolume, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquirePriceCreateDBInstancesRequest::GetZone() const
{
    return m_zone;
}

void InquirePriceCreateDBInstancesRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void InquirePriceCreateDBInstancesRequest::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetMemory() const
{
    return m_memory;
}

void InquirePriceCreateDBInstancesRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetVolume() const
{
    return m_volume;
}

void InquirePriceCreateDBInstancesRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string InquirePriceCreateDBInstancesRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void InquirePriceCreateDBInstancesRequest::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string InquirePriceCreateDBInstancesRequest::GetMachineCode() const
{
    return m_machineCode;
}

void InquirePriceCreateDBInstancesRequest::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquirePriceCreateDBInstancesRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquirePriceCreateDBInstancesRequest::GetClusterType() const
{
    return m_clusterType;
}

void InquirePriceCreateDBInstancesRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetReplicateSetNum() const
{
    return m_replicateSetNum;
}

void InquirePriceCreateDBInstancesRequest::SetReplicateSetNum(const int64_t& _replicateSetNum)
{
    m_replicateSetNum = _replicateSetNum;
    m_replicateSetNumHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ReplicateSetNumHasBeenSet() const
{
    return m_replicateSetNumHasBeenSet;
}

int64_t InquirePriceCreateDBInstancesRequest::GetPeriod() const
{
    return m_period;
}

void InquirePriceCreateDBInstancesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string InquirePriceCreateDBInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InquirePriceCreateDBInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetMongosCpu() const
{
    return m_mongosCpu;
}

void InquirePriceCreateDBInstancesRequest::SetMongosCpu(const uint64_t& _mongosCpu)
{
    m_mongosCpu = _mongosCpu;
    m_mongosCpuHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MongosCpuHasBeenSet() const
{
    return m_mongosCpuHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetMongosMemory() const
{
    return m_mongosMemory;
}

void InquirePriceCreateDBInstancesRequest::SetMongosMemory(const uint64_t& _mongosMemory)
{
    m_mongosMemory = _mongosMemory;
    m_mongosMemoryHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MongosMemoryHasBeenSet() const
{
    return m_mongosMemoryHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetMongosNum() const
{
    return m_mongosNum;
}

void InquirePriceCreateDBInstancesRequest::SetMongosNum(const uint64_t& _mongosNum)
{
    m_mongosNum = _mongosNum;
    m_mongosNumHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::MongosNumHasBeenSet() const
{
    return m_mongosNumHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetConfigServerCpu() const
{
    return m_configServerCpu;
}

void InquirePriceCreateDBInstancesRequest::SetConfigServerCpu(const uint64_t& _configServerCpu)
{
    m_configServerCpu = _configServerCpu;
    m_configServerCpuHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ConfigServerCpuHasBeenSet() const
{
    return m_configServerCpuHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetConfigServerMemory() const
{
    return m_configServerMemory;
}

void InquirePriceCreateDBInstancesRequest::SetConfigServerMemory(const uint64_t& _configServerMemory)
{
    m_configServerMemory = _configServerMemory;
    m_configServerMemoryHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ConfigServerMemoryHasBeenSet() const
{
    return m_configServerMemoryHasBeenSet;
}

uint64_t InquirePriceCreateDBInstancesRequest::GetConfigServerVolume() const
{
    return m_configServerVolume;
}

void InquirePriceCreateDBInstancesRequest::SetConfigServerVolume(const uint64_t& _configServerVolume)
{
    m_configServerVolume = _configServerVolume;
    m_configServerVolumeHasBeenSet = true;
}

bool InquirePriceCreateDBInstancesRequest::ConfigServerVolumeHasBeenSet() const
{
    return m_configServerVolumeHasBeenSet;
}


