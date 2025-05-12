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

#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreatePrepareFlowGroupRequest::CreatePrepareFlowGroupRequest() :
    m_operatorHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false),
    m_flowGroupInfosHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreatePrepareFlowGroupRequest::ToJsonString() const
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

    if (m_flowGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowGroupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowGroupInfos.begin(); itr != m_flowGroupInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
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


UserInfo CreatePrepareFlowGroupRequest::GetOperator() const
{
    return m_operator;
}

void CreatePrepareFlowGroupRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreatePrepareFlowGroupRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreatePrepareFlowGroupRequest::GetFlowGroupName() const
{
    return m_flowGroupName;
}

void CreatePrepareFlowGroupRequest::SetFlowGroupName(const string& _flowGroupName)
{
    m_flowGroupName = _flowGroupName;
    m_flowGroupNameHasBeenSet = true;
}

bool CreatePrepareFlowGroupRequest::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}

vector<FlowGroupInfo> CreatePrepareFlowGroupRequest::GetFlowGroupInfos() const
{
    return m_flowGroupInfos;
}

void CreatePrepareFlowGroupRequest::SetFlowGroupInfos(const vector<FlowGroupInfo>& _flowGroupInfos)
{
    m_flowGroupInfos = _flowGroupInfos;
    m_flowGroupInfosHasBeenSet = true;
}

bool CreatePrepareFlowGroupRequest::FlowGroupInfosHasBeenSet() const
{
    return m_flowGroupInfosHasBeenSet;
}

int64_t CreatePrepareFlowGroupRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreatePrepareFlowGroupRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreatePrepareFlowGroupRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

Agent CreatePrepareFlowGroupRequest::GetAgent() const
{
    return m_agent;
}

void CreatePrepareFlowGroupRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreatePrepareFlowGroupRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


