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

#include <tencentcloud/emr/v20190103/model/LoginSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

LoginSettings::LoginSettings() :
    m_passwordHasBeenSet(false),
    m_publicKeyIdHasBeenSet(false)
{
}

CoreInternalOutcome LoginSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSettings.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("PublicKeyId") && !value["PublicKeyId"].IsNull())
    {
        if (!value["PublicKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSettings.PublicKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKeyId = string(value["PublicKeyId"].GetString());
        m_publicKeyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKeyId.c_str(), allocator).Move(), allocator);
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

string LoginSettings::GetPublicKeyId() const
{
    return m_publicKeyId;
}

void LoginSettings::SetPublicKeyId(const string& _publicKeyId)
{
    m_publicKeyId = _publicKeyId;
    m_publicKeyIdHasBeenSet = true;
}

bool LoginSettings::PublicKeyIdHasBeenSet() const
{
    return m_publicKeyIdHasBeenSet;
}

