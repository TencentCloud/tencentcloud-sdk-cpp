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

#include <tencentcloud/tse/v20201207/model/AIGWOAuthCredentialConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWOAuthCredentialConfig::AIGWOAuthCredentialConfig() :
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
}

CoreInternalOutcome AIGWOAuthCredentialConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthCredentialConfig.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthCredentialConfig.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWOAuthCredentialConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientSecret.c_str(), allocator).Move(), allocator);
    }

}


string AIGWOAuthCredentialConfig::GetClientId() const
{
    return m_clientId;
}

void AIGWOAuthCredentialConfig::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool AIGWOAuthCredentialConfig::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string AIGWOAuthCredentialConfig::GetClientSecret() const
{
    return m_clientSecret;
}

void AIGWOAuthCredentialConfig::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool AIGWOAuthCredentialConfig::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

