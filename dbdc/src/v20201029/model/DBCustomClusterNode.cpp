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

#include <tencentcloud/dbdc/v20201029/model/DBCustomClusterNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DBCustomClusterNode::DBCustomClusterNode() :
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_lanIPHasBeenSet(false),
    m_sSHEndpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeTypeHasBeenSet(false)
{
}

CoreInternalOutcome DBCustomClusterNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("LanIP") && !value["LanIP"].IsNull())
    {
        if (!value["LanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.LanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIP = string(value["LanIP"].GetString());
        m_lanIPHasBeenSet = true;
    }

    if (value.HasMember("SSHEndpoint") && !value["SSHEndpoint"].IsNull())
    {
        if (!value["SSHEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.SSHEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSHEndpoint = string(value["SSHEndpoint"].GetString());
        m_sSHEndpointHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomClusterNode.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBCustomClusterNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_sSHEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSHEndpoint.c_str(), allocator).Move(), allocator);
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

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

}


string DBCustomClusterNode::GetNodeId() const
{
    return m_nodeId;
}

void DBCustomClusterNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DBCustomClusterNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DBCustomClusterNode::GetNodeName() const
{
    return m_nodeName;
}

void DBCustomClusterNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DBCustomClusterNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DBCustomClusterNode::GetLanIP() const
{
    return m_lanIP;
}

void DBCustomClusterNode::SetLanIP(const string& _lanIP)
{
    m_lanIP = _lanIP;
    m_lanIPHasBeenSet = true;
}

bool DBCustomClusterNode::LanIPHasBeenSet() const
{
    return m_lanIPHasBeenSet;
}

string DBCustomClusterNode::GetSSHEndpoint() const
{
    return m_sSHEndpoint;
}

void DBCustomClusterNode::SetSSHEndpoint(const string& _sSHEndpoint)
{
    m_sSHEndpoint = _sSHEndpoint;
    m_sSHEndpointHasBeenSet = true;
}

bool DBCustomClusterNode::SSHEndpointHasBeenSet() const
{
    return m_sSHEndpointHasBeenSet;
}

string DBCustomClusterNode::GetStatus() const
{
    return m_status;
}

void DBCustomClusterNode::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBCustomClusterNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DBCustomClusterNode::GetZone() const
{
    return m_zone;
}

void DBCustomClusterNode::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBCustomClusterNode::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DBCustomClusterNode::GetNodeType() const
{
    return m_nodeType;
}

void DBCustomClusterNode::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DBCustomClusterNode::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

