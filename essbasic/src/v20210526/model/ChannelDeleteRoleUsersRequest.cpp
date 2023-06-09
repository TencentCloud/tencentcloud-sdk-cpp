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

#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelDeleteRoleUsersRequest::ChannelDeleteRoleUsersRequest() :
    m_agentHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_openIdsHasBeenSet(false)
{
}

string ChannelDeleteRoleUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
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

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_openIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openIds.begin(); itr != m_openIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelDeleteRoleUsersRequest::GetAgent() const
{
    return m_agent;
}

void ChannelDeleteRoleUsersRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelDeleteRoleUsersRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelDeleteRoleUsersRequest::GetRoleId() const
{
    return m_roleId;
}

void ChannelDeleteRoleUsersRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ChannelDeleteRoleUsersRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

vector<string> ChannelDeleteRoleUsersRequest::GetUserIds() const
{
    return m_userIds;
}

void ChannelDeleteRoleUsersRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool ChannelDeleteRoleUsersRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

UserInfo ChannelDeleteRoleUsersRequest::GetOperator() const
{
    return m_operator;
}

void ChannelDeleteRoleUsersRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelDeleteRoleUsersRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> ChannelDeleteRoleUsersRequest::GetOpenIds() const
{
    return m_openIds;
}

void ChannelDeleteRoleUsersRequest::SetOpenIds(const vector<string>& _openIds)
{
    m_openIds = _openIds;
    m_openIdsHasBeenSet = true;
}

bool ChannelDeleteRoleUsersRequest::OpenIdsHasBeenSet() const
{
    return m_openIdsHasBeenSet;
}


