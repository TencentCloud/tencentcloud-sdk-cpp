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

#include <tencentcloud/cynosdb/v20190107/model/InstanceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceSpec::InstanceSpec() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_minStorageSizeHasBeenSet(false),
    m_hasStockHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_maxIopsHasBeenSet(false),
    m_maxIoBandWidthHasBeenSet(false),
    m_zoneStockInfosHasBeenSet(false),
    m_stockCountHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MaxStorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetUint64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("MinStorageSize") && !value["MinStorageSize"].IsNull())
    {
        if (!value["MinStorageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MinStorageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorageSize = value["MinStorageSize"].GetUint64();
        m_minStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxIops") && !value["MaxIops"].IsNull())
    {
        if (!value["MaxIops"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MaxIops` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIops = value["MaxIops"].GetInt64();
        m_maxIopsHasBeenSet = true;
    }

    if (value.HasMember("MaxIoBandWidth") && !value["MaxIoBandWidth"].IsNull())
    {
        if (!value["MaxIoBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.MaxIoBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIoBandWidth = value["MaxIoBandWidth"].GetInt64();
        m_maxIoBandWidthHasBeenSet = true;
    }

    if (value.HasMember("ZoneStockInfos") && !value["ZoneStockInfos"].IsNull())
    {
        if (!value["ZoneStockInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.ZoneStockInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneStockInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneStockInfo item;
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

    if (value.HasMember("StockCount") && !value["StockCount"].IsNull())
    {
        if (!value["StockCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSpec.StockCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stockCount = value["StockCount"].GetInt64();
        m_stockCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_minStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorageSize, allocator);
    }

    if (m_hasStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStock, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxIopsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIops, allocator);
    }

    if (m_maxIoBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIoBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIoBandWidth, allocator);
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

    if (m_stockCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StockCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stockCount, allocator);
    }

}


uint64_t InstanceSpec::GetCpu() const
{
    return m_cpu;
}

void InstanceSpec::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t InstanceSpec::GetMemory() const
{
    return m_memory;
}

void InstanceSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InstanceSpec::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void InstanceSpec::SetMaxStorageSize(const uint64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool InstanceSpec::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

uint64_t InstanceSpec::GetMinStorageSize() const
{
    return m_minStorageSize;
}

void InstanceSpec::SetMinStorageSize(const uint64_t& _minStorageSize)
{
    m_minStorageSize = _minStorageSize;
    m_minStorageSizeHasBeenSet = true;
}

bool InstanceSpec::MinStorageSizeHasBeenSet() const
{
    return m_minStorageSizeHasBeenSet;
}

bool InstanceSpec::GetHasStock() const
{
    return m_hasStock;
}

void InstanceSpec::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool InstanceSpec::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

string InstanceSpec::GetMachineType() const
{
    return m_machineType;
}

void InstanceSpec::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool InstanceSpec::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t InstanceSpec::GetMaxIops() const
{
    return m_maxIops;
}

void InstanceSpec::SetMaxIops(const int64_t& _maxIops)
{
    m_maxIops = _maxIops;
    m_maxIopsHasBeenSet = true;
}

bool InstanceSpec::MaxIopsHasBeenSet() const
{
    return m_maxIopsHasBeenSet;
}

int64_t InstanceSpec::GetMaxIoBandWidth() const
{
    return m_maxIoBandWidth;
}

void InstanceSpec::SetMaxIoBandWidth(const int64_t& _maxIoBandWidth)
{
    m_maxIoBandWidth = _maxIoBandWidth;
    m_maxIoBandWidthHasBeenSet = true;
}

bool InstanceSpec::MaxIoBandWidthHasBeenSet() const
{
    return m_maxIoBandWidthHasBeenSet;
}

vector<ZoneStockInfo> InstanceSpec::GetZoneStockInfos() const
{
    return m_zoneStockInfos;
}

void InstanceSpec::SetZoneStockInfos(const vector<ZoneStockInfo>& _zoneStockInfos)
{
    m_zoneStockInfos = _zoneStockInfos;
    m_zoneStockInfosHasBeenSet = true;
}

bool InstanceSpec::ZoneStockInfosHasBeenSet() const
{
    return m_zoneStockInfosHasBeenSet;
}

int64_t InstanceSpec::GetStockCount() const
{
    return m_stockCount;
}

void InstanceSpec::SetStockCount(const int64_t& _stockCount)
{
    m_stockCount = _stockCount;
    m_stockCountHasBeenSet = true;
}

bool InstanceSpec::StockCountHasBeenSet() const
{
    return m_stockCountHasBeenSet;
}

