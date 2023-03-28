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

#include <tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DeleteIntegrationRoleUsersRequest::DeleteIntegrationRoleUsersRequest() :
    m_operatorHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string DeleteIntegrationRoleUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


UserInfo DeleteIntegrationRoleUsersRequest::GetOperator() const
{
    return m_operator;
}

void DeleteIntegrationRoleUsersRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DeleteIntegrationRoleUsersRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DeleteIntegrationRoleUsersRequest::GetRoleId() const
{
    return m_roleId;
}

void DeleteIntegrationRoleUsersRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DeleteIntegrationRoleUsersRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

vector<UserInfo> DeleteIntegrationRoleUsersRequest::GetUsers() const
{
    return m_users;
}

void DeleteIntegrationRoleUsersRequest::SetUsers(const vector<UserInfo>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool DeleteIntegrationRoleUsersRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

Agent DeleteIntegrationRoleUsersRequest::GetAgent() const
{
    return m_agent;
}

void DeleteIntegrationRoleUsersRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool DeleteIntegrationRoleUsersRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


