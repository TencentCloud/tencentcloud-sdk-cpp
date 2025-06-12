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

#include <tencentcloud/lke/v20231130/model/NodeRunBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

NodeRunBase::NodeRunBase() :
    m_nodeRunIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_costMillisecondsHasBeenSet(false),
    m_totalTokensHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRunId") && !value["NodeRunId"].IsNull())
    {
        if (!value["NodeRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.NodeRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRunId = string(value["NodeRunId"].GetString());
        m_nodeRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.NodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetUint64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("FailCode") && !value["FailCode"].IsNull())
    {
        if (!value["FailCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.FailCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = string(value["FailCode"].GetString());
        m_failCodeHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("CostMilliseconds") && !value["CostMilliseconds"].IsNull())
    {
        if (!value["CostMilliseconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.CostMilliseconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costMilliseconds = value["CostMilliseconds"].GetUint64();
        m_costMillisecondsHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunBase.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRunBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failCode.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_costMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMilliseconds, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

}


string NodeRunBase::GetNodeRunId() const
{
    return m_nodeRunId;
}

void NodeRunBase::SetNodeRunId(const string& _nodeRunId)
{
    m_nodeRunId = _nodeRunId;
    m_nodeRunIdHasBeenSet = true;
}

bool NodeRunBase::NodeRunIdHasBeenSet() const
{
    return m_nodeRunIdHasBeenSet;
}

string NodeRunBase::GetNodeId() const
{
    return m_nodeId;
}

void NodeRunBase::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool NodeRunBase::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string NodeRunBase::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void NodeRunBase::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool NodeRunBase::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string NodeRunBase::GetNodeName() const
{
    return m_nodeName;
}

void NodeRunBase::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeRunBase::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t NodeRunBase::GetNodeType() const
{
    return m_nodeType;
}

void NodeRunBase::SetNodeType(const uint64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeRunBase::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t NodeRunBase::GetState() const
{
    return m_state;
}

void NodeRunBase::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NodeRunBase::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string NodeRunBase::GetFailCode() const
{
    return m_failCode;
}

void NodeRunBase::SetFailCode(const string& _failCode)
{
    m_failCode = _failCode;
    m_failCodeHasBeenSet = true;
}

bool NodeRunBase::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

string NodeRunBase::GetFailMessage() const
{
    return m_failMessage;
}

void NodeRunBase::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool NodeRunBase::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

uint64_t NodeRunBase::GetCostMilliseconds() const
{
    return m_costMilliseconds;
}

void NodeRunBase::SetCostMilliseconds(const uint64_t& _costMilliseconds)
{
    m_costMilliseconds = _costMilliseconds;
    m_costMillisecondsHasBeenSet = true;
}

bool NodeRunBase::CostMillisecondsHasBeenSet() const
{
    return m_costMillisecondsHasBeenSet;
}

uint64_t NodeRunBase::GetTotalTokens() const
{
    return m_totalTokens;
}

void NodeRunBase::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool NodeRunBase::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

