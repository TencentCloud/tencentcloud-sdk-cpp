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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailAuthConfigPatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailAuthConfigPatch::CustomGuardrailAuthConfigPatch() :
    m_authTypeHasBeenSet(false),
    m_headerNameHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_clearApiKeyHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailAuthConfigPatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigPatch.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigPatch.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigPatch.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("ClearApiKey") && !value["ClearApiKey"].IsNull())
    {
        if (!value["ClearApiKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfigPatch.ClearApiKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clearApiKey = value["ClearApiKey"].GetBool();
        m_clearApiKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailAuthConfigPatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_clearApiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clearApiKey, allocator);
    }

}


string CustomGuardrailAuthConfigPatch::GetAuthType() const
{
    return m_authType;
}

void CustomGuardrailAuthConfigPatch::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CustomGuardrailAuthConfigPatch::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CustomGuardrailAuthConfigPatch::GetHeaderName() const
{
    return m_headerName;
}

void CustomGuardrailAuthConfigPatch::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool CustomGuardrailAuthConfigPatch::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string CustomGuardrailAuthConfigPatch::GetApiKey() const
{
    return m_apiKey;
}

void CustomGuardrailAuthConfigPatch::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool CustomGuardrailAuthConfigPatch::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

bool CustomGuardrailAuthConfigPatch::GetClearApiKey() const
{
    return m_clearApiKey;
}

void CustomGuardrailAuthConfigPatch::SetClearApiKey(const bool& _clearApiKey)
{
    m_clearApiKey = _clearApiKey;
    m_clearApiKeyHasBeenSet = true;
}

bool CustomGuardrailAuthConfigPatch::ClearApiKeyHasBeenSet() const
{
    return m_clearApiKeyHasBeenSet;
}

