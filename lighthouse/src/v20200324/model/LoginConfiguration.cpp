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

#include <tencentcloud/lighthouse/v20200324/model/LoginConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

LoginConfiguration::LoginConfiguration() :
    m_autoGeneratePasswordHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_keyIdsHasBeenSet(false)
{
}

CoreInternalOutcome LoginConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoGeneratePassword") && !value["AutoGeneratePassword"].IsNull())
    {
        if (!value["AutoGeneratePassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginConfiguration.AutoGeneratePassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoGeneratePassword = string(value["AutoGeneratePassword"].GetString());
        m_autoGeneratePasswordHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginConfiguration.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginConfiguration.KeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


string LoginConfiguration::GetAutoGeneratePassword() const
{
    return m_autoGeneratePassword;
}

void LoginConfiguration::SetAutoGeneratePassword(const string& _autoGeneratePassword)
{
    m_autoGeneratePassword = _autoGeneratePassword;
    m_autoGeneratePasswordHasBeenSet = true;
}

bool LoginConfiguration::AutoGeneratePasswordHasBeenSet() const
{
    return m_autoGeneratePasswordHasBeenSet;
}

string LoginConfiguration::GetPassword() const
{
    return m_password;
}

void LoginConfiguration::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool LoginConfiguration::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> LoginConfiguration::GetKeyIds() const
{
    return m_keyIds;
}

void LoginConfiguration::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool LoginConfiguration::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

