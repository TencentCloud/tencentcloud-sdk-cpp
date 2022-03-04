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

#include <tencentcloud/ckafka/v20190819/model/CancelAuthorizationTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CancelAuthorizationTokenRequest::CancelAuthorizationTokenRequest() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
}

string CancelAuthorizationTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_tokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tokens";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokens.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CancelAuthorizationTokenRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CancelAuthorizationTokenRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CancelAuthorizationTokenRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CancelAuthorizationTokenRequest::GetUser() const
{
    return m_user;
}

void CancelAuthorizationTokenRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CancelAuthorizationTokenRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string CancelAuthorizationTokenRequest::GetTokens() const
{
    return m_tokens;
}

void CancelAuthorizationTokenRequest::SetTokens(const string& _tokens)
{
    m_tokens = _tokens;
    m_tokensHasBeenSet = true;
}

bool CancelAuthorizationTokenRequest::TokensHasBeenSet() const
{
    return m_tokensHasBeenSet;
}


