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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowGroupSignReviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowGroupSignReviewRequest::CreateFlowGroupSignReviewRequest() :
    m_agentHasBeenSet(false),
    m_flowGroupIdHasBeenSet(false),
    m_reviewTypeHasBeenSet(false),
    m_approverInfoHasBeenSet(false),
    m_reviewMessageHasBeenSet(false)
{
}

string CreateFlowGroupSignReviewRequest::ToJsonString() const
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

    if (m_flowGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reviewMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewMessage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateFlowGroupSignReviewRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowGroupSignReviewRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowGroupSignReviewRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateFlowGroupSignReviewRequest::GetFlowGroupId() const
{
    return m_flowGroupId;
}

void CreateFlowGroupSignReviewRequest::SetFlowGroupId(const string& _flowGroupId)
{
    m_flowGroupId = _flowGroupId;
    m_flowGroupIdHasBeenSet = true;
}

bool CreateFlowGroupSignReviewRequest::FlowGroupIdHasBeenSet() const
{
    return m_flowGroupIdHasBeenSet;
}

string CreateFlowGroupSignReviewRequest::GetReviewType() const
{
    return m_reviewType;
}

void CreateFlowGroupSignReviewRequest::SetReviewType(const string& _reviewType)
{
    m_reviewType = _reviewType;
    m_reviewTypeHasBeenSet = true;
}

bool CreateFlowGroupSignReviewRequest::ReviewTypeHasBeenSet() const
{
    return m_reviewTypeHasBeenSet;
}

NeedReviewApproverInfo CreateFlowGroupSignReviewRequest::GetApproverInfo() const
{
    return m_approverInfo;
}

void CreateFlowGroupSignReviewRequest::SetApproverInfo(const NeedReviewApproverInfo& _approverInfo)
{
    m_approverInfo = _approverInfo;
    m_approverInfoHasBeenSet = true;
}

bool CreateFlowGroupSignReviewRequest::ApproverInfoHasBeenSet() const
{
    return m_approverInfoHasBeenSet;
}

string CreateFlowGroupSignReviewRequest::GetReviewMessage() const
{
    return m_reviewMessage;
}

void CreateFlowGroupSignReviewRequest::SetReviewMessage(const string& _reviewMessage)
{
    m_reviewMessage = _reviewMessage;
    m_reviewMessageHasBeenSet = true;
}

bool CreateFlowGroupSignReviewRequest::ReviewMessageHasBeenSet() const
{
    return m_reviewMessageHasBeenSet;
}


