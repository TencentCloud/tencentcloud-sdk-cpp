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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunImageSecretInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunImageSecretInfo::CloudBaseRunImageSecretInfo() :
    m_registryServerHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunImageSecretInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryServer") && !value["RegistryServer"].IsNull())
    {
        if (!value["RegistryServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageSecretInfo.RegistryServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryServer = string(value["RegistryServer"].GetString());
        m_registryServerHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageSecretInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageSecretInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunImageSecretInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunImageSecretInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryServer.c_str(), allocator).Move(), allocator);
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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseRunImageSecretInfo::GetRegistryServer() const
{
    return m_registryServer;
}

void CloudBaseRunImageSecretInfo::SetRegistryServer(const string& _registryServer)
{
    m_registryServer = _registryServer;
    m_registryServerHasBeenSet = true;
}

bool CloudBaseRunImageSecretInfo::RegistryServerHasBeenSet() const
{
    return m_registryServerHasBeenSet;
}

string CloudBaseRunImageSecretInfo::GetUserName() const
{
    return m_userName;
}

void CloudBaseRunImageSecretInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CloudBaseRunImageSecretInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CloudBaseRunImageSecretInfo::GetPassword() const
{
    return m_password;
}

void CloudBaseRunImageSecretInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CloudBaseRunImageSecretInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CloudBaseRunImageSecretInfo::GetEmail() const
{
    return m_email;
}

void CloudBaseRunImageSecretInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CloudBaseRunImageSecretInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

