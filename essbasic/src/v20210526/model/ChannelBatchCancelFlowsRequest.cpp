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

#include <tencentcloud/essbasic/v20210526/model/ChannelBatchCancelFlowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelBatchCancelFlowsRequest::ChannelBatchCancelFlowsRequest() :
    m_agentHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_cancelMessageHasBeenSet(false),
    m_cancelMessageFormatHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ChannelBatchCancelFlowsRequest::ToJsonString() const
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

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


Agent ChannelBatchCancelFlowsRequest::GetAgent() const
{
    return m_agent;
}

void ChannelBatchCancelFlowsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelBatchCancelFlowsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<string> ChannelBatchCancelFlowsRequest::GetFlowIds() const
{
    return m_flowIds;
}

void ChannelBatchCancelFlowsRequest::SetFlowIds(const vector<string>& _flowIds)
{
    m_flowIds = _flowIds;
    m_flowIdsHasBeenSet = true;
}

bool ChannelBatchCancelFlowsRequest::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

string ChannelBatchCancelFlowsRequest::GetCancelMessage() const
{
    return m_cancelMessage;
}

void ChannelBatchCancelFlowsRequest::SetCancelMessage(const string& _cancelMessage)
{
    m_cancelMessage = _cancelMessage;
    m_cancelMessageHasBeenSet = true;
}

bool ChannelBatchCancelFlowsRequest::CancelMessageHasBeenSet() const
{
    return m_cancelMessageHasBeenSet;
}

int64_t ChannelBatchCancelFlowsRequest::GetCancelMessageFormat() const
{
    return m_cancelMessageFormat;
}

void ChannelBatchCancelFlowsRequest::SetCancelMessageFormat(const int64_t& _cancelMessageFormat)
{
    m_cancelMessageFormat = _cancelMessageFormat;
    m_cancelMessageFormatHasBeenSet = true;
}

bool ChannelBatchCancelFlowsRequest::CancelMessageFormatHasBeenSet() const
{
    return m_cancelMessageFormatHasBeenSet;
}

UserInfo ChannelBatchCancelFlowsRequest::GetOperator() const
{
    return m_operator;
}

void ChannelBatchCancelFlowsRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelBatchCancelFlowsRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


