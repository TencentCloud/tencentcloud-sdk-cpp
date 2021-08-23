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

#include <tencentcloud/ses/v20201002/model/SendEmailStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

SendEmailStatus::SendEmailStatus() :
    m_messageIdHasBeenSet(false),
    m_toEmailAddressHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_sendStatusHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_deliverMessageHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_deliverTimeHasBeenSet(false),
    m_userOpenedHasBeenSet(false),
    m_userClickedHasBeenSet(false),
    m_userUnsubscribedHasBeenSet(false),
    m_userComplaintedHasBeenSet(false)
{
}

CoreInternalOutcome SendEmailStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(value["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (value.HasMember("ToEmailAddress") && !value["ToEmailAddress"].IsNull())
    {
        if (!value["ToEmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.ToEmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toEmailAddress = string(value["ToEmailAddress"].GetString());
        m_toEmailAddressHasBeenSet = true;
    }

    if (value.HasMember("FromEmailAddress") && !value["FromEmailAddress"].IsNull())
    {
        if (!value["FromEmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.FromEmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromEmailAddress = string(value["FromEmailAddress"].GetString());
        m_fromEmailAddressHasBeenSet = true;
    }

    if (value.HasMember("SendStatus") && !value["SendStatus"].IsNull())
    {
        if (!value["SendStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.SendStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendStatus = value["SendStatus"].GetInt64();
        m_sendStatusHasBeenSet = true;
    }

    if (value.HasMember("DeliverStatus") && !value["DeliverStatus"].IsNull())
    {
        if (!value["DeliverStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.DeliverStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverStatus = value["DeliverStatus"].GetInt64();
        m_deliverStatusHasBeenSet = true;
    }

    if (value.HasMember("DeliverMessage") && !value["DeliverMessage"].IsNull())
    {
        if (!value["DeliverMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.DeliverMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverMessage = string(value["DeliverMessage"].GetString());
        m_deliverMessageHasBeenSet = true;
    }

    if (value.HasMember("RequestTime") && !value["RequestTime"].IsNull())
    {
        if (!value["RequestTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.RequestTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestTime = value["RequestTime"].GetInt64();
        m_requestTimeHasBeenSet = true;
    }

    if (value.HasMember("DeliverTime") && !value["DeliverTime"].IsNull())
    {
        if (!value["DeliverTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.DeliverTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverTime = value["DeliverTime"].GetInt64();
        m_deliverTimeHasBeenSet = true;
    }

    if (value.HasMember("UserOpened") && !value["UserOpened"].IsNull())
    {
        if (!value["UserOpened"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.UserOpened` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userOpened = value["UserOpened"].GetBool();
        m_userOpenedHasBeenSet = true;
    }

    if (value.HasMember("UserClicked") && !value["UserClicked"].IsNull())
    {
        if (!value["UserClicked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.UserClicked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userClicked = value["UserClicked"].GetBool();
        m_userClickedHasBeenSet = true;
    }

    if (value.HasMember("UserUnsubscribed") && !value["UserUnsubscribed"].IsNull())
    {
        if (!value["UserUnsubscribed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.UserUnsubscribed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userUnsubscribed = value["UserUnsubscribed"].GetBool();
        m_userUnsubscribedHasBeenSet = true;
    }

    if (value.HasMember("UserComplainted") && !value["UserComplainted"].IsNull())
    {
        if (!value["UserComplainted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SendEmailStatus.UserComplainted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_userComplainted = value["UserComplainted"].GetBool();
        m_userComplaintedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendEmailStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_toEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_fromEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendStatus, allocator);
    }

    if (m_deliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverStatus, allocator);
    }

    if (m_deliverMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestTime, allocator);
    }

    if (m_deliverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverTime, allocator);
    }

    if (m_userOpenedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserOpened";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userOpened, allocator);
    }

    if (m_userClickedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserClicked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userClicked, allocator);
    }

    if (m_userUnsubscribedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUnsubscribed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userUnsubscribed, allocator);
    }

    if (m_userComplaintedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserComplainted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userComplainted, allocator);
    }

}


string SendEmailStatus::GetMessageId() const
{
    return m_messageId;
}

void SendEmailStatus::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool SendEmailStatus::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string SendEmailStatus::GetToEmailAddress() const
{
    return m_toEmailAddress;
}

void SendEmailStatus::SetToEmailAddress(const string& _toEmailAddress)
{
    m_toEmailAddress = _toEmailAddress;
    m_toEmailAddressHasBeenSet = true;
}

bool SendEmailStatus::ToEmailAddressHasBeenSet() const
{
    return m_toEmailAddressHasBeenSet;
}

string SendEmailStatus::GetFromEmailAddress() const
{
    return m_fromEmailAddress;
}

void SendEmailStatus::SetFromEmailAddress(const string& _fromEmailAddress)
{
    m_fromEmailAddress = _fromEmailAddress;
    m_fromEmailAddressHasBeenSet = true;
}

bool SendEmailStatus::FromEmailAddressHasBeenSet() const
{
    return m_fromEmailAddressHasBeenSet;
}

int64_t SendEmailStatus::GetSendStatus() const
{
    return m_sendStatus;
}

void SendEmailStatus::SetSendStatus(const int64_t& _sendStatus)
{
    m_sendStatus = _sendStatus;
    m_sendStatusHasBeenSet = true;
}

bool SendEmailStatus::SendStatusHasBeenSet() const
{
    return m_sendStatusHasBeenSet;
}

int64_t SendEmailStatus::GetDeliverStatus() const
{
    return m_deliverStatus;
}

void SendEmailStatus::SetDeliverStatus(const int64_t& _deliverStatus)
{
    m_deliverStatus = _deliverStatus;
    m_deliverStatusHasBeenSet = true;
}

bool SendEmailStatus::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

string SendEmailStatus::GetDeliverMessage() const
{
    return m_deliverMessage;
}

void SendEmailStatus::SetDeliverMessage(const string& _deliverMessage)
{
    m_deliverMessage = _deliverMessage;
    m_deliverMessageHasBeenSet = true;
}

bool SendEmailStatus::DeliverMessageHasBeenSet() const
{
    return m_deliverMessageHasBeenSet;
}

int64_t SendEmailStatus::GetRequestTime() const
{
    return m_requestTime;
}

void SendEmailStatus::SetRequestTime(const int64_t& _requestTime)
{
    m_requestTime = _requestTime;
    m_requestTimeHasBeenSet = true;
}

bool SendEmailStatus::RequestTimeHasBeenSet() const
{
    return m_requestTimeHasBeenSet;
}

int64_t SendEmailStatus::GetDeliverTime() const
{
    return m_deliverTime;
}

void SendEmailStatus::SetDeliverTime(const int64_t& _deliverTime)
{
    m_deliverTime = _deliverTime;
    m_deliverTimeHasBeenSet = true;
}

bool SendEmailStatus::DeliverTimeHasBeenSet() const
{
    return m_deliverTimeHasBeenSet;
}

bool SendEmailStatus::GetUserOpened() const
{
    return m_userOpened;
}

void SendEmailStatus::SetUserOpened(const bool& _userOpened)
{
    m_userOpened = _userOpened;
    m_userOpenedHasBeenSet = true;
}

bool SendEmailStatus::UserOpenedHasBeenSet() const
{
    return m_userOpenedHasBeenSet;
}

bool SendEmailStatus::GetUserClicked() const
{
    return m_userClicked;
}

void SendEmailStatus::SetUserClicked(const bool& _userClicked)
{
    m_userClicked = _userClicked;
    m_userClickedHasBeenSet = true;
}

bool SendEmailStatus::UserClickedHasBeenSet() const
{
    return m_userClickedHasBeenSet;
}

bool SendEmailStatus::GetUserUnsubscribed() const
{
    return m_userUnsubscribed;
}

void SendEmailStatus::SetUserUnsubscribed(const bool& _userUnsubscribed)
{
    m_userUnsubscribed = _userUnsubscribed;
    m_userUnsubscribedHasBeenSet = true;
}

bool SendEmailStatus::UserUnsubscribedHasBeenSet() const
{
    return m_userUnsubscribedHasBeenSet;
}

bool SendEmailStatus::GetUserComplainted() const
{
    return m_userComplainted;
}

void SendEmailStatus::SetUserComplainted(const bool& _userComplainted)
{
    m_userComplainted = _userComplainted;
    m_userComplaintedHasBeenSet = true;
}

bool SendEmailStatus::UserComplaintedHasBeenSet() const
{
    return m_userComplaintedHasBeenSet;
}

