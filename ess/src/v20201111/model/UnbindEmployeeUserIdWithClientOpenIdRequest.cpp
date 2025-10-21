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

#include <tencentcloud/ess/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

UnbindEmployeeUserIdWithClientOpenIdRequest::UnbindEmployeeUserIdWithClientOpenIdRequest() :
    m_operatorHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string UnbindEmployeeUserIdWithClientOpenIdRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
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


UserInfo UnbindEmployeeUserIdWithClientOpenIdRequest::GetOperator() const
{
    return m_operator;
}

void UnbindEmployeeUserIdWithClientOpenIdRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool UnbindEmployeeUserIdWithClientOpenIdRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string UnbindEmployeeUserIdWithClientOpenIdRequest::GetUserId() const
{
    return m_userId;
}

void UnbindEmployeeUserIdWithClientOpenIdRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UnbindEmployeeUserIdWithClientOpenIdRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UnbindEmployeeUserIdWithClientOpenIdRequest::GetOpenId() const
{
    return m_openId;
}

void UnbindEmployeeUserIdWithClientOpenIdRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool UnbindEmployeeUserIdWithClientOpenIdRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

Agent UnbindEmployeeUserIdWithClientOpenIdRequest::GetAgent() const
{
    return m_agent;
}

void UnbindEmployeeUserIdWithClientOpenIdRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool UnbindEmployeeUserIdWithClientOpenIdRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


