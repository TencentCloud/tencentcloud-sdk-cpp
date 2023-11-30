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

#include <tencentcloud/essbasic/v20210526/model/DescribeChannelSealPolicyWorkflowUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DescribeChannelSealPolicyWorkflowUrlRequest::DescribeChannelSealPolicyWorkflowUrlRequest() :
    m_agentHasBeenSet(false),
    m_workflowInstanceIdHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

string DescribeChannelSealPolicyWorkflowUrlRequest::ToJsonString() const
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

    if (m_workflowInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent DescribeChannelSealPolicyWorkflowUrlRequest::GetAgent() const
{
    return m_agent;
}

void DescribeChannelSealPolicyWorkflowUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DescribeChannelSealPolicyWorkflowUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string DescribeChannelSealPolicyWorkflowUrlRequest::GetWorkflowInstanceId() const
{
    return m_workflowInstanceId;
}

void DescribeChannelSealPolicyWorkflowUrlRequest::SetWorkflowInstanceId(const string& _workflowInstanceId)
{
    m_workflowInstanceId = _workflowInstanceId;
    m_workflowInstanceIdHasBeenSet = true;
}

bool DescribeChannelSealPolicyWorkflowUrlRequest::WorkflowInstanceIdHasBeenSet() const
{
    return m_workflowInstanceIdHasBeenSet;
}

string DescribeChannelSealPolicyWorkflowUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void DescribeChannelSealPolicyWorkflowUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool DescribeChannelSealPolicyWorkflowUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}


