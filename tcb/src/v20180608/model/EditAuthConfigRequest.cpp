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

#include <tencentcloud/tcb/v20180608/model/EditAuthConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EditAuthConfigRequest::EditAuthConfigRequest() :
    m_envIdHasBeenSet(false),
    m_phoneNumberLoginHasBeenSet(false),
    m_anonymousLoginHasBeenSet(false),
    m_usernameLoginHasBeenSet(false)
{
}

string EditAuthConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumberLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumberLogin.c_str(), allocator).Move(), allocator);
    }

    if (m_anonymousLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anonymousLogin.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsernameLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usernameLogin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EditAuthConfigRequest::GetEnvId() const
{
    return m_envId;
}

void EditAuthConfigRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool EditAuthConfigRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string EditAuthConfigRequest::GetPhoneNumberLogin() const
{
    return m_phoneNumberLogin;
}

void EditAuthConfigRequest::SetPhoneNumberLogin(const string& _phoneNumberLogin)
{
    m_phoneNumberLogin = _phoneNumberLogin;
    m_phoneNumberLoginHasBeenSet = true;
}

bool EditAuthConfigRequest::PhoneNumberLoginHasBeenSet() const
{
    return m_phoneNumberLoginHasBeenSet;
}

string EditAuthConfigRequest::GetAnonymousLogin() const
{
    return m_anonymousLogin;
}

void EditAuthConfigRequest::SetAnonymousLogin(const string& _anonymousLogin)
{
    m_anonymousLogin = _anonymousLogin;
    m_anonymousLoginHasBeenSet = true;
}

bool EditAuthConfigRequest::AnonymousLoginHasBeenSet() const
{
    return m_anonymousLoginHasBeenSet;
}

string EditAuthConfigRequest::GetUsernameLogin() const
{
    return m_usernameLogin;
}

void EditAuthConfigRequest::SetUsernameLogin(const string& _usernameLogin)
{
    m_usernameLogin = _usernameLogin;
    m_usernameLoginHasBeenSet = true;
}

bool EditAuthConfigRequest::UsernameLoginHasBeenSet() const
{
    return m_usernameLoginHasBeenSet;
}


