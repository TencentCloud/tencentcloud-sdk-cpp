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

#include <tencentcloud/dasb/v20191018/model/ModifyOAuthSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

ModifyOAuthSettingRequest::ModifyOAuthSettingRequest() :
    m_enableHasBeenSet(false),
    m_authMethodHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_codeUrlHasBeenSet(false),
    m_tokenUrlHasBeenSet(false),
    m_userInfoUrlHasBeenSet(false),
    m_scopesHasBeenSet(false)
{
}

string ModifyOAuthSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_authMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_codeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokenUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userInfoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scopes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopes.begin(); itr != m_scopes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyOAuthSettingRequest::GetEnable() const
{
    return m_enable;
}

void ModifyOAuthSettingRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyOAuthSettingRequest::GetAuthMethod() const
{
    return m_authMethod;
}

void ModifyOAuthSettingRequest::SetAuthMethod(const string& _authMethod)
{
    m_authMethod = _authMethod;
    m_authMethodHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::AuthMethodHasBeenSet() const
{
    return m_authMethodHasBeenSet;
}

string ModifyOAuthSettingRequest::GetClientId() const
{
    return m_clientId;
}

void ModifyOAuthSettingRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ModifyOAuthSettingRequest::GetClientSecret() const
{
    return m_clientSecret;
}

void ModifyOAuthSettingRequest::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

string ModifyOAuthSettingRequest::GetCodeUrl() const
{
    return m_codeUrl;
}

void ModifyOAuthSettingRequest::SetCodeUrl(const string& _codeUrl)
{
    m_codeUrl = _codeUrl;
    m_codeUrlHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::CodeUrlHasBeenSet() const
{
    return m_codeUrlHasBeenSet;
}

string ModifyOAuthSettingRequest::GetTokenUrl() const
{
    return m_tokenUrl;
}

void ModifyOAuthSettingRequest::SetTokenUrl(const string& _tokenUrl)
{
    m_tokenUrl = _tokenUrl;
    m_tokenUrlHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::TokenUrlHasBeenSet() const
{
    return m_tokenUrlHasBeenSet;
}

string ModifyOAuthSettingRequest::GetUserInfoUrl() const
{
    return m_userInfoUrl;
}

void ModifyOAuthSettingRequest::SetUserInfoUrl(const string& _userInfoUrl)
{
    m_userInfoUrl = _userInfoUrl;
    m_userInfoUrlHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::UserInfoUrlHasBeenSet() const
{
    return m_userInfoUrlHasBeenSet;
}

vector<string> ModifyOAuthSettingRequest::GetScopes() const
{
    return m_scopes;
}

void ModifyOAuthSettingRequest::SetScopes(const vector<string>& _scopes)
{
    m_scopes = _scopes;
    m_scopesHasBeenSet = true;
}

bool ModifyOAuthSettingRequest::ScopesHasBeenSet() const
{
    return m_scopesHasBeenSet;
}


