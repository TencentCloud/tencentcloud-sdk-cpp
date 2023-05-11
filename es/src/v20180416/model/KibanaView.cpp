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

#include <tencentcloud/es/v20180416/model/KibanaView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

KibanaView::KibanaView() :
    m_ipHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_cpuUsageHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

CoreInternalOutcome KibanaView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.DiskUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = value["DiskUsage"].GetDouble();
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.MemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetDouble();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("CpuUsage") && !value["CpuUsage"].IsNull())
    {
        if (!value["CpuUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.CpuUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsage = value["CpuUsage"].GetDouble();
        m_cpuUsageHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KibanaView.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KibanaView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskUsage, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_memUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsage, allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_cpuUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuUsage, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

}


string KibanaView::GetIp() const
{
    return m_ip;
}

void KibanaView::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool KibanaView::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t KibanaView::GetDiskSize() const
{
    return m_diskSize;
}

void KibanaView::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool KibanaView::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

double KibanaView::GetDiskUsage() const
{
    return m_diskUsage;
}

void KibanaView::SetDiskUsage(const double& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool KibanaView::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

int64_t KibanaView::GetMemSize() const
{
    return m_memSize;
}

void KibanaView::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool KibanaView::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

double KibanaView::GetMemUsage() const
{
    return m_memUsage;
}

void KibanaView::SetMemUsage(const double& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool KibanaView::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

int64_t KibanaView::GetCpuNum() const
{
    return m_cpuNum;
}

void KibanaView::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool KibanaView::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

double KibanaView::GetCpuUsage() const
{
    return m_cpuUsage;
}

void KibanaView::SetCpuUsage(const double& _cpuUsage)
{
    m_cpuUsage = _cpuUsage;
    m_cpuUsageHasBeenSet = true;
}

bool KibanaView::CpuUsageHasBeenSet() const
{
    return m_cpuUsageHasBeenSet;
}

string KibanaView::GetZone() const
{
    return m_zone;
}

void KibanaView::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool KibanaView::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string KibanaView::GetNodeId() const
{
    return m_nodeId;
}

void KibanaView::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool KibanaView::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

