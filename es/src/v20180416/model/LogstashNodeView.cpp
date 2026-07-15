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

#include <tencentcloud/es/v20180416/model/LogstashNodeView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogstashNodeView::LogstashNodeView() :
    m_nodeIdHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_nodeHttpIpHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_jvmMemUsageHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_cpuUsageHasBeenSet(false)
{
}

CoreInternalOutcome LogstashNodeView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("NodeHttpIp") && !value["NodeHttpIp"].IsNull())
    {
        if (!value["NodeHttpIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.NodeHttpIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeHttpIp = string(value["NodeHttpIp"].GetString());
        m_nodeHttpIpHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.DiskUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = value["DiskUsage"].GetDouble();
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.MemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetDouble();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("JvmMemUsage") && !value["JvmMemUsage"].IsNull())
    {
        if (!value["JvmMemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.JvmMemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jvmMemUsage = value["JvmMemUsage"].GetDouble();
        m_jvmMemUsageHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("CpuUsage") && !value["CpuUsage"].IsNull())
    {
        if (!value["CpuUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeView.CpuUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsage = value["CpuUsage"].GetDouble();
        m_cpuUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogstashNodeView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeHttpIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeHttpIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeHttpIp.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_jvmMemUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmMemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jvmMemUsage, allocator);
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

}


string LogstashNodeView::GetNodeId() const
{
    return m_nodeId;
}

void LogstashNodeView::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool LogstashNodeView::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string LogstashNodeView::GetNodeIp() const
{
    return m_nodeIp;
}

void LogstashNodeView::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool LogstashNodeView::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string LogstashNodeView::GetNodeHttpIp() const
{
    return m_nodeHttpIp;
}

void LogstashNodeView::SetNodeHttpIp(const string& _nodeHttpIp)
{
    m_nodeHttpIp = _nodeHttpIp;
    m_nodeHttpIpHasBeenSet = true;
}

bool LogstashNodeView::NodeHttpIpHasBeenSet() const
{
    return m_nodeHttpIpHasBeenSet;
}

string LogstashNodeView::GetZone() const
{
    return m_zone;
}

void LogstashNodeView::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LogstashNodeView::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t LogstashNodeView::GetDiskSize() const
{
    return m_diskSize;
}

void LogstashNodeView::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool LogstashNodeView::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

double LogstashNodeView::GetDiskUsage() const
{
    return m_diskUsage;
}

void LogstashNodeView::SetDiskUsage(const double& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool LogstashNodeView::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

int64_t LogstashNodeView::GetMemSize() const
{
    return m_memSize;
}

void LogstashNodeView::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool LogstashNodeView::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

double LogstashNodeView::GetMemUsage() const
{
    return m_memUsage;
}

void LogstashNodeView::SetMemUsage(const double& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool LogstashNodeView::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

double LogstashNodeView::GetJvmMemUsage() const
{
    return m_jvmMemUsage;
}

void LogstashNodeView::SetJvmMemUsage(const double& _jvmMemUsage)
{
    m_jvmMemUsage = _jvmMemUsage;
    m_jvmMemUsageHasBeenSet = true;
}

bool LogstashNodeView::JvmMemUsageHasBeenSet() const
{
    return m_jvmMemUsageHasBeenSet;
}

int64_t LogstashNodeView::GetCpuNum() const
{
    return m_cpuNum;
}

void LogstashNodeView::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool LogstashNodeView::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

double LogstashNodeView::GetCpuUsage() const
{
    return m_cpuUsage;
}

void LogstashNodeView::SetCpuUsage(const double& _cpuUsage)
{
    m_cpuUsage = _cpuUsage;
    m_cpuUsageHasBeenSet = true;
}

bool LogstashNodeView::CpuUsageHasBeenSet() const
{
    return m_cpuUsageHasBeenSet;
}

