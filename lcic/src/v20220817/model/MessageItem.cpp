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

#include <tencentcloud/lcic/v20220817/model/MessageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

MessageItem::MessageItem() :
    m_messageTypeHasBeenSet(false),
    m_textMessageHasBeenSet(false),
    m_imageMessageHasBeenSet(false),
    m_customMessageHasBeenSet(false)
{
}

CoreInternalOutcome MessageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MessageType") && !value["MessageType"].IsNull())
    {
        if (!value["MessageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.MessageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageType = value["MessageType"].GetInt64();
        m_messageTypeHasBeenSet = true;
    }

    if (value.HasMember("TextMessage") && !value["TextMessage"].IsNull())
    {
        if (!value["TextMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.TextMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textMessage = string(value["TextMessage"].GetString());
        m_textMessageHasBeenSet = true;
    }

    if (value.HasMember("ImageMessage") && !value["ImageMessage"].IsNull())
    {
        if (!value["ImageMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.ImageMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageMessage = string(value["ImageMessage"].GetString());
        m_imageMessageHasBeenSet = true;
    }

    if (value.HasMember("CustomMessage") && !value["CustomMessage"].IsNull())
    {
        if (!value["CustomMessage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.CustomMessage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customMessage.Deserialize(value["CustomMessage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageType, allocator);
    }

    if (m_textMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_imageMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_customMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customMessage.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MessageItem::GetMessageType() const
{
    return m_messageType;
}

void MessageItem::SetMessageType(const int64_t& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool MessageItem::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}

string MessageItem::GetTextMessage() const
{
    return m_textMessage;
}

void MessageItem::SetTextMessage(const string& _textMessage)
{
    m_textMessage = _textMessage;
    m_textMessageHasBeenSet = true;
}

bool MessageItem::TextMessageHasBeenSet() const
{
    return m_textMessageHasBeenSet;
}

string MessageItem::GetImageMessage() const
{
    return m_imageMessage;
}

void MessageItem::SetImageMessage(const string& _imageMessage)
{
    m_imageMessage = _imageMessage;
    m_imageMessageHasBeenSet = true;
}

bool MessageItem::ImageMessageHasBeenSet() const
{
    return m_imageMessageHasBeenSet;
}

CustomMsgContent MessageItem::GetCustomMessage() const
{
    return m_customMessage;
}

void MessageItem::SetCustomMessage(const CustomMsgContent& _customMessage)
{
    m_customMessage = _customMessage;
    m_customMessageHasBeenSet = true;
}

bool MessageItem::CustomMessageHasBeenSet() const
{
    return m_customMessageHasBeenSet;
}

