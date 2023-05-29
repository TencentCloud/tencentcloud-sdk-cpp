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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignReviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowSignReviewRequest::ChannelCreateFlowSignReviewRequest() :
    m_agentHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_reviewTypeHasBeenSet(false),
    m_reviewMessageHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_operateTypeHasBeenSet(false)
{
}

string ChannelCreateFlowSignReviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewType.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateFlowSignReviewRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowSignReviewRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateFlowSignReviewRequest::GetFlowId() const
{
    return m_flowId;
}

void ChannelCreateFlowSignReviewRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string ChannelCreateFlowSignReviewRequest::GetReviewType() const
{
    return m_reviewType;
}

void ChannelCreateFlowSignReviewRequest::SetReviewType(const string& _reviewType)
{
    m_reviewType = _reviewType;
    m_reviewTypeHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::ReviewTypeHasBeenSet() const
{
    return m_reviewTypeHasBeenSet;
}

string ChannelCreateFlowSignReviewRequest::GetReviewMessage() const
{
    return m_reviewMessage;
}

void ChannelCreateFlowSignReviewRequest::SetReviewMessage(const string& _reviewMessage)
{
    m_reviewMessage = _reviewMessage;
    m_reviewMessageHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::ReviewMessageHasBeenSet() const
{
    return m_reviewMessageHasBeenSet;
}

string ChannelCreateFlowSignReviewRequest::GetRecipientId() const
{
    return m_recipientId;
}

void ChannelCreateFlowSignReviewRequest::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string ChannelCreateFlowSignReviewRequest::GetOperateType() const
{
    return m_operateType;
}

void ChannelCreateFlowSignReviewRequest::SetOperateType(const string& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool ChannelCreateFlowSignReviewRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}


