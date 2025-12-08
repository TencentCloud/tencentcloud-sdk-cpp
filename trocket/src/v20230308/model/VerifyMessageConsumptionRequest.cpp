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

#include <tencentcloud/trocket/v20230308/model/VerifyMessageConsumptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

VerifyMessageConsumptionRequest::VerifyMessageConsumptionRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false)
{
}

string VerifyMessageConsumptionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyMessageConsumptionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void VerifyMessageConsumptionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool VerifyMessageConsumptionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string VerifyMessageConsumptionRequest::GetTopic() const
{
    return m_topic;
}

void VerifyMessageConsumptionRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool VerifyMessageConsumptionRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string VerifyMessageConsumptionRequest::GetClientId() const
{
    return m_clientId;
}

void VerifyMessageConsumptionRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool VerifyMessageConsumptionRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string VerifyMessageConsumptionRequest::GetMsgId() const
{
    return m_msgId;
}

void VerifyMessageConsumptionRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool VerifyMessageConsumptionRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string VerifyMessageConsumptionRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void VerifyMessageConsumptionRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool VerifyMessageConsumptionRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}


