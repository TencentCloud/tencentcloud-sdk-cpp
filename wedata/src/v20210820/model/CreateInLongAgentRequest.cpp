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

#include <tencentcloud/wedata/v20210820/model/CreateInLongAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateInLongAgentRequest::CreateInLongAgentRequest() :
    m_agentTypeHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tkeRegionHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

string CreateInLongAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentType, allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tkeRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TkeRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tkeRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateInLongAgentRequest::GetAgentType() const
{
    return m_agentType;
}

void CreateInLongAgentRequest::SetAgentType(const uint64_t& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool CreateInLongAgentRequest::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string CreateInLongAgentRequest::GetAgentName() const
{
    return m_agentName;
}

void CreateInLongAgentRequest::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool CreateInLongAgentRequest::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string CreateInLongAgentRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void CreateInLongAgentRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool CreateInLongAgentRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string CreateInLongAgentRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateInLongAgentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateInLongAgentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateInLongAgentRequest::GetTkeRegion() const
{
    return m_tkeRegion;
}

void CreateInLongAgentRequest::SetTkeRegion(const string& _tkeRegion)
{
    m_tkeRegion = _tkeRegion;
    m_tkeRegionHasBeenSet = true;
}

bool CreateInLongAgentRequest::TkeRegionHasBeenSet() const
{
    return m_tkeRegionHasBeenSet;
}

string CreateInLongAgentRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateInLongAgentRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateInLongAgentRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


