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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailAuthConfig::CustomGuardrailAuthConfig() :
    m_authTypeHasBeenSet(false),
    m_headerNameHasBeenSet(false),
    m_hasApiKeyHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfig.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfig.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("HasApiKey") && !value["HasApiKey"].IsNull())
    {
        if (!value["HasApiKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailAuthConfig.HasApiKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasApiKey = value["HasApiKey"].GetBool();
        m_hasApiKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hasApiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasApiKey, allocator);
    }

}


string CustomGuardrailAuthConfig::GetAuthType() const
{
    return m_authType;
}

void CustomGuardrailAuthConfig::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CustomGuardrailAuthConfig::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CustomGuardrailAuthConfig::GetHeaderName() const
{
    return m_headerName;
}

void CustomGuardrailAuthConfig::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool CustomGuardrailAuthConfig::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

bool CustomGuardrailAuthConfig::GetHasApiKey() const
{
    return m_hasApiKey;
}

void CustomGuardrailAuthConfig::SetHasApiKey(const bool& _hasApiKey)
{
    m_hasApiKey = _hasApiKey;
    m_hasApiKeyHasBeenSet = true;
}

bool CustomGuardrailAuthConfig::HasApiKeyHasBeenSet() const
{
    return m_hasApiKeyHasBeenSet;
}

