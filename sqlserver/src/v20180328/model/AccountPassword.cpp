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

#include <tencentcloud/sqlserver/v20180328/model/AccountPassword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

AccountPassword::AccountPassword() :
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_encryptedVersionHasBeenSet(false)
{
}

CoreInternalOutcome AccountPassword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPassword.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPassword.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("EncryptedVersion") && !value["EncryptedVersion"].IsNull())
    {
        if (!value["EncryptedVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountPassword.EncryptedVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptedVersion = value["EncryptedVersion"].GetInt64();
        m_encryptedVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountPassword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_encryptedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptedVersion, allocator);
    }

}


string AccountPassword::GetUserName() const
{
    return m_userName;
}

void AccountPassword::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountPassword::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AccountPassword::GetPassword() const
{
    return m_password;
}

void AccountPassword::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AccountPassword::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t AccountPassword::GetEncryptedVersion() const
{
    return m_encryptedVersion;
}

void AccountPassword::SetEncryptedVersion(const int64_t& _encryptedVersion)
{
    m_encryptedVersion = _encryptedVersion;
    m_encryptedVersionHasBeenSet = true;
}

bool AccountPassword::EncryptedVersionHasBeenSet() const
{
    return m_encryptedVersionHasBeenSet;
}

