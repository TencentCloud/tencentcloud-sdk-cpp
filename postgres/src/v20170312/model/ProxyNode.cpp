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

#include <tencentcloud/postgres/v20170312/model/ProxyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ProxyNode::ProxyNode() :
    m_proxyNodeIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyNodeId") && !value["ProxyNodeId"].IsNull())
    {
        if (!value["ProxyNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.ProxyNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeId = string(value["ProxyNodeId"].GetString());
        m_proxyNodeIdHasBeenSet = true;
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

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
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

    if (value.HasMember("Connection") && !value["Connection"].IsNull())
    {
        if (!value["Connection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNode.Connection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connection = value["Connection"].GetInt64();
        m_connectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyNodeId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connection, allocator);
    }

}


string ProxyNode::GetProxyNodeId() const
{
    return m_proxyNodeId;
}

void ProxyNode::SetProxyNodeId(const string& _proxyNodeId)
{
    m_proxyNodeId = _proxyNodeId;
    m_proxyNodeIdHasBeenSet = true;
}

bool ProxyNode::ProxyNodeIdHasBeenSet() const
{
    return m_proxyNodeIdHasBeenSet;
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

int64_t ProxyNode::GetCpu() const
{
    return m_cpu;
}

void ProxyNode::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyNode::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxyNode::GetMem() const
{
    return m_mem;
}

void ProxyNode::SetMem(const int64_t& _mem)
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

int64_t ProxyNode::GetConnection() const
{
    return m_connection;
}

void ProxyNode::SetConnection(const int64_t& _connection)
{
    m_connection = _connection;
    m_connectionHasBeenSet = true;
}

bool ProxyNode::ConnectionHasBeenSet() const
{
    return m_connectionHasBeenSet;
}

