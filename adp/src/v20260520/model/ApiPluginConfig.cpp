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

#include <tencentcloud/adp/v20260520/model/ApiPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ApiPluginConfig::ApiPluginConfig() :
    m_authConfigHasBeenSet(false)
{
}

CoreInternalOutcome ApiPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthConfig") && !value["AuthConfig"].IsNull())
    {
        if (!value["AuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiPluginConfig.AuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authConfig.Deserialize(value["AuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AuthConfig ApiPluginConfig::GetAuthConfig() const
{
    return m_authConfig;
}

void ApiPluginConfig::SetAuthConfig(const AuthConfig& _authConfig)
{
    m_authConfig = _authConfig;
    m_authConfigHasBeenSet = true;
}

bool ApiPluginConfig::AuthConfigHasBeenSet() const
{
    return m_authConfigHasBeenSet;
}

