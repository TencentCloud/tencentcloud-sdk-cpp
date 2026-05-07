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

#include <tencentcloud/tcb/v20180608/model/AIModelSecret.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AIModelSecret::AIModelSecret() :
    m_secretSourceHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_apiKeyHasBeenSet(false)
{
}

CoreInternalOutcome AIModelSecret::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretSource") && !value["SecretSource"].IsNull())
    {
        if (!value["SecretSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelSecret.SecretSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretSource = string(value["SecretSource"].GetString());
        m_secretSourceHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelSecret.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelSecret.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelSecret.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIModelSecret::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretSource.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

}


string AIModelSecret::GetSecretSource() const
{
    return m_secretSource;
}

void AIModelSecret::SetSecretSource(const string& _secretSource)
{
    m_secretSource = _secretSource;
    m_secretSourceHasBeenSet = true;
}

bool AIModelSecret::SecretSourceHasBeenSet() const
{
    return m_secretSourceHasBeenSet;
}

string AIModelSecret::GetSecretId() const
{
    return m_secretId;
}

void AIModelSecret::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool AIModelSecret::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string AIModelSecret::GetSecretKey() const
{
    return m_secretKey;
}

void AIModelSecret::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AIModelSecret::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AIModelSecret::GetApiKey() const
{
    return m_apiKey;
}

void AIModelSecret::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool AIModelSecret::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

