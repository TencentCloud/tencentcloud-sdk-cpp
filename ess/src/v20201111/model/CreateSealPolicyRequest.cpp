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

#include <tencentcloud/ess/v20201111/model/CreateSealPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateSealPolicyRequest::CreateSealPolicyRequest() :
    m_operatorHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateSealPolicyRequest::ToJsonString() const
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

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expired, allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
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


UserInfo CreateSealPolicyRequest::GetOperator() const
{
    return m_operator;
}

void CreateSealPolicyRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSealPolicyRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<UserInfo> CreateSealPolicyRequest::GetUsers() const
{
    return m_users;
}

void CreateSealPolicyRequest::SetUsers(const vector<UserInfo>& _users)
{
    m_users = _users;
    m_usersHasBeenSet = true;
}

bool CreateSealPolicyRequest::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

string CreateSealPolicyRequest::GetSealId() const
{
    return m_sealId;
}

void CreateSealPolicyRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool CreateSealPolicyRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

int64_t CreateSealPolicyRequest::GetExpired() const
{
    return m_expired;
}

void CreateSealPolicyRequest::SetExpired(const int64_t& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool CreateSealPolicyRequest::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

vector<string> CreateSealPolicyRequest::GetUserIds() const
{
    return m_userIds;
}

void CreateSealPolicyRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool CreateSealPolicyRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

string CreateSealPolicyRequest::GetPolicy() const
{
    return m_policy;
}

void CreateSealPolicyRequest::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateSealPolicyRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

Agent CreateSealPolicyRequest::GetAgent() const
{
    return m_agent;
}

void CreateSealPolicyRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateSealPolicyRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


