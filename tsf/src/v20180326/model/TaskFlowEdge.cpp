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

#include <tencentcloud/tsf/v20180326/model/TaskFlowEdge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TaskFlowEdge::TaskFlowEdge() :
    m_nodeIdHasBeenSet(false),
    m_childNodeIdHasBeenSet(false),
    m_coreNodeHasBeenSet(false),
    m_edgeTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_positionXHasBeenSet(false),
    m_positionYHasBeenSet(false),
    m_graphIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskLogIdHasBeenSet(false)
{
}

CoreInternalOutcome TaskFlowEdge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("ChildNodeId") && !value["ChildNodeId"].IsNull())
    {
        if (!value["ChildNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.ChildNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childNodeId = string(value["ChildNodeId"].GetString());
        m_childNodeIdHasBeenSet = true;
    }

    if (value.HasMember("CoreNode") && !value["CoreNode"].IsNull())
    {
        if (!value["CoreNode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.CoreNode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreNode = string(value["CoreNode"].GetString());
        m_coreNodeHasBeenSet = true;
    }

    if (value.HasMember("EdgeType") && !value["EdgeType"].IsNull())
    {
        if (!value["EdgeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.EdgeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeType = string(value["EdgeType"].GetString());
        m_edgeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("PositionX") && !value["PositionX"].IsNull())
    {
        if (!value["PositionX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.PositionX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionX = string(value["PositionX"].GetString());
        m_positionXHasBeenSet = true;
    }

    if (value.HasMember("PositionY") && !value["PositionY"].IsNull())
    {
        if (!value["PositionY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.PositionY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionY = string(value["PositionY"].GetString());
        m_positionYHasBeenSet = true;
    }

    if (value.HasMember("GraphId") && !value["GraphId"].IsNull())
    {
        if (!value["GraphId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.GraphId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_graphId = string(value["GraphId"].GetString());
        m_graphIdHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskLogId") && !value["TaskLogId"].IsNull())
    {
        if (!value["TaskLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFlowEdge.TaskLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLogId = string(value["TaskLogId"].GetString());
        m_taskLogIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFlowEdge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_childNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_coreNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreNode.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_positionXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionX.c_str(), allocator).Move(), allocator);
    }

    if (m_positionYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionY.c_str(), allocator).Move(), allocator);
    }

    if (m_graphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraphId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_graphId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLogId.c_str(), allocator).Move(), allocator);
    }

}


string TaskFlowEdge::GetNodeId() const
{
    return m_nodeId;
}

void TaskFlowEdge::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool TaskFlowEdge::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string TaskFlowEdge::GetChildNodeId() const
{
    return m_childNodeId;
}

void TaskFlowEdge::SetChildNodeId(const string& _childNodeId)
{
    m_childNodeId = _childNodeId;
    m_childNodeIdHasBeenSet = true;
}

bool TaskFlowEdge::ChildNodeIdHasBeenSet() const
{
    return m_childNodeIdHasBeenSet;
}

string TaskFlowEdge::GetCoreNode() const
{
    return m_coreNode;
}

void TaskFlowEdge::SetCoreNode(const string& _coreNode)
{
    m_coreNode = _coreNode;
    m_coreNodeHasBeenSet = true;
}

bool TaskFlowEdge::CoreNodeHasBeenSet() const
{
    return m_coreNodeHasBeenSet;
}

string TaskFlowEdge::GetEdgeType() const
{
    return m_edgeType;
}

void TaskFlowEdge::SetEdgeType(const string& _edgeType)
{
    m_edgeType = _edgeType;
    m_edgeTypeHasBeenSet = true;
}

bool TaskFlowEdge::EdgeTypeHasBeenSet() const
{
    return m_edgeTypeHasBeenSet;
}

string TaskFlowEdge::GetNodeType() const
{
    return m_nodeType;
}

void TaskFlowEdge::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool TaskFlowEdge::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string TaskFlowEdge::GetPositionX() const
{
    return m_positionX;
}

void TaskFlowEdge::SetPositionX(const string& _positionX)
{
    m_positionX = _positionX;
    m_positionXHasBeenSet = true;
}

bool TaskFlowEdge::PositionXHasBeenSet() const
{
    return m_positionXHasBeenSet;
}

string TaskFlowEdge::GetPositionY() const
{
    return m_positionY;
}

void TaskFlowEdge::SetPositionY(const string& _positionY)
{
    m_positionY = _positionY;
    m_positionYHasBeenSet = true;
}

bool TaskFlowEdge::PositionYHasBeenSet() const
{
    return m_positionYHasBeenSet;
}

string TaskFlowEdge::GetGraphId() const
{
    return m_graphId;
}

void TaskFlowEdge::SetGraphId(const string& _graphId)
{
    m_graphId = _graphId;
    m_graphIdHasBeenSet = true;
}

bool TaskFlowEdge::GraphIdHasBeenSet() const
{
    return m_graphIdHasBeenSet;
}

string TaskFlowEdge::GetFlowId() const
{
    return m_flowId;
}

void TaskFlowEdge::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool TaskFlowEdge::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string TaskFlowEdge::GetNodeName() const
{
    return m_nodeName;
}

void TaskFlowEdge::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool TaskFlowEdge::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string TaskFlowEdge::GetTaskId() const
{
    return m_taskId;
}

void TaskFlowEdge::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskFlowEdge::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskFlowEdge::GetTaskLogId() const
{
    return m_taskLogId;
}

void TaskFlowEdge::SetTaskLogId(const string& _taskLogId)
{
    m_taskLogId = _taskLogId;
    m_taskLogIdHasBeenSet = true;
}

bool TaskFlowEdge::TaskLogIdHasBeenSet() const
{
    return m_taskLogIdHasBeenSet;
}

