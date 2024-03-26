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

#include <tencentcloud/ess/v20201111/model/CreateFlowApproversRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowApproversRequest::CreateFlowApproversRequest() :
    m_operatorHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_fillApproverTypeHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false)
{
}

string CreateFlowApproversRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_approversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approvers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approvers.begin(); itr != m_approvers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_fillApproverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillApproverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fillApproverType, allocator);
    }

    if (m_initiatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Initiator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_initiator.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateFlowApproversRequest::GetOperator() const
{
    return m_operator;
}

void CreateFlowApproversRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateFlowApproversRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<FillApproverInfo> CreateFlowApproversRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateFlowApproversRequest::SetApprovers(const vector<FillApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateFlowApproversRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

string CreateFlowApproversRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateFlowApproversRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateFlowApproversRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t CreateFlowApproversRequest::GetFillApproverType() const
{
    return m_fillApproverType;
}

void CreateFlowApproversRequest::SetFillApproverType(const int64_t& _fillApproverType)
{
    m_fillApproverType = _fillApproverType;
    m_fillApproverTypeHasBeenSet = true;
}

bool CreateFlowApproversRequest::FillApproverTypeHasBeenSet() const
{
    return m_fillApproverTypeHasBeenSet;
}

string CreateFlowApproversRequest::GetInitiator() const
{
    return m_initiator;
}

void CreateFlowApproversRequest::SetInitiator(const string& _initiator)
{
    m_initiator = _initiator;
    m_initiatorHasBeenSet = true;
}

bool CreateFlowApproversRequest::InitiatorHasBeenSet() const
{
    return m_initiatorHasBeenSet;
}

Agent CreateFlowApproversRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowApproversRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowApproversRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateFlowApproversRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateFlowApproversRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateFlowApproversRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}


