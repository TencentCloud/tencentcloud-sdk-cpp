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

#include <tencentcloud/rce/v20260130/model/ChatEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

ChatEvent::ChatEvent() :
    m_chatInfoHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_receiverHasBeenSet(false)
{
}

CoreInternalOutcome ChatEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChatInfo") && !value["ChatInfo"].IsNull())
    {
        if (!value["ChatInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEvent.ChatInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chatInfo.Deserialize(value["ChatInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chatInfoHasBeenSet = true;
    }

    if (value.HasMember("ServerId") && !value["ServerId"].IsNull())
    {
        if (!value["ServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEvent.ServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverId = string(value["ServerId"].GetString());
        m_serverIdHasBeenSet = true;
    }

    if (value.HasMember("Sender") && !value["Sender"].IsNull())
    {
        if (!value["Sender"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEvent.Sender` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sender.Deserialize(value["Sender"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_senderHasBeenSet = true;
    }

    if (value.HasMember("Receiver") && !value["Receiver"].IsNull())
    {
        if (!value["Receiver"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChatEvent.Receiver` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_receiver.Deserialize(value["Receiver"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_receiverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chatInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chatInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_senderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sender.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_receiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receiver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_receiver.ToJsonObject(value[key.c_str()], allocator);
    }

}


Chat ChatEvent::GetChatInfo() const
{
    return m_chatInfo;
}

void ChatEvent::SetChatInfo(const Chat& _chatInfo)
{
    m_chatInfo = _chatInfo;
    m_chatInfoHasBeenSet = true;
}

bool ChatEvent::ChatInfoHasBeenSet() const
{
    return m_chatInfoHasBeenSet;
}

string ChatEvent::GetServerId() const
{
    return m_serverId;
}

void ChatEvent::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ChatEvent::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

Sender ChatEvent::GetSender() const
{
    return m_sender;
}

void ChatEvent::SetSender(const Sender& _sender)
{
    m_sender = _sender;
    m_senderHasBeenSet = true;
}

bool ChatEvent::SenderHasBeenSet() const
{
    return m_senderHasBeenSet;
}

Receiver ChatEvent::GetReceiver() const
{
    return m_receiver;
}

void ChatEvent::SetReceiver(const Receiver& _receiver)
{
    m_receiver = _receiver;
    m_receiverHasBeenSet = true;
}

bool ChatEvent::ReceiverHasBeenSet() const
{
    return m_receiverHasBeenSet;
}

