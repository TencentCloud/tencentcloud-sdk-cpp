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

#include <tencentcloud/cynosdb/v20190107/model/ProxyZoneStockInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyZoneStockInfo::ProxyZoneStockInfo() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_cpuStockHasBeenSet(false),
    m_memStockHasBeenSet(false)
{
}

CoreInternalOutcome ProxyZoneStockInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZoneStockInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZoneStockInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CpuStock") && !value["CpuStock"].IsNull())
    {
        if (!value["CpuStock"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZoneStockInfo.CpuStock` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuStock = value["CpuStock"].GetInt64();
        m_cpuStockHasBeenSet = true;
    }

    if (value.HasMember("MemStock") && !value["MemStock"].IsNull())
    {
        if (!value["MemStock"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyZoneStockInfo.MemStock` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memStock = value["MemStock"].GetInt64();
        m_memStockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyZoneStockInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuStock, allocator);
    }

    if (m_memStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memStock, allocator);
    }

}


string ProxyZoneStockInfo::GetRegion() const
{
    return m_region;
}

void ProxyZoneStockInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyZoneStockInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProxyZoneStockInfo::GetZone() const
{
    return m_zone;
}

void ProxyZoneStockInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyZoneStockInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ProxyZoneStockInfo::GetCpuStock() const
{
    return m_cpuStock;
}

void ProxyZoneStockInfo::SetCpuStock(const int64_t& _cpuStock)
{
    m_cpuStock = _cpuStock;
    m_cpuStockHasBeenSet = true;
}

bool ProxyZoneStockInfo::CpuStockHasBeenSet() const
{
    return m_cpuStockHasBeenSet;
}

int64_t ProxyZoneStockInfo::GetMemStock() const
{
    return m_memStock;
}

void ProxyZoneStockInfo::SetMemStock(const int64_t& _memStock)
{
    m_memStock = _memStock;
    m_memStockHasBeenSet = true;
}

bool ProxyZoneStockInfo::MemStockHasBeenSet() const
{
    return m_memStockHasBeenSet;
}

