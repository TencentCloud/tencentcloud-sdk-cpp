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

#include <tencentcloud/ess/v20201111/model/CreateDynamicFlowApproverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateDynamicFlowApproverRequest::CreateDynamicFlowApproverRequest() :
    m_operatorHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_approversHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_autoSignSceneHasBeenSet(false)
{
}

string CreateDynamicFlowApproverRequest::ToJsonString() const
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

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSignSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSignScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSignScene.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateDynamicFlowApproverRequest::GetOperator() const
{
    return m_operator;
}

void CreateDynamicFlowApproverRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateDynamicFlowApproverRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateDynamicFlowApproverRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateDynamicFlowApproverRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateDynamicFlowApproverRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<ApproverInfo> CreateDynamicFlowApproverRequest::GetApprovers() const
{
    return m_approvers;
}

void CreateDynamicFlowApproverRequest::SetApprovers(const vector<ApproverInfo>& _approvers)
{
    m_approvers = _approvers;
    m_approversHasBeenSet = true;
}

bool CreateDynamicFlowApproverRequest::ApproversHasBeenSet() const
{
    return m_approversHasBeenSet;
}

Agent CreateDynamicFlowApproverRequest::GetAgent() const
{
    return m_agent;
}

void CreateDynamicFlowApproverRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateDynamicFlowApproverRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateDynamicFlowApproverRequest::GetAutoSignScene() const
{
    return m_autoSignScene;
}

void CreateDynamicFlowApproverRequest::SetAutoSignScene(const string& _autoSignScene)
{
    m_autoSignScene = _autoSignScene;
    m_autoSignSceneHasBeenSet = true;
}

bool CreateDynamicFlowApproverRequest::AutoSignSceneHasBeenSet() const
{
    return m_autoSignSceneHasBeenSet;
}


