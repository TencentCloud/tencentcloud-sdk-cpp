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

#include <tencentcloud/adp/v20260520/model/CreateAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateAgentRequest::CreateAgentRequest() :
    m_appIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_kindHasBeenSet(false)
{
}

string CreateAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentRequest::GetAppId() const
{
    return m_appId;
}

void CreateAgentRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateAgentRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

AgentSpec CreateAgentRequest::GetAgent() const
{
    return m_agent;
}

void CreateAgentRequest::SetAgent(const AgentSpec& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateAgentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

int64_t CreateAgentRequest::GetKind() const
{
    return m_kind;
}

void CreateAgentRequest::SetKind(const int64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool CreateAgentRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}


