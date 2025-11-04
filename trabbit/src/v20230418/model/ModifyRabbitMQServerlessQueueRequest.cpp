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

#include <tencentcloud/trabbit/v20230418/model/ModifyRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

ModifyRabbitMQServerlessQueueRequest::ModifyRabbitMQServerlessQueueRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_messageTTLHasBeenSet(false),
    m_deadLetterExchangeHasBeenSet(false),
    m_deadLetterRoutingKeyHasBeenSet(false)
{
}

string ModifyRabbitMQServerlessQueueRequest::ToJsonString() const
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

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_messageTTL, allocator);
    }

    if (m_deadLetterExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterRoutingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterRoutingKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterRoutingKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRabbitMQServerlessQueueRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyRabbitMQServerlessQueueRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyRabbitMQServerlessQueueRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void ModifyRabbitMQServerlessQueueRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string ModifyRabbitMQServerlessQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyRabbitMQServerlessQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string ModifyRabbitMQServerlessQueueRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRabbitMQServerlessQueueRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ModifyRabbitMQServerlessQueueRequest::GetMessageTTL() const
{
    return m_messageTTL;
}

void ModifyRabbitMQServerlessQueueRequest::SetMessageTTL(const int64_t& _messageTTL)
{
    m_messageTTL = _messageTTL;
    m_messageTTLHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::MessageTTLHasBeenSet() const
{
    return m_messageTTLHasBeenSet;
}

string ModifyRabbitMQServerlessQueueRequest::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

void ModifyRabbitMQServerlessQueueRequest::SetDeadLetterExchange(const string& _deadLetterExchange)
{
    m_deadLetterExchange = _deadLetterExchange;
    m_deadLetterExchangeHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string ModifyRabbitMQServerlessQueueRequest::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

void ModifyRabbitMQServerlessQueueRequest::SetDeadLetterRoutingKey(const string& _deadLetterRoutingKey)
{
    m_deadLetterRoutingKey = _deadLetterRoutingKey;
    m_deadLetterRoutingKeyHasBeenSet = true;
}

bool ModifyRabbitMQServerlessQueueRequest::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}


