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

#include <tencentcloud/tcb/v20180608/model/MFALoginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MFALoginConfig::MFALoginConfig() :
    m_onHasBeenSet(false),
    m_smsHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_requiredBindPhoneHasBeenSet(false)
{
}

CoreInternalOutcome MFALoginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("On") && !value["On"].IsNull())
    {
        if (!value["On"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MFALoginConfig.On` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_on = string(value["On"].GetString());
        m_onHasBeenSet = true;
    }

    if (value.HasMember("Sms") && !value["Sms"].IsNull())
    {
        if (!value["Sms"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MFALoginConfig.Sms` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sms = string(value["Sms"].GetString());
        m_smsHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MFALoginConfig.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("RequiredBindPhone") && !value["RequiredBindPhone"].IsNull())
    {
        if (!value["RequiredBindPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MFALoginConfig.RequiredBindPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requiredBindPhone = string(value["RequiredBindPhone"].GetString());
        m_requiredBindPhoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MFALoginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_onHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "On";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_on.c_str(), allocator).Move(), allocator);
    }

    if (m_smsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sms.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredBindPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredBindPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requiredBindPhone.c_str(), allocator).Move(), allocator);
    }

}


string MFALoginConfig::GetOn() const
{
    return m_on;
}

void MFALoginConfig::SetOn(const string& _on)
{
    m_on = _on;
    m_onHasBeenSet = true;
}

bool MFALoginConfig::OnHasBeenSet() const
{
    return m_onHasBeenSet;
}

string MFALoginConfig::GetSms() const
{
    return m_sms;
}

void MFALoginConfig::SetSms(const string& _sms)
{
    m_sms = _sms;
    m_smsHasBeenSet = true;
}

bool MFALoginConfig::SmsHasBeenSet() const
{
    return m_smsHasBeenSet;
}

string MFALoginConfig::GetEmail() const
{
    return m_email;
}

void MFALoginConfig::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool MFALoginConfig::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string MFALoginConfig::GetRequiredBindPhone() const
{
    return m_requiredBindPhone;
}

void MFALoginConfig::SetRequiredBindPhone(const string& _requiredBindPhone)
{
    m_requiredBindPhone = _requiredBindPhone;
    m_requiredBindPhoneHasBeenSet = true;
}

bool MFALoginConfig::RequiredBindPhoneHasBeenSet() const
{
    return m_requiredBindPhoneHasBeenSet;
}

