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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateRoleRequest::ChannelCreateRoleRequest() :
    m_nameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_permissionGroupsHasBeenSet(false)
{
}

string ChannelCreateRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionGroups.begin(); itr != m_permissionGroups.end(); ++itr, ++i)
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


string ChannelCreateRoleRequest::GetName() const
{
    return m_name;
}

void ChannelCreateRoleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChannelCreateRoleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Agent ChannelCreateRoleRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateRoleRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateRoleRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateRoleRequest::GetDescription() const
{
    return m_description;
}

void ChannelCreateRoleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ChannelCreateRoleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<PermissionGroup> ChannelCreateRoleRequest::GetPermissionGroups() const
{
    return m_permissionGroups;
}

void ChannelCreateRoleRequest::SetPermissionGroups(const vector<PermissionGroup>& _permissionGroups)
{
    m_permissionGroups = _permissionGroups;
    m_permissionGroupsHasBeenSet = true;
}

bool ChannelCreateRoleRequest::PermissionGroupsHasBeenSet() const
{
    return m_permissionGroupsHasBeenSet;
}


