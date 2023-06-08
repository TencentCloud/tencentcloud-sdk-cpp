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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateSealPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateSealPolicyRequest::ChannelCreateSealPolicyRequest() :
    m_agentHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_organizationHasBeenSet(false)
{
}

string ChannelCreateSealPolicyRequest::ToJsonString() const
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

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
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

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateSealPolicyRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateSealPolicyRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateSealPolicyRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateSealPolicyRequest::GetSealId() const
{
    return m_sealId;
}

void ChannelCreateSealPolicyRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool ChannelCreateSealPolicyRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

vector<string> ChannelCreateSealPolicyRequest::GetUserIds() const
{
    return m_userIds;
}

void ChannelCreateSealPolicyRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool ChannelCreateSealPolicyRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

UserInfo ChannelCreateSealPolicyRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateSealPolicyRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateSealPolicyRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

OrganizationInfo ChannelCreateSealPolicyRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelCreateSealPolicyRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelCreateSealPolicyRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}


