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

#include <tencentcloud/es/v20180416/model/NodeView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

NodeView::NodeView() :
    m_nodeIdHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_visibleHasBeenSet(false),
    m_breakHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memUsageHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_cpuUsageHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_nodeHttpIpHasBeenSet(false),
    m_jvmMemUsageHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_diskIdsHasBeenSet(false),
    m_hiddenHasBeenSet(false),
    m_isCoordinationNodeHasBeenSet(false),
    m_cVMStatusHasBeenSet(false),
    m_cVMDisasterRecoverGroupIdHasBeenSet(false),
    m_cVMDisasterRecoverGroupStatusHasBeenSet(false)
{
}

CoreInternalOutcome NodeView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("Visible") && !value["Visible"].IsNull())
    {
        if (!value["Visible"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.Visible` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_visible = value["Visible"].GetDouble();
        m_visibleHasBeenSet = true;
    }

    if (value.HasMember("Break") && !value["Break"].IsNull())
    {
        if (!value["Break"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.Break` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_break = value["Break"].GetDouble();
        m_breakHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.DiskUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = value["DiskUsage"].GetDouble();
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemUsage") && !value["MemUsage"].IsNull())
    {
        if (!value["MemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.MemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsage = value["MemUsage"].GetDouble();
        m_memUsageHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.CpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetInt64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("CpuUsage") && !value["CpuUsage"].IsNull())
    {
        if (!value["CpuUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.CpuUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsage = value["CpuUsage"].GetDouble();
        m_cpuUsageHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("NodeHttpIp") && !value["NodeHttpIp"].IsNull())
    {
        if (!value["NodeHttpIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.NodeHttpIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeHttpIp = string(value["NodeHttpIp"].GetString());
        m_nodeHttpIpHasBeenSet = true;
    }

    if (value.HasMember("JvmMemUsage") && !value["JvmMemUsage"].IsNull())
    {
        if (!value["JvmMemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.JvmMemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jvmMemUsage = value["JvmMemUsage"].GetDouble();
        m_jvmMemUsageHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.ShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = value["ShardNum"].GetInt64();
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("DiskIds") && !value["DiskIds"].IsNull())
    {
        if (!value["DiskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeView.DiskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DiskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_diskIds.push_back((*itr).GetString());
        }
        m_diskIdsHasBeenSet = true;
    }

    if (value.HasMember("Hidden") && !value["Hidden"].IsNull())
    {
        if (!value["Hidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.Hidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hidden = value["Hidden"].GetBool();
        m_hiddenHasBeenSet = true;
    }

    if (value.HasMember("IsCoordinationNode") && !value["IsCoordinationNode"].IsNull())
    {
        if (!value["IsCoordinationNode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.IsCoordinationNode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCoordinationNode = value["IsCoordinationNode"].GetBool();
        m_isCoordinationNodeHasBeenSet = true;
    }

    if (value.HasMember("CVMStatus") && !value["CVMStatus"].IsNull())
    {
        if (!value["CVMStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.CVMStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVMStatus = string(value["CVMStatus"].GetString());
        m_cVMStatusHasBeenSet = true;
    }

    if (value.HasMember("CVMDisasterRecoverGroupId") && !value["CVMDisasterRecoverGroupId"].IsNull())
    {
        if (!value["CVMDisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.CVMDisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVMDisasterRecoverGroupId = string(value["CVMDisasterRecoverGroupId"].GetString());
        m_cVMDisasterRecoverGroupIdHasBeenSet = true;
    }

    if (value.HasMember("CVMDisasterRecoverGroupStatus") && !value["CVMDisasterRecoverGroupStatus"].IsNull())
    {
        if (!value["CVMDisasterRecoverGroupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeView.CVMDisasterRecoverGroupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cVMDisasterRecoverGroupStatus = value["CVMDisasterRecoverGroupStatus"].GetInt64();
        m_cVMDisasterRecoverGroupStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_visibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visible, allocator);
    }

    if (m_breakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Break";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_break, allocator);
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

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeHttpIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeHttpIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeHttpIp.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmMemUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmMemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jvmMemUsage, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_diskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hidden, allocator);
    }

    if (m_isCoordinationNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCoordinationNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCoordinationNode, allocator);
    }

    if (m_cVMStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVMStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMDisasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMDisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVMDisasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_cVMDisasterRecoverGroupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMDisasterRecoverGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVMDisasterRecoverGroupStatus, allocator);
    }

}


string NodeView::GetNodeId() const
{
    return m_nodeId;
}

void NodeView::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool NodeView::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string NodeView::GetNodeIp() const
{
    return m_nodeIp;
}

void NodeView::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool NodeView::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

double NodeView::GetVisible() const
{
    return m_visible;
}

void NodeView::SetVisible(const double& _visible)
{
    m_visible = _visible;
    m_visibleHasBeenSet = true;
}

bool NodeView::VisibleHasBeenSet() const
{
    return m_visibleHasBeenSet;
}

double NodeView::GetBreak() const
{
    return m_break;
}

void NodeView::SetBreak(const double& _break)
{
    m_break = _break;
    m_breakHasBeenSet = true;
}

bool NodeView::BreakHasBeenSet() const
{
    return m_breakHasBeenSet;
}

int64_t NodeView::GetDiskSize() const
{
    return m_diskSize;
}

void NodeView::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool NodeView::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

double NodeView::GetDiskUsage() const
{
    return m_diskUsage;
}

void NodeView::SetDiskUsage(const double& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool NodeView::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

int64_t NodeView::GetMemSize() const
{
    return m_memSize;
}

void NodeView::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool NodeView::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

double NodeView::GetMemUsage() const
{
    return m_memUsage;
}

void NodeView::SetMemUsage(const double& _memUsage)
{
    m_memUsage = _memUsage;
    m_memUsageHasBeenSet = true;
}

bool NodeView::MemUsageHasBeenSet() const
{
    return m_memUsageHasBeenSet;
}

int64_t NodeView::GetCpuNum() const
{
    return m_cpuNum;
}

void NodeView::SetCpuNum(const int64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool NodeView::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

double NodeView::GetCpuUsage() const
{
    return m_cpuUsage;
}

void NodeView::SetCpuUsage(const double& _cpuUsage)
{
    m_cpuUsage = _cpuUsage;
    m_cpuUsageHasBeenSet = true;
}

bool NodeView::CpuUsageHasBeenSet() const
{
    return m_cpuUsageHasBeenSet;
}

string NodeView::GetZone() const
{
    return m_zone;
}

void NodeView::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeView::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NodeView::GetNodeRole() const
{
    return m_nodeRole;
}

void NodeView::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool NodeView::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string NodeView::GetNodeHttpIp() const
{
    return m_nodeHttpIp;
}

void NodeView::SetNodeHttpIp(const string& _nodeHttpIp)
{
    m_nodeHttpIp = _nodeHttpIp;
    m_nodeHttpIpHasBeenSet = true;
}

bool NodeView::NodeHttpIpHasBeenSet() const
{
    return m_nodeHttpIpHasBeenSet;
}

double NodeView::GetJvmMemUsage() const
{
    return m_jvmMemUsage;
}

void NodeView::SetJvmMemUsage(const double& _jvmMemUsage)
{
    m_jvmMemUsage = _jvmMemUsage;
    m_jvmMemUsageHasBeenSet = true;
}

bool NodeView::JvmMemUsageHasBeenSet() const
{
    return m_jvmMemUsageHasBeenSet;
}

int64_t NodeView::GetShardNum() const
{
    return m_shardNum;
}

void NodeView::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool NodeView::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

vector<string> NodeView::GetDiskIds() const
{
    return m_diskIds;
}

void NodeView::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool NodeView::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

bool NodeView::GetHidden() const
{
    return m_hidden;
}

void NodeView::SetHidden(const bool& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool NodeView::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}

bool NodeView::GetIsCoordinationNode() const
{
    return m_isCoordinationNode;
}

void NodeView::SetIsCoordinationNode(const bool& _isCoordinationNode)
{
    m_isCoordinationNode = _isCoordinationNode;
    m_isCoordinationNodeHasBeenSet = true;
}

bool NodeView::IsCoordinationNodeHasBeenSet() const
{
    return m_isCoordinationNodeHasBeenSet;
}

string NodeView::GetCVMStatus() const
{
    return m_cVMStatus;
}

void NodeView::SetCVMStatus(const string& _cVMStatus)
{
    m_cVMStatus = _cVMStatus;
    m_cVMStatusHasBeenSet = true;
}

bool NodeView::CVMStatusHasBeenSet() const
{
    return m_cVMStatusHasBeenSet;
}

string NodeView::GetCVMDisasterRecoverGroupId() const
{
    return m_cVMDisasterRecoverGroupId;
}

void NodeView::SetCVMDisasterRecoverGroupId(const string& _cVMDisasterRecoverGroupId)
{
    m_cVMDisasterRecoverGroupId = _cVMDisasterRecoverGroupId;
    m_cVMDisasterRecoverGroupIdHasBeenSet = true;
}

bool NodeView::CVMDisasterRecoverGroupIdHasBeenSet() const
{
    return m_cVMDisasterRecoverGroupIdHasBeenSet;
}

int64_t NodeView::GetCVMDisasterRecoverGroupStatus() const
{
    return m_cVMDisasterRecoverGroupStatus;
}

void NodeView::SetCVMDisasterRecoverGroupStatus(const int64_t& _cVMDisasterRecoverGroupStatus)
{
    m_cVMDisasterRecoverGroupStatus = _cVMDisasterRecoverGroupStatus;
    m_cVMDisasterRecoverGroupStatusHasBeenSet = true;
}

bool NodeView::CVMDisasterRecoverGroupStatusHasBeenSet() const
{
    return m_cVMDisasterRecoverGroupStatusHasBeenSet;
}

