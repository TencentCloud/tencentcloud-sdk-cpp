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

#include <tencentcloud/bpaas/v20181217/model/StatusNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

StatusNode::StatusNode() :
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nextNodeHasBeenSet(false),
    m_opinionHasBeenSet(false),
    m_scfNameHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_approvedUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_isApproveHasBeenSet(false),
    m_approveIdHasBeenSet(false),
    m_approveMethodHasBeenSet(false),
    m_approveTypeHasBeenSet(false),
    m_callMethodHasBeenSet(false),
    m_dataHubIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_cKafkaRegionHasBeenSet(false),
    m_externalUrlHasBeenSet(false),
    m_parallelNodesHasBeenSet(false),
    m_rejectedCloudFunctionMsgHasBeenSet(false),
    m_prevNodeHasBeenSet(false)
{
}

CoreInternalOutcome StatusNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.NodeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetUint64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NextNode") && !value["NextNode"].IsNull())
    {
        if (!value["NextNode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.NextNode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextNode = string(value["NextNode"].GetString());
        m_nextNodeHasBeenSet = true;
    }

    if (value.HasMember("Opinion") && !value["Opinion"].IsNull())
    {
        if (!value["Opinion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.Opinion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_opinion.Deserialize(value["Opinion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_opinionHasBeenSet = true;
    }

    if (value.HasMember("ScfName") && !value["ScfName"].IsNull())
    {
        if (!value["ScfName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ScfName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfName = string(value["ScfName"].GetString());
        m_scfNameHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.SubStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = value["SubStatus"].GetUint64();
        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("ApprovedUin") && !value["ApprovedUin"].IsNull())
    {
        if (!value["ApprovedUin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatusNode.ApprovedUin` is not array type"));

        const rapidjson::Value &tmpValue = value["ApprovedUin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approvedUin.push_back((*itr).GetUint64());
        }
        m_approvedUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Users") && !value["Users"].IsNull())
    {
        if (!value["Users"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.Users` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_users.Deserialize(value["Users"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usersHasBeenSet = true;
    }

    if (value.HasMember("IsApprove") && !value["IsApprove"].IsNull())
    {
        if (!value["IsApprove"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.IsApprove` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isApprove = value["IsApprove"].GetBool();
        m_isApproveHasBeenSet = true;
    }

    if (value.HasMember("ApproveId") && !value["ApproveId"].IsNull())
    {
        if (!value["ApproveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ApproveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveId = string(value["ApproveId"].GetString());
        m_approveIdHasBeenSet = true;
    }

    if (value.HasMember("ApproveMethod") && !value["ApproveMethod"].IsNull())
    {
        if (!value["ApproveMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ApproveMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_approveMethod = value["ApproveMethod"].GetUint64();
        m_approveMethodHasBeenSet = true;
    }

    if (value.HasMember("ApproveType") && !value["ApproveType"].IsNull())
    {
        if (!value["ApproveType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ApproveType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_approveType = value["ApproveType"].GetUint64();
        m_approveTypeHasBeenSet = true;
    }

    if (value.HasMember("CallMethod") && !value["CallMethod"].IsNull())
    {
        if (!value["CallMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.CallMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callMethod = value["CallMethod"].GetUint64();
        m_callMethodHasBeenSet = true;
    }

    if (value.HasMember("DataHubId") && !value["DataHubId"].IsNull())
    {
        if (!value["DataHubId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.DataHubId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataHubId = string(value["DataHubId"].GetString());
        m_dataHubIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CKafkaRegion") && !value["CKafkaRegion"].IsNull())
    {
        if (!value["CKafkaRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.CKafkaRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaRegion = string(value["CKafkaRegion"].GetString());
        m_cKafkaRegionHasBeenSet = true;
    }

    if (value.HasMember("ExternalUrl") && !value["ExternalUrl"].IsNull())
    {
        if (!value["ExternalUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ExternalUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUrl = string(value["ExternalUrl"].GetString());
        m_externalUrlHasBeenSet = true;
    }

    if (value.HasMember("ParallelNodes") && !value["ParallelNodes"].IsNull())
    {
        if (!value["ParallelNodes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.ParallelNodes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parallelNodes = string(value["ParallelNodes"].GetString());
        m_parallelNodesHasBeenSet = true;
    }

    if (value.HasMember("RejectedCloudFunctionMsg") && !value["RejectedCloudFunctionMsg"].IsNull())
    {
        if (!value["RejectedCloudFunctionMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.RejectedCloudFunctionMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rejectedCloudFunctionMsg = string(value["RejectedCloudFunctionMsg"].GetString());
        m_rejectedCloudFunctionMsgHasBeenSet = true;
    }

    if (value.HasMember("PrevNode") && !value["PrevNode"].IsNull())
    {
        if (!value["PrevNode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusNode.PrevNode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prevNode = string(value["PrevNode"].GetString());
        m_prevNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatusNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_nextNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextNode.c_str(), allocator).Move(), allocator);
    }

    if (m_opinionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Opinion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_opinion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scfNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfName.c_str(), allocator).Move(), allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subStatus, allocator);
    }

    if (m_approvedUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovedUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approvedUin.begin(); itr != m_approvedUin.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_users.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isApproveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsApprove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isApprove, allocator);
    }

    if (m_approveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveId.c_str(), allocator).Move(), allocator);
    }

    if (m_approveMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveMethod, allocator);
    }

    if (m_approveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveType, allocator);
    }

    if (m_callMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callMethod, allocator);
    }

    if (m_dataHubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataHubId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataHubId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_externalUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_parallelNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParallelNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parallelNodes.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectedCloudFunctionMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectedCloudFunctionMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rejectedCloudFunctionMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_prevNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrevNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prevNode.c_str(), allocator).Move(), allocator);
    }

}


string StatusNode::GetNodeId() const
{
    return m_nodeId;
}

void StatusNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool StatusNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string StatusNode::GetNodeName() const
{
    return m_nodeName;
}

void StatusNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool StatusNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t StatusNode::GetNodeType() const
{
    return m_nodeType;
}

void StatusNode::SetNodeType(const uint64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool StatusNode::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string StatusNode::GetNextNode() const
{
    return m_nextNode;
}

void StatusNode::SetNextNode(const string& _nextNode)
{
    m_nextNode = _nextNode;
    m_nextNodeHasBeenSet = true;
}

bool StatusNode::NextNodeHasBeenSet() const
{
    return m_nextNodeHasBeenSet;
}

ApproveOpinion StatusNode::GetOpinion() const
{
    return m_opinion;
}

void StatusNode::SetOpinion(const ApproveOpinion& _opinion)
{
    m_opinion = _opinion;
    m_opinionHasBeenSet = true;
}

bool StatusNode::OpinionHasBeenSet() const
{
    return m_opinionHasBeenSet;
}

string StatusNode::GetScfName() const
{
    return m_scfName;
}

void StatusNode::SetScfName(const string& _scfName)
{
    m_scfName = _scfName;
    m_scfNameHasBeenSet = true;
}

bool StatusNode::ScfNameHasBeenSet() const
{
    return m_scfNameHasBeenSet;
}

uint64_t StatusNode::GetSubStatus() const
{
    return m_subStatus;
}

void StatusNode::SetSubStatus(const uint64_t& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool StatusNode::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

vector<uint64_t> StatusNode::GetApprovedUin() const
{
    return m_approvedUin;
}

void StatusNode::SetApprovedUin(const vector<uint64_t>& _approvedUin)
{
    m_approvedUin = _approvedUin;
    m_approvedUinHasBeenSet = true;
}

bool StatusNode::ApprovedUinHasBeenSet() const
{
    return m_approvedUinHasBeenSet;
}

string StatusNode::GetCreateTime() const
{
    return m_createTime;
}

void StatusNode::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StatusNode::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string StatusNode::GetMsg() const
{
    return m_msg;
}

void StatusNode::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool StatusNode::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

ApproveUser StatusNode::GetUsers() const
{
    return m_users;
}

void StatusNode::SetUsers(const ApproveUser& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool StatusNode::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

bool StatusNode::GetIsApprove() const
{
    return m_isApprove;
}

void StatusNode::SetIsApprove(const bool& _isApprove)
{
    m_isApprove = _isApprove;
    m_isApproveHasBeenSet = true;
}

bool StatusNode::IsApproveHasBeenSet() const
{
    return m_isApproveHasBeenSet;
}

string StatusNode::GetApproveId() const
{
    return m_approveId;
}

void StatusNode::SetApproveId(const string& _approveId)
{
    m_approveId = _approveId;
    m_approveIdHasBeenSet = true;
}

bool StatusNode::ApproveIdHasBeenSet() const
{
    return m_approveIdHasBeenSet;
}

uint64_t StatusNode::GetApproveMethod() const
{
    return m_approveMethod;
}

void StatusNode::SetApproveMethod(const uint64_t& _approveMethod)
{
    m_approveMethod = _approveMethod;
    m_approveMethodHasBeenSet = true;
}

bool StatusNode::ApproveMethodHasBeenSet() const
{
    return m_approveMethodHasBeenSet;
}

uint64_t StatusNode::GetApproveType() const
{
    return m_approveType;
}

void StatusNode::SetApproveType(const uint64_t& _approveType)
{
    m_approveType = _approveType;
    m_approveTypeHasBeenSet = true;
}

bool StatusNode::ApproveTypeHasBeenSet() const
{
    return m_approveTypeHasBeenSet;
}

uint64_t StatusNode::GetCallMethod() const
{
    return m_callMethod;
}

void StatusNode::SetCallMethod(const uint64_t& _callMethod)
{
    m_callMethod = _callMethod;
    m_callMethodHasBeenSet = true;
}

bool StatusNode::CallMethodHasBeenSet() const
{
    return m_callMethodHasBeenSet;
}

string StatusNode::GetDataHubId() const
{
    return m_dataHubId;
}

void StatusNode::SetDataHubId(const string& _dataHubId)
{
    m_dataHubId = _dataHubId;
    m_dataHubIdHasBeenSet = true;
}

bool StatusNode::DataHubIdHasBeenSet() const
{
    return m_dataHubIdHasBeenSet;
}

string StatusNode::GetTaskName() const
{
    return m_taskName;
}

void StatusNode::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool StatusNode::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string StatusNode::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

void StatusNode::SetCKafkaRegion(const string& _cKafkaRegion)
{
    m_cKafkaRegion = _cKafkaRegion;
    m_cKafkaRegionHasBeenSet = true;
}

bool StatusNode::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string StatusNode::GetExternalUrl() const
{
    return m_externalUrl;
}

void StatusNode::SetExternalUrl(const string& _externalUrl)
{
    m_externalUrl = _externalUrl;
    m_externalUrlHasBeenSet = true;
}

bool StatusNode::ExternalUrlHasBeenSet() const
{
    return m_externalUrlHasBeenSet;
}

string StatusNode::GetParallelNodes() const
{
    return m_parallelNodes;
}

void StatusNode::SetParallelNodes(const string& _parallelNodes)
{
    m_parallelNodes = _parallelNodes;
    m_parallelNodesHasBeenSet = true;
}

bool StatusNode::ParallelNodesHasBeenSet() const
{
    return m_parallelNodesHasBeenSet;
}

string StatusNode::GetRejectedCloudFunctionMsg() const
{
    return m_rejectedCloudFunctionMsg;
}

void StatusNode::SetRejectedCloudFunctionMsg(const string& _rejectedCloudFunctionMsg)
{
    m_rejectedCloudFunctionMsg = _rejectedCloudFunctionMsg;
    m_rejectedCloudFunctionMsgHasBeenSet = true;
}

bool StatusNode::RejectedCloudFunctionMsgHasBeenSet() const
{
    return m_rejectedCloudFunctionMsgHasBeenSet;
}

string StatusNode::GetPrevNode() const
{
    return m_prevNode;
}

void StatusNode::SetPrevNode(const string& _prevNode)
{
    m_prevNode = _prevNode;
    m_prevNodeHasBeenSet = true;
}

bool StatusNode::PrevNodeHasBeenSet() const
{
    return m_prevNodeHasBeenSet;
}

