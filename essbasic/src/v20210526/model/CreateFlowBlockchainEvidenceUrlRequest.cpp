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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowBlockchainEvidenceUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowBlockchainEvidenceUrlRequest::CreateFlowBlockchainEvidenceUrlRequest() :
    m_agentHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_expiredOnHasBeenSet(false)
{
}

string CreateFlowBlockchainEvidenceUrlRequest::ToJsonString() const
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

    if (m_expiredOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiredOn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateFlowBlockchainEvidenceUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowBlockchainEvidenceUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowBlockchainEvidenceUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateFlowBlockchainEvidenceUrlRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateFlowBlockchainEvidenceUrlRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateFlowBlockchainEvidenceUrlRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

uint64_t CreateFlowBlockchainEvidenceUrlRequest::GetExpiredOn() const
{
    return m_expiredOn;
}

void CreateFlowBlockchainEvidenceUrlRequest::SetExpiredOn(const uint64_t& _expiredOn)
{
    m_expiredOn = _expiredOn;
    m_expiredOnHasBeenSet = true;
}

bool CreateFlowBlockchainEvidenceUrlRequest::ExpiredOnHasBeenSet() const
{
    return m_expiredOnHasBeenSet;
}


