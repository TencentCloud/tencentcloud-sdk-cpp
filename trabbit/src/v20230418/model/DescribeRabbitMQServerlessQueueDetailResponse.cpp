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

#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessQueueDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DescribeRabbitMQServerlessQueueDetailResponse::DescribeRabbitMQServerlessQueueDetailResponse() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_consumersHasBeenSet(false),
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
    m_createTimeHasBeenSet(false),
    m_nodeHasBeenSet(false),
    m_deadLetterStrategyHasBeenSet(false),
    m_queueLeaderLocatorHasBeenSet(false),
    m_quorumInitialGroupSizeHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRabbitMQServerlessQueueDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualHost") && !rsp["VirtualHost"].IsNull())
    {
        if (!rsp["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(rsp["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (rsp.HasMember("QueueName") && !rsp["QueueName"].IsNull())
    {
        if (!rsp["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(rsp["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = string(rsp["QueueType"].GetString());
        m_queueTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Consumers") && !rsp["Consumers"].IsNull())
    {
        if (!rsp["Consumers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Consumers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumers = rsp["Consumers"].GetInt64();
        m_consumersHasBeenSet = true;
    }

    if (rsp.HasMember("Durable") && !rsp["Durable"].IsNull())
    {
        if (!rsp["Durable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Durable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_durable = rsp["Durable"].GetBool();
        m_durableHasBeenSet = true;
    }

    if (rsp.HasMember("AutoDelete") && !rsp["AutoDelete"].IsNull())
    {
        if (!rsp["AutoDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDelete = rsp["AutoDelete"].GetBool();
        m_autoDeleteHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("MessageTTL") && !rsp["MessageTTL"].IsNull())
    {
        if (!rsp["MessageTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageTTL = rsp["MessageTTL"].GetInt64();
        m_messageTTLHasBeenSet = true;
    }

    if (rsp.HasMember("AutoExpire") && !rsp["AutoExpire"].IsNull())
    {
        if (!rsp["AutoExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoExpire = rsp["AutoExpire"].GetInt64();
        m_autoExpireHasBeenSet = true;
    }

    if (rsp.HasMember("MaxLength") && !rsp["MaxLength"].IsNull())
    {
        if (!rsp["MaxLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLength = rsp["MaxLength"].GetInt64();
        m_maxLengthHasBeenSet = true;
    }

    if (rsp.HasMember("MaxLengthBytes") && !rsp["MaxLengthBytes"].IsNull())
    {
        if (!rsp["MaxLengthBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxLengthBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLengthBytes = rsp["MaxLengthBytes"].GetInt64();
        m_maxLengthBytesHasBeenSet = true;
    }

    if (rsp.HasMember("DeliveryLimit") && !rsp["DeliveryLimit"].IsNull())
    {
        if (!rsp["DeliveryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryLimit = rsp["DeliveryLimit"].GetInt64();
        m_deliveryLimitHasBeenSet = true;
    }

    if (rsp.HasMember("OverflowBehaviour") && !rsp["OverflowBehaviour"].IsNull())
    {
        if (!rsp["OverflowBehaviour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverflowBehaviour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overflowBehaviour = string(rsp["OverflowBehaviour"].GetString());
        m_overflowBehaviourHasBeenSet = true;
    }

    if (rsp.HasMember("DeadLetterExchange") && !rsp["DeadLetterExchange"].IsNull())
    {
        if (!rsp["DeadLetterExchange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterExchange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterExchange = string(rsp["DeadLetterExchange"].GetString());
        m_deadLetterExchangeHasBeenSet = true;
    }

    if (rsp.HasMember("DeadLetterRoutingKey") && !rsp["DeadLetterRoutingKey"].IsNull())
    {
        if (!rsp["DeadLetterRoutingKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterRoutingKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterRoutingKey = string(rsp["DeadLetterRoutingKey"].GetString());
        m_deadLetterRoutingKeyHasBeenSet = true;
    }

    if (rsp.HasMember("SingleActiveConsumer") && !rsp["SingleActiveConsumer"].IsNull())
    {
        if (!rsp["SingleActiveConsumer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SingleActiveConsumer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_singleActiveConsumer = rsp["SingleActiveConsumer"].GetBool();
        m_singleActiveConsumerHasBeenSet = true;
    }

    if (rsp.HasMember("MaximumPriority") && !rsp["MaximumPriority"].IsNull())
    {
        if (!rsp["MaximumPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaximumPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumPriority = rsp["MaximumPriority"].GetInt64();
        m_maximumPriorityHasBeenSet = true;
    }

    if (rsp.HasMember("LazyMode") && !rsp["LazyMode"].IsNull())
    {
        if (!rsp["LazyMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LazyMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lazyMode = rsp["LazyMode"].GetBool();
        m_lazyModeHasBeenSet = true;
    }

    if (rsp.HasMember("MasterLocator") && !rsp["MasterLocator"].IsNull())
    {
        if (!rsp["MasterLocator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterLocator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterLocator = string(rsp["MasterLocator"].GetString());
        m_masterLocatorHasBeenSet = true;
    }

    if (rsp.HasMember("MaxInMemoryLength") && !rsp["MaxInMemoryLength"].IsNull())
    {
        if (!rsp["MaxInMemoryLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxInMemoryLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInMemoryLength = rsp["MaxInMemoryLength"].GetInt64();
        m_maxInMemoryLengthHasBeenSet = true;
    }

    if (rsp.HasMember("MaxInMemoryBytes") && !rsp["MaxInMemoryBytes"].IsNull())
    {
        if (!rsp["MaxInMemoryBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxInMemoryBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInMemoryBytes = rsp["MaxInMemoryBytes"].GetInt64();
        m_maxInMemoryBytesHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Node") && !rsp["Node"].IsNull())
    {
        if (!rsp["Node"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Node` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_node = string(rsp["Node"].GetString());
        m_nodeHasBeenSet = true;
    }

    if (rsp.HasMember("DeadLetterStrategy") && !rsp["DeadLetterStrategy"].IsNull())
    {
        if (!rsp["DeadLetterStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterStrategy = string(rsp["DeadLetterStrategy"].GetString());
        m_deadLetterStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("QueueLeaderLocator") && !rsp["QueueLeaderLocator"].IsNull())
    {
        if (!rsp["QueueLeaderLocator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueLeaderLocator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueLeaderLocator = string(rsp["QueueLeaderLocator"].GetString());
        m_queueLeaderLocatorHasBeenSet = true;
    }

    if (rsp.HasMember("QuorumInitialGroupSize") && !rsp["QuorumInitialGroupSize"].IsNull())
    {
        if (!rsp["QuorumInitialGroupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuorumInitialGroupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quorumInitialGroupSize = rsp["QuorumInitialGroupSize"].GetInt64();
        m_quorumInitialGroupSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Exclusive") && !rsp["Exclusive"].IsNull())
    {
        if (!rsp["Exclusive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Exclusive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = rsp["Exclusive"].GetBool();
        m_exclusiveHasBeenSet = true;
    }

    if (rsp.HasMember("Policy") && !rsp["Policy"].IsNull())
    {
        if (!rsp["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(rsp["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (rsp.HasMember("Arguments") && !rsp["Arguments"].IsNull())
    {
        if (!rsp["Arguments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Arguments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arguments = string(rsp["Arguments"].GetString());
        m_argumentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRabbitMQServerlessQueueDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_consumersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consumers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumers, allocator);
    }

    if (m_durableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Durable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durable, allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageTTL, allocator);
    }

    if (m_autoExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoExpire, allocator);
    }

    if (m_maxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLength, allocator);
    }

    if (m_maxLengthBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLengthBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLengthBytes, allocator);
    }

    if (m_deliveryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryLimit, allocator);
    }

    if (m_overflowBehaviourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverflowBehaviour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overflowBehaviour.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterRoutingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterRoutingKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterRoutingKey.c_str(), allocator).Move(), allocator);
    }

    if (m_singleActiveConsumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleActiveConsumer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_singleActiveConsumer, allocator);
    }

    if (m_maximumPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumPriority, allocator);
    }

    if (m_lazyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LazyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lazyMode, allocator);
    }

    if (m_masterLocatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterLocator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterLocator.c_str(), allocator).Move(), allocator);
    }

    if (m_maxInMemoryLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInMemoryLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInMemoryLength, allocator);
    }

    if (m_maxInMemoryBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInMemoryBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInMemoryBytes, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_node.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_queueLeaderLocatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueLeaderLocator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueLeaderLocator.c_str(), allocator).Move(), allocator);
    }

    if (m_quorumInitialGroupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuorumInitialGroupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quorumInitialGroupSize, allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arguments.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQServerlessQueueDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetVirtualHost() const
{
    return m_virtualHost;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetQueueName() const
{
    return m_queueName;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetQueueType() const
{
    return m_queueType;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetConsumers() const
{
    return m_consumers;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::ConsumersHasBeenSet() const
{
    return m_consumersHasBeenSet;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::GetDurable() const
{
    return m_durable;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::GetAutoDelete() const
{
    return m_autoDelete;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMessageTTL() const
{
    return m_messageTTL;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MessageTTLHasBeenSet() const
{
    return m_messageTTLHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetAutoExpire() const
{
    return m_autoExpire;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::AutoExpireHasBeenSet() const
{
    return m_autoExpireHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMaxLength() const
{
    return m_maxLength;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MaxLengthHasBeenSet() const
{
    return m_maxLengthHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMaxLengthBytes() const
{
    return m_maxLengthBytes;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MaxLengthBytesHasBeenSet() const
{
    return m_maxLengthBytesHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetDeliveryLimit() const
{
    return m_deliveryLimit;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::DeliveryLimitHasBeenSet() const
{
    return m_deliveryLimitHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetOverflowBehaviour() const
{
    return m_overflowBehaviour;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::OverflowBehaviourHasBeenSet() const
{
    return m_overflowBehaviourHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::GetSingleActiveConsumer() const
{
    return m_singleActiveConsumer;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::SingleActiveConsumerHasBeenSet() const
{
    return m_singleActiveConsumerHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMaximumPriority() const
{
    return m_maximumPriority;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MaximumPriorityHasBeenSet() const
{
    return m_maximumPriorityHasBeenSet;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::GetLazyMode() const
{
    return m_lazyMode;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::LazyModeHasBeenSet() const
{
    return m_lazyModeHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetMasterLocator() const
{
    return m_masterLocator;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MasterLocatorHasBeenSet() const
{
    return m_masterLocatorHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMaxInMemoryLength() const
{
    return m_maxInMemoryLength;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MaxInMemoryLengthHasBeenSet() const
{
    return m_maxInMemoryLengthHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetMaxInMemoryBytes() const
{
    return m_maxInMemoryBytes;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::MaxInMemoryBytesHasBeenSet() const
{
    return m_maxInMemoryBytesHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetNode() const
{
    return m_node;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetDeadLetterStrategy() const
{
    return m_deadLetterStrategy;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::DeadLetterStrategyHasBeenSet() const
{
    return m_deadLetterStrategyHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetQueueLeaderLocator() const
{
    return m_queueLeaderLocator;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::QueueLeaderLocatorHasBeenSet() const
{
    return m_queueLeaderLocatorHasBeenSet;
}

int64_t DescribeRabbitMQServerlessQueueDetailResponse::GetQuorumInitialGroupSize() const
{
    return m_quorumInitialGroupSize;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::QuorumInitialGroupSizeHasBeenSet() const
{
    return m_quorumInitialGroupSizeHasBeenSet;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::GetExclusive() const
{
    return m_exclusive;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetPolicy() const
{
    return m_policy;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string DescribeRabbitMQServerlessQueueDetailResponse::GetArguments() const
{
    return m_arguments;
}

bool DescribeRabbitMQServerlessQueueDetailResponse::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}


