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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSourceAuth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwAIServiceSourceAuth::CNAPIGwAIServiceSourceAuth() :
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwAIServiceSourceAuth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceAuth.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceAuth.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSourceAuth.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwAIServiceSourceAuth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwAIServiceSourceAuth::GetUsername() const
{
    return m_username;
}

void CNAPIGwAIServiceSourceAuth::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceAuth::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CNAPIGwAIServiceSourceAuth::GetPassword() const
{
    return m_password;
}

void CNAPIGwAIServiceSourceAuth::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceAuth::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CNAPIGwAIServiceSourceAuth::GetAccessToken() const
{
    return m_accessToken;
}

void CNAPIGwAIServiceSourceAuth::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool CNAPIGwAIServiceSourceAuth::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

