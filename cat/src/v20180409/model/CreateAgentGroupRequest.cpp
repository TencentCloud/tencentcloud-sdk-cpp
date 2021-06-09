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

#include <tencentcloud/cat/v20180409/model/CreateAgentGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CreateAgentGroupRequest::CreateAgentGroupRequest() :
    m_groupNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_agentsHasBeenSet(false)
{
}

string CreateAgentGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_agentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agents.begin(); itr != m_agents.end(); ++itr, ++i)
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


string CreateAgentGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateAgentGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateAgentGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t CreateAgentGroupRequest::GetIsDefault() const
{
    return m_isDefault;
}

void CreateAgentGroupRequest::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool CreateAgentGroupRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

vector<CatAgent> CreateAgentGroupRequest::GetAgents() const
{
    return m_agents;
}

void CreateAgentGroupRequest::SetAgents(const vector<CatAgent>& _agents)
{
    m_agents = _agents;
    m_agentsHasBeenSet = true;
}

bool CreateAgentGroupRequest::AgentsHasBeenSet() const
{
    return m_agentsHasBeenSet;
}


