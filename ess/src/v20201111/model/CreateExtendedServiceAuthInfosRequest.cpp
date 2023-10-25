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

#include <tencentcloud/ess/v20201111/model/CreateExtendedServiceAuthInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateExtendedServiceAuthInfosRequest::CreateExtendedServiceAuthInfosRequest() :
    m_operatorHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_extendServiceTypeHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateExtendedServiceAuthInfosRequest::ToJsonString() const
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

    if (m_extendServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendServiceType.c_str(), allocator).Move(), allocator);
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


UserInfo CreateExtendedServiceAuthInfosRequest::GetOperator() const
{
    return m_operator;
}

void CreateExtendedServiceAuthInfosRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateExtendedServiceAuthInfosRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> CreateExtendedServiceAuthInfosRequest::GetUserIds() const
{
    return m_userIds;
}

void CreateExtendedServiceAuthInfosRequest::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool CreateExtendedServiceAuthInfosRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

string CreateExtendedServiceAuthInfosRequest::GetExtendServiceType() const
{
    return m_extendServiceType;
}

void CreateExtendedServiceAuthInfosRequest::SetExtendServiceType(const string& _extendServiceType)
{
    m_extendServiceType = _extendServiceType;
    m_extendServiceTypeHasBeenSet = true;
}

bool CreateExtendedServiceAuthInfosRequest::ExtendServiceTypeHasBeenSet() const
{
    return m_extendServiceTypeHasBeenSet;
}

Agent CreateExtendedServiceAuthInfosRequest::GetAgent() const
{
    return m_agent;
}

void CreateExtendedServiceAuthInfosRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateExtendedServiceAuthInfosRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


