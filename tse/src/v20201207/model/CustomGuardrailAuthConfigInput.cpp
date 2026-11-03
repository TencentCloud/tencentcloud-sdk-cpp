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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailAuthConfigInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailAuthConfigInput::CustomGuardrailAuthConfigInput() :
    m_authTypeHasBeenSet(false),
    m_headerNameHasBeenSet(false),
    m_apiKeyHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailAuthConfigInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigInput.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigInput.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigInput.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailAuthConfigInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_headerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailAuthConfigInput::GetAuthType() const
{
    return m_authType;
}

void CustomGuardrailAuthConfigInput::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CustomGuardrailAuthConfigInput::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CustomGuardrailAuthConfigInput::GetHeaderName() const
{
    return m_headerName;
}

void CustomGuardrailAuthConfigInput::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool CustomGuardrailAuthConfigInput::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string CustomGuardrailAuthConfigInput::GetApiKey() const
{
    return m_apiKey;
}

void CustomGuardrailAuthConfigInput::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool CustomGuardrailAuthConfigInput::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

