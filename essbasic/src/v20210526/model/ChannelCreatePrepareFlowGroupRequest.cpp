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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreatePrepareFlowGroupRequest::ChannelCreatePrepareFlowGroupRequest() :
    m_baseFlowInfosHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ChannelCreatePrepareFlowGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baseFlowInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseFlowInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baseFlowInfos.begin(); itr != m_baseFlowInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupName.c_str(), allocator).Move(), allocator);
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


vector<BaseFlowInfo> ChannelCreatePrepareFlowGroupRequest::GetBaseFlowInfos() const
{
    return m_baseFlowInfos;
}

void ChannelCreatePrepareFlowGroupRequest::SetBaseFlowInfos(const vector<BaseFlowInfo>& _baseFlowInfos)
{
    m_baseFlowInfos = _baseFlowInfos;
    m_baseFlowInfosHasBeenSet = true;
}

bool ChannelCreatePrepareFlowGroupRequest::BaseFlowInfosHasBeenSet() const
{
    return m_baseFlowInfosHasBeenSet;
}

string ChannelCreatePrepareFlowGroupRequest::GetFlowGroupName() const
{
    return m_flowGroupName;
}

void ChannelCreatePrepareFlowGroupRequest::SetFlowGroupName(const string& _flowGroupName)
{
    m_flowGroupName = _flowGroupName;
    m_flowGroupNameHasBeenSet = true;
}

bool ChannelCreatePrepareFlowGroupRequest::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}

int64_t ChannelCreatePrepareFlowGroupRequest::GetResourceType() const
{
    return m_resourceType;
}

void ChannelCreatePrepareFlowGroupRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ChannelCreatePrepareFlowGroupRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

Agent ChannelCreatePrepareFlowGroupRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreatePrepareFlowGroupRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreatePrepareFlowGroupRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


