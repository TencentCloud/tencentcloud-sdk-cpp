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

#include <tencentcloud/rce/v20260130/model/Billing.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Billing::Billing() :
    m_addressHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_recipientHasBeenSet(false)
{
}

CoreInternalOutcome Billing::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Billing.Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(value["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Billing.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Billing.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Recipient") && !value["Recipient"].IsNull())
    {
        if (!value["Recipient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Billing.Recipient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipient = string(value["Recipient"].GetString());
        m_recipientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Billing::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recipient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipient.c_str(), allocator).Move(), allocator);
    }

}


Address Billing::GetAddress() const
{
    return m_address;
}

void Billing::SetAddress(const Address& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool Billing::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string Billing::GetPhone() const
{
    return m_phone;
}

void Billing::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool Billing::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string Billing::GetEmail() const
{
    return m_email;
}

void Billing::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Billing::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string Billing::GetRecipient() const
{
    return m_recipient;
}

void Billing::SetRecipient(const string& _recipient)
{
    m_recipient = _recipient;
    m_recipientHasBeenSet = true;
}

bool Billing::RecipientHasBeenSet() const
{
    return m_recipientHasBeenSet;
}

