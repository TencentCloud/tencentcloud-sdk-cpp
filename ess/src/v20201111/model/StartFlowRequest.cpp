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

#include <tencentcloud/ess/v20201111/model/StartFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

StartFlowRequest::StartFlowRequest() :
    m_operatorHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_ccNotifyTypeHasBeenSet(false)
{
}

string StartFlowRequest::ToJsonString() const
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ccNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcNotifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ccNotifyType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo StartFlowRequest::GetOperator() const
{
    return m_operator;
}

void StartFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool StartFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string StartFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void StartFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool StartFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string StartFlowRequest::GetClientToken() const
{
    return m_clientToken;
}

void StartFlowRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool StartFlowRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

Agent StartFlowRequest::GetAgent() const
{
    return m_agent;
}

void StartFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool StartFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t StartFlowRequest::GetCcNotifyType() const
{
    return m_ccNotifyType;
}

void StartFlowRequest::SetCcNotifyType(const int64_t& _ccNotifyType)
{
    m_ccNotifyType = _ccNotifyType;
    m_ccNotifyTypeHasBeenSet = true;
}

bool StartFlowRequest::CcNotifyTypeHasBeenSet() const
{
    return m_ccNotifyTypeHasBeenSet;
}


