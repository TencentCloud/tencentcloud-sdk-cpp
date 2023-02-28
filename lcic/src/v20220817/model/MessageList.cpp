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

#include <tencentcloud/lcic/v20220817/model/MessageList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

MessageList::MessageList() :
    m_timestampHasBeenSet(false),
    m_fromAccountHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_messageBodyHasBeenSet(false)
{
}

CoreInternalOutcome MessageList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageList.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("FromAccount") && !value["FromAccount"].IsNull())
    {
        if (!value["FromAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageList.FromAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromAccount = string(value["FromAccount"].GetString());
        m_fromAccountHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageList.Seq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seq = value["Seq"].GetInt64();
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("MessageBody") && !value["MessageBody"].IsNull())
    {
        if (!value["MessageBody"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MessageList.MessageBody` is not array type"));

        const rapidjson::Value &tmpValue = value["MessageBody"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MessageItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_messageBody.push_back(item);
        }
        m_messageBodyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_fromAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seq, allocator);
    }

    if (m_messageBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messageBody.begin(); itr != m_messageBody.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MessageList::GetTimestamp() const
{
    return m_timestamp;
}

void MessageList::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MessageList::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string MessageList::GetFromAccount() const
{
    return m_fromAccount;
}

void MessageList::SetFromAccount(const string& _fromAccount)
{
    m_fromAccount = _fromAccount;
    m_fromAccountHasBeenSet = true;
}

bool MessageList::FromAccountHasBeenSet() const
{
    return m_fromAccountHasBeenSet;
}

int64_t MessageList::GetSeq() const
{
    return m_seq;
}

void MessageList::SetSeq(const int64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool MessageList::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

vector<MessageItem> MessageList::GetMessageBody() const
{
    return m_messageBody;
}

void MessageList::SetMessageBody(const vector<MessageItem>& _messageBody)
{
    m_messageBody = _messageBody;
    m_messageBodyHasBeenSet = true;
}

bool MessageList::MessageBodyHasBeenSet() const
{
    return m_messageBodyHasBeenSet;
}

