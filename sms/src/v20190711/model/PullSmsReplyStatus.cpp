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

#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

PullSmsReplyStatus::PullSmsReplyStatus() :
    m_extendCodeHasBeenSet(false),
    m_nationCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_signHasBeenSet(false),
    m_replyContentHasBeenSet(false),
    m_replyTimeHasBeenSet(false),
    m_replyUnixTimeHasBeenSet(false)
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

    if (value.HasMember("NationCode") && !value["NationCode"].IsNull())
    {
        if (!value["NationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.NationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCode = string(value["NationCode"].GetString());
        m_nationCodeHasBeenSet = true;
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

    if (value.HasMember("Sign") && !value["Sign"].IsNull())
    {
        if (!value["Sign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.Sign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sign = string(value["Sign"].GetString());
        m_signHasBeenSet = true;
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
        if (!value["ReplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.ReplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyTime = string(value["ReplyTime"].GetString());
        m_replyTimeHasBeenSet = true;
    }

    if (value.HasMember("ReplyUnixTime") && !value["ReplyUnixTime"].IsNull())
    {
        if (!value["ReplyUnixTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PullSmsReplyStatus.ReplyUnixTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replyUnixTime = value["ReplyUnixTime"].GetUint64();
        m_replyUnixTimeHasBeenSet = true;
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

    if (m_nationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_replyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_replyUnixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyUnixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyUnixTime, allocator);
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

string PullSmsReplyStatus::GetNationCode() const
{
    return m_nationCode;
}

void PullSmsReplyStatus::SetNationCode(const string& _nationCode)
{
    m_nationCode = _nationCode;
    m_nationCodeHasBeenSet = true;
}

bool PullSmsReplyStatus::NationCodeHasBeenSet() const
{
    return m_nationCodeHasBeenSet;
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

string PullSmsReplyStatus::GetSign() const
{
    return m_sign;
}

void PullSmsReplyStatus::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool PullSmsReplyStatus::SignHasBeenSet() const
{
    return m_signHasBeenSet;
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

string PullSmsReplyStatus::GetReplyTime() const
{
    return m_replyTime;
}

void PullSmsReplyStatus::SetReplyTime(const string& _replyTime)
{
    m_replyTime = _replyTime;
    m_replyTimeHasBeenSet = true;
}

bool PullSmsReplyStatus::ReplyTimeHasBeenSet() const
{
    return m_replyTimeHasBeenSet;
}

uint64_t PullSmsReplyStatus::GetReplyUnixTime() const
{
    return m_replyUnixTime;
}

void PullSmsReplyStatus::SetReplyUnixTime(const uint64_t& _replyUnixTime)
{
    m_replyUnixTime = _replyUnixTime;
    m_replyUnixTimeHasBeenSet = true;
}

bool PullSmsReplyStatus::ReplyUnixTimeHasBeenSet() const
{
    return m_replyUnixTimeHasBeenSet;
}

