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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentA2AConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ModifyAgentA2AConfigRequest::ModifyAgentA2AConfigRequest() :
    m_agentIdHasBeenSet(false),
    m_a2AEnabledHasBeenSet(false),
    m_a2ASkillSetHasBeenSet(false)
{
}

string ModifyAgentA2AConfigRequest::ToJsonString() const
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

    if (m_a2AEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_a2AEnabled, allocator);
    }

    if (m_a2ASkillSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2ASkillSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_a2ASkillSet.begin(); itr != m_a2ASkillSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAgentA2AConfigRequest::GetAgentId() const
{
    return m_agentId;
}

void ModifyAgentA2AConfigRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ModifyAgentA2AConfigRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

bool ModifyAgentA2AConfigRequest::GetA2AEnabled() const
{
    return m_a2AEnabled;
}

void ModifyAgentA2AConfigRequest::SetA2AEnabled(const bool& _a2AEnabled)
{
    m_a2AEnabled = _a2AEnabled;
    m_a2AEnabledHasBeenSet = true;
}

bool ModifyAgentA2AConfigRequest::A2AEnabledHasBeenSet() const
{
    return m_a2AEnabledHasBeenSet;
}

vector<A2ASkillInput> ModifyAgentA2AConfigRequest::GetA2ASkillSet() const
{
    return m_a2ASkillSet;
}

void ModifyAgentA2AConfigRequest::SetA2ASkillSet(const vector<A2ASkillInput>& _a2ASkillSet)
{
    m_a2ASkillSet = _a2ASkillSet;
    m_a2ASkillSetHasBeenSet = true;
}

bool ModifyAgentA2AConfigRequest::A2ASkillSetHasBeenSet() const
{
    return m_a2ASkillSetHasBeenSet;
}


