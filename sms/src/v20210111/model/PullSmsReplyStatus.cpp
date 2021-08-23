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

#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

PullSmsReplyStatus::PullSmsReplyStatus() :
    m_extendCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_replyContentHasBeenSet(false),
    m_replyTimeHasBeenSet(false),
    m_subscriberNumberHasBeenSet(false)
{
}

CoreInternalOutcome PullSmsReplyStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExtendCode") && !value["ExtendCode"].IsNull())
    {
        if (!value["ExtendCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.ExtendCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendCode = string(value["ExtendCode"].GetString());
        m_extendCodeHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.CountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = string(value["CountryCode"].GetString());
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("SignName") && !value["SignName"].IsNull())
    {
        if (!value["SignName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.SignName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signName = string(value["SignName"].GetString());
        m_signNameHasBeenSet = true;
    }

    if (value.HasMember("ReplyContent") && !value["ReplyContent"].IsNull())
    {
        if (!value["ReplyContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.ReplyContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyContent = string(value["ReplyContent"].GetString());
        m_replyContentHasBeenSet = true;
    }

    if (value.HasMember("ReplyTime") && !value["ReplyTime"].IsNull())
    {
        if (!value["ReplyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.ReplyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replyTime = value["ReplyTime"].GetUint64();
        m_replyTimeHasBeenSet = true;
    }

    if (value.HasMember("SubscriberNumber") && !value["SubscriberNumber"].IsNull())
    {
        if (!value["SubscriberNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.SubscriberNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriberNumber = string(value["SubscriberNumber"].GetString());
        m_subscriberNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullSmsReplyStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_extendCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendCode.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_replyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replyContent.c_str(), allocator).Move(), allocator);
    }

    if (m_replyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyTime, allocator);
    }

    if (m_subscriberNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriberNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscriberNumber.c_str(), allocator).Move(), allocator);
    }

}


string PullSmsReplyStatus::GetExtendCode() const
{
    return m_extendCode;
}

void PullSmsReplyStatus::SetExtendCode(const string& _extendCode)
{
    m_extendCode = _extendCode;
    m_extendCodeHasBeenSet = true;
}

bool PullSmsReplyStatus::ExtendCodeHasBeenSet() const
{
    return m_extendCodeHasBeenSet;
}

string PullSmsReplyStatus::GetCountryCode() const
{
    return m_countryCode;
}

void PullSmsReplyStatus::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool PullSmsReplyStatus::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string PullSmsReplyStatus::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void PullSmsReplyStatus::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool PullSmsReplyStatus::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string PullSmsReplyStatus::GetSignName() const
{
    return m_signName;
}

void PullSmsReplyStatus::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool PullSmsReplyStatus::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

string PullSmsReplyStatus::GetReplyContent() const
{
    return m_replyContent;
}

void PullSmsReplyStatus::SetReplyContent(const string& _replyContent)
{
    m_replyContent = _replyContent;
    m_replyContentHasBeenSet = true;
}

bool PullSmsReplyStatus::ReplyContentHasBeenSet() const
{
    return m_replyContentHasBeenSet;
}

uint64_t PullSmsReplyStatus::GetReplyTime() const
{
    return m_replyTime;
}

void PullSmsReplyStatus::SetReplyTime(const uint64_t& _replyTime)
{
    m_replyTime = _replyTime;
    m_replyTimeHasBeenSet = true;
}

bool PullSmsReplyStatus::ReplyTimeHasBeenSet() const
{
    return m_replyTimeHasBeenSet;
}

string PullSmsReplyStatus::GetSubscriberNumber() const
{
    return m_subscriberNumber;
}

void PullSmsReplyStatus::SetSubscriberNumber(const string& _subscriberNumber)
{
    m_subscriberNumber = _subscriberNumber;
    m_subscriberNumberHasBeenSet = true;
}

bool PullSmsReplyStatus::SubscriberNumberHasBeenSet() const
{
    return m_subscriberNumberHasBeenSet;
}

