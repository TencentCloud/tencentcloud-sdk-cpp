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

#include <tencentcloud/sms/v20210111/model/SendStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

SendStatus::SendStatus() :
    m_serialNoHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_feeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_isoCodeHasBeenSet(false)
{
}

CoreInternalOutcome SendStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.Fee` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fee = value["Fee"].GetUint64();
        m_feeHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("IsoCode") && !value["IsoCode"].IsNull())
    {
        if (!value["IsoCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendStatus.IsoCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isoCode = string(value["IsoCode"].GetString());
        m_isoCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fee, allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

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

    if (m_isoCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsoCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isoCode.c_str(), allocator).Move(), allocator);
    }

}


string SendStatus::GetSerialNo() const
{
    return m_serialNo;
}

void SendStatus::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool SendStatus::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

string SendStatus::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SendStatus::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SendStatus::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

uint64_t SendStatus::GetFee() const
{
    return m_fee;
}

void SendStatus::SetFee(const uint64_t& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool SendStatus::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

string SendStatus::GetSessionContext() const
{
    return m_sessionContext;
}

void SendStatus::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SendStatus::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string SendStatus::GetCode() const
{
    return m_code;
}

void SendStatus::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SendStatus::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string SendStatus::GetMessage() const
{
    return m_message;
}

void SendStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SendStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string SendStatus::GetIsoCode() const
{
    return m_isoCode;
}

void SendStatus::SetIsoCode(const string& _isoCode)
{
    m_isoCode = _isoCode;
    m_isoCodeHasBeenSet = true;
}

bool SendStatus::IsoCodeHasBeenSet() const
{
    return m_isoCodeHasBeenSet;
}

