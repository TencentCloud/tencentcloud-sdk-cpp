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

#include <tencentcloud/vod/v20240718/model/Credentials.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

Credentials::Credentials() :
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
}

CoreInternalOutcome Credentials::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKeyId") && !value["AccessKeyId"].IsNull())
    {
        if (!value["AccessKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Credentials.AccessKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyId = string(value["AccessKeyId"].GetString());
        m_accessKeyIdHasBeenSet = true;
    }

    if (value.HasMember("SecretAccessKey") && !value["SecretAccessKey"].IsNull())
    {
        if (!value["SecretAccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Credentials.SecretAccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretAccessKey = string(value["SecretAccessKey"].GetString());
        m_secretAccessKeyHasBeenSet = true;
    }

    if (value.HasMember("SessionToken") && !value["SessionToken"].IsNull())
    {
        if (!value["SessionToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Credentials.SessionToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionToken = string(value["SessionToken"].GetString());
        m_sessionTokenHasBeenSet = true;
    }

    if (value.HasMember("Expiration") && !value["Expiration"].IsNull())
    {
        if (!value["Expiration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Credentials.Expiration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = string(value["Expiration"].GetString());
        m_expirationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Credentials::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretAccessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretAccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretAccessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiration.c_str(), allocator).Move(), allocator);
    }

}


string Credentials::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void Credentials::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool Credentials::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string Credentials::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void Credentials::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool Credentials::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string Credentials::GetSessionToken() const
{
    return m_sessionToken;
}

void Credentials::SetSessionToken(const string& _sessionToken)
{
    m_sessionToken = _sessionToken;
    m_sessionTokenHasBeenSet = true;
}

bool Credentials::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

string Credentials::GetExpiration() const
{
    return m_expiration;
}

void Credentials::SetExpiration(const string& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool Credentials::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

