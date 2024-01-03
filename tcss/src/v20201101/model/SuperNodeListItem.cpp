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

#include <tencentcloud/tcss/v20201101/model/SuperNodeListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SuperNodeListItem::SuperNodeListItem() :
    m_nodeIDHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subNetIDHasBeenSet(false),
    m_subNetNameHasBeenSet(false),
    m_subNetCidrHasBeenSet(false),
    m_zoneIDHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_relatePodCountHasBeenSet(false),
    m_relateContainerCountHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_clusterAccessedStatusHasBeenSet(false),
    m_chargeCoresCntHasBeenSet(false),
    m_defendStatusHasBeenSet(false)
{
}

CoreInternalOutcome SuperNodeListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubNetID") && !value["SubNetID"].IsNull())
    {
        if (!value["SubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.SubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetID = string(value["SubNetID"].GetString());
        m_subNetIDHasBeenSet = true;
    }

    if (value.HasMember("SubNetName") && !value["SubNetName"].IsNull())
    {
        if (!value["SubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.SubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetName = string(value["SubNetName"].GetString());
        m_subNetNameHasBeenSet = true;
    }

    if (value.HasMember("SubNetCidr") && !value["SubNetCidr"].IsNull())
    {
        if (!value["SubNetCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.SubNetCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subNetCidr = string(value["SubNetCidr"].GetString());
        m_subNetCidrHasBeenSet = true;
    }

    if (value.HasMember("ZoneID") && !value["ZoneID"].IsNull())
    {
        if (!value["ZoneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.ZoneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneID = string(value["ZoneID"].GetString());
        m_zoneIDHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RelatePodCount") && !value["RelatePodCount"].IsNull())
    {
        if (!value["RelatePodCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.RelatePodCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relatePodCount = value["RelatePodCount"].GetUint64();
        m_relatePodCountHasBeenSet = true;
    }

    if (value.HasMember("RelateContainerCount") && !value["RelateContainerCount"].IsNull())
    {
        if (!value["RelateContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.RelateContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relateContainerCount = value["RelateContainerCount"].GetUint64();
        m_relateContainerCountHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterAccessedStatus") && !value["ClusterAccessedStatus"].IsNull())
    {
        if (!value["ClusterAccessedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.ClusterAccessedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterAccessedStatus = string(value["ClusterAccessedStatus"].GetString());
        m_clusterAccessedStatusHasBeenSet = true;
    }

    if (value.HasMember("ChargeCoresCnt") && !value["ChargeCoresCnt"].IsNull())
    {
        if (!value["ChargeCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.ChargeCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCoresCnt = value["ChargeCoresCnt"].GetUint64();
        m_chargeCoresCntHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuperNodeListItem.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuperNodeListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetID.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNetCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subNetCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneID.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_relatePodCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatePodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatePodCount, allocator);
    }

    if (m_relateContainerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateContainerCount, allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterAccessedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAccessedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterAccessedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCoresCnt, allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

}


string SuperNodeListItem::GetNodeID() const
{
    return m_nodeID;
}

void SuperNodeListItem::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool SuperNodeListItem::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string SuperNodeListItem::GetNodeName() const
{
    return m_nodeName;
}

void SuperNodeListItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool SuperNodeListItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string SuperNodeListItem::GetClusterName() const
{
    return m_clusterName;
}

void SuperNodeListItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool SuperNodeListItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string SuperNodeListItem::GetClusterID() const
{
    return m_clusterID;
}

void SuperNodeListItem::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool SuperNodeListItem::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string SuperNodeListItem::GetStatus() const
{
    return m_status;
}

void SuperNodeListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SuperNodeListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SuperNodeListItem::GetSubNetID() const
{
    return m_subNetID;
}

void SuperNodeListItem::SetSubNetID(const string& _subNetID)
{
    m_subNetID = _subNetID;
    m_subNetIDHasBeenSet = true;
}

bool SuperNodeListItem::SubNetIDHasBeenSet() const
{
    return m_subNetIDHasBeenSet;
}

string SuperNodeListItem::GetSubNetName() const
{
    return m_subNetName;
}

void SuperNodeListItem::SetSubNetName(const string& _subNetName)
{
    m_subNetName = _subNetName;
    m_subNetNameHasBeenSet = true;
}

bool SuperNodeListItem::SubNetNameHasBeenSet() const
{
    return m_subNetNameHasBeenSet;
}

string SuperNodeListItem::GetSubNetCidr() const
{
    return m_subNetCidr;
}

void SuperNodeListItem::SetSubNetCidr(const string& _subNetCidr)
{
    m_subNetCidr = _subNetCidr;
    m_subNetCidrHasBeenSet = true;
}

bool SuperNodeListItem::SubNetCidrHasBeenSet() const
{
    return m_subNetCidrHasBeenSet;
}

string SuperNodeListItem::GetZoneID() const
{
    return m_zoneID;
}

void SuperNodeListItem::SetZoneID(const string& _zoneID)
{
    m_zoneID = _zoneID;
    m_zoneIDHasBeenSet = true;
}

bool SuperNodeListItem::ZoneIDHasBeenSet() const
{
    return m_zoneIDHasBeenSet;
}

string SuperNodeListItem::GetZone() const
{
    return m_zone;
}

void SuperNodeListItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SuperNodeListItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string SuperNodeListItem::GetCreateTime() const
{
    return m_createTime;
}

void SuperNodeListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SuperNodeListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SuperNodeListItem::GetRelatePodCount() const
{
    return m_relatePodCount;
}

void SuperNodeListItem::SetRelatePodCount(const uint64_t& _relatePodCount)
{
    m_relatePodCount = _relatePodCount;
    m_relatePodCountHasBeenSet = true;
}

bool SuperNodeListItem::RelatePodCountHasBeenSet() const
{
    return m_relatePodCountHasBeenSet;
}

uint64_t SuperNodeListItem::GetRelateContainerCount() const
{
    return m_relateContainerCount;
}

void SuperNodeListItem::SetRelateContainerCount(const uint64_t& _relateContainerCount)
{
    m_relateContainerCount = _relateContainerCount;
    m_relateContainerCountHasBeenSet = true;
}

bool SuperNodeListItem::RelateContainerCountHasBeenSet() const
{
    return m_relateContainerCountHasBeenSet;
}

string SuperNodeListItem::GetAgentStatus() const
{
    return m_agentStatus;
}

void SuperNodeListItem::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool SuperNodeListItem::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string SuperNodeListItem::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void SuperNodeListItem::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool SuperNodeListItem::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string SuperNodeListItem::GetClusterAccessedStatus() const
{
    return m_clusterAccessedStatus;
}

void SuperNodeListItem::SetClusterAccessedStatus(const string& _clusterAccessedStatus)
{
    m_clusterAccessedStatus = _clusterAccessedStatus;
    m_clusterAccessedStatusHasBeenSet = true;
}

bool SuperNodeListItem::ClusterAccessedStatusHasBeenSet() const
{
    return m_clusterAccessedStatusHasBeenSet;
}

uint64_t SuperNodeListItem::GetChargeCoresCnt() const
{
    return m_chargeCoresCnt;
}

void SuperNodeListItem::SetChargeCoresCnt(const uint64_t& _chargeCoresCnt)
{
    m_chargeCoresCnt = _chargeCoresCnt;
    m_chargeCoresCntHasBeenSet = true;
}

bool SuperNodeListItem::ChargeCoresCntHasBeenSet() const
{
    return m_chargeCoresCntHasBeenSet;
}

string SuperNodeListItem::GetDefendStatus() const
{
    return m_defendStatus;
}

void SuperNodeListItem::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool SuperNodeListItem::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

