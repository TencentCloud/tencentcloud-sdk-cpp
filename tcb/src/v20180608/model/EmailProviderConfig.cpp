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

#include <tencentcloud/tcb/v20180608/model/EmailProviderConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EmailProviderConfig::EmailProviderConfig() :
    m_smtpConfigHasBeenSet(false),
    m_onHasBeenSet(false)
{
}

CoreInternalOutcome EmailProviderConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SmtpConfig") && !value["SmtpConfig"].IsNull())
    {
        if (!value["SmtpConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EmailProviderConfig.SmtpConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smtpConfig.Deserialize(value["SmtpConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smtpConfigHasBeenSet = true;
    }

    if (value.HasMember("On") && !value["On"].IsNull())
    {
        if (!value["On"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailProviderConfig.On` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_on = string(value["On"].GetString());
        m_onHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmailProviderConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_smtpConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmtpConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smtpConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "On";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_on.c_str(), allocator).Move(), allocator);
    }

}


EmailSmtpConfig EmailProviderConfig::GetSmtpConfig() const
{
    return m_smtpConfig;
}

void EmailProviderConfig::SetSmtpConfig(const EmailSmtpConfig& _smtpConfig)
{
    m_smtpConfig = _smtpConfig;
    m_smtpConfigHasBeenSet = true;
}

bool EmailProviderConfig::SmtpConfigHasBeenSet() const
{
    return m_smtpConfigHasBeenSet;
}

string EmailProviderConfig::GetOn() const
{
    return m_on;
}

void EmailProviderConfig::SetOn(const string& _on)
{
    m_on = _on;
    m_onHasBeenSet = true;
}

bool EmailProviderConfig::OnHasBeenSet() const
{
    return m_onHasBeenSet;
}

