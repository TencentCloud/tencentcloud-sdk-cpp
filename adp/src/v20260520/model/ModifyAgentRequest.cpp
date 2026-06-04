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

#include <tencentcloud/adp/v20260520/model/ModifyAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyAgentRequest::ModifyAgentRequest() :
    m_appIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyAgentRequest::ToJsonString() const
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

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAgentRequest::GetAppId() const
{
    return m_appId;
}

void ModifyAgentRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyAgentRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void ModifyAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ModifyAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

AgentSpec ModifyAgentRequest::GetAgent() const
{
    return m_agent;
}

void ModifyAgentRequest::SetAgent(const AgentSpec& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyAgentRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

FieldMask ModifyAgentRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyAgentRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyAgentRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


