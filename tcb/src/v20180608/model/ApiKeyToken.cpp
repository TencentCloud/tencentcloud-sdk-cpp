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

#include <tencentcloud/tcb/v20180608/model/ApiKeyToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ApiKeyToken::ApiKeyToken() :
    m_keyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_createAtHasBeenSet(false)
{
}

CoreInternalOutcome ApiKeyToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyToken.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyToken.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyToken.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("ExpireAt") && !value["ExpireAt"].IsNull())
    {
        if (!value["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyToken.ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(value["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyToken.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKeyToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

}


string ApiKeyToken::GetKeyId() const
{
    return m_keyId;
}

void ApiKeyToken::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ApiKeyToken::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ApiKeyToken::GetName() const
{
    return m_name;
}

void ApiKeyToken::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiKeyToken::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiKeyToken::GetApiKey() const
{
    return m_apiKey;
}

void ApiKeyToken::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool ApiKeyToken::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string ApiKeyToken::GetExpireAt() const
{
    return m_expireAt;
}

void ApiKeyToken::SetExpireAt(const string& _expireAt)
{
    m_expireAt = _expireAt;
    m_expireAtHasBeenSet = true;
}

bool ApiKeyToken::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

string ApiKeyToken::GetCreateAt() const
{
    return m_createAt;
}

void ApiKeyToken::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool ApiKeyToken::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

