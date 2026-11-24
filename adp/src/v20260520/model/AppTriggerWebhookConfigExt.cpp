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

#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookConfigExt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerWebhookConfigExt::AppTriggerWebhookConfigExt() :
    m_credentialIdHasBeenSet(false),
    m_credentialHasBeenSet(false),
    m_gongfengConfigHasBeenSet(false),
    m_tAPDConfigHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerWebhookConfigExt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CredentialId") && !value["CredentialId"].IsNull())
    {
        if (!value["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfigExt.CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(value["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (value.HasMember("Credential") && !value["Credential"].IsNull())
    {
        if (!value["Credential"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfigExt.Credential` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credential.Deserialize(value["Credential"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialHasBeenSet = true;
    }

    if (value.HasMember("GongfengConfig") && !value["GongfengConfig"].IsNull())
    {
        if (!value["GongfengConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfigExt.GongfengConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gongfengConfig.Deserialize(value["GongfengConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gongfengConfigHasBeenSet = true;
    }

    if (value.HasMember("TAPDConfig") && !value["TAPDConfig"].IsNull())
    {
        if (!value["TAPDConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfigExt.TAPDConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tAPDConfig.Deserialize(value["TAPDConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tAPDConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerWebhookConfigExt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credential";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credential.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gongfengConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GongfengConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gongfengConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tAPDConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TAPDConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tAPDConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AppTriggerWebhookConfigExt::GetCredentialId() const
{
    return m_credentialId;
}

void AppTriggerWebhookConfigExt::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool AppTriggerWebhookConfigExt::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

AppTriggerWebhookCredential AppTriggerWebhookConfigExt::GetCredential() const
{
    return m_credential;
}

void AppTriggerWebhookConfigExt::SetCredential(const AppTriggerWebhookCredential& _credential)
{
    m_credential = _credential;
    m_credentialHasBeenSet = true;
}

bool AppTriggerWebhookConfigExt::CredentialHasBeenSet() const
{
    return m_credentialHasBeenSet;
}

AppTriggerGongfengWebhookConfig AppTriggerWebhookConfigExt::GetGongfengConfig() const
{
    return m_gongfengConfig;
}

void AppTriggerWebhookConfigExt::SetGongfengConfig(const AppTriggerGongfengWebhookConfig& _gongfengConfig)
{
    m_gongfengConfig = _gongfengConfig;
    m_gongfengConfigHasBeenSet = true;
}

bool AppTriggerWebhookConfigExt::GongfengConfigHasBeenSet() const
{
    return m_gongfengConfigHasBeenSet;
}

AppTriggerTAPDWebhookConfig AppTriggerWebhookConfigExt::GetTAPDConfig() const
{
    return m_tAPDConfig;
}

void AppTriggerWebhookConfigExt::SetTAPDConfig(const AppTriggerTAPDWebhookConfig& _tAPDConfig)
{
    m_tAPDConfig = _tAPDConfig;
    m_tAPDConfigHasBeenSet = true;
}

bool AppTriggerWebhookConfigExt::TAPDConfigHasBeenSet() const
{
    return m_tAPDConfigHasBeenSet;
}

