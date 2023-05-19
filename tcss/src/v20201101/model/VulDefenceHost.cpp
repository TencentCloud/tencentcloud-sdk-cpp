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

#include <tencentcloud/tcss/v20201101/model/VulDefenceHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulDefenceHost::VulDefenceHost() :
    m_hostNameHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetName") && !value["NodeSubNetName"].IsNull())
    {
        if (!value["NodeSubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeSubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetName = string(value["NodeSubNetName"].GetString());
        m_nodeSubNetNameHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetCIDR") && !value["NodeSubNetCIDR"].IsNull())
    {
        if (!value["NodeSubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeSubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetCIDR = string(value["NodeSubNetCIDR"].GetString());
        m_nodeSubNetCIDRHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetID") && !value["NodeSubNetID"].IsNull())
    {
        if (!value["NodeSubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeSubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetID = string(value["NodeSubNetID"].GetString());
        m_nodeSubNetIDHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceHost.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefenceHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

}


string VulDefenceHost::GetHostName() const
{
    return m_hostName;
}

void VulDefenceHost::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool VulDefenceHost::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string VulDefenceHost::GetHostIP() const
{
    return m_hostIP;
}

void VulDefenceHost::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool VulDefenceHost::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string VulDefenceHost::GetHostID() const
{
    return m_hostID;
}

void VulDefenceHost::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool VulDefenceHost::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string VulDefenceHost::GetStatus() const
{
    return m_status;
}

void VulDefenceHost::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefenceHost::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulDefenceHost::GetPublicIP() const
{
    return m_publicIP;
}

void VulDefenceHost::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool VulDefenceHost::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string VulDefenceHost::GetCreateTime() const
{
    return m_createTime;
}

void VulDefenceHost::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VulDefenceHost::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VulDefenceHost::GetModifyTime() const
{
    return m_modifyTime;
}

void VulDefenceHost::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool VulDefenceHost::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string VulDefenceHost::GetNodeType() const
{
    return m_nodeType;
}

void VulDefenceHost::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool VulDefenceHost::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string VulDefenceHost::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

void VulDefenceHost::SetNodeSubNetName(const string& _nodeSubNetName)
{
    m_nodeSubNetName = _nodeSubNetName;
    m_nodeSubNetNameHasBeenSet = true;
}

bool VulDefenceHost::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string VulDefenceHost::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

void VulDefenceHost::SetNodeSubNetCIDR(const string& _nodeSubNetCIDR)
{
    m_nodeSubNetCIDR = _nodeSubNetCIDR;
    m_nodeSubNetCIDRHasBeenSet = true;
}

bool VulDefenceHost::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string VulDefenceHost::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

void VulDefenceHost::SetNodeSubNetID(const string& _nodeSubNetID)
{
    m_nodeSubNetID = _nodeSubNetID;
    m_nodeSubNetIDHasBeenSet = true;
}

bool VulDefenceHost::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string VulDefenceHost::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void VulDefenceHost::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool VulDefenceHost::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string VulDefenceHost::GetNodeID() const
{
    return m_nodeID;
}

void VulDefenceHost::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool VulDefenceHost::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string VulDefenceHost::GetPodIP() const
{
    return m_podIP;
}

void VulDefenceHost::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool VulDefenceHost::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string VulDefenceHost::GetPodName() const
{
    return m_podName;
}

void VulDefenceHost::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool VulDefenceHost::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

