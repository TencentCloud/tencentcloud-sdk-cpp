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

#include <tencentcloud/tcb/v20180608/model/VMLoginConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VMLoginConfiguration::VMLoginConfiguration() :
    m_loginTypeHasBeenSet(false),
    m_autoGeneratePasswordHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_keyIdsHasBeenSet(false)
{
}

CoreInternalOutcome VMLoginConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoginType") && !value["LoginType"].IsNull())
    {
        if (!value["LoginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMLoginConfiguration.LoginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginType = string(value["LoginType"].GetString());
        m_loginTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoGeneratePassword") && !value["AutoGeneratePassword"].IsNull())
    {
        if (!value["AutoGeneratePassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMLoginConfiguration.AutoGeneratePassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoGeneratePassword = string(value["AutoGeneratePassword"].GetString());
        m_autoGeneratePasswordHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMLoginConfiguration.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VMLoginConfiguration.KeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VMLoginConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoGeneratePasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoGeneratePassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoGeneratePassword.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VMLoginConfiguration::GetLoginType() const
{
    return m_loginType;
}

void VMLoginConfiguration::SetLoginType(const string& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool VMLoginConfiguration::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string VMLoginConfiguration::GetAutoGeneratePassword() const
{
    return m_autoGeneratePassword;
}

void VMLoginConfiguration::SetAutoGeneratePassword(const string& _autoGeneratePassword)
{
    m_autoGeneratePassword = _autoGeneratePassword;
    m_autoGeneratePasswordHasBeenSet = true;
}

bool VMLoginConfiguration::AutoGeneratePasswordHasBeenSet() const
{
    return m_autoGeneratePasswordHasBeenSet;
}

string VMLoginConfiguration::GetPassword() const
{
    return m_password;
}

void VMLoginConfiguration::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool VMLoginConfiguration::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> VMLoginConfiguration::GetKeyIds() const
{
    return m_keyIds;
}

void VMLoginConfiguration::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool VMLoginConfiguration::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

