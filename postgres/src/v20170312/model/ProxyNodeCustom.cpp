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

#include <tencentcloud/postgres/v20170312/model/ProxyNodeCustom.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxyNodeCustom::ProxyNodeCustom() :
    m_nodeCountHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNodeCustom::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeCustom.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeCustom.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeCustom.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeCustom.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNodeCustom::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

}


int64_t ProxyNodeCustom::GetNodeCount() const
{
    return m_nodeCount;
}

void ProxyNodeCustom::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ProxyNodeCustom::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string ProxyNodeCustom::GetZone() const
{
    return m_zone;
}

void ProxyNodeCustom::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyNodeCustom::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ProxyNodeCustom::GetCpu() const
{
    return m_cpu;
}

void ProxyNodeCustom::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyNodeCustom::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxyNodeCustom::GetMem() const
{
    return m_mem;
}

void ProxyNodeCustom::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxyNodeCustom::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

