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

#include <tencentcloud/trocket/v20230308/model/MessageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MessageItem::MessageItem() :
    m_msgIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_producerAddrHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_deadLetterResendTimesHasBeenSet(false),
    m_deadLetterResendSuccessTimesHasBeenSet(false)
{
}

CoreInternalOutcome MessageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(value["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.Keys` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keys = string(value["Keys"].GetString());
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("ProducerAddr") && !value["ProducerAddr"].IsNull())
    {
        if (!value["ProducerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.ProducerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerAddr = string(value["ProducerAddr"].GetString());
        m_producerAddrHasBeenSet = true;
    }

    if (value.HasMember("ProduceTime") && !value["ProduceTime"].IsNull())
    {
        if (!value["ProduceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.ProduceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceTime = string(value["ProduceTime"].GetString());
        m_produceTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterResendTimes") && !value["DeadLetterResendTimes"].IsNull())
    {
        if (!value["DeadLetterResendTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.DeadLetterResendTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterResendTimes = value["DeadLetterResendTimes"].GetInt64();
        m_deadLetterResendTimesHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterResendSuccessTimes") && !value["DeadLetterResendSuccessTimes"].IsNull())
    {
        if (!value["DeadLetterResendSuccessTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageItem.DeadLetterResendSuccessTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterResendSuccessTimes = value["DeadLetterResendSuccessTimes"].GetInt64();
        m_deadLetterResendSuccessTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keys.c_str(), allocator).Move(), allocator);
    }

    if (m_producerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterResendTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterResendTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadLetterResendTimes, allocator);
    }

    if (m_deadLetterResendSuccessTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterResendSuccessTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadLetterResendSuccessTimes, allocator);
    }

}


string MessageItem::GetMsgId() const
{
    return m_msgId;
}

void MessageItem::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool MessageItem::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string MessageItem::GetTags() const
{
    return m_tags;
}

void MessageItem::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MessageItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string MessageItem::GetKeys() const
{
    return m_keys;
}

void MessageItem::SetKeys(const string& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool MessageItem::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string MessageItem::GetProducerAddr() const
{
    return m_producerAddr;
}

void MessageItem::SetProducerAddr(const string& _producerAddr)
{
    m_producerAddr = _producerAddr;
    m_producerAddrHasBeenSet = true;
}

bool MessageItem::ProducerAddrHasBeenSet() const
{
    return m_producerAddrHasBeenSet;
}

string MessageItem::GetProduceTime() const
{
    return m_produceTime;
}

void MessageItem::SetProduceTime(const string& _produceTime)
{
    m_produceTime = _produceTime;
    m_produceTimeHasBeenSet = true;
}

bool MessageItem::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

int64_t MessageItem::GetDeadLetterResendTimes() const
{
    return m_deadLetterResendTimes;
}

void MessageItem::SetDeadLetterResendTimes(const int64_t& _deadLetterResendTimes)
{
    m_deadLetterResendTimes = _deadLetterResendTimes;
    m_deadLetterResendTimesHasBeenSet = true;
}

bool MessageItem::DeadLetterResendTimesHasBeenSet() const
{
    return m_deadLetterResendTimesHasBeenSet;
}

int64_t MessageItem::GetDeadLetterResendSuccessTimes() const
{
    return m_deadLetterResendSuccessTimes;
}

void MessageItem::SetDeadLetterResendSuccessTimes(const int64_t& _deadLetterResendSuccessTimes)
{
    m_deadLetterResendSuccessTimes = _deadLetterResendSuccessTimes;
    m_deadLetterResendSuccessTimesHasBeenSet = true;
}

bool MessageItem::DeadLetterResendSuccessTimesHasBeenSet() const
{
    return m_deadLetterResendSuccessTimesHasBeenSet;
}

