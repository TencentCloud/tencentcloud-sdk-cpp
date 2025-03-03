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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowForwardsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowForwardsRequest::CreateFlowForwardsRequest() :
    m_targetOpenIdHasBeenSet(false),
    m_flowForwardInfosHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateFlowForwardsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowForwardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowForwardInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowForwardInfos.begin(); itr != m_flowForwardInfos.end(); ++itr, ++i)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlowForwardsRequest::GetTargetOpenId() const
{
    return m_targetOpenId;
}

void CreateFlowForwardsRequest::SetTargetOpenId(const string& _targetOpenId)
{
    m_targetOpenId = _targetOpenId;
    m_targetOpenIdHasBeenSet = true;
}

bool CreateFlowForwardsRequest::TargetOpenIdHasBeenSet() const
{
    return m_targetOpenIdHasBeenSet;
}

vector<FlowForwardInfo> CreateFlowForwardsRequest::GetFlowForwardInfos() const
{
    return m_flowForwardInfos;
}

void CreateFlowForwardsRequest::SetFlowForwardInfos(const vector<FlowForwardInfo>& _flowForwardInfos)
{
    m_flowForwardInfos = _flowForwardInfos;
    m_flowForwardInfosHasBeenSet = true;
}

bool CreateFlowForwardsRequest::FlowForwardInfosHasBeenSet() const
{
    return m_flowForwardInfosHasBeenSet;
}

Agent CreateFlowForwardsRequest::GetAgent() const
{
    return m_agent;
}

void CreateFlowForwardsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateFlowForwardsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


