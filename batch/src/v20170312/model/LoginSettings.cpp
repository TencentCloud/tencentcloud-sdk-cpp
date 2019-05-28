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

#include <tencentcloud/batch/v20170312/model/LoginSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

LoginSettings::LoginSettings() :
    m_passwordHasBeenSet(false),
    m_keyIdsHasBeenSet(false),
    m_keepImageLoginHasBeenSet(false)
{
}

CoreInternalOutcome LoginSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoginSettings.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Error("response `LoginSettings.KeyIds` is not array type"));

        const Value &tmpValue = value["KeyIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }

    if (value.HasMember("KeepImageLogin") && !value["KeepImageLogin"].IsNull())
    {
        if (!value["KeepImageLogin"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoginSettings.KeepImageLogin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepImageLogin = string(value["KeepImageLogin"].GetString());
        m_keepImageLoginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keepImageLoginHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeepImageLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_keepImageLogin.c_str(), allocator).Move(), allocator);
    }

}


string LoginSettings::GetPassword() const
{
    return m_password;
}

void LoginSettings::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool LoginSettings::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> LoginSettings::GetKeyIds() const
{
    return m_keyIds;
}

void LoginSettings::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool LoginSettings::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

string LoginSettings::GetKeepImageLogin() const
{
    return m_keepImageLogin;
}

void LoginSettings::SetKeepImageLogin(const string& _keepImageLogin)
{
    m_keepImageLogin = _keepImageLogin;
    m_keepImageLoginHasBeenSet = true;
}

bool LoginSettings::KeepImageLoginHasBeenSet() const
{
    return m_keepImageLoginHasBeenSet;
}

