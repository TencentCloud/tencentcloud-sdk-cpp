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

#include <tencentcloud/ess/v20201111/model/CreateUserMobileChangeUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateUserMobileChangeUrlRequest::CreateUserMobileChangeUrlRequest() :
    m_operatorHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userAccountTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

string CreateUserMobileChangeUrlRequest::ToJsonString() const
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

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userAccountType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateUserMobileChangeUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateUserMobileChangeUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

Agent CreateUserMobileChangeUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateUserMobileChangeUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetUserId() const
{
    return m_userId;
}

void CreateUserMobileChangeUrlRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t CreateUserMobileChangeUrlRequest::GetUserAccountType() const
{
    return m_userAccountType;
}

void CreateUserMobileChangeUrlRequest::SetUserAccountType(const uint64_t& _userAccountType)
{
    m_userAccountType = _userAccountType;
    m_userAccountTypeHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::UserAccountTypeHasBeenSet() const
{
    return m_userAccountTypeHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetName() const
{
    return m_name;
}

void CreateUserMobileChangeUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateUserMobileChangeUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateUserMobileChangeUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateUserMobileChangeUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateUserMobileChangeUrlRequest::GetUserData() const
{
    return m_userData;
}

void CreateUserMobileChangeUrlRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateUserMobileChangeUrlRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}


