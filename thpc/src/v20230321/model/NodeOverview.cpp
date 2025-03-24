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

#include <tencentcloud/thpc/v20230321/model/NodeOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

NodeOverview::NodeOverview() :
    m_instanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeStateHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeAllocateStateHasBeenSet(false)
{
}

CoreInternalOutcome NodeOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeState") && !value["NodeState"].IsNull())
    {
        if (!value["NodeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.NodeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeState = string(value["NodeState"].GetString());
        m_nodeStateHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeAllocateState") && !value["NodeAllocateState"].IsNull())
    {
        if (!value["NodeAllocateState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeOverview.NodeAllocateState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeAllocateState = string(value["NodeAllocateState"].GetString());
        m_nodeAllocateStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeState.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeAllocateStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeAllocateState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeAllocateState.c_str(), allocator).Move(), allocator);
    }

}


string NodeOverview::GetInstanceId() const
{
    return m_instanceId;
}

void NodeOverview::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NodeOverview::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string NodeOverview::GetZone() const
{
    return m_zone;
}

void NodeOverview::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeOverview::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NodeOverview::GetNodeState() const
{
    return m_nodeState;
}

void NodeOverview::SetNodeState(const string& _nodeState)
{
    m_nodeState = _nodeState;
    m_nodeStateHasBeenSet = true;
}

bool NodeOverview::NodeStateHasBeenSet() const
{
    return m_nodeStateHasBeenSet;
}

string NodeOverview::GetImageId() const
{
    return m_imageId;
}

void NodeOverview::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool NodeOverview::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string NodeOverview::GetQueueName() const
{
    return m_queueName;
}

void NodeOverview::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool NodeOverview::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string NodeOverview::GetNodeRole() const
{
    return m_nodeRole;
}

void NodeOverview::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool NodeOverview::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string NodeOverview::GetNodeType() const
{
    return m_nodeType;
}

void NodeOverview::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeOverview::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string NodeOverview::GetNodeId() const
{
    return m_nodeId;
}

void NodeOverview::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool NodeOverview::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string NodeOverview::GetNodeAllocateState() const
{
    return m_nodeAllocateState;
}

void NodeOverview::SetNodeAllocateState(const string& _nodeAllocateState)
{
    m_nodeAllocateState = _nodeAllocateState;
    m_nodeAllocateStateHasBeenSet = true;
}

bool NodeOverview::NodeAllocateStateHasBeenSet() const
{
    return m_nodeAllocateStateHasBeenSet;
}

