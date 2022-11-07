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

#include <tencentcloud/wedata/v20210820/model/UpdateInLongAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateInLongAgentRequest::UpdateInLongAgentRequest() :
    m_agentIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false)
{
}

string UpdateInLongAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateInLongAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void UpdateInLongAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool UpdateInLongAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string UpdateInLongAgentRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateInLongAgentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateInLongAgentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateInLongAgentRequest::GetAgentName() const
{
    return m_agentName;
}

void UpdateInLongAgentRequest::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool UpdateInLongAgentRequest::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string UpdateInLongAgentRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void UpdateInLongAgentRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool UpdateInLongAgentRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}


