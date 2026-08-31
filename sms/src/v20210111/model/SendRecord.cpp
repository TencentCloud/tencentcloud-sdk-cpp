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

#include <tencentcloud/sms/v20210111/model/SendRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

SendRecord::SendRecord() :
    m_phoneNumberHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_sendStatusHasBeenSet(false),
    m_requestCodeHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_isoCodeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_userReceiveTimeHasBeenSet(false)
{
}

CoreInternalOutcome SendRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("SendStatus") && !value["SendStatus"].IsNull())
    {
        if (!value["SendStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.SendStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendStatus = value["SendStatus"].GetUint64();
        m_sendStatusHasBeenSet = true;
    }

    if (value.HasMember("RequestCode") && !value["RequestCode"].IsNull())
    {
        if (!value["RequestCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.RequestCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestCode = string(value["RequestCode"].GetString());
        m_requestCodeHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.StatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = string(value["StatusCode"].GetString());
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("IsoCode") && !value["IsoCode"].IsNull())
    {
        if (!value["IsoCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.IsoCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isoCode = string(value["IsoCode"].GetString());
        m_isoCodeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.SendTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetUint64();
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("UserReceiveTime") && !value["UserReceiveTime"].IsNull())
    {
        if (!value["UserReceiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendRecord.UserReceiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userReceiveTime = value["UserReceiveTime"].GetUint64();
        m_userReceiveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_sendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendStatus, allocator);
    }

    if (m_requestCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isoCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsoCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isoCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_userReceiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userReceiveTime, allocator);
    }

}


string SendRecord::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SendRecord::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SendRecord::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string SendRecord::GetSerialNo() const
{
    return m_serialNo;
}

void SendRecord::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool SendRecord::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

uint64_t SendRecord::GetSendStatus() const
{
    return m_sendStatus;
}

void SendRecord::SetSendStatus(const uint64_t& _sendStatus)
{
    m_sendStatus = _sendStatus;
    m_sendStatusHasBeenSet = true;
}

bool SendRecord::SendStatusHasBeenSet() const
{
    return m_sendStatusHasBeenSet;
}

string SendRecord::GetRequestCode() const
{
    return m_requestCode;
}

void SendRecord::SetRequestCode(const string& _requestCode)
{
    m_requestCode = _requestCode;
    m_requestCodeHasBeenSet = true;
}

bool SendRecord::RequestCodeHasBeenSet() const
{
    return m_requestCodeHasBeenSet;
}

string SendRecord::GetStatusCode() const
{
    return m_statusCode;
}

void SendRecord::SetStatusCode(const string& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool SendRecord::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string SendRecord::GetIsoCode() const
{
    return m_isoCode;
}

void SendRecord::SetIsoCode(const string& _isoCode)
{
    m_isoCode = _isoCode;
    m_isoCodeHasBeenSet = true;
}

bool SendRecord::IsoCodeHasBeenSet() const
{
    return m_isoCodeHasBeenSet;
}

string SendRecord::GetContent() const
{
    return m_content;
}

void SendRecord::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SendRecord::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t SendRecord::GetSendTime() const
{
    return m_sendTime;
}

void SendRecord::SetSendTime(const uint64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool SendRecord::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

uint64_t SendRecord::GetUserReceiveTime() const
{
    return m_userReceiveTime;
}

void SendRecord::SetUserReceiveTime(const uint64_t& _userReceiveTime)
{
    m_userReceiveTime = _userReceiveTime;
    m_userReceiveTimeHasBeenSet = true;
}

bool SendRecord::UserReceiveTimeHasBeenSet() const
{
    return m_userReceiveTimeHasBeenSet;
}

