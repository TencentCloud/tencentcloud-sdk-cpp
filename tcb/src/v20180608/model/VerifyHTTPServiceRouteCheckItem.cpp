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

#include <tencentcloud/tcb/v20180608/model/VerifyHTTPServiceRouteCheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VerifyHTTPServiceRouteCheckItem::VerifyHTTPServiceRouteCheckItem() :
    m_statusHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false)
{
}

CoreInternalOutcome VerifyHTTPServiceRouteCheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyHTTPServiceRouteCheckItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyHTTPServiceRouteCheckItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyHTTPServiceRouteCheckItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyHTTPServiceRouteCheckItem.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VerifyHTTPServiceRouteCheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VerifyHTTPServiceRouteCheckItem::GetStatus() const
{
    return m_status;
}

void VerifyHTTPServiceRouteCheckItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VerifyHTTPServiceRouteCheckItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VerifyHTTPServiceRouteCheckItem::GetCode() const
{
    return m_code;
}

void VerifyHTTPServiceRouteCheckItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool VerifyHTTPServiceRouteCheckItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string VerifyHTTPServiceRouteCheckItem::GetMessage() const
{
    return m_message;
}

void VerifyHTTPServiceRouteCheckItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool VerifyHTTPServiceRouteCheckItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

OwnershipVerificationInfo VerifyHTTPServiceRouteCheckItem::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void VerifyHTTPServiceRouteCheckItem::SetOwnershipVerification(const OwnershipVerificationInfo& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool VerifyHTTPServiceRouteCheckItem::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

