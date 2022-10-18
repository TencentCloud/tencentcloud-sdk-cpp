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

#include <tencentcloud/tke/v20180525/model/OIDCConfigAuthenticationOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OIDCConfigAuthenticationOptions::OIDCConfigAuthenticationOptions() :
    m_autoCreateOIDCConfigHasBeenSet(false),
    m_autoCreateClientIdHasBeenSet(false),
    m_autoInstallPodIdentityWebhookAddonHasBeenSet(false)
{
}

CoreInternalOutcome OIDCConfigAuthenticationOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoCreateOIDCConfig") && !value["AutoCreateOIDCConfig"].IsNull())
    {
        if (!value["AutoCreateOIDCConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OIDCConfigAuthenticationOptions.AutoCreateOIDCConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoCreateOIDCConfig = value["AutoCreateOIDCConfig"].GetBool();
        m_autoCreateOIDCConfigHasBeenSet = true;
    }

    if (value.HasMember("AutoCreateClientId") && !value["AutoCreateClientId"].IsNull())
    {
        if (!value["AutoCreateClientId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OIDCConfigAuthenticationOptions.AutoCreateClientId` is not array type"));

        const rapidjson::Value &tmpValue = value["AutoCreateClientId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_autoCreateClientId.push_back((*itr).GetString());
        }
        m_autoCreateClientIdHasBeenSet = true;
    }

    if (value.HasMember("AutoInstallPodIdentityWebhookAddon") && !value["AutoInstallPodIdentityWebhookAddon"].IsNull())
    {
        if (!value["AutoInstallPodIdentityWebhookAddon"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OIDCConfigAuthenticationOptions.AutoInstallPodIdentityWebhookAddon` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoInstallPodIdentityWebhookAddon = value["AutoInstallPodIdentityWebhookAddon"].GetBool();
        m_autoInstallPodIdentityWebhookAddonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OIDCConfigAuthenticationOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoCreateOIDCConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateOIDCConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoCreateOIDCConfig, allocator);
    }

    if (m_autoCreateClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreateClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoCreateClientId.begin(); itr != m_autoCreateClientId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoInstallPodIdentityWebhookAddonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInstallPodIdentityWebhookAddon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoInstallPodIdentityWebhookAddon, allocator);
    }

}


bool OIDCConfigAuthenticationOptions::GetAutoCreateOIDCConfig() const
{
    return m_autoCreateOIDCConfig;
}

void OIDCConfigAuthenticationOptions::SetAutoCreateOIDCConfig(const bool& _autoCreateOIDCConfig)
{
    m_autoCreateOIDCConfig = _autoCreateOIDCConfig;
    m_autoCreateOIDCConfigHasBeenSet = true;
}

bool OIDCConfigAuthenticationOptions::AutoCreateOIDCConfigHasBeenSet() const
{
    return m_autoCreateOIDCConfigHasBeenSet;
}

vector<string> OIDCConfigAuthenticationOptions::GetAutoCreateClientId() const
{
    return m_autoCreateClientId;
}

void OIDCConfigAuthenticationOptions::SetAutoCreateClientId(const vector<string>& _autoCreateClientId)
{
    m_autoCreateClientId = _autoCreateClientId;
    m_autoCreateClientIdHasBeenSet = true;
}

bool OIDCConfigAuthenticationOptions::AutoCreateClientIdHasBeenSet() const
{
    return m_autoCreateClientIdHasBeenSet;
}

bool OIDCConfigAuthenticationOptions::GetAutoInstallPodIdentityWebhookAddon() const
{
    return m_autoInstallPodIdentityWebhookAddon;
}

void OIDCConfigAuthenticationOptions::SetAutoInstallPodIdentityWebhookAddon(const bool& _autoInstallPodIdentityWebhookAddon)
{
    m_autoInstallPodIdentityWebhookAddon = _autoInstallPodIdentityWebhookAddon;
    m_autoInstallPodIdentityWebhookAddonHasBeenSet = true;
}

bool OIDCConfigAuthenticationOptions::AutoInstallPodIdentityWebhookAddonHasBeenSet() const
{
    return m_autoInstallPodIdentityWebhookAddonHasBeenSet;
}

