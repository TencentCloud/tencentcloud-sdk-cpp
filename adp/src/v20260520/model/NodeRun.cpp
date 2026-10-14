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

#include <tencentcloud/adp/v20260520/model/NodeRun.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

NodeRun::NodeRun() :
    m_nodeRunIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_totalCostMsHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_failCodeHasBeenSet(false),
    m_branchIndexListHasBeenSet(false)
{
}

CoreInternalOutcome NodeRun::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRunId") && !value["NodeRunId"].IsNull())
    {
        if (!value["NodeRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.NodeRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRunId = string(value["NodeRunId"].GetString());
        m_nodeRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.NodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetUint64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (value.HasMember("TotalCostMs") && !value["TotalCostMs"].IsNull())
    {
        if (!value["TotalCostMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.TotalCostMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCostMs = value["TotalCostMs"].GetInt64();
        m_totalCostMsHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("FailCode") && !value["FailCode"].IsNull())
    {
        if (!value["FailCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRun.FailCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failCode = string(value["FailCode"].GetString());
        m_failCodeHasBeenSet = true;
    }

    if (value.HasMember("BranchIndexList") && !value["BranchIndexList"].IsNull())
    {
        if (!value["BranchIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRun.BranchIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["BranchIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_branchIndexList.push_back((*itr).GetInt64());
        }
        m_branchIndexListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRun::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCostMs, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_failCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failCode.c_str(), allocator).Move(), allocator);
    }

    if (m_branchIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BranchIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_branchIndexList.begin(); itr != m_branchIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string NodeRun::GetNodeRunId() const
{
    return m_nodeRunId;
}

void NodeRun::SetNodeRunId(const string& _nodeRunId)
{
    m_nodeRunId = _nodeRunId;
    m_nodeRunIdHasBeenSet = true;
}

bool NodeRun::NodeRunIdHasBeenSet() const
{
    return m_nodeRunIdHasBeenSet;
}

string NodeRun::GetNodeId() const
{
    return m_nodeId;
}

void NodeRun::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool NodeRun::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string NodeRun::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void NodeRun::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool NodeRun::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string NodeRun::GetNodeName() const
{
    return m_nodeName;
}

void NodeRun::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeRun::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t NodeRun::GetNodeType() const
{
    return m_nodeType;
}

void NodeRun::SetNodeType(const uint64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeRun::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t NodeRun::GetStatus() const
{
    return m_status;
}

void NodeRun::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NodeRun::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NodeRun::GetFailMessage() const
{
    return m_failMessage;
}

void NodeRun::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool NodeRun::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

int64_t NodeRun::GetTotalCostMs() const
{
    return m_totalCostMs;
}

void NodeRun::SetTotalCostMs(const int64_t& _totalCostMs)
{
    m_totalCostMs = _totalCostMs;
    m_totalCostMsHasBeenSet = true;
}

bool NodeRun::TotalCostMsHasBeenSet() const
{
    return m_totalCostMsHasBeenSet;
}

int64_t NodeRun::GetTotalTokens() const
{
    return m_totalTokens;
}

void NodeRun::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool NodeRun::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

string NodeRun::GetFailCode() const
{
    return m_failCode;
}

void NodeRun::SetFailCode(const string& _failCode)
{
    m_failCode = _failCode;
    m_failCodeHasBeenSet = true;
}

bool NodeRun::FailCodeHasBeenSet() const
{
    return m_failCodeHasBeenSet;
}

vector<int64_t> NodeRun::GetBranchIndexList() const
{
    return m_branchIndexList;
}

void NodeRun::SetBranchIndexList(const vector<int64_t>& _branchIndexList)
{
    m_branchIndexList = _branchIndexList;
    m_branchIndexListHasBeenSet = true;
}

bool NodeRun::BranchIndexListHasBeenSet() const
{
    return m_branchIndexListHasBeenSet;
}

