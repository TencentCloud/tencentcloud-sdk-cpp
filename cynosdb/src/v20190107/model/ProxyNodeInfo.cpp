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

#include <tencentcloud/cynosdb/v20190107/model/ProxyNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyNodeInfo::ProxyNodeInfo() :
    m_proxyNodeIdHasBeenSet(false),
    m_proxyNodeConnectionsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_ossProxyNodeNameHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyNodeId") && !value["ProxyNodeId"].IsNull())
    {
        if (!value["ProxyNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeId = string(value["ProxyNodeId"].GetString());
        m_proxyNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeConnections") && !value["ProxyNodeConnections"].IsNull())
    {
        if (!value["ProxyNodeConnections"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeConnections` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeConnections = value["ProxyNodeConnections"].GetInt64();
        m_proxyNodeConnectionsHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProxyGroupId") && !value["ProxyGroupId"].IsNull())
    {
        if (!value["ProxyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyGroupId = string(value["ProxyGroupId"].GetString());
        m_proxyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("OssProxyNodeName") && !value["OssProxyNodeName"].IsNull())
    {
        if (!value["OssProxyNodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.OssProxyNodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ossProxyNodeName = string(value["OssProxyNodeName"].GetString());
        m_ossProxyNodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNodeConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeConnections, allocator);
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

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

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

    if (m_ossProxyNodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OssProxyNodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ossProxyNodeName.c_str(), allocator).Move(), allocator);
    }

}


string ProxyNodeInfo::GetProxyNodeId() const
{
    return m_proxyNodeId;
}

void ProxyNodeInfo::SetProxyNodeId(const string& _proxyNodeId)
{
    m_proxyNodeId = _proxyNodeId;
    m_proxyNodeIdHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeIdHasBeenSet() const
{
    return m_proxyNodeIdHasBeenSet;
}

int64_t ProxyNodeInfo::GetProxyNodeConnections() const
{
    return m_proxyNodeConnections;
}

void ProxyNodeInfo::SetProxyNodeConnections(const int64_t& _proxyNodeConnections)
{
    m_proxyNodeConnections = _proxyNodeConnections;
    m_proxyNodeConnectionsHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeConnectionsHasBeenSet() const
{
    return m_proxyNodeConnectionsHasBeenSet;
}

int64_t ProxyNodeInfo::GetCpu() const
{
    return m_cpu;
}

void ProxyNodeInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyNodeInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxyNodeInfo::GetMem() const
{
    return m_mem;
}

void ProxyNodeInfo::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxyNodeInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ProxyNodeInfo::GetStatus() const
{
    return m_status;
}

void ProxyNodeInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProxyNodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProxyNodeInfo::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ProxyNodeInfo::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ProxyNodeInfo::GetClusterId() const
{
    return m_clusterId;
}

void ProxyNodeInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ProxyNodeInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ProxyNodeInfo::GetAppId() const
{
    return m_appId;
}

void ProxyNodeInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ProxyNodeInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ProxyNodeInfo::GetRegion() const
{
    return m_region;
}

void ProxyNodeInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyNodeInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProxyNodeInfo::GetZone() const
{
    return m_zone;
}

void ProxyNodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyNodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ProxyNodeInfo::GetOssProxyNodeName() const
{
    return m_ossProxyNodeName;
}

void ProxyNodeInfo::SetOssProxyNodeName(const string& _ossProxyNodeName)
{
    m_ossProxyNodeName = _ossProxyNodeName;
    m_ossProxyNodeNameHasBeenSet = true;
}

bool ProxyNodeInfo::OssProxyNodeNameHasBeenSet() const
{
    return m_ossProxyNodeNameHasBeenSet;
}

