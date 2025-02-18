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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQQueueListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQQueueListInfo::RabbitMQQueueListInfo() :
    m_queueNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consumerDetailHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_messageHeapCountHasBeenSet(false),
    m_messageRateInHasBeenSet(false),
    m_messageRateOutHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_durableHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_nodeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_exclusiveHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQQueueListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConsumerDetail") && !value["ConsumerDetail"].IsNull())
    {
        if (!value["ConsumerDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.ConsumerDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consumerDetail.Deserialize(value["ConsumerDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consumerDetailHasBeenSet = true;
    }

    if (value.HasMember("QueueType") && !value["QueueType"].IsNull())
    {
        if (!value["QueueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.QueueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = string(value["QueueType"].GetString());
        m_queueTypeHasBeenSet = true;
    }

    if (value.HasMember("MessageHeapCount") && !value["MessageHeapCount"].IsNull())
    {
        if (!value["MessageHeapCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageHeapCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageHeapCount = value["MessageHeapCount"].GetInt64();
        m_messageHeapCountHasBeenSet = true;
    }

    if (value.HasMember("MessageRateIn") && !value["MessageRateIn"].IsNull())
    {
        if (!value["MessageRateIn"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageRateIn` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateIn = value["MessageRateIn"].GetDouble();
        m_messageRateInHasBeenSet = true;
    }

    if (value.HasMember("MessageRateOut") && !value["MessageRateOut"].IsNull())
    {
        if (!value["MessageRateOut"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.MessageRateOut` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_messageRateOut = value["MessageRateOut"].GetDouble();
        m_messageRateOutHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Durable") && !value["Durable"].IsNull())
    {
        if (!value["Durable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Durable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_durable = value["Durable"].GetBool();
        m_durableHasBeenSet = true;
    }

    if (value.HasMember("AutoDelete") && !value["AutoDelete"].IsNull())
    {
        if (!value["AutoDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.AutoDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDelete = value["AutoDelete"].GetBool();
        m_autoDeleteHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualHost") && !value["VirtualHost"].IsNull())
    {
        if (!value["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(value["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (value.HasMember("Node") && !value["Node"].IsNull())
    {
        if (!value["Node"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Node` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_node = string(value["Node"].GetString());
        m_nodeHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(value["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Arguments") && !value["Arguments"].IsNull())
    {
        if (!value["Arguments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Arguments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arguments = string(value["Arguments"].GetString());
        m_argumentsHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListInfo.Exclusive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetBool();
        m_exclusiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQQueueListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHeapCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageHeapCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageHeapCount, allocator);
    }

    if (m_messageRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateIn, allocator);
    }

    if (m_messageRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRateOut, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_node.c_str(), allocator).Move(), allocator);
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

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

}


string RabbitMQQueueListInfo::GetQueueName() const
{
    return m_queueName;
}

void RabbitMQQueueListInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool RabbitMQQueueListInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string RabbitMQQueueListInfo::GetRemark() const
{
    return m_remark;
}

void RabbitMQQueueListInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RabbitMQQueueListInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

RabbitMQQueueListConsumerDetailInfo RabbitMQQueueListInfo::GetConsumerDetail() const
{
    return m_consumerDetail;
}

void RabbitMQQueueListInfo::SetConsumerDetail(const RabbitMQQueueListConsumerDetailInfo& _consumerDetail)
{
    m_consumerDetail = _consumerDetail;
    m_consumerDetailHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ConsumerDetailHasBeenSet() const
{
    return m_consumerDetailHasBeenSet;
}

string RabbitMQQueueListInfo::GetQueueType() const
{
    return m_queueType;
}

void RabbitMQQueueListInfo::SetQueueType(const string& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

int64_t RabbitMQQueueListInfo::GetMessageHeapCount() const
{
    return m_messageHeapCount;
}

void RabbitMQQueueListInfo::SetMessageHeapCount(const int64_t& _messageHeapCount)
{
    m_messageHeapCount = _messageHeapCount;
    m_messageHeapCountHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageHeapCountHasBeenSet() const
{
    return m_messageHeapCountHasBeenSet;
}

double RabbitMQQueueListInfo::GetMessageRateIn() const
{
    return m_messageRateIn;
}

void RabbitMQQueueListInfo::SetMessageRateIn(const double& _messageRateIn)
{
    m_messageRateIn = _messageRateIn;
    m_messageRateInHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageRateInHasBeenSet() const
{
    return m_messageRateInHasBeenSet;
}

double RabbitMQQueueListInfo::GetMessageRateOut() const
{
    return m_messageRateOut;
}

void RabbitMQQueueListInfo::SetMessageRateOut(const double& _messageRateOut)
{
    m_messageRateOut = _messageRateOut;
    m_messageRateOutHasBeenSet = true;
}

bool RabbitMQQueueListInfo::MessageRateOutHasBeenSet() const
{
    return m_messageRateOutHasBeenSet;
}

string RabbitMQQueueListInfo::GetCreateTime() const
{
    return m_createTime;
}

void RabbitMQQueueListInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RabbitMQQueueListInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void RabbitMQQueueListInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool RabbitMQQueueListInfo::GetDurable() const
{
    return m_durable;
}

void RabbitMQQueueListInfo::SetDurable(const bool& _durable)
{
    m_durable = _durable;
    m_durableHasBeenSet = true;
}

bool RabbitMQQueueListInfo::DurableHasBeenSet() const
{
    return m_durableHasBeenSet;
}

bool RabbitMQQueueListInfo::GetAutoDelete() const
{
    return m_autoDelete;
}

void RabbitMQQueueListInfo::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool RabbitMQQueueListInfo::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string RabbitMQQueueListInfo::GetInstanceId() const
{
    return m_instanceId;
}

void RabbitMQQueueListInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RabbitMQQueueListInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RabbitMQQueueListInfo::GetVirtualHost() const
{
    return m_virtualHost;
}

void RabbitMQQueueListInfo::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool RabbitMQQueueListInfo::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string RabbitMQQueueListInfo::GetNode() const
{
    return m_node;
}

void RabbitMQQueueListInfo::SetNode(const string& _node)
{
    m_node = _node;
    m_nodeHasBeenSet = true;
}

bool RabbitMQQueueListInfo::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

string RabbitMQQueueListInfo::GetPolicy() const
{
    return m_policy;
}

void RabbitMQQueueListInfo::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool RabbitMQQueueListInfo::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string RabbitMQQueueListInfo::GetArguments() const
{
    return m_arguments;
}

void RabbitMQQueueListInfo::SetArguments(const string& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

bool RabbitMQQueueListInfo::GetExclusive() const
{
    return m_exclusive;
}

void RabbitMQQueueListInfo::SetExclusive(const bool& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool RabbitMQQueueListInfo::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

