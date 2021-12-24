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

#include <tencentcloud/iecp/v20210914/model/DockerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DockerConfig::DockerConfig() :
    m_registryDomainHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome DockerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryDomain") && !value["RegistryDomain"].IsNull())
    {
        if (!value["RegistryDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerConfig.RegistryDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryDomain = string(value["RegistryDomain"].GetString());
        m_registryDomainHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerConfig.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerConfig.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string DockerConfig::GetRegistryDomain() const
{
    return m_registryDomain;
}

void DockerConfig::SetRegistryDomain(const string& _registryDomain)
{
    m_registryDomain = _registryDomain;
    m_registryDomainHasBeenSet = true;
}

bool DockerConfig::RegistryDomainHasBeenSet() const
{
    return m_registryDomainHasBeenSet;
}

string DockerConfig::GetUserName() const
{
    return m_userName;
}

void DockerConfig::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DockerConfig::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DockerConfig::GetPassword() const
{
    return m_password;
}

void DockerConfig::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DockerConfig::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

