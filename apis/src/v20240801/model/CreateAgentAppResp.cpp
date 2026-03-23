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

#include <tencentcloud/apis/v20240801/model/CreateAgentAppResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CreateAgentAppResp::CreateAgentAppResp() :
    m_iDHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_secretIDHasBeenSet(false)
{
}

CoreInternalOutcome CreateAgentAppResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAgentAppResp.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAgentAppResp.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAgentAppResp.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretID") && !value["SecretID"].IsNull())
    {
        if (!value["SecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAgentAppResp.SecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretID = string(value["SecretID"].GetString());
        m_secretIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAgentAppResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretID.c_str(), allocator).Move(), allocator);
    }

}


string CreateAgentAppResp::GetID() const
{
    return m_iD;
}

void CreateAgentAppResp::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool CreateAgentAppResp::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string CreateAgentAppResp::GetApiKey() const
{
    return m_apiKey;
}

void CreateAgentAppResp::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool CreateAgentAppResp::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string CreateAgentAppResp::GetSecretKey() const
{
    return m_secretKey;
}

void CreateAgentAppResp::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool CreateAgentAppResp::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string CreateAgentAppResp::GetSecretID() const
{
    return m_secretID;
}

void CreateAgentAppResp::SetSecretID(const string& _secretID)
{
    m_secretID = _secretID;
    m_secretIDHasBeenSet = true;
}

bool CreateAgentAppResp::SecretIDHasBeenSet() const
{
    return m_secretIDHasBeenSet;
}

