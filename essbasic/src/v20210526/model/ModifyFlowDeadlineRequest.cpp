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

#include <tencentcloud/essbasic/v20210526/model/ModifyFlowDeadlineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ModifyFlowDeadlineRequest::ModifyFlowDeadlineRequest() :
    m_agentHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_recipientIdHasBeenSet(false)
{
}

string ModifyFlowDeadlineRequest::ToJsonString() const
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

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadline, allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ModifyFlowDeadlineRequest::GetAgent() const
{
    return m_agent;
}

void ModifyFlowDeadlineRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyFlowDeadlineRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ModifyFlowDeadlineRequest::GetFlowId() const
{
    return m_flowId;
}

void ModifyFlowDeadlineRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ModifyFlowDeadlineRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t ModifyFlowDeadlineRequest::GetDeadline() const
{
    return m_deadline;
}

void ModifyFlowDeadlineRequest::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ModifyFlowDeadlineRequest::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string ModifyFlowDeadlineRequest::GetRecipientId() const
{
    return m_recipientId;
}

void ModifyFlowDeadlineRequest::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool ModifyFlowDeadlineRequest::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}


