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

#include <tencentcloud/dlc/v20210125/model/MessageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MessageItem::MessageItem() :
    m_billingItemHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome MessageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string MessageItem::GetBillingItem() const
{
    return m_billingItem;
}

void MessageItem::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool MessageItem::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

string MessageItem::GetMessage() const
{
    return m_message;
}

void MessageItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MessageItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

