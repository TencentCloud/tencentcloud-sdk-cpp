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

#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteSealPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelDeleteSealPoliciesRequest::ChannelDeleteSealPoliciesRequest() :
    m_agentHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ChannelDeleteSealPoliciesRequest::ToJsonString() const
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

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelDeleteSealPoliciesRequest::GetAgent() const
{
    return m_agent;
}

void ChannelDeleteSealPoliciesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelDeleteSealPoliciesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelDeleteSealPoliciesRequest::GetSealId() const
{
    return m_sealId;
}

void ChannelDeleteSealPoliciesRequest::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool ChannelDeleteSealPoliciesRequest::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

vector<string> ChannelDeleteSealPoliciesRequest::GetUserIds() const
{
    return m_userIds;
}

void ChannelDeleteSealPoliciesRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool ChannelDeleteSealPoliciesRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

OrganizationInfo ChannelDeleteSealPoliciesRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelDeleteSealPoliciesRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelDeleteSealPoliciesRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

UserInfo ChannelDeleteSealPoliciesRequest::GetOperator() const
{
    return m_operator;
}

void ChannelDeleteSealPoliciesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelDeleteSealPoliciesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


