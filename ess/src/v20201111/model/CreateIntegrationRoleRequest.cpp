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

#include <tencentcloud/ess/v20201111/model/CreateIntegrationRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateIntegrationRoleRequest::CreateIntegrationRoleRequest() :
    m_nameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isGroupRoleHasBeenSet(false),
    m_permissionGroupsHasBeenSet(false),
    m_subOrganizationIdsHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateIntegrationRoleRequest::ToJsonString() const
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

    if (m_isGroupRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGroupRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGroupRole, allocator);
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
        d.AddMember(iKey, rapidjson::Value(m_subOrganizationIds.c_str(), allocator).Move(), allocator);
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


string CreateIntegrationRoleRequest::GetName() const
{
    return m_name;
}

void CreateIntegrationRoleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

UserInfo CreateIntegrationRoleRequest::GetOperator() const
{
    return m_operator;
}

void CreateIntegrationRoleRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateIntegrationRoleRequest::GetDescription() const
{
    return m_description;
}

void CreateIntegrationRoleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateIntegrationRoleRequest::GetIsGroupRole() const
{
    return m_isGroupRole;
}

void CreateIntegrationRoleRequest::SetIsGroupRole(const int64_t& _isGroupRole)
{
    m_isGroupRole = _isGroupRole;
    m_isGroupRoleHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::IsGroupRoleHasBeenSet() const
{
    return m_isGroupRoleHasBeenSet;
}

vector<PermissionGroup> CreateIntegrationRoleRequest::GetPermissionGroups() const
{
    return m_permissionGroups;
}

void CreateIntegrationRoleRequest::SetPermissionGroups(const vector<PermissionGroup>& _permissionGroups)
{
    m_permissionGroups = _permissionGroups;
    m_permissionGroupsHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::PermissionGroupsHasBeenSet() const
{
    return m_permissionGroupsHasBeenSet;
}

string CreateIntegrationRoleRequest::GetSubOrganizationIds() const
{
    return m_subOrganizationIds;
}

void CreateIntegrationRoleRequest::SetSubOrganizationIds(const string& _subOrganizationIds)
{
    m_subOrganizationIds = _subOrganizationIds;
    m_subOrganizationIdsHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::SubOrganizationIdsHasBeenSet() const
{
    return m_subOrganizationIdsHasBeenSet;
}

Agent CreateIntegrationRoleRequest::GetAgent() const
{
    return m_agent;
}

void CreateIntegrationRoleRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateIntegrationRoleRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


