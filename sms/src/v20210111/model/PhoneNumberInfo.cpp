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

#include <tencentcloud/sms/v20210111/model/PhoneNumberInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

PhoneNumberInfo::PhoneNumberInfo() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nationCodeHasBeenSet(false),
    m_subscriberNumberHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_isoCodeHasBeenSet(false),
    m_isoNameHasBeenSet(false)
{
}

CoreInternalOutcome PhoneNumberInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("NationCode") && !value["NationCode"].IsNull())
    {
        if (!value["NationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.NationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCode = string(value["NationCode"].GetString());
        m_nationCodeHasBeenSet = true;
    }

    if (value.HasMember("SubscriberNumber") && !value["SubscriberNumber"].IsNull())
    {
        if (!value["SubscriberNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.SubscriberNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriberNumber = string(value["SubscriberNumber"].GetString());
        m_subscriberNumberHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("IsoCode") && !value["IsoCode"].IsNull())
    {
        if (!value["IsoCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.IsoCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isoCode = string(value["IsoCode"].GetString());
        m_isoCodeHasBeenSet = true;
    }

    if (value.HasMember("IsoName") && !value["IsoName"].IsNull())
    {
        if (!value["IsoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumberInfo.IsoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isoName = string(value["IsoName"].GetString());
        m_isoNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhoneNumberInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_nationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriberNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriberNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscriberNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_isoCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsoCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isoCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isoName.c_str(), allocator).Move(), allocator);
    }

}


string PhoneNumberInfo::GetCode() const
{
    return m_code;
}

void PhoneNumberInfo::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool PhoneNumberInfo::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string PhoneNumberInfo::GetMessage() const
{
    return m_message;
}

void PhoneNumberInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool PhoneNumberInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string PhoneNumberInfo::GetNationCode() const
{
    return m_nationCode;
}

void PhoneNumberInfo::SetNationCode(const string& _nationCode)
{
    m_nationCode = _nationCode;
    m_nationCodeHasBeenSet = true;
}

bool PhoneNumberInfo::NationCodeHasBeenSet() const
{
    return m_nationCodeHasBeenSet;
}

string PhoneNumberInfo::GetSubscriberNumber() const
{
    return m_subscriberNumber;
}

void PhoneNumberInfo::SetSubscriberNumber(const string& _subscriberNumber)
{
    m_subscriberNumber = _subscriberNumber;
    m_subscriberNumberHasBeenSet = true;
}

bool PhoneNumberInfo::SubscriberNumberHasBeenSet() const
{
    return m_subscriberNumberHasBeenSet;
}

string PhoneNumberInfo::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void PhoneNumberInfo::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool PhoneNumberInfo::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string PhoneNumberInfo::GetIsoCode() const
{
    return m_isoCode;
}

void PhoneNumberInfo::SetIsoCode(const string& _isoCode)
{
    m_isoCode = _isoCode;
    m_isoCodeHasBeenSet = true;
}

bool PhoneNumberInfo::IsoCodeHasBeenSet() const
{
    return m_isoCodeHasBeenSet;
}

string PhoneNumberInfo::GetIsoName() const
{
    return m_isoName;
}

void PhoneNumberInfo::SetIsoName(const string& _isoName)
{
    m_isoName = _isoName;
    m_isoNameHasBeenSet = true;
}

bool PhoneNumberInfo::IsoNameHasBeenSet() const
{
    return m_isoNameHasBeenSet;
}

