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

#include <tencentcloud/essbasic/v20210526/model/ChannelCancelFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCancelFlowRequest::ChannelCancelFlowRequest() :
    m_flowIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_cancelMessageHasBeenSet(false),
    m_cancelMessageFormatHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ChannelCancelFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cancelMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelMessageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelMessageFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cancelMessageFormat, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChannelCancelFlowRequest::GetFlowId() const
{
    return m_flowId;
}

void ChannelCancelFlowRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ChannelCancelFlowRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

Agent ChannelCancelFlowRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCancelFlowRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCancelFlowRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCancelFlowRequest::GetCancelMessage() const
{
    return m_cancelMessage;
}

void ChannelCancelFlowRequest::SetCancelMessage(const string& _cancelMessage)
{
    m_cancelMessage = _cancelMessage;
    m_cancelMessageHasBeenSet = true;
}

bool ChannelCancelFlowRequest::CancelMessageHasBeenSet() const
{
    return m_cancelMessageHasBeenSet;
}

int64_t ChannelCancelFlowRequest::GetCancelMessageFormat() const
{
    return m_cancelMessageFormat;
}

void ChannelCancelFlowRequest::SetCancelMessageFormat(const int64_t& _cancelMessageFormat)
{
    m_cancelMessageFormat = _cancelMessageFormat;
    m_cancelMessageFormatHasBeenSet = true;
}

bool ChannelCancelFlowRequest::CancelMessageFormatHasBeenSet() const
{
    return m_cancelMessageFormatHasBeenSet;
}

UserInfo ChannelCancelFlowRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCancelFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCancelFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


