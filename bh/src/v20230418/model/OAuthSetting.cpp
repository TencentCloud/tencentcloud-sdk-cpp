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

#include <tencentcloud/bh/v20230418/model/OAuthSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

OAuthSetting::OAuthSetting() :
    m_enableHasBeenSet(false),
    m_authMethodHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_codeUrlHasBeenSet(false),
    m_tokenUrlHasBeenSet(false),
    m_userInfoUrlHasBeenSet(false),
    m_scopesHasBeenSet(false)
{
}

CoreInternalOutcome OAuthSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("AuthMethod") && !value["AuthMethod"].IsNull())
    {
        if (!value["AuthMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.AuthMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authMethod = string(value["AuthMethod"].GetString());
        m_authMethodHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("CodeUrl") && !value["CodeUrl"].IsNull())
    {
        if (!value["CodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.CodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeUrl = string(value["CodeUrl"].GetString());
        m_codeUrlHasBeenSet = true;
    }

    if (value.HasMember("TokenUrl") && !value["TokenUrl"].IsNull())
    {
        if (!value["TokenUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.TokenUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenUrl = string(value["TokenUrl"].GetString());
        m_tokenUrlHasBeenSet = true;
    }

    if (value.HasMember("UserInfoUrl") && !value["UserInfoUrl"].IsNull())
    {
        if (!value["UserInfoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.UserInfoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userInfoUrl = string(value["UserInfoUrl"].GetString());
        m_userInfoUrlHasBeenSet = true;
    }

    if (value.HasMember("Scopes") && !value["Scopes"].IsNull())
    {
        if (!value["Scopes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OAuthSetting.Scopes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scopes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopes.push_back((*itr).GetString());
        }
        m_scopesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OAuthSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_authMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userInfoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scopes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopes.begin(); itr != m_scopes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool OAuthSetting::GetEnable() const
{
    return m_enable;
}

void OAuthSetting::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool OAuthSetting::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string OAuthSetting::GetAuthMethod() const
{
    return m_authMethod;
}

void OAuthSetting::SetAuthMethod(const string& _authMethod)
{
    m_authMethod = _authMethod;
    m_authMethodHasBeenSet = true;
}

bool OAuthSetting::AuthMethodHasBeenSet() const
{
    return m_authMethodHasBeenSet;
}

string OAuthSetting::GetClientId() const
{
    return m_clientId;
}

void OAuthSetting::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool OAuthSetting::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string OAuthSetting::GetCodeUrl() const
{
    return m_codeUrl;
}

void OAuthSetting::SetCodeUrl(const string& _codeUrl)
{
    m_codeUrl = _codeUrl;
    m_codeUrlHasBeenSet = true;
}

bool OAuthSetting::CodeUrlHasBeenSet() const
{
    return m_codeUrlHasBeenSet;
}

string OAuthSetting::GetTokenUrl() const
{
    return m_tokenUrl;
}

void OAuthSetting::SetTokenUrl(const string& _tokenUrl)
{
    m_tokenUrl = _tokenUrl;
    m_tokenUrlHasBeenSet = true;
}

bool OAuthSetting::TokenUrlHasBeenSet() const
{
    return m_tokenUrlHasBeenSet;
}

string OAuthSetting::GetUserInfoUrl() const
{
    return m_userInfoUrl;
}

void OAuthSetting::SetUserInfoUrl(const string& _userInfoUrl)
{
    m_userInfoUrl = _userInfoUrl;
    m_userInfoUrlHasBeenSet = true;
}

bool OAuthSetting::UserInfoUrlHasBeenSet() const
{
    return m_userInfoUrlHasBeenSet;
}

vector<string> OAuthSetting::GetScopes() const
{
    return m_scopes;
}

void OAuthSetting::SetScopes(const vector<string>& _scopes)
{
    m_scopes = _scopes;
    m_scopesHasBeenSet = true;
}

bool OAuthSetting::ScopesHasBeenSet() const
{
    return m_scopesHasBeenSet;
}

