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

#include <tencentcloud/zj/v20190121/model/SendSmsPaasDataStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

SendSmsPaasDataStruct::SendSmsPaasDataStruct() :
    m_serialNoHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_feeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SendSmsPaasDataStruct::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SendSmsPaasDataStruct.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `SendSmsPaasDataStruct.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SendSmsPaasDataStruct.Fee` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fee = value["Fee"].GetUint64();
        m_feeHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Error("response `SendSmsPaasDataStruct.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `SendSmsPaasDataStruct.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendSmsPaasDataStruct::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serialNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_feeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fee, allocator);
    }

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string SendSmsPaasDataStruct::GetSerialNo() const
{
    return m_serialNo;
}

void SendSmsPaasDataStruct::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool SendSmsPaasDataStruct::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

string SendSmsPaasDataStruct::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SendSmsPaasDataStruct::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SendSmsPaasDataStruct::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

uint64_t SendSmsPaasDataStruct::GetFee() const
{
    return m_fee;
}

void SendSmsPaasDataStruct::SetFee(const uint64_t& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool SendSmsPaasDataStruct::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

string SendSmsPaasDataStruct::GetCode() const
{
    return m_code;
}

void SendSmsPaasDataStruct::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool SendSmsPaasDataStruct::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string SendSmsPaasDataStruct::GetMessage() const
{
    return m_message;
}

void SendSmsPaasDataStruct::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SendSmsPaasDataStruct::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

