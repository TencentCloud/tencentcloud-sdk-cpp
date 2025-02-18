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

#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

CreateRabbitMQServerlessQueueRequest::CreateRabbitMQServerlessQueueRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_durableHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_messageTTLHasBeenSet(false),
    m_autoExpireHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_maxLengthBytesHasBeenSet(false),
    m_deliveryLimitHasBeenSet(false),
    m_overflowBehaviourHasBeenSet(false),
    m_deadLetterExchangeHasBeenSet(false),
    m_deadLetterRoutingKeyHasBeenSet(false),
    m_singleActiveConsumerHasBeenSet(false),
    m_maximumPriorityHasBeenSet(false),
    m_lazyModeHasBeenSet(false),
    m_masterLocatorHasBeenSet(false),
    m_maxInMemoryLengthHasBeenSet(false),
    m_maxInMemoryBytesHasBeenSet(false),
    m_nodeHasBeenSet(false),
    m_deadLetterStrategyHasBeenSet(false),
    m_queueLeaderLocatorHasBeenSet(false),
    m_quorumInitialGroupSizeHasBeenSet(false)
{
}

string CreateRabbitMQServerlessQueueRequest::ToJsonString() const
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

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_durableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Durable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durable, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
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

    if (m_autoExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoExpire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoExpire, allocator);
    }

    if (m_maxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxLength, allocator);
    }

    if (m_maxLengthBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLengthBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxLengthBytes, allocator);
    }

    if (m_deliveryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliveryLimit, allocator);
    }

    if (m_overflowBehaviourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverflowBehaviour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_overflowBehaviour.c_str(), allocator).Move(), allocator);
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

    if (m_singleActiveConsumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleActiveConsumer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_singleActiveConsumer, allocator);
    }

    if (m_maximumPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maximumPriority, allocator);
    }

    if (m_lazyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LazyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lazyMode, allocator);
    }

    if (m_masterLocatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterLocator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterLocator.c_str(), allocator).Move(), allocator);
    }

    if (m_maxInMemoryLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInMemoryLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxInMemoryLength, allocator);
    }

    if (m_maxInMemoryBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInMemoryBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxInMemoryBytes, allocator);
    }

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_node.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_queueLeaderLocatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueLeaderLocator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueLeaderLocator.c_str(), allocator).Move(), allocator);
    }

    if (m_quorumInitialGroupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuorumInitialGroupSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quorumInitialGroupSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRabbitMQServerlessQueueRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQServerlessQueueRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void CreateRabbitMQServerlessQueueRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateRabbitMQServerlessQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetQueueType() const
{
    return m_queueType;
}

void CreateRabbitMQServerlessQueueRequest::SetQueueType(const string& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

bool CreateRabbitMQServerlessQueueRequest::GetDurable() const
{
    return m_durable;
}

void CreateRabbitMQServerlessQueueRequest::SetDurable(const bool& _durable)
{
    m_durable = _durable;
    m_durableHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool CreateRabbitMQServerlessQueueRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateRabbitMQServerlessQueueRequest::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetRemark() const
{
    return m_remark;
}

void CreateRabbitMQServerlessQueueRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMessageTTL() const
{
    return m_messageTTL;
}

void CreateRabbitMQServerlessQueueRequest::SetMessageTTL(const int64_t& _messageTTL)
{
    m_messageTTL = _messageTTL;
    m_messageTTLHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MessageTTLHasBeenSet() const
{
    return m_messageTTLHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetAutoExpire() const
{
    return m_autoExpire;
}

void CreateRabbitMQServerlessQueueRequest::SetAutoExpire(const int64_t& _autoExpire)
{
    m_autoExpire = _autoExpire;
    m_autoExpireHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::AutoExpireHasBeenSet() const
{
    return m_autoExpireHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMaxLength() const
{
    return m_maxLength;
}

void CreateRabbitMQServerlessQueueRequest::SetMaxLength(const int64_t& _maxLength)
{
    m_maxLength = _maxLength;
    m_maxLengthHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MaxLengthHasBeenSet() const
{
    return m_maxLengthHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMaxLengthBytes() const
{
    return m_maxLengthBytes;
}

void CreateRabbitMQServerlessQueueRequest::SetMaxLengthBytes(const int64_t& _maxLengthBytes)
{
    m_maxLengthBytes = _maxLengthBytes;
    m_maxLengthBytesHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MaxLengthBytesHasBeenSet() const
{
    return m_maxLengthBytesHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetDeliveryLimit() const
{
    return m_deliveryLimit;
}

void CreateRabbitMQServerlessQueueRequest::SetDeliveryLimit(const int64_t& _deliveryLimit)
{
    m_deliveryLimit = _deliveryLimit;
    m_deliveryLimitHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::DeliveryLimitHasBeenSet() const
{
    return m_deliveryLimitHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetOverflowBehaviour() const
{
    return m_overflowBehaviour;
}

void CreateRabbitMQServerlessQueueRequest::SetOverflowBehaviour(const string& _overflowBehaviour)
{
    m_overflowBehaviour = _overflowBehaviour;
    m_overflowBehaviourHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::OverflowBehaviourHasBeenSet() const
{
    return m_overflowBehaviourHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

void CreateRabbitMQServerlessQueueRequest::SetDeadLetterExchange(const string& _deadLetterExchange)
{
    m_deadLetterExchange = _deadLetterExchange;
    m_deadLetterExchangeHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

void CreateRabbitMQServerlessQueueRequest::SetDeadLetterRoutingKey(const string& _deadLetterRoutingKey)
{
    m_deadLetterRoutingKey = _deadLetterRoutingKey;
    m_deadLetterRoutingKeyHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}

bool CreateRabbitMQServerlessQueueRequest::GetSingleActiveConsumer() const
{
    return m_singleActiveConsumer;
}

void CreateRabbitMQServerlessQueueRequest::SetSingleActiveConsumer(const bool& _singleActiveConsumer)
{
    m_singleActiveConsumer = _singleActiveConsumer;
    m_singleActiveConsumerHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::SingleActiveConsumerHasBeenSet() const
{
    return m_singleActiveConsumerHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMaximumPriority() const
{
    return m_maximumPriority;
}

void CreateRabbitMQServerlessQueueRequest::SetMaximumPriority(const int64_t& _maximumPriority)
{
    m_maximumPriority = _maximumPriority;
    m_maximumPriorityHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MaximumPriorityHasBeenSet() const
{
    return m_maximumPriorityHasBeenSet;
}

bool CreateRabbitMQServerlessQueueRequest::GetLazyMode() const
{
    return m_lazyMode;
}

void CreateRabbitMQServerlessQueueRequest::SetLazyMode(const bool& _lazyMode)
{
    m_lazyMode = _lazyMode;
    m_lazyModeHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::LazyModeHasBeenSet() const
{
    return m_lazyModeHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetMasterLocator() const
{
    return m_masterLocator;
}

void CreateRabbitMQServerlessQueueRequest::SetMasterLocator(const string& _masterLocator)
{
    m_masterLocator = _masterLocator;
    m_masterLocatorHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MasterLocatorHasBeenSet() const
{
    return m_masterLocatorHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMaxInMemoryLength() const
{
    return m_maxInMemoryLength;
}

void CreateRabbitMQServerlessQueueRequest::SetMaxInMemoryLength(const int64_t& _maxInMemoryLength)
{
    m_maxInMemoryLength = _maxInMemoryLength;
    m_maxInMemoryLengthHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MaxInMemoryLengthHasBeenSet() const
{
    return m_maxInMemoryLengthHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetMaxInMemoryBytes() const
{
    return m_maxInMemoryBytes;
}

void CreateRabbitMQServerlessQueueRequest::SetMaxInMemoryBytes(const int64_t& _maxInMemoryBytes)
{
    m_maxInMemoryBytes = _maxInMemoryBytes;
    m_maxInMemoryBytesHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::MaxInMemoryBytesHasBeenSet() const
{
    return m_maxInMemoryBytesHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetNode() const
{
    return m_node;
}

void CreateRabbitMQServerlessQueueRequest::SetNode(const string& _node)
{
    m_node = _node;
    m_nodeHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetDeadLetterStrategy() const
{
    return m_deadLetterStrategy;
}

void CreateRabbitMQServerlessQueueRequest::SetDeadLetterStrategy(const string& _deadLetterStrategy)
{
    m_deadLetterStrategy = _deadLetterStrategy;
    m_deadLetterStrategyHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::DeadLetterStrategyHasBeenSet() const
{
    return m_deadLetterStrategyHasBeenSet;
}

string CreateRabbitMQServerlessQueueRequest::GetQueueLeaderLocator() const
{
    return m_queueLeaderLocator;
}

void CreateRabbitMQServerlessQueueRequest::SetQueueLeaderLocator(const string& _queueLeaderLocator)
{
    m_queueLeaderLocator = _queueLeaderLocator;
    m_queueLeaderLocatorHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::QueueLeaderLocatorHasBeenSet() const
{
    return m_queueLeaderLocatorHasBeenSet;
}

int64_t CreateRabbitMQServerlessQueueRequest::GetQuorumInitialGroupSize() const
{
    return m_quorumInitialGroupSize;
}

void CreateRabbitMQServerlessQueueRequest::SetQuorumInitialGroupSize(const int64_t& _quorumInitialGroupSize)
{
    m_quorumInitialGroupSize = _quorumInitialGroupSize;
    m_quorumInitialGroupSizeHasBeenSet = true;
}

bool CreateRabbitMQServerlessQueueRequest::QuorumInitialGroupSizeHasBeenSet() const
{
    return m_quorumInitialGroupSizeHasBeenSet;
}


