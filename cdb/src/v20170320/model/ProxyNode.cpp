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

#include <tencentcloud/cdb/v20170320/model/ProxyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyNode::ProxyNode() :
    m_proxyIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_connectionHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Connection") && !value["Connection"].IsNull())
    {
        if (!value["Connection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Connection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connection = value["Connection"].GetUint64();
        m_connectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connection, allocator);
    }

}


string ProxyNode::GetProxyId() const
{
    return m_proxyId;
}

void ProxyNode::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ProxyNode::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

uint64_t ProxyNode::GetCpu() const
{
    return m_cpu;
}

void ProxyNode::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyNode::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ProxyNode::GetMem() const
{
    return m_mem;
}

void ProxyNode::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxyNode::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ProxyNode::GetStatus() const
{
    return m_status;
}

void ProxyNode::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyNode::GetZone() const
{
    return m_zone;
}

void ProxyNode::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyNode::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ProxyNode::GetRegion() const
{
    return m_region;
}

void ProxyNode::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyNode::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t ProxyNode::GetConnection() const
{
    return m_connection;
}

void ProxyNode::SetConnection(const uint64_t& _connection)
{
    m_connection = _connection;
    m_connectionHasBeenSet = true;
}

bool ProxyNode::ConnectionHasBeenSet() const
{
    return m_connectionHasBeenSet;
}

