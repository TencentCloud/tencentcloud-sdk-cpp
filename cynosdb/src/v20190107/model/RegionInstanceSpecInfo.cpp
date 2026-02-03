/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/RegionInstanceSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RegionInstanceSpecInfo::RegionInstanceSpecInfo() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_hasStockHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_minReplicaNumHasBeenSet(false),
    m_maxReplicaNumHasBeenSet(false),
    m_zoneStockInfosHasBeenSet(false)
{
}

CoreInternalOutcome RegionInstanceSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MinStorageSize") && !value["MinStorageSize"].IsNull())
    {
        if (!value["MinStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.MinStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorageSize = value["MinStorageSize"].GetInt64();
        m_minStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.MaxStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetInt64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("MinReplicaNum") && !value["MinReplicaNum"].IsNull())
    {
        if (!value["MinReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.MinReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicaNum = value["MinReplicaNum"].GetUint64();
        m_minReplicaNumHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicaNum") && !value["MaxReplicaNum"].IsNull())
    {
        if (!value["MaxReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.MaxReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicaNum = value["MaxReplicaNum"].GetUint64();
        m_maxReplicaNumHasBeenSet = true;
    }

    if (value.HasMember("ZoneStockInfos") && !value["ZoneStockInfos"].IsNull())
    {
        if (!value["ZoneStockInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionInstanceSpecInfo.ZoneStockInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneStockInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneStockInfo4Libra item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneStockInfos.push_back(item);
        }
        m_zoneStockInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInstanceSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_minStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorageSize, allocator);
    }

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_hasStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStock, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_minReplicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicaNum, allocator);
    }

    if (m_maxReplicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicaNum, allocator);
    }

    if (m_zoneStockInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneStockInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneStockInfos.begin(); itr != m_zoneStockInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RegionInstanceSpecInfo::GetCpu() const
{
    return m_cpu;
}

void RegionInstanceSpecInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool RegionInstanceSpecInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t RegionInstanceSpecInfo::GetMemory() const
{
    return m_memory;
}

void RegionInstanceSpecInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool RegionInstanceSpecInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t RegionInstanceSpecInfo::GetMinStorageSize() const
{
    return m_minStorageSize;
}

void RegionInstanceSpecInfo::SetMinStorageSize(const int64_t& _minStorageSize)
{
    m_minStorageSize = _minStorageSize;
    m_minStorageSizeHasBeenSet = true;
}

bool RegionInstanceSpecInfo::MinStorageSizeHasBeenSet() const
{
    return m_minStorageSizeHasBeenSet;
}

int64_t RegionInstanceSpecInfo::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void RegionInstanceSpecInfo::SetMaxStorageSize(const int64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool RegionInstanceSpecInfo::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

bool RegionInstanceSpecInfo::GetHasStock() const
{
    return m_hasStock;
}

void RegionInstanceSpecInfo::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool RegionInstanceSpecInfo::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

string RegionInstanceSpecInfo::GetInstanceType() const
{
    return m_instanceType;
}

void RegionInstanceSpecInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RegionInstanceSpecInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string RegionInstanceSpecInfo::GetStorageType() const
{
    return m_storageType;
}

void RegionInstanceSpecInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool RegionInstanceSpecInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

uint64_t RegionInstanceSpecInfo::GetMinReplicaNum() const
{
    return m_minReplicaNum;
}

void RegionInstanceSpecInfo::SetMinReplicaNum(const uint64_t& _minReplicaNum)
{
    m_minReplicaNum = _minReplicaNum;
    m_minReplicaNumHasBeenSet = true;
}

bool RegionInstanceSpecInfo::MinReplicaNumHasBeenSet() const
{
    return m_minReplicaNumHasBeenSet;
}

uint64_t RegionInstanceSpecInfo::GetMaxReplicaNum() const
{
    return m_maxReplicaNum;
}

void RegionInstanceSpecInfo::SetMaxReplicaNum(const uint64_t& _maxReplicaNum)
{
    m_maxReplicaNum = _maxReplicaNum;
    m_maxReplicaNumHasBeenSet = true;
}

bool RegionInstanceSpecInfo::MaxReplicaNumHasBeenSet() const
{
    return m_maxReplicaNumHasBeenSet;
}

vector<ZoneStockInfo4Libra> RegionInstanceSpecInfo::GetZoneStockInfos() const
{
    return m_zoneStockInfos;
}

void RegionInstanceSpecInfo::SetZoneStockInfos(const vector<ZoneStockInfo4Libra>& _zoneStockInfos)
{
    m_zoneStockInfos = _zoneStockInfos;
    m_zoneStockInfosHasBeenSet = true;
}

bool RegionInstanceSpecInfo::ZoneStockInfosHasBeenSet() const
{
    return m_zoneStockInfosHasBeenSet;
}

