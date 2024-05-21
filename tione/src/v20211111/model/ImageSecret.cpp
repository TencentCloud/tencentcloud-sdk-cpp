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

#include <tencentcloud/tione/v20211111/model/ImageSecret.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ImageSecret::ImageSecret() :
    m_keyIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome ImageSecret::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSecret.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSecret.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSecret.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSecret::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

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

}


string ImageSecret::GetKeyId() const
{
    return m_keyId;
}

void ImageSecret::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ImageSecret::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ImageSecret::GetUsername() const
{
    return m_username;
}

void ImageSecret::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ImageSecret::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ImageSecret::GetPassword() const
{
    return m_password;
}

void ImageSecret::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ImageSecret::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

