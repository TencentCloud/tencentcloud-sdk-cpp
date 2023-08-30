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

#include <tencentcloud/ess/v20201111/model/ModifyIntegrationRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ModifyIntegrationRoleRequest::ModifyIntegrationRoleRequest() :
    m_roleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_permissionGroupsHasBeenSet(false),
    m_subOrganizationIdsHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string ModifyIntegrationRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_subOrganizationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subOrganizationIds.begin(); itr != m_subOrganizationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string ModifyIntegrationRoleRequest::GetRoleId() const
{
    return m_roleId;
}

void ModifyIntegrationRoleRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string ModifyIntegrationRoleRequest::GetName() const
{
    return m_name;
}

void ModifyIntegrationRoleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

UserInfo ModifyIntegrationRoleRequest::GetOperator() const
{
    return m_operator;
}

void ModifyIntegrationRoleRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ModifyIntegrationRoleRequest::GetDescription() const
{
    return m_description;
}

void ModifyIntegrationRoleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<PermissionGroup> ModifyIntegrationRoleRequest::GetPermissionGroups() const
{
    return m_permissionGroups;
}

void ModifyIntegrationRoleRequest::SetPermissionGroups(const vector<PermissionGroup>& _permissionGroups)
{
    m_permissionGroups = _permissionGroups;
    m_permissionGroupsHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::PermissionGroupsHasBeenSet() const
{
    return m_permissionGroupsHasBeenSet;
}

vector<string> ModifyIntegrationRoleRequest::GetSubOrganizationIds() const
{
    return m_subOrganizationIds;
}

void ModifyIntegrationRoleRequest::SetSubOrganizationIds(const vector<string>& _subOrganizationIds)
{
    m_subOrganizationIds = _subOrganizationIds;
    m_subOrganizationIdsHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::SubOrganizationIdsHasBeenSet() const
{
    return m_subOrganizationIdsHasBeenSet;
}

Agent ModifyIntegrationRoleRequest::GetAgent() const
{
    return m_agent;
}

void ModifyIntegrationRoleRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ModifyIntegrationRoleRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


